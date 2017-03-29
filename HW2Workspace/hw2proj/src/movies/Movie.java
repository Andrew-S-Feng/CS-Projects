package movies;

//Models a Movie which has a title and year that can be compared with other Movie objects
public class Movie implements Comparable<Movie> {
	
private String title;
private int year;

//Constructs a Movie with a String title and an int year
public Movie(String title, int year)
{
	this.title = title;
	this.year = year;
}

/*Compares two movies based on title and year and returns a positive (if cmpd is less), 
 * negative (if cmpd is greater), or zero (if they are equal)
 */
public int compareTo(Movie cmpd)
{
	Integer yr = year;
	if (this.title.compareTo(cmpd.title) != 0)
	{
		return this.title.compareTo(cmpd.title);
	}
	else
	{
		return yr.compareTo(cmpd.year);
	}
}

//Compares two movies, if they are equal, then it returns true, otherwise, returns false
@Override
public boolean equals(Object o)
{
	Movie movie = (Movie)o;
	if (this.title.equals(movie.title) && this.year == movie.year)
	{
		return true;
	}
	return false;
}

//Returns the title and year of the movie as a String
@Override
public String toString()
{
	return "Movie " + title + " (" + year + ")";
}

//Returns an array containing 10 Movie objects
public static Movie[] getTestMovies()
{
	Movie[] tstmovies = new Movie[10];
	tstmovies[0] = new Movie("The Thomas Crown Affair", 1968);
	tstmovies[1] = new Movie("The Thomas Crown Affair",	1999);
	tstmovies[2] = new Movie("The Martian", 2015);
	tstmovies[3] = new Movie("Bridge of Spies", 2015);
	tstmovies[4] = new Movie("The Goonies", 1985);
	tstmovies[5] = new Movie("The Goonies", 1985);
	tstmovies[6] = new Movie("Big Hero 6", 2014);
	tstmovies[7] = new Movie("The Revenant", 2016);
	tstmovies[8] = new Movie("Space Jam", 1996);
	tstmovies[9] = new Movie("Digimon: The Movie", 2000);
	return tstmovies;
}

//Return the title of the movie as a hashCode followed by the year
@Override
public int hashCode()
{
	return title.hashCode() + year;
}

}
