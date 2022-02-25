#include<iostream>
#include<array>

using namespace std;
int main(){
	array<int,5> A ={1,2,3,4,5};
	int n= A.size();

	for(int i=0;i<n;i++){
		cout <<A[i]<<endl;

	}
	cout << "at 2nd index " << A.at(2)<<endl;
	cout << "empty or not " << A.empty()<<endl;
	cout << "first element " << A.front()<<endl;
	cout << "last element " << A.back()<< endl;
}
