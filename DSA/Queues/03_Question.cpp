#include<iostream>
#include<stack>
#include<queue>
using namespace std;
queue<int> rev(queue<int> q){
	stack<int> s;
	while(!q.empty()){
	s.push(q.front());
	q.pop();
	}
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}
	return q;
}
queue<int> krev(queue<int> q,int k){
	stack<int> s;
	for(int i=0;i<k;i++){
		s.push(q.front());
		q.pop();
	}
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}
	int t=q.size()-k;
	while(t--){
		int element=q.front();
		q.pop();
		q.push(element);
	}
	return q;
}
int main(){
	
}
