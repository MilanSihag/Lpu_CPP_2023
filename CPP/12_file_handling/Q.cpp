#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	string names;
	cout<<"enter 5 names: ";
	getline(cin,names);
	ofstream oFile;
	oFile.open("best.txt");
	oFile<<names;
	oFile.close();
	
	ifstream iFile;
	iFile.open("best.txt");
	string output;
	while(iFile>>output){
		cout<<output<<" ";
	}
	iFile.close();
}
