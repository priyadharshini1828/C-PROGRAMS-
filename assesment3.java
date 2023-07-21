import java.util.*;
class assesment3
{
	public static void main(String[] args)
	{
		int digit1,digit2,carry =1,sum;
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		Scanner obj = new Scanner(System.in);
		int B = sc.nextInt();
		while(A!=0&&B!=0)
		{
			digit1 = A%10;
			digit2 = B%10;
			sum= digit1+digit2;
			if(sum>=10)
			{
				carry++;
			}
			else
			{
				carry =0;
			}
		}
		System.out.println(carry);
	}
}
