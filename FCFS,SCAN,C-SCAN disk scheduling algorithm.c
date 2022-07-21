#include <stdio.h>
int main() {
int i, h, m, ml[m], st=0;
printf("Enter the head position: ");
scanf("%d", &h);
printf("Enter the no. of memory locations: ");
scanf("%d", &m);
for (i=0; i<m; i++) {
ml[i] = 0; }
printf("Enter the memory location:
\n");
for (i=0; i<m; i++) {
scanf("%d", &ml[i]); }
//temporary check
printf("Memory location:
\n");
for (i=0; i<m; i++) {
printf("%d ", ml[i]); }
//temporary check
//computing
for (i=0; i<m; i++) {
if(ml[i]>h) {
st = st + (ml[i] 
- h);
}
else {
st = st + (h 
- ml[i]);
}
h=ml[i];
printf("\nSeek time: %d\n", st);
return 0;
}


*****************************
       
#include<stdio.h>
int main()
{
 int head,a[10],n,i,j,temp,k,seek=0;
 printf("Enter the Head position:");
 scanf("%d",&head);
 printf("Enter the No of Address:");
 scanf("%d",&n);
 printf("Enter the Address with in limit 500GB:\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n-1;i++)
 {
 for(j=0;j<n-1-i;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
 for(i=0;i<n;i++)
 {
 if(a[i]>=head)
 break;
 }
 k=i;
j=i-1;
 for(i=head;i<=500;i++)
 {
 if(a[k]==i)
 {
 printf("The Address %d is fetch.\n",a[k]);
 k++;
 }
 }
 printf("In reverse direction......\n");
 for(i=head-1;i>=0;i--)
 {
 if(a[j]==i)
 {
 printf("The Address %d is fetch.\n",a[j]);
 j--;
 }
 }
}
       
**************************************
       
#include<stdio.h>
int main()
{
 int head,a[10],n,i,j,temp,k,seek=0;
 printf("Enter the Head position:");
 scanf("%d",&head);
 printf("Enter the No of Address:");
 scanf("%d",&n);
 printf("Enter the Address with in limit 500GB:\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n-1;i++)
 {
 for(j=0;j<n-1-i;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
 for(i=0;i<n;i++)
 {
 if(a[i]>=head)
 break;
 }
 k=i;
j=0;
 for(i=head;i<=500;i++)
 {
 if(a[k]==i)
 {
 printf("The Address %d is fetch.\n",a[k]);
 k++;
 }
 }
 printf("In reverse direction......\n");
 for(i=0;i<head;i++)
 {
 if(a[j]==i)
 {
 printf("The Address %d is fetch.\n",a[j]);
 j++;
 }
 }
}
       
       
*************************************
       
