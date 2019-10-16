#include<stdio.h>
#include<conio.h>

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i,pass=0;
    int count=0;
    for(i=N-1;i>=0;i--)
    {
    		if(A[i]==0)
    		{
    			count=count+pass;
    			if(count>1000000000)
    			{
    			    return -1;
    			}
			}
			else
			{
				pass++;
			}

			
	}
	printf("\n\nCount is %d",count);
	//return(count);
}



int main()
{
	int a[10]={0,1,0,1,1};
	int n=5;
	int x=1000;
	printf("%d",x);
	//(0, 1), (0, 3), (0, 4), (2, 3), (2, 4)
	solution(a,n);	
}
