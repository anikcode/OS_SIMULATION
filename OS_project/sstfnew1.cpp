#include<stdio.h>
#include<conio.h>
struct sstf
{
    int num;
    int flag;
};
int main()
{
 struct sstf d[20];
 int disk_queue;
 int arr[20],a[20];
 printf("\t\t\t\t\t\t******  ******  *******  ******\n");
 printf("\t\t\t\t\t\t*       *          *     *\n");
 printf("\t\t\t\t\t\t******  ******     *     ****\n");
 printf("\t\t\t\t\t\t     *       *     *     *\n");
 printf("\t\t\t\t\t\t******  ******     *     *      *\n");
 printf("\t\t\t\t\t\t==================================\n");
 printf("\t\t\t\t\t\t   ||=========================||\n");
 printf("\t\t\t\t\t\t   ||Operating System Project ||\n");
 printf("\t\t\t\t\t\t   ||Made By Aniket Sriwastva ||\n");
 printf("\t\t\t\t\t\t   ||Submitted To Richa Sharma||\n");
 printf("\t\t\t\t\t\t   ||=========================||\n");
 int i,j,sum=0,n,min,location,x,y;
 printf("Enter size of the queue :-> ");
 scanf("%d",&n);
 printf("Enter Position of head :-> ");
 scanf("%d",&disk_queue);
 printf("Enter elements of disk queue\n : ");
 for(i=0;i<n;i++)
 {
 scanf("%d",&d[i].num);   
 d[i]. flag=0;
 }
 for(i=0;i<n;i++)
 {                 
  x=0; min=0;location=0;
  for(j=0;j<n;j++)
  {
   if(d[j].flag==0)
   {
   if(x==0)
   {
   arr[j]=disk_queue-d[j].num;
   if(arr[j]<0){ arr[j]=d[j].num-disk_queue;}
   min=arr[j];location=j;x++; }
   else
   {
   arr[j]=disk_queue-d[j].num;
   if(arr[j]<0){ arr[j]=d[j].num-disk_queue;}
    }
    if(min>arr[j]){ min=arr[j]; location=j;}
   }
  }

     d[location].flag=1;
     a[i]=d[location].num-disk_queue;
     if(a[i]<0)
	 {
	 a[i]=disk_queue-d[location].num;
	 }
 
     disk_queue=d[location].num;
 }
    for(i=0;i<n;i++)
 {
 sum=sum+a[i];      
 }
 printf("\nDistance moved by total cylinders :%d",sum);
 getch();
 return 0;
}
