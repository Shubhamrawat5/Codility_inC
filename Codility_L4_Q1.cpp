#include<stdio.h>
int solution(int A[], int N)
{
	int B[N],i;

	for(i=0;i<N;i++)
	{
		if(A[i]<=N)
		{
		
		B[A[i]-1]=A[i];
		}
	}	
	
	//for(i=0;i<N;i++)
	//{
	//	printf("%d ",B[i]);
	//}
	
	for(i=N-1;i>=0;i--)
	{
		//printf("\n%d %d ",i,B[i]);
		if(B[i]!=i+1)
		{
		//	printf("\nRE %d %d\n",i+1,B[i]);
			return(0);
		}
	}
	return(1);
}

int main()
{
	int A[20]={6};
	int N = 1,z;
	z=solution(A,N);
	printf("%d",z);
}
