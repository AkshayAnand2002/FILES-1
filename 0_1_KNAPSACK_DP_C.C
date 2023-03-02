https://www.youtube.com/watch?app=desktop&v=NKZMcB-3FdY&list=PL6EelbWmS3VWLWFGA1JABRmlK_WuOJC6X&index=8
#include<stdio.h>
#include<stdlib.h>
int max(int a,int b){
	return (a>b) ? a:b;
}
int knapsack(int c,int wt[],int val[],int n){//c=capacity,val=value or profit,n=no. of items
	int i,j;
	//matrix of no. of items+1 rows and capacity+1 columns.
	int k[n+1][c+1];
	for(i=0;i<=n;i++){
		for(j=0;j<=c;j++){
			if(i==0 || j==0){
				k[i][j]=0;
				//when no. of items or capacity is 0 then in table we fill 0.
			}
			else if(wt[i-1]<=j){
				//FOR WEIGHT IS LESS THAN THE CAPACITY AT THAT MOMENT
				k[i][j]=max(k[i-1][j],val[i-1]+k[i-1][j-wt[i-1]]);//by algo pseudocode
			}
			else{
				//FOR WEIGHT IS GREATER THAN CAPACITY AT ANY MOMENT.
				k[i][j]=k[i-1][j];//BY ALGO PSEUDOCODE
			}
		}
	}
	for(i=0;i<=n;i++){
		for(j=0;j<=c;j++){
			printf("%5d",k[i][j]);
		}
		printf("\n");
	}//prints dp matrix.
	return k[n][c];
}
void main(){
	int val[10],wt[10],c,n,i;
	printf("\nENTER THE NO. OF ITEMS: ");
	scanf("%d",&n);
	printf("\nENTER THE WEIGHT AND VALUE(OR PROFIT): ");//for each element enter the weight and value.
	for(i=0;i<n;i++){
		scanf("%d%d",&wt[i],&val[i]);
	}
	printf("\nENTER THE MAXIMUM CAPACITY OF KNAPSACK: ");
	scanf("%d",&c);
	printf("\nTHE MAXIMUM PROFIT FROM THE KNAPSACK : %d",knapsack(c,wt,val,n));
}
