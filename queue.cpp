#include<iostream>
#include<queue>
using namespace std;


int main(){
        queue<string> Q;
        Q.push("Hi");
        Q.push("Hello");
        Q.push("Good");
        Q.push("Bye");
	cout<< "before Size "<< Q.size()<<endl;
        cout<< "top element "<< Q.front()<<endl;
        Q.pop();
        cout<< "top element "<< Q.front()<<endl;
        cout<< "after Size "<< Q.size()<<endl;
        cout<< "empty or not "<< Q.empty()<<endl;





}



