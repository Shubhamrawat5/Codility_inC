#include<stdio.h>
int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    //printf("Hello");
    int lower=A[0],upper=0;
    int Cdif,Ldif,i;
    for(i=1;i<N;i++)
    {
    	upper += A[i];
	}
	Ldif=lower-upper;
	if(Ldif<0)
	{
		Ldif *= -1;
	}
	Cdif=Ldif;
	printf("%d\n",Ldif);
	for(i=1;i<N;i++)
	{
		lower += A[i];
		upper -= A[i];
		Cdif=lower-upper;
		if(Cdif<0)
		{
			Cdif *= -1;
		}
		if(Ldif>Cdif)
		{
			Ldif=Cdif;
		}
	}
	printf("%d",Ldif);
    
}


int main()
{
	int A[50];
	//A[0] = 3;
    //A[1] = 1;
    //A[2] = 2;
    //A[3] = 4;
    //A[4] = 3;
    int n=2;
    A[0]=-1000;
    A[1]=1000;
    solution(A,n);
}

