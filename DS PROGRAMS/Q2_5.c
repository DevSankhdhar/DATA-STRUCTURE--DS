#include<stdio.h>
int main()
{
    int a[100][100], b[100][100], c[100][100];int i,k,j,n;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the array elements of a");
    for(i = 0;i<n;i++)              //input array a
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
     printf("enter the array elements of b");
    for(i = 0;i<n;i++)              //input array b
    for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);

    //adding 
    for(i = 0;i<n;i++)
    for(j=0;j<n;j++)
    c[i][j]= a[i][j]+b[i][j];
    //printing
    printf("addition is :\n");
     for(i = 0;i<n;i++)
     {
      for(j=0;j<n;j++)
      printf("%d",c[i][j]);
     printf("\n");
     }
     //multiplication and printing
     printf("Multiplication is:\n");
      for(i = 0;i<n;i++)
     {
        for(j=0;j<n;j++)
     {
        c[i][j] = 0;
     for(k =0;k<n;k++)
     c[i][j]= c[i][j] +a[i][k]*b[k][j];
     printf("%d ",c[i][j]);
     }
     printf("\n");
    }
return 0;
}