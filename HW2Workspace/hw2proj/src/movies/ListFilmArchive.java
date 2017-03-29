package movies;
import java.util.ArrayList;
import java.util.TreeSet;

//Models a film archive that uses ArrayLists to store Movies
public class ListFilmArchive extends ArrayList<Movie> implements FilmArchive {

/*Returns false if the Movie x already exists in the ArrayList
 * Adds the movie and returns true if the Movie x doesn't exist in the ArrayList
 */
@Override
public boolean add(Movie x)
{
	if (this.contains(x))
	{
		return false;
	}
	else
	{
		super.add(x);
		return true;
	}
}

//Sorts the ArrayList using a TreeSet and returns an ArrayList
public ArrayList<Movie> getSorted()
{
	TreeSet<Movie> sorter = new TreeSet<Movie>(this);
	ArrayList<Movie> sorted = new ArrayList<Movie>(sorter);
	return sorted;
}

public static void main(String[] args)
{
ListFilmArchive archive = new ListFilmArchive();
for (Movie m: Movie.getTestMovies())
archive.add(m);
for (Movie m: archive)
System.out.println(m);
}
}
