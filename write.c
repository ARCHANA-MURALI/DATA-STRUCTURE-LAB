#include<stdio.h>
void main()
{
int sum=0,a[10],n,i;
printf("Enter the limit: ");
scanf("%d",&n);
printf("Eter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];

}
printf("the sum of array is %d",sum);
}
