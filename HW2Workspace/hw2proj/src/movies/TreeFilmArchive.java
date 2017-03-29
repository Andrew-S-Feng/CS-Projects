package movies;
import java.util.TreeSet;
import java.util.ArrayList;

//Models a film archive that uses TreeSets to store movies
public class TreeFilmArchive extends TreeSet<Movie> implements FilmArchive {

//Returns the TreeSet as an ArrayList	
public ArrayList<Movie> getSorted()
{
	ArrayList<Movie> sorted = new ArrayList<Movie>(this);
	return sorted;
}
public static void main(String[] args)
{
TreeFilmArchive archive = new TreeFilmArchive();
for (Movie m: Movie.getTestMovies())
archive.add(m);
for (Movie m: archive)
System.out.println(m);
}

}
