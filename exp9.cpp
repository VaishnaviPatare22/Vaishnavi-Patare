/*Write a C++ program that accepts an array of integers from the user and allows the user to
access an element at a specified index. If the user enters an invalid index (i.e., out of bounds),
the program should throw an exception indicating an "Index Out of Bounds" error.*/
#include<iostream>
#include<map>
using namespace std;

int main(){
	int n;
	
	cout<<"\nEnter size of array:: ";
	cin>>n;
	
	int arr[100];
	cout<<"\nEnter "<<n<<" elements : ";
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	
	int index;
	cout<<"\nEnter index to access :: ";
	cin>>index;	
	
	try{
		if(index<0 || index>=n){
			throw("index out of Bounds!!");
		}
		cout<<"Element at index "<<index<<" is :"<<arr[index];
	}	
	
	catch(const char*msg){
		cout<<"\nException : "<<msg<<endl;
	}
	
	return 0;
}
