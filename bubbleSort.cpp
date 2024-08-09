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
     cout<<"Sorted array is:"<<endl;
     for(i=0;i<n;i++)
     {
        cout<<a[i]<<"  ";
     }
     
}
