#include<stdio.h>
int main()
{
	int N=1041;
	int i=0,j,Ecount=0;
    int a[50];
    int Ccount=0,Bcount=0;
    int temp = N;
    while(temp>0)
    {
    	Ecount++;
        a[i] = temp%2;
        temp = temp/2;
        i++;
    }
    //printf("Value of count is %d",Ecount);
    //printf("\n\n\n\n");
    //for(i=0;i<Ecount;i++)
    //{
    //	printf("\n%d",a[i]);
	//}
	//N is 20, count is 5, A = [0,0,1,0,1]
	for(i=0;i<Ecount;i++)
	{
		//printf("\nele is %d",a[i]);
		if(a[i]==1)
		{
			//printf("\ni is %d and Ccount is %d",i,Ccount);
			if(a[(i-Ccount)-1]==1)
			{
				if(Bcount<Ccount+1)
				{
					//printf("Bcount is %d",Bcount);
					Bcount = Ccount;
				}
			}
			Ccount = 0;
		}
		else
		{
			Ccount += 1;
			//printf("\nCount : %d",Ccount);
		}
	}
	printf("\n\n\n%d",Bcount);
}
