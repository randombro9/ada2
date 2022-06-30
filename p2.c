#include<stdio.h>
int n,a[50];
main()
{
int i;
printf("\n\t\t\t MERGE SORT \n");
printf("\n Enter the size of the array:");
scanf("%d",&n);
printf("\n Enter the array elements \n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
divide(1,n);
printf("\n Sorted elements of the array \n");
for(i=1;i<=n;i++)
printf("%d\t",a[i]);
}
divide(int low,int high)
{
int mid;
if(low < high)
{
mid=(low+high)/2;
divide(low,mid);
divide(mid+1,high);
mergesort(low,mid,high);
}
}
mergesort(int low,int mid,int high)
{
int i,h,j,k,b[50];
i=h=low;
j=mid+1;
while(h<=mid && j<= high)
{
if(a[h]<=a[j])
{
b[i]=a[h];
h=h+1;
}
else
{
b[i]=a[j];
j=j+1;
}
i=i+1;
}
if(h>mid)
for(k=j;k<=high;k++)
{
b[i]=a[k];
i=i+1;
}
else
for(k=h;k<=mid;k++)
{
b[i]=a[k];
i=i+1;
}
for(k=low;k<=high;k++)
a[k]=b[k];
}
