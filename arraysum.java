import java.util.*;
class arraysum
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		int i,j,flag=0;
		int arr[] = new int[num];
		for(i=0;i<num;i++)
		{
			arr[i] = sc.nextInt();
		}
		int value = sc.nextInt();
		for(i=0;i<num;i++)
		{
			for(j=0;j<num;j++)
			{
				if(arr[i]+arr[j]==value)
				{
					flag=1;
				}
			}
		}
		if(flag==1)
		{
			System.out.println("True");
		}
		else
		{
			System.out.println("False");
		}
	}
}
					
			