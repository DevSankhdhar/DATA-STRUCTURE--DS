#include<stdio.h>
int main()
{
    int a[100];int i,n,p,pos=0,mid,f,l;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    //binary search
    printf("enter the search element");
    scanf("%d",&p);
    f=0;l=n-1;
    while(f<l)
    {
        mid = (f+l)/2;
        if(a[mid]==p)
        {
            pos=mid+1;break;
        }
         if(a[mid]>p)
        l=mid-1;

         if(a[mid]<p)
         f=mid+1;
    }
    if(pos>0)
    printf("element found at : %d",pos);
    else
    printf("Element not found");
    return 0;
}
