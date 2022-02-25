#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> V;

	vector<int> A(10,1);
        vector<int> B(A);
        for(int i:B){
                cout <<i<<endl;

        }


	cout<<"capacity "<< V.capacity()<<endl;
	V.push_back(1);
        cout<<"capacity "<< V.capacity()<<endl;
	V.push_back(2);
        cout<<"capacity "<<V.capacity()<<endl;
	V.push_back(3);
        cout<<"capacity "<<V.capacity()<<endl;
        cout<<"size "<<V.size()<<endl;
	cout<<"at 2nd index "<<V.at(2)<<endl;
	cout<<"1st element  "<<V.front()<<endl;
	cout<<"last element "<<V.back()<<endl;
	cout<< "before pop"<< endl;
	for(int i:V){
		cout <<i<<endl;

	}
        V.pop_back();
	cout<< "after pop"<< endl;
        for(int i:V){
                cout <<i<<endl;

        }

	cout<<"before clear"<<V.size()<<endl;
        V.clear();
        cout<<"after clear"<<V.size()<<endl;












}
