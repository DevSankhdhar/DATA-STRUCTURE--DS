#include<stdio.h>
int main()
{
    int a[100];int i,j,n,t,p;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    //sorting
     for(i= 1;i<n;i++)
    {   p=a[i];
        j= i-1;
        while(j>=0&&a[j]>p)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=p;
    }
     for(i= 0;i<n;i++)
    printf("%d ",a[i]);
}