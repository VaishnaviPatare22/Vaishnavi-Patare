/*Create a Student class with name and marks. Overload sort() to sort:
a. By name (alphabetical order)
b. By marks (descending order)*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Student {
public:
	string name;
    int marks;
    
    Student(string n, int m){
    	name=n;
    	marks=m;
    }
    void displayDetailsOfStudent() 
    {
        cout<<"\nName: "<<name;
        cout<<" and his/her Marks: "<<marks;
    }
   };

	bool sortByName(Student&s1, Student&s2)
	{
		return s1.name>s2.name;
	}
	bool sortByMarks(Student & s1, Student & s2)
	{
		return s1.marks>s2.marks;
	}

int main(){
	vector<Student> Students;
	Students.push_back(Student("Vaishnavi",94));
	Students.push_back(Student("sakshi",97));
	Students.push_back(Student("anshika",89));
	Students.push_back(Student("Pratiksha",90));
	for(auto & S:Students)
	S.displayDetailsOfStudent();
	return 0;
}
