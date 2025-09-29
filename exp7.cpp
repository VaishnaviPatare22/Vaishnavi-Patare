//Implement a template function sortArray() to sort an array of any data type (integers, floats,or characters).
#include<iostream>
using namespace std;
template<typename T>
void sortArray(T s[],int n){
	T temp;
	bool flag;
	for(int i=0; i<n-1; i++){
		flag=false;
		cout<<"\nThis is "<<i+1<<"th pass"<<endl;
		for(int j=0; j<n-i-1; j++){
			if(s[j]>s[j+1]){
				flag = true;
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
			for(int k=0; k<n; k++)
				cout<<s[k]<<" ";  
			cout << endl;                                                                   
		}
		if(!flag)
			break;
	}
}
template<typename T>
void printArray(T s[],int n){
	cout<<"\nSorted array is: ";
	for(int i=0; i<n; i++){
		cout<<s[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int s[]={79,12,94,28,25,90,67,6,88,35,29,18,99,873,100,14};
	int n = sizeof(s)/sizeof(s[0]);
	sortArray(s,n);
	printArray(s,n);
	return 0;
}
