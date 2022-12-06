#include<stdio.h>
int  main()
{
 int n,ar[100],i, sum = 0;float avg;
printf("enter the number of students");
scanf("%d", &n);  // taking number of students input
printf("enter the marks");
for(i=0;i<n;i++)    // taking input marks
scanf("%d",&ar[i]);

for(i = 0;i<n;i++)  //finding sum
sum = sum+ ar[i];

avg = sum/n; //to calculate average
printf("THe average marks of the students is %f",avg);
    
    return 0;

}