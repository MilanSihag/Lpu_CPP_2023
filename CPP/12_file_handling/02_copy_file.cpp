#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ofstream onFile;
	ifstream inFile;
	string str;
	inFile.open("best.txt");
	onFile.open("copy.txt");
//	while(inFile>>str){
//		onFile<<str<<" ";
//	}

	//another method to copy
	char c;
	while(inFile.get(c)){
		onFile.put(c);
	}
	inFile.close();
	onFile.close();
}
