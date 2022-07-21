#include <stdio.h>
int main()
{
 int i,n,pn,a[10],pb[10],count=0,j,f;
 printf("Enter the No of Blocks:");
 scanf("%d",&n);
 printf("Enter the No of Pages:");
 scanf("%d",&pn);
 printf("Enter the Page No:");
 for(i=0;i<pn;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 pb[i]=0;
 for(i=0;i<pn;i++)
 {
 for(j=0;j<n;j++)
 {
 if(pb[j]==a[i])
 count+=1;
 }
 if(count==0)
 {
 printf("The Page%d is in %d.\n",a[i],f);
 pb[f]=a[i];
 f=(f+1)%n;
 }
 count=0;
 }
}

**********************************

#include<stdio.h>
int main()
{
int q[20],p[50],c=0,c1,d,f,i,j,k=0,n,r,t,b[20],c2[20];
printf("Enter no of pages:");
scanf("%d",&n);
printf("Enter the reference string:");
for(i=0;i<n;i++)
scanf("%d",&p[i]);
printf("Enter no of frames:");
scanf("%d",&f);
q[k]=p[k];
printf("\n\t%d\n",q[k]);
c++;
k++;
for(i=1;i<n;i++)
{
c1=0;
for(j=0;j<f;j++)
{
if(p[i]!=q[j])
c1++;
}
if(c1==f)
{c++;
if(k<f)
{q[k]=p[i];
k++;
for(j=0;j<k;j++)
printf("
\t%d",q[j]);
printf("
\n");
}
else {
 for(r=0;r<f;r++) {
 c2[r]=0;
for(j=i
-1;j<n;j--
)
{
 if(q[r]!=p[j])
c2[r]++;
else
break; }}
for(r=0;r<f;r++)
b[r]=c2[r];
for(r=0;r<f;r++) {
for(j=r;j<f;j++) {
if(b[r]<b[j]) {
t=b[r];
b[r]=b[j];
b[j]=t; }}}
for(r=0;r<f;r++) {
if(c2[r]==b[0])
q[r]=p[i];
printf("\t%d",q[r]);
}
printf("\n");
}}}
printf("\nThe no of page faults is %d",c);
}

***********************************

#include<stdio.h>
int main()
{
int f,p;
int pages[50],frame[10],hit=0,count[50],time[50];
int i,j,page,flag,least,minTime,temp;
printf("Enter no of frames : ");
scanf("%d",&f);
printf("Enter no of pages : ");
scanf("%d",&p);
for(i=0;i<f;i++)
{
frame[i]=-1;
}
for(i=0;i<50;i++)
{
count[i]=0;
}
printf("Enter page no : \n");
for(i=0;i<p;i++)
{
scanf("%d",&pages[i]); }
printf("\n");
for(i=0;i<p;i++) {
count[pages[i]]++;
time[pages[i]]=i;
flag=1;
least=frame[0];
for(j=0;j<f;j++) {
if(frame[j]==-1 || frame[j]==pages[i])
{
if(frame[j]!=-1)
{
hit++; 
}
flag=0;
frame[j]=pages[i];
break; }
if(count[least]>count[frame[j]]) {
least=frame[j]; }}
if(flag) {
minTime=50;
for(j=0;j<f;j++) {
if(count[frame[j]]==count[least] && time[frame[j]]<minTime) {
temp=j;
minTime=time[frame[j]]; }}
count[frame[temp]]=0;
frame[temp]=pages[i]; }
for(j=0;j<f;j++) {
printf("%d ",frame[j]); 
}
printf("\n");
}
printf("Page hit = %d",hit);
return 0;
}


