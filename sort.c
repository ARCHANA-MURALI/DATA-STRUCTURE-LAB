#include <stdio.h>
void main()
{
int a[15],temp,i,j,n;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the elements:");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("orginal array elements:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1);j++)
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
printf("Array after implementing bubble sort:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}

