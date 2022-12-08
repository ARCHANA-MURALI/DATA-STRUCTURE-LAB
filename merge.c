#include<stdio.h>
void main()
{
int s1,s2,s3,a1[10],a2[15],a3[20],i,k,j;
printf("Enter the size of 1'st array");
scanf("%d",&s1);
printf("Enter the size of 2'st array");
scanf("%d",&s2);
s3=s1+s2;
printf("enter elements of 1'st array");
for(i=0;i<s1;i++)
{
scanf("%d",&a1[i]);
a3[i]=a1[i];
}
k=s1;
printf("Enter elements of 2'st array");
for(i=0;i<s2;i++)
{
scanf("%d",&a2[i]);
a3[k]=a2[i];
k++;
}
printf("merged array before sorting");
for(i=0;i<s3;i++)
{
printf("\n%d\n",a3[i]);
}
printf("merged array after sorting");
for(i=0;i<s3;i++)
{
int temp;
for(j=i+1;j<s3;j++)
{
if(a3[i]>a3[j])
{
temp=a3[i];
a3[i]=a3[j];
a3[j]=temp;
}
}
}
for(i=0;i<s3;i++)
{
printf("\n%d\n",a3[i]);
}
}

