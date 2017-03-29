package sudoku;

import java.util.*;


public class Solver 
{
	private Grid						problem;
	private ArrayList<Grid>				solutions;
	
	
	public Solver(Grid problem)
	{
		this.problem = problem;
	}
	
	
	public void solve()
	{
		solutions = new ArrayList<>();
		solveRecurse(problem);
	}
	
		
	// 
	// FINISH THIS.
	//
	// Standard backtracking recursive solver.
	//
	private void solveRecurse(Grid grid)
	{		
		Evaluation eval = evaluate(grid);
		
		if (eval == Evaluation.ABANDON)
		{
			return;
		}
		else if (eval == Evaluation.ACCEPT)
		{
			solutions.add(grid);
		}
		else
		{
			// Here if eval == Evaluation.CONTINUE.
			ArrayList<Grid> nextGrids = grid.next9Grids();
			for(Grid nextGrid: nextGrids) {
				solveRecurse(nextGrid);
			}
		}
	}
	
	//
	// COMPLETE THIS
	//
	// Returns Evaluation.ABANDON if the grid is illegal. 
	// Returns ACCEPT if the grid is legal and complete.
	// Returns CONTINUE if the grid is legal and incomplete.
	//
	public Evaluation evaluate(Grid grid)
	{
		if(!grid.isLegal())
			return Evaluation.ABANDON;
		else if(grid.isLegal() && grid.isFull())
			return Evaluation.ACCEPT;
		else
			return Evaluation.CONTINUE;

	}

	
	public ArrayList<Grid> getSolutions()
	{
		return solutions;
	}
	
	static void sop(Object x)  {
		System.out.println(x);
	}
	
	public static void main(String[] args)
	{
		Grid g = TestGridSupplier.getPuzzle3();		// or any other puzzle
		Solver solver = new Solver(g);
		solver.solve();
		sop(solver.solutions.toString().equals(TestGridSupplier.getSolution3()));
		System.out.println(solver.solutions.get(0).equals(TestGridSupplier.getSolution3()));
		sop(TestGridSupplier.getSolution3());
		// Print out your solution, or test if it equals() the solution in TestGridSupplier.
	}
}
