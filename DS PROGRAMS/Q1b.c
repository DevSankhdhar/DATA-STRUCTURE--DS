#include<stdio.h>
int main()
{
    int n,ar[100], i, l;
    printf("enter the size of array");
scanf("%d", &n);  // taking size input
printf("enter the elements");
for(i=0;i<n;i++)    // taking input numbers
scanf("%d",&ar[i]);
l=ar[0];

for(i = 0;i<n;i++)
if(ar[i]>l)
l=ar[i];

printf("Largest number is %d",l);
return 0;
}