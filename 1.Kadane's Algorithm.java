package KadaneAlgo; //Largest Sum Contiguous Subarray

import java.util.Scanner;

public class Main {
	
	static int max_contiguous_sum(int a[],int n)
	{
		int max = Integer.MIN_VALUE , maxi = 0;
		for(int i=0;i<n;i++)
		{
			maxi=maxi+a[i];
			if(max<maxi)
				max=maxi;
			if(maxi<0)
				maxi=0;
		}
		return max;
	}
	public static void main(String[] args)
	{
		Scanner k = new Scanner(System.in);
		int n = k.nextInt();
		int[] a = new int[n];
		for(int i=0;i<n;i++)
			a[i] = k.nextInt();
		
		System.out.println(max_contiguous_sum(a,n));
		k.close();
	}
}
