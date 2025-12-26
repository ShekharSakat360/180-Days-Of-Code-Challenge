import java.util.Scanner;

public class sum 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter A Number :");
        int n = sc.nextInt();
        sc.close();

        if(n < 0)
        {
            System.out.println("Invalid Input");
            return;
        }
        System.out.println(n * (n+1) / 2);

    }
    
}
