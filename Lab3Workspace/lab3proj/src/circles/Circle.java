package circles;
import java.util.TreeSet;

public class Circle implements Comparable<Circle> {

private int xCenter;
private int yCenter;
private int radius;

public Circle(int xCenter, int yCenter, int radius)
{
	this.xCenter = xCenter;
	this.yCenter = yCenter;
	this.radius = radius;
}

public boolean equals(Object x)
{
	Circle that = (Circle)x;
	if (this.xCenter != that.xCenter)
	{
		return false;
	}
	else if(this.yCenter != that.yCenter)
	{
		return false;
	}
	else if(this.radius != that.radius)
	{
		return false;
	}
	return true;
}

public int compareTo(Circle cmpd)
{
	if (this.radius < cmpd.radius)
	{
		return -10;
	}
	else if (this.radius > cmpd.radius)
	{
		return 10;
	}
	else
	{
		if (this.xCenter < cmpd.xCenter)
		{
			return -10;
		}
		else if (this.xCenter > cmpd.xCenter)
		{
			return 10;
		}
		if (this.yCenter < cmpd.yCenter)
		{
			return -10;
		}
		else if (this.yCenter > cmpd.yCenter)
		{
			return 10;
		}
		return 0;
	}
}

public String toString()
{
	return "Circle, " + "xCenter: " + this.xCenter + ", yCenter: " + this.yCenter + ", radius: " + this.radius;
}

public static void main(String[] agrs)
{
Circle c1 = new Circle(3, 4, 5);
Circle c2 = new Circle(3, 4, 5);
Circle c3 = new Circle(1000, 1000, 5);
Circle c4 = new Circle(5000000, 5000000, 4);
TreeSet<Circle> set = new TreeSet<Circle>();
set.add(c1);
set.add(c2);
set.add(c3);
set.add(c4);
for (Circle circle: set)
System.out.println(circle);
}
}
