package guvi;
import java.util.Scanner;
public class dectobin {
public static void main(String args[]){
int n;
System.out.println("Enter the value of n");
Scanner din = new Scanner(System.in);
n=din.nextInt();
int a[]=new int[n];
for(i=0;i<n;i++)
{
System.out.println("Binary representation of n: ");
System.out.println(Integer.toBinaryString(n));
}
}
}
