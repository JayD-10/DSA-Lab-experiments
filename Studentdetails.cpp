//To display name,roll no & cgpa
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter number of students"<<endl;
	cin>>n;
	string name[n];
	int rno[n],cgpa[n];
	cout<<"enter roll no, cgpa and name of  "<<n<<"students"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>rno[i];
		cin>>cgpa[i];
		cin>>name[i];
	}
	cout<<"roll number, cgpa, namne of students is"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"roll number="<<rno[i]<<"   cgpa="<<cgpa[i]<<"     name="<<name[i]<<endl;
	 }
}
		
