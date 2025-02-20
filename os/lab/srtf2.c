#include<stdio.h>
int main(){
	int i,n,at[10],bt[10],ct[10],wt[10],tat[10],temp[10],p[10],smallest,count=0,time;
	double avg_wt=0,avg_tt=0,end=0;
	printf("Enter the no of process:");
	scanf("%d",&n);
	printf("Enter the AT and BT of process\n");
	for(int i=0;i<n;i++)
	{
		printf("P%d:",i+1);
		scanf("%d%d",&at[i],&bt[i]);
		temp[i]=bt[i];
	}
	for(time=0;count!=n;time++)
	{
	 	smallest=9;
	 	for(int i=0;i<n;i++)
	 		if(at[i]<=time&&bt[i]<bt[smallest]&&bt[i]>0)
	 		smallest=i;
	 	if(smallest!=9){
	 	 bt[smallest]--;
	 	if(bt[smallest]==0)
	 	{
	 		count++;
	 		end=time+1;
	 		ct[smallest]=end;
	 		wt[smallest]=end-at[smallest]-temp[smallest];
	 		tat[smallest]=end-at[smallest];
	 		avg_tt+=tat[smallest];
	 		avg_wt+=wt[smallest];
	 		}
	 	}
	 }
	 printf("\n------------------------------------------------");
	 printf("\n Prcs\tAT\tBT\tCT\tTAT\tWT\n");
	 printf("------------------------------------------------\n");
	 for(int i=0;i<n;i++)
	 	printf("P%d\t%d\t%d\t%d\t%d\t%d\n",i+1,at[i],temp[i],ct[i],tat[i],wt[i]);
	 printf("---------------------------------------------------");
	 printf("\n Average tt is : %f\n",avg_tt/n);
	 printf("Average wt is : %f\n",avg_wt/n);
	 }
	 
		
