#include<stdio.h>
int main()
{
    int a[100];int i,j,n,t;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    //selecton sorting
    for(i = 0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];a[i]=a[j];a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ", a[i]);}

