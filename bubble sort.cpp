//To sort array in ascending order
#include<iostream>
using namespace std;
int main()
{
     int i,j,n,temp;
     cout<<"Enter number of elements in array"<<endl;
     cin>>n;
     int a[n];
     cout<<"Enter elements of array"<<endl;
     for(i=0;i<n;i++)
     {
        cin>>a[i];
     }
     for(i=0;i<n;i++)
     {
        for(j=0;j<n-i;j++)
        {
            if(a[i]>a[j+1])
            {
	temp=a[i];
	a[i]=a[j+1];
	a[j+1]=temp;
            }
         }
     }
     cout<<"Sorted array is:"<<endl;
     for(i=0;i<n;i++)
     {
        cout<<a[i]<<" ";
     }
     
}
