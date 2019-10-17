#include<stdio.h>
#include<conio.h>

int solution(int A[], int N) {
    float min_sum = 1000;
    float temp;
    int start_pos = 0;
    int i;
    
    for(i = 0; i < N-2; i++) {
        temp = (A[i] + A[i+1]) / 2.0;
        if(temp < min_sum) {
            min_sum = temp;  
            start_pos = i;
        }
        
        temp = (A[i] + A[i+1] + A[i+2]) / 3.0;
        if(temp < min_sum) {
            min_sum = temp; 
            start_pos = i;
        }
    }
    
    temp = (A[N-2] + A[N-1]) / 2.0;
    if(temp < min_sum) {
        min_sum = temp;   
        start_pos = N-2;
    }   
    
    printf("%d",start_pos);
}

int main()
{
	int A[10]={4,2,2,5,1,5,8};
	int n=7;
	solution(A,n);
}
