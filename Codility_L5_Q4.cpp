#include<stdio.h>
#include<conio.h>

int solution(int A, int B, int K)
{
	return B / K - (A / K) + (A % K == 0 ? 1 : 0);
}

int main()
{
	printf("%d",solution(2,10,2));
}
