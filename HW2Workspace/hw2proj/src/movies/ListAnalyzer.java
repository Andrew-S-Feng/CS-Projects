package movies;

//Testing class for ListFilmArchive to test compile time
public class ListAnalyzer {
	
public static void main(String[] args)
{
	ListFilmArchive listArchive = new ListFilmArchive();
	for (int i=0; i<100000; i++)
	{
		listArchive.add(new Movie("Movie" + i, 2016));
		if (i%1000 == 0)
		System.out.println(i);
	}
}
}