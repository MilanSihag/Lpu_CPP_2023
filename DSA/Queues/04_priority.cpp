#include<iostream>
#include<queue>
using namespace std;

int main(){
//	priority_queue<int> pq; //max heap
	priority_queue<int, vector<int>, greater <int>> pq; //min heap
	pq.push(1);
	pq.push(2);
	pq.push(3);
	pq.push(4);
	cout<<pq.size()<<endl;
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	
}
