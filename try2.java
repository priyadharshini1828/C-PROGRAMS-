package test;
import java.util.*;
class leader
{
	void display()
	{
		Scanner sc = new Scanner(System.in);
		int Num = sc.nextInt();
		int j;
		int[] A = new int[Num];
		for(int i=0;i<Num;i++)
		{
			A[i]=sc.nextInt();
		}
		for(int i=0;i<Num;i++)
		{
			for(j=0;j<Num;j++)
			{
				if(A[j]>A[i])
				{
					System.out.println(A[j]);
				}
			}
		}
		System.out.println(A[Num-1]);
	}
}
public class try2 
{
	public static void main(String[] args)
	{
		leader sc = new leader();
		sc.display();
	}
}
