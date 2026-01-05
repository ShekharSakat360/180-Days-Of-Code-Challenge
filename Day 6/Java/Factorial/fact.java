import java.util.Scanner;

public class fact 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();

        int f = 1;
        for(int i = n; i >= 1; i--)
        {
            f = f * i;
        }

        System.out.println(f);
    }
}
