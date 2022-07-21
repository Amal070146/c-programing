#include<stdio.h>
struct fcfs {
int bt;
int at;
int c;
int ct;
int wt;
}a[10];
void main() {
int n,i,k=0,tt=0;
double sum=0;
double avt=0;
printf("Enter the no. of the process: ");
scanf("%d",&n);
printf("Enter Process, Arrival time, Burst time: ");
for(i=0;i<n;i++)
scanf("%d %d %d",&a[i].c,&a[i].at,&a[i].bt);
for(i=0;i<n;i++)
printf("%d %d %d \n",a[i].c,a[i].at,a[i].bt);
for(i=0;i<n;i++) {
k=k+a[i].bt;
a[i].ct=k;
}
for(i=0;i<n;i++){
tt=0;
tt=a[i].ct-a[i].at;
printf("The Turn Around Time of %d is %d\n",a[i].c,tt);
sum=sum+tt;
a[i].wt=tt-a[i].bt;
}
avt=sum/n;
printf("Average Turn Around time is %lf\n",avt);
sum=0;
for(i=0;i<n;i++){
printf("Waiting time of %d is %d\n",a[i].c,a[i].wt);
sum=sum+a[i].wt;
}
avt=sum/n;
printf("Average Waiting time is %lf\n",avt);
}


***********************

#include<stdio.h>
struct fcfs {
int at;
int bt;
int c;
}a[10];
void swapbt(int l,int m,int j) {
a[j+1].bt=l;
a[j].bt=m;
}
void swap(int l,int m,int j){
a[j+1].c=l;
a[j].c=m;
}
int main() {
int i,n,j;
printf("Enter the no. of process:");
scanf("%d",&n);
printf("Enter process, AT and BT:\n");
for(i=0;i<n;i++)
scanf("%d %d %d",&a[i].c,&a[i].at,&a[i].bt);
for(i=0;i<n;i++){
for(j=0;j<n-1-i;j++){
if(a[j].bt>a[j+1].bt){
swapbt(a[j].bt,a[j+1].bt,j);
swap(a[j].c,a[j+1].c,j);
}
}
}
for (i=0;i<n;i++)
printf("%d %d %d\n",a[i].c,a[i].at,a[i].bt);
}

************************************

#include<stdio.h>
struct names
{
 int at;
 int bt;
 int v;
 int c;
}a[10];
int main()
{
int i,n,t,count=0,s,r,pri=0,m,j;
printf("Enter No of process:");
scanf("%d",&n);
printf("Enter the Time:");
scanf("%d",&t);
printf("Enter Process AT and BT:\n");
for(i=0;i<n;i++)
scanf("%d %d %d",&a[i].c,&a[i].at,&a[i].bt);
printf("Result......\n");
while(count!=n)
{
 for(i=0;i<n;i++)
 {
 if(a[i].v==0)
 {
 if(a[i].bt<=t)
 {
 a[i].v=1;
 printf("Process %d with AT %d Executed %d of its BT\n",a[i].c,a[i].at,a[i].bt);
 count++;
 pri=pri+a[i].bt;
 m=i;
 break;
 }
 else
 {
 r=a[i].bt;
 s=a[i].bt-t;
 a[i].bt=s;
 pri=pri+t;
 printf("Process %d with AT %d Executed %d of its BT\n",a[i].c,a[i].at,r-s);
 m=i;
 }
 }
 if(a[i+1].at>pri&&a[i+1].v==0)
 {
 for(j=0;j<=m;j++)
 {
 if(a[j].bt<=t)
 {
 a[j].v=1;
 printf("Process %d with AT %d Executed %d of its BT\n",a[j].c,a[j].at,a[j].bt);
 count++;
 pri=pri+a[j].bt;
 }
 else
 {
 r=a[j].bt;
 s=a[j].bt-t;
a[j].bt=s;
 pri=pri+t;
 printf("Process %d with AT %d Executed %d of its BT\n",a[j].c,a[j].at,r-s); 
 }
 }
 }
 }
}
}

**************************************

#include <stdio.h>
struct name
{
 int c;
 int at;
 int bt;
 int v;
 int p;
}a[10],b[10];
int main()
{
 int n,i,j,count=0,pri=0,k,m,l=0,t,smalls;
 printf("Enter No of Process:");
 scanf("%d",&n);
 printf("Enter Procces AT BT and Priority......\n");
 for(i=0;i<n;i++)
 scanf("%d %d %d %d",&a[i].c,&a[i].at,&a[i].bt,&a[i].p);
 for(i=0;i<n;i++)
 a[i].v=0;
 printf("Result........\n");
 while(count<n)
 {
 for(i=0;i<n;i++)
 {
 if(a[i].at<=pri&&a[i].v==0)
 {
 b[l].c=a[i].c;
 b[l].at=a[i].at;
b[l].bt=a[i].bt;
 b[l].p=a[i].p;
 m=l;
 l++;
 }
 }
 l=0;
 int small;
 small=b[0].p;
 k=0;
 for(j=0;j<=m;j++)
 {
 if(small>b[j].p)
 {
 small=b[j].p;
 k=j;
 smalls=b[j].bt;
 }
 }
 pri=pri+smalls;
 for(t=0;t<n;t++)
 {
 if(small==a[t].p&&a[t].v==0)
 break;
 }
 a[t].v=1;
 printf("Process %d of AT %d BT %d Priorty %d 
Executed\n",b[k].c,b[k].at,b[k].bt,b[k].p);
 count++;
 k=0;
 }}

