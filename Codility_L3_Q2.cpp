#include<stdio.h>

int solution(int A[], int N)
{
	int i,B[N+1];
	for(i=0;i<N+1;i++)
	{
		B[i]=0;
	}
	for(i=0;i<N;i++)
	{
		B[A[i]-1]=A[i];
		printf("%d ",B[A[i-1]]);
	}
	for(i=0;i<N+1;i++)
	{
		printf("\n%d ",B[i]);
	}
	for(i=0;i<N+1;i++)
	{
		if(B[i]==0)
		{
			return(i+1);
		}
	}
}


int main()
{
	int A[10]={2,1,3,4,7,6};
	int N=6,m;
	m=solution(A,N);
	printf("\nMissing value is %d",m);
}
