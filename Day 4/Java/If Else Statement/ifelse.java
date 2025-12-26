import java.io.*;
import java.util.*;


public class ifelse
{ 
    public static void main(String[] args)throws IOException 
    { 
       
       Scanner sc = new Scanner(System.in);
       
       System.out.println("Please Enter a Number : ");
       
       int n= sc.nextInt();
       sc.close();
       
       if(n%2==0)
       {
           System.out.println(n + " is Even");
       }
       else
       {
           System.out.println(n + " is Odd");
       }
       
    } 
} 

