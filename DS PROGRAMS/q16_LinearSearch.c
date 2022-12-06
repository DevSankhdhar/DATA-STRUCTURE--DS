#include<stdio.h>
int main()
{
    int a[100];int i,n,p,pos=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    //linear Search
    printf("enter the search element");
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {if(a[i]==p)
        {
            printf("Element found at %d",(i+1));pos=1;
            break;
        }
    }
    if(pos==0)
    printf("Element not found");
    return 0;}