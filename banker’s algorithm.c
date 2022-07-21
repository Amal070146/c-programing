#include <stdio.h>
#include<stdlib.h>
int main()
{
 int 
al[10][10],max[10][10],av[1][10],v[10],need[10][10],dav[1][10],n,i,j,a,count=0,r,rc=0,k,c,rd[
1][10],p;
 printf("Enter the No of Process:");
 scanf("%d",&n);
 printf("Enter the No of Resources:");
 scanf("%d",&r);
 printf("Enter The allocated amount of.........\nA B C\n");
 for(i=0;i<n;i++)
 {
 for(j=0;j<r;j++)
 {
 scanf("%d", &al[i][j]);
 }
 }
 printf("Enter The Maximum amount of.........\nA B C\n");
 for(i=0;i<n;i++)
 {
 for(j=0;j<r;j++)
 {
 scanf("%d", &max[i][j]);
 }
 }
 printf("Enter The Availble For Work.........\nA B C\n");
 for(i=0;i<r;i++)
 {
scanf("%d",&av[0][i]);
 dav[0][i]=av[0][i];
 }
 for(i=0;i<n;i++)
 v[i]=0;
 for(i=0;i<n;i++)
 for(j=0;j<r;j++)
 need[i][j]=max[i][j]-al[i][j];
 for(a=0;a<n;a++)
 {
 for(i=0;i<n;i++)
 {
 for(j=0;j<r;j++)
 {
 if((av[0][j]>=need[i][j])&&v[i]==0)
 rc=rc+1;
 }
 if(rc==r)
 {
 printf("Process %d is Exicuted.\n",i);
 v[i]=1;
 for(k=0;k<r;k++)
 {
 av[0][k]+=al[i][k];
 }
 }
 rc=0;
 }
 }
 for(i=0;i<n;i++)
{
 if(v[i]==1);
 else
 {
 printf("Process %d is not Exicuted.\n",i);
 count=1;
 }
 }
 if(count==0)
 printf("Congratulation.....\nThe System Is Safe Go Ahead.......\n");
 else
 printf("The System Will be in DANGER!!!!!!\n");
 count=0;
 printf("Do you have any Process need to Exicute Urgently.........\n1.Yes\n2.No\n");
 scanf("%d",&c);
 switch(c)
 {
 case 1:printf("Enter process No:");
 scanf("%d",&p);
 printf("Enter The resources Asked:");
 for(i=0;i<r;i++)
 scanf("%d",&rd[0][i]);
 for(i=0;i<r;i++)
 al[p][i]+=rd[0][i];
 for(i=0;i<n;i++)
 for(j=0;j<r;j++)
 need[i][j]=max[i][j]-al[i][j];
 for(i=0;i<r;i++)
 dav[0][i]=dav[0][i]-rd[0][i];
 for(i=0;i<n;i++)
v[i]=0;
 for(a=0;a<n;a++)
 {
 for(i=0;i<n;i++)
 {
 for(j=0;j<r;j++)
 {
 if((dav[0][j]>=need[i][j])&&v[i]==0)
 rc=rc+1;
 }
 if(rc==r)
 {
 printf("Process %d is Exicuted.\n",i);
 v[i]=1;
 for(k=0;k<r;k++)
 {
 dav[0][k]+=al[i][k];
 }
 }
 rc=0;
 }
 }
 for(i=0;i<n;i++)
 {
 if(v[i]==1);
 else
 {
 printf("Process %d is not Exicuted.\n",i);
 count=1;
 }
}
 if(count==0)
 printf("Congratulation.....\nThe System Is also Safe in Arival of Process %d Go 
Ahead.......\n",p);
 else
 printf("The System Will be in DANGER in the arrival of Process %d !!!!!!\n",p);
 break;
default:printf("END");
 exit(0);
}
}
