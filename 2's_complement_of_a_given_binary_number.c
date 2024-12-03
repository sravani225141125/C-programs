#include<stdio.h>
void main()
{
  int n,a[10],i,flag=0;
  printf("Enter size: ");
  scanf("%d",&n);
  printf("Enter %d bit binary number: ",n);
  for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
  if(a[i]==1 && flag==0)
    flag=1;
  else if(a[i]==1 && flag==1)
    a[i]=0;
  else if(a[i]==0 && flag==1)
    a[i]=1;
}
printf("2's complement: ");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n");
}
    
