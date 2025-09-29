/*Design a Student Database using multiple inheritance with the following classes:
a) Person (Base Class) – Stores name and age.
b) Academic (Base Class) – Stores roll number and marks in 3 subjects.
c) Student (Derived Class) – Inherits from both Person and Academic,
Calculates total marks and percentage.*/
#include<iostream>
using namespace std;

class person
{
private:
	string name;
	int age;
	
public:
	void person_details()
	{
	cout<<"\nEnter name : ";
	cin>>name;
	cout<<"\nEnter age : ";
	cin>>age;
	}
	void show_details_person()
	{
	cout<<"\nName "<<name;
	cout<<"\nAge "<<age;
	}
};

class Academic
{
private:
	int RollNo;
	float m[i];
public:
	void get_details_of_academic()
	{
	cout<<"\nEnter Rollno : ";
	cin>>RollNo;
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"\nEnter marks : ";
		cin>>m[i];
	}
	}
	void show_academic_details()
	{
	cout<<"\nRollNo "<<RollNo;
	cout<<"\nm1 "<<m[i];
	cout<<"\nm2 "<<m[i+1];
	cout<<"\nm3 "<<m[i+2];
	}
};

class Student:public person,public Academic{
private :
	float total_marks;
	float percentage;
public :
	void total(){
		total_marks = m1+m2+m3;
		percentage = total_marks/3;
	}
};

int main()
{
	student s1;
	s1.show_details_person();
	s1.show_academic_details();
	return 0;
}
