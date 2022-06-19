#include<stdio.h>
int main()
{
int i,n;
float s;
printf("Enter the value of n ::");
scanf("%d",&n);
s=0.0;
i=1;
while(i<= n)
{
  s=s+1.0/n;
  i++;
}
printf("1+1/2+1/3+1/4+…1/n=%f",s);
}