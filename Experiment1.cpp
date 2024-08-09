//To arrange list of students according to roll no.
#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Student{
int rollnumber;
string name;
};
void bubblesort(vector<Student> &students)
{
	int n=students.size();
	for(int i=0;i<n-1;++i)
	{
		for(int j=0;j<n-i-1;++j)
		{
			if(students[j].rollnumber > students[j+1].rollnumber)
			{
				Student temp=students[j];
				students[j]=students[j+1];
				students [j+1]=temp;
			}
		}
	}
}
int main()
{
	vector<Student> students={
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
	bubblesort(students);
	cout<<"After sorting:"<<endl;
	for(const auto & Student:students)
	{
		cout<<Student.rollnumber<<":"<<Student.name<<endl;
	}
	return 0;
}
















