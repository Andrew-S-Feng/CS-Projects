package weather;
import java.util.ArrayList;

//Models a sky with many clouds
public class Sky {

private ArrayList<Cloud> clouds;

//Creates a sky with up to 100 clouds
public Sky()
{
	clouds = new ArrayList<Cloud>(100);
}

/* Adds a cloud to the arraylist
 * Returns true
 */
public boolean add(Cloud c)
{
	clouds.add(c);
	return true;
}

//Returns the average height of all the clouds in the arraylist
public float getMeanHeight()
{
	int s = clouds.size();
	float total = 0;
	for (int i=0; i<s; i++)
	{
		total = clouds.get(i).getHeight() + total;
	}
	return total / s;
}

public static void main(String[] args)
{
StratusCloud strat = new StratusCloud(100, 1000);
if (!strat.rain().startsWith("It is raining"))
System.out.println("Bad StratusCloud::rain");
CumulusCloud cumu = new CumulusCloud(200, 2000);
if (!cumu.rain().startsWith("It is raining"))
System.out.println("Bad CumulusCloud::rain");
CirrusCloud cirr = new CirrusCloud(300, 3000);
if (!cirr.rain().startsWith("I cannot make"))
System.out.println("Bad CirrusCloud::rain");
Sky sky = new Sky();
sky.add(strat);
sky.add(cumu);
sky.add(cirr);
float mean = sky.getMeanHeight();
if (mean < 1799 || mean > 1801)
System.out.println("Bad mean height: expected 1800, saw " + mean);
System.out.println("Everything (else) is ok");
}

}
