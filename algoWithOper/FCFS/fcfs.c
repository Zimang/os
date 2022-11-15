#include<stdio.h>
#include<stdlib.h>
void CalculateWaitingTime(int at[],
			  int bt[],int N)
{
	int wt[N];
	wt[0]=0;
	printf("PN\t\tAT\t\tBT\t\tWT\n\n");
	printf("1\t\t%d\t\t%d\t\t%d\n\n",at[0],bt[0],wt[0]);

	for(int i=1;i<5;i++){
		wt[i]=(at[i-1]+bt[i-1]+wt[i-1])-at[i];	
		printf("1\t\t%d\t\t%d\t\t%d\n\n",at[i],bt[i],wt[i]);
	}
	
	float average;
	float sum=0;
	for(int i=0;i<5;i++){
		sum+=wt[i];
	}
	average=sum/5;
	printf("\nAverage waiting time =",average);
	
}
void main(){
	int N=5;
	int i=0;
	int* at=(int*)malloc(5*sizeof(int)); 
	for(i;i<N;i++){
		at[i]=i;
	}
	int* bt=(int*)malloc(5*sizeof(int)); 
	bt[0]=4;
	bt[1]=3;
	bt[2]=1;
	bt[3]=2;
	bt[4]=5;
	CalculateWaitingTime(at,bt,N);
	return 0;
}	


