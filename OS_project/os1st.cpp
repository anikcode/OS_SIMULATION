#include<stdio.h>
#include<conio.h>
struct Process
{
	int process;
	int burst_time;
	int arrival_time;
	int pr;
	int wt;
	int tat;
};
int main()
{
 printf("\t\t\t\t\t\t      ******  ******  ******* \n");
 printf("\t\t\t\t\t\t      *         *     *     \n");
 printf("\t\t\t\t\t\t      ******    *     ****   \n");
 printf("\t\t\t\t\t\t           *  * *     *     \n");
 printf("\t\t\t\t\t\t      ******   **     *      *\n");
 printf("\t\t\t\t\t\t ================================\n");
 printf("\t\t\t\t\t\t   ||=========================||\n");
 printf("\t\t\t\t\t\t   ||Operating System Project ||\n");
 printf("\t\t\t\t\t\t   ||Made By Aniket Sriwastva ||\n");
 printf("\t\t\t\t\t\t   ||Submitted To Richa Sharma||\n");
 printf("\t\t\t\t\t\t   ||=========================||\n");
int a,i,j;
printf("Enter no.of processers\n");
scanf("%d",&a);
struct Process value[a];
struct Process x[a];
struct Process y[a];
printf("Enter processer details\n1.Processes number\n2.Burst time\n3.Arrival time\n");
for(i=0;i<a;i++)
{
	value[i].process=i;
	printf("Process %d \n",i);
	printf("Burst time\n");
	scanf("%d",&value[i].burst_time);
	if(value[i].burst_time<0)
	{
	return 0;
    }
	printf("Arrival time\n");
	scanf("%d",&value[i].arrival_time);
	if(value[i].arrival_time<0)
	return 0;
	
}
for(i=0;i<a-1;i++)
{
	for(j=1;j<i;j++)
	{
	if(value[i].arrival_time>value[j].arrival_time)
	{
		x[i]=value[i];
		value[i]=value[j];
		value[j]=x[i];
	}
 }	
}
value[0].wt=0;
for(i=1;i<a;i++)
{
	value[i].wt=0;
for(j=0;j<=i;j++)
{
	value[i].wt+=value[j].burst_time;
	value[i].wt=value[i].wt-value[i].arrival_time;
}
}

for(i=0;i<a;i++)
{
	
	if(value[i].wt<0)
	{
		value[i].wt=0;
	}
}
for(i=0;i<a;i++)
{
	
	value[i].tat=value[i].wt+value[i].burst_time;
}
for(i=0;i<a;i++)
{
	y[i].pr=value[i].wt/value[i].burst_time;
	y[i].pr=1+y[i].pr;
	value[i].pr=y[i].pr;
}

printf("============================================================================================\n");
printf("1.Process\t2.Burst time\t3.Arrival time\t4.Priority\t5.Waiting\t6.Turnaroundtime\n");
printf("============================================================================================\n");
for(i=0;i<a;i++)
{
	printf("%d\t\t\t",value[i].process);
	printf("%d\t\t",value[i].burst_time);
	printf("%d\t\t",value[i].arrival_time);
	printf("%d\t\t",value[i].pr);
	printf("%d\t\t",value[i].wt);
	printf("%d\t\t\n",value[i].tat);
}
printf("============================================================================================");
}

