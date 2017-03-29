package sudoku;

import java.util.*;


public class Grid 
{
	private int[][]						values;
	

	//
	// DON'T CHANGE THIS.
	//
	// See TestGridSupplier for examples of input.
	// Dots in input strings become 0s in values[][].
	//
	public Grid(String[] rows)
	{
		values = new int[9][9];
		for (int j=0; j<9; j++)
		{
			String row = rows[j];
			char[] charray = row.toCharArray();
			for (int i=0; i<9; i++)
			{
				char ch = charray[i];
				if (ch != '.')
					values[j][i] = ch - '0';
			}
		}
	}
	
	public Grid(int[][] g){
		values = new int[9][9];
		for(int r=0; r<9; r++)
			for(int c=0; c<9; c++)
				values[r][c] = g[r][c];
	}
	
	//
	// DON'T CHANGE THIS.
	//
	public String toString()
	{
		String s = "";
		for (int j=0; j<9; j++)
		{
			for (int i=0; i<9; i++)
			{
				int n = values[j][i];
				if (n == 0)
					s += '.';
				else
					s += (char)('0' + n);
			}
			s += "\n";
		}
		return s;
	}
	
	
	//
	// COMPLETE THIS
	//
	//
	// Finds an empty member of values[][]. Returns an array list of 9 grids that look like the current grid,
	// except the empty member contains 1, 2, 3 .... 9. Returns null if the current grid is full.
	//
	// Example: if this grid = 1........
	//                         .........
	//                         .........
	//                         .........
	//                         .........
	//                         .........
	//                         .........
	//                         .........
	//                         .........
	//
	// Then the returned array list would contain:
	//
	// 11.......          12.......          13.......          14.......    and so on     19.......
	// .........          .........          .........          .........                  .........
	// .........          .........          .........          .........                  .........
	// .........          .........          .........          .........                  .........
	// .........          .........          .........          .........                  .........
	// .........          .........          .........          .........                  .........
	// .........          .........          .........          .........                  .........
	// .........          .........          .........          .........                  .........
	// .........          .........          .........          .........                  .........
	//
	public ArrayList<Grid> next9Grids()
	{		
		if(this.isFull())
			return null;
		ArrayList<Grid> next9 = new ArrayList<Grid>();
		for(int a = 0; a < values.length; a++){
				for(int b=0; b<values[0].length; b++)
				if(values[a][b] == 0) {
					for(int x = 1; x <= values.length; x++) {
					Grid next = new Grid(this.values);
					next.values[a][b] = x;
					next9.add(next);
					}	
					return next9;
				}
		}
		return next9;
		
	}
	
	/* Checks if there are any non zero repeats in the arraylist
	 * Returns true if there are, false if there isn't
	 */
	private boolean containsNonZeroRepeats(ArrayList<Integer> ints) {
		for (int i=0; i<ints.size(); i++){
			int testRepeat = ints.get(i);
			if (testRepeat !=0)
				if(ints.indexOf(testRepeat) != ints.lastIndexOf(testRepeat))
					return true;
		}
		return false;
	}
	
	//
	// COMPLETE THIS
	//
	// Returns true if this grid is legal. A grid is legal if no row, column, or zone contains
	// a repeated 1, 2, 3, 4, 5, 6, 7, 8, or 9.
	//
	public boolean isLegal()
	{
		// Checks if the rows in the grid are legal
		for(int r=0; r<values.length; r++) {
			ArrayList<Integer> row = new ArrayList<Integer>();
			for(int c=0; c<values[0].length; c++)
				row.add(values[r][c]);
			if(containsNonZeroRepeats(row))
				return false;
		}
		
		// Checks if the columns in the grid are legal
		for(int c=0; c<values[0].length; c++) {
			ArrayList<Integer> col = new ArrayList<Integer>();
			for(int r=0; r<values.length; r++)
				col.add(values[r][c]);
			if(containsNonZeroRepeats(col))
				return false;
		}
		
		// Checks if each zone is legal
		for(int z=1; z<4; z++) {
			ArrayList<Integer> zone1 = new ArrayList<Integer>();
			ArrayList<Integer> zone2 = new ArrayList<Integer>();
			ArrayList<Integer> zone3 = new ArrayList<Integer>();
			for(int r=3*z-3; r<3*z; r++) {
				for(int c=0; c<3; c++)
					zone1.add(values[r][c]);
				for(int c=3; c<6; c++)
					zone2.add(values[r][c]);
				for(int c=6; c<9; c++)
					zone3.add(values[r][c]);
			}
			if(containsNonZeroRepeats(zone1) || containsNonZeroRepeats(zone2) || containsNonZeroRepeats(zone3))
				return false;
		}
		return true;
	}
	
	//
	// COMPLETE THIS
	//
	// Returns true if every cell member of values[][] is a digit from 1-9.
	//
	public boolean isFull()
	{
		for(int a=0; a<values.length; a++)
			for(int b=0; b<values[0].length; b++)
				if(values[a][b] == 0)
					return false;
		return true;
	}
	
	//
	// COMPLETE THIS
	//
	// Returns true if x is a Grid and, for every (i,j), 
	// x.values[i][j] == this.values[i][j].
	//
	@Override
	public boolean equals(Object x)
	{
		Grid that = (Grid)x;
		for(int r=0; r<values.length; r++)
			for(int c=0; c<values[0].length; c++)
				if(values[r][c] != that.values[r][c])
					return false;
		return true;
	}
	
	static void sop(Object x)  {
		System.out.println(x);
	}
	
	public static void main(String[] agrs) {
		Grid test = TestGridSupplier.getPuzzle1();
		Grid one = test.next9Grids().get(0);
		sop(one);
		ArrayList<Grid> oneone = one.next9Grids();
		sop(oneone);
	}
}