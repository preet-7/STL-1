#include<iostream>
#include<map>

using namespace std;

int main(){

	map<int,string> M;
	M[12]="hi";
	M[21]="hello";
	M[14]="BYE";
	M[32]="Good";

	M.insert({5,"hey"});
        cout<<"before erase"<< endl;	
	for(auto i:M){
		cout<<i.first<<" "<< i.second<<endl;
		
	}
        
	cout<<"finding 14 "<<M.count(14)<<endl;
	M.erase(14);
	cout<<"after erase"<< endl;
	for(auto i:M){
                cout<<i.first<<" "<< i.second<<endl;

        }

	cout<<endl;
	auto it= M.find(21);
	for(auto i=it;i!=M.end();i++){
		cout<<(*i).first<<(*i).second<<endl;
	}

}

