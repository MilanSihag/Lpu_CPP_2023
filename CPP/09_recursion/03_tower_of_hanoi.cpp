#include<iostream>
using namespace std;
/*
	Tower of hanoi
	- There are 3 towers-source,auxilaary,destination
	- Source tower contains a set of discs that with largest at bottom and smallest at top
	- The objective is to transfer entire discs from source to destination maintaining the same order
	of the discs, using auxilary tower.
	
	Rules
	- only one disk can be transfered at a time.
	- never a larger disk is placed over a smaller disk ever.
*/
void towerOfHanoi(int n,char src,char aux,char dest){
	if(n==1){
		cout<<"Move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
		return;
	}
	towerOfHanoi(n-1,src,dest,aux);
	cout<<"Move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
	towerOfHanoi(n-1,aux,src,dest);
}
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	towerOfHanoi(n,'A','B','C');
}
