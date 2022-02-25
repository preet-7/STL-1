#include<iostream>
#include<stack>
using namespace std;


int main(){
	stack<string> S;
	S.push("Hi");
	S.push("Hello");
	S.push("Good");
	S.push("Bye");
	cout<< "top element "<< S.top()<<endl;
	S.pop();
        cout<< "top element "<< S.top()<<endl;
        cout<< "Size "<< S.size()<<endl;
	cout<< "empty or not "<< S.empty()<<endl;





}


