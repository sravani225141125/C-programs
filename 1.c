#include<stdio.h>
void main()
{
   int a[10],i,n;
   printf("Enter no of elements: ");
   scanf("%d",&n);
   printf("Enter elements: ");
   for(i=0;i<n;i++)
   {
        scanf("%d",&a[i]);
   }
   printf("The reversed array: ");
   for(i=n-1;i>=0;i--)
   {
        printf("%d ",a[i]);
   }
   printf("\n");
}

