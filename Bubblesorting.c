//To perform bubble sort in ascending order
#include<stdio.h>
int main()
{
      int  i,j,temp,n;
      printf("Enter number of elements in array \n");
      scanf("%d",&n);
      int a[n];
      printf("Enter array elements \n");
      for(i=0;i<n;i++)
      {
       scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {
         for(j=i+1;j<n;j++)
         {
           if(a[i]>a[j])
           {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
         }
      }
      printf("Sorted array is\n");
      for(i=0;i<n;i++)
      {
         printf("%d  ",a[i]);
      }
}





