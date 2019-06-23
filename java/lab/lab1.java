/* Program to generate Electricity bill*/
import java.util.*; //to import scanner function
class eb
{
	int cno;//consumer no
	String cname; //consumer name
	double prev; //previous month reading
	double cur; //current month reading 
	int type; //type of eb connection
	double unit;
	double bill;//bill amount
       	void cal(int type,double unit)
	{	
		
		System.out.println("type : " + type + "unit :" + unit); 
		if(type == 1)
		{
			if(unit<100)
			{
				bill=1*unit;
			}
			else if(unit>100 && unit<200)
			{
				bill=2.50*(unit-100)+1*unit;
			}
			else if(unit>201 && unit<500)
			{
				bill=4*(unit-200)+2.50*(unit-100)+1*unit;
			}
			else if(unit>501)
			{
				bill=6*(unit-500)+4*(unit-200)+2.50*(unit-100)+1*unit;	
			}
		}
		else if(type == 2)
		{
			if(unit<100)
			{
				bill=2*unit;
			}
			else if(unit>100 && unit<200)
			{
				bill=4.50*(unit-100)+2*unit;
			}
			else if(unit>201 && unit<500)
			{
				bill=6*(unit-200)+4.50*(unit-100)+2*unit;
			}
			else if(unit>501)
			{
				bill=7*(unit-500)+6*(unit-200)+4.50*(unit-100)+2*unit;	
			}
			
		}
		else
		{
			System.out.println("enter either 1 or 2");
		}
		//System.out.println("Bill amount is : " + bill);
	}	

	public void get()
	{	
	
		Scanner a = new Scanner(System.in); //to read the int and double
		Scanner b = new Scanner(System.in); //to read strings
		System.out.println("Enter consumer no:");
		cno = a.nextInt();
		System.out.println("Enter consumer name:");
		cname = b.nextLine();
		System.out.println("Enter Previous month reading:");
		prev = a.nextDouble();
		System.out.println("Enter Current month reading:");
		cur = a.nextDouble();
		System.out.println("Enter type of Connection:");
		type = b.nextInt();
		unit=cur-prev;
		cal(type,unit);
		System.out.println("Bill amount is : "+ bill);
	}
		
}

//main class
class main
{
	public static void main(String args[])
	{
		eb c = new eb();
		c.get();
	}
}	

