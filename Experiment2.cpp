//To perform insertion sort operation
#include<iostream>
#include<vector>	
#include<string>
using namespace std;
struct Student{
int rollnumber;
string name;
};
void insertionsort(vector<Student>&students)
{
	int n=students.size( );
	for(int i=1;i<n;++i)
	{
	    Student key=students[i];
	    int j=i-1;
	    while(j>=0 && students[j].name>key.name)
	    {
		students[j+1]=students[j];
		j=j-1;
	    }
	   students[j+1]=key;
	}
}
int main()
{
	vector<Student>students={
	{101,"Alice"},
	{103,"Charlie"},
	{102,"Bob"},
	{105,"Emma"},
	{104,"David"},
	{107,"Henry"},
	{106,"Frank"},
	{109,"Ivy"},
	{108,"Grace"},
	{110,"Jack"},
	};
	cout<<"Before sorting"<<endl;
	for(const auto&student:students)
	{
		cout<<student.rollnumber<<":"<<student.name<<endl;
	}
	insertionsort(students);
	cout<<"After sorting:"<<endl;
	for(const auto & Student:students)
	{
		cout<<Student.rollnumber<<":"<<Student.name<<endl;
	}
	return 0;
}

