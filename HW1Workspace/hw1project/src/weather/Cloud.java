package weather;

//Models a cloud with height and rain
public class Cloud {
	
private float top;
private float bottom;

//Creates a cloud with a top and bottom
public Cloud(float bottom, float top)
{
	this.top = top;
	this.bottom = bottom;
}

//Returns height of cloud.
public float getHeight()
{
	return top - bottom;
}

//Returns string "It is raining"
public String rain()
{
	return "It is raining";
}
}
