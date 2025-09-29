//Write a program to store Student Records (Roll Number & Marks) in map container.
//Implement map<int, int> where key = roll number and value = marks.

#include<iostream>
#include<map>
using namespace std;

int main(){
	map<int, int>	
	studentRecords;
	int n,rollNo,marks;
	
	cout<<"\nEnter no. of Students :: ";
	cin>>n;
	
	for(int i = 0; i<n; i++){
		cout<<"\nEnter Roll Number :: ";
		cin>>rollNo;
		
		cout<<"\nEnter marks of student :: ";
		cin>>marks;
		
		studentRecords[rollNo] = marks;
	}
	
	cout<<"\nStudent Records(rollNo->marks):\n";
	for(auto info : studentRecords){
		cout<<"Roll no. : "<<info.first<<" | Marks : "<<info.second<<endl;
	}
	
	return 0;
}
