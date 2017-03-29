package movies;
import java.util.ArrayList;

//An interface FilmArchive that contains getSorted() and add() methods
public interface FilmArchive {
	
	ArrayList<Movie> getSorted();
	
	boolean add(Movie x);

}
