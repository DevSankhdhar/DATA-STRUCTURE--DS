#include<stdio.h>
int main()
{
    int a[100];int i,j,n,p,t;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    //bubble sort
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
           { t=a[j];a[j]=a[j+1];
            a[j+1]=t;}
        }
    }
    printf("sorter array is :\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
