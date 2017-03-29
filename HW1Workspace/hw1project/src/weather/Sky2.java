package weather;
import java.util.ArrayList;

//Models a sky with many clouds
public class Sky2 extends ArrayList<Cloud> {
	
//Creates a sky with up to 100 clouds
public Sky2()
{
	super(100);
}

//Returns the average height of all the clouds in the arraylist
public float getMeanHeight()
{
	int s = this.size();
	float total = 0;
	for (int i=0; i<s; i++)
	{
		total = this.get(i).getHeight() + total;
	}
	return total / s;
}

/* Adds a cloud to the arraylist
 * Returns true
 */
public boolean add(Cloud c)
{
	return true;
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
Sky2 sky = new Sky2();
sky.add(strat);
sky.add(cumu);
sky.add(cirr);
float mean = sky.getMeanHeight();
if (mean < 1799 || mean > 1801)
System.out.println("Bad mean height: expected 1800, saw " + mean);
System.out.println("Everything (else) is ok");
}

}
