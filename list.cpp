#include<iostream>
#include<list>

using namespace std;

int main(){

	list<int> L;
	L.push_front(1);
	L.push_back(2);
        L.push_back(3);
	L.push_front(5);
	L.push_back(4);
        list<int> N(5,1);
        for(int i:N){
             cout<< i <<" ";
        }
        cout<<endl;
	for(int i:L){
		cout<< i <<" ";
	}
	cout<<endl;
	L.erase(L.begin());
	for(int i:L){
                cout<<i<<" ";
        }
	cout <<endl;
	cout<< L.size()<<endl;

}
