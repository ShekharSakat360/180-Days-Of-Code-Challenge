import java.util.Scanner;

public  class Leap 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Year :");
        int year = sc.nextInt();
        sc.close();

        if(year % 4==0 && year % 100!=0)
        {
            System.out.println(year + " is a Leap Year");
        }
        else if (year % 400==0)
        {
            System.out.println(year + "is a Leap Year");
        }
        else
        {
            System.out.println(year + "is  Not a Leap Year");
        }
    }
    
}
