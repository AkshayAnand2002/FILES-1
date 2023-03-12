#include<stdio.h>
int main(){
	int pid[15];
	int bt[15];
	int n,i;
	printf("ENTER NO. OF PROCESSES: ");
	scanf("%d",&n);
	printf("ENTER PROCESS ID: ");
	for(i=0;i<n;i++){
		scanf("%d",&pid[i]);
	}
	printf("ENTER BT OF PROCESSES: ");
	for(i=0;i<n;i++){
		scanf("%d",&bt[i]);
	}
	int wt[n],ct[n];
	wt[0]=0;
	ct[0]=0;
	for(i=1;i<n;i++){
		wt[i]=bt[i-1]+wt[i-1];
		ct[i]=bt[i-1]+wt[i-1];
	}
	printf("PROCESS ID  BT  WT  TAT CT\n");
	float twt=0.0;
	float tat=0.0;
	float  tct=0.0;
	for(i=0;i<n;i++){
		printf("%d\t\t",pid[i]);
		printf("%d\t\t",bt[i]);
		printf("%d\t\t",wt[i]);
		printf("%d\t\t",bt[i]+wt[i]);
		printf("%d\t\t",bt[i]+wt[i]);
		printf("\n");
		twt+=wt[i];
		tat+=(wt[i]+bt[i]);
		tct+=(wt[i]+bt[i]);
	}
	float att,awt,act;
	awt=twt/n;
	att=tat/n;
	act=tct/n;
	printf("AWT:%f\n",awt);
	printf("AVG WT:%f\n",att);
	printf("AVG CT:%f\n",act);
}
