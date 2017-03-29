package movies;
import java.util.HashSet;
import java.util.ArrayList;
import java.util.TreeSet;

//Models a film archive that uses HashSets to store Movies
public class HashFilmArchive extends HashSet<Movie> implements FilmArchive {

//Sorts the HashSet using a TreeSet, then returns it as an ArrayList
public ArrayList<Movie> getSorted()
{
	TreeSet<Movie> sorter = new TreeSet<Movie>(this);
	ArrayList<Movie> sorted = new ArrayList<Movie>(sorter);
	return sorted;
}

public static void main(String[] args)
{
HashFilmArchive archive = new HashFilmArchive();
for (Movie m: Movie.getTestMovies())
archive.add(m);
for (Movie m: archive)
System.out.println(m);
 }
	
}
