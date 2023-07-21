import java.util.*;
public class try3 
{
	public static void main()
	{
	       int n,i,j,temp,k;
	        Scanner sc=new Scanner(System.in);
	        System.out.print("Enter the size of the array: ");
	        n=sc.nextInt();
	        int[] arr=new int[n];
	        System.out.println("Enter the elements of the array:");
	        for(i=0;i<n;i++) 
			{
	            arr[i]=sc.nextInt();
	        }
	        int max=n-1;
	        int min=0;
	        int max1=arr[max]+1;
	        for(i=0;i<n;i++) 
			{
	            if(i%2==0) 
				{
	                arr[i]+=(arr[max]%max1)*max1;
	                max--;
	            } 
				else 
				{
	                arr[i]+=(arr[min]%max1)*max1;
	                min++;
	            }
	        }
	        for (i=0;i<n;i++) 
			{
	            arr[i]/=max1;
	        }
	        System.out.println("Modified array:");
	        for (i=0;i<n;i++) 
			{
	            System.out.print(arr[i]+" ");
	        }
	        sc.close();
	    }
}