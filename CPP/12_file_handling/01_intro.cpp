#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
//	ofstream outFile;
//	outFile.open("file.txt");
//	outFile.open("C:\\Users\\milan\\OneDrive\\Desktop\\project\\test.txt");
//	to write something on file
//	outFile<<"printed in file"<<'\n'<<"new line";
//	outFile.close();

	ifstream inFile;
	string str;
	inFile.open("file.txt");
	/*
	inFile>>str;
	cout<<str; //this will only print till first space
	*/
	while(getline(inFile,str)){
		cout<<str;
	}
	inFile.close();
}
