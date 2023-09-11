#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string s[5];
	for(int i = 0; i < 5; i++) cin >> s[i];
	ofstream onFile;
	onFile.open("Name.txt");
	for(auto e : s) onFile << e << endl;
	onFile.close();
	
	ifstream inFile;
	inFile.open("Name.txt");
	string str;
	while(inFile >> str) cout << str << endl;
}
