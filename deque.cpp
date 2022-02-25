#include<iostream>
#include<deque>

using namespace std;

int main(){
	deque<int> D;
	D.push_back(1);
        D.push_front(2);
	D.push_front(3);
	D.push_back(4);
	for(int i:D){
	cout << i << " ";
	}
	D.pop_back();
	cout<<endl;
        for(int i:D){
        cout << i << " ";
        }
	cout<<endl;
	cout<<"element at 2nd index  "<< D.at(2)<<endl;
	cout<<"front element  "<< D.front()<<endl;
        cout<<"last element  "<< D.back()<<endl;
        cout<<"empty or not  "<< D.empty()<<endl;
	cout<<"size before erase"<< D.size()<<endl;

        for(int i:D){
        cout << i << " ";
        }
        cout<<endl;
	
	D.erase(D.begin(),D.begin()+1);
        for(int i:D){
        cout << i << " ";
        }
        cout<<endl;
	cout<<"size after erase "<< D.size()<<endl;





}
