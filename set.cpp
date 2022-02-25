#include<iostream>
#include<set>

using namespace std;

int main(){

	set<int> S;
	S.insert(2);
        S.insert(1);
        S.insert(2);
        S.insert(3);
        S.insert(5);
        S.insert(4);
        S.insert(2);

	for(auto i:S){
		cout<<i<<" ";
	}cout<<endl;

        set<int>::iterator it =S.begin();
	it++;
	S.erase(it);

        for(auto i:S){
                cout<<i<<" ";
        }cout<<endl;
       
	cout<<"2 is present or not "<< S.count(2)<<endl;

	set<int>::iterator itr=S.find(3);
	for(auto it=itr;it!=S.end();it++){
		cout<<*it<<" ";
	}cout<<endl;
}

