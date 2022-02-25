#include<iostream>
#include<queue>

using namespace std;

int main(){
	priority_queue<int> Max;
	priority_queue<int,vector<int>,greater<int>> Min;

	Max.push(1);
	Max.push(2);
	Max.push(4);
	Max.push(3);
	Max.push(0);
	cout<<"size "<<Max.size()<<endl;
	int m= Max.size();
	for(int i=0;i<m;i++){
		cout<<Max.top()<<" ";
		Max.pop();
	}
	cout<<endl;

        Min.push(1);
        Min.push(2);
        Min.push(4);
        Min.push(3);
        Min.push(0);
        cout<<"size "<<Min.size()<<endl;
        int n= Min.size();
        for(int i=0;i<n;i++){
                cout<<Min.top()<<" ";
                Min.pop();
        }
        cout<<endl;

	cout<<"empty or not "<<Min.empty()<<endl;

}

