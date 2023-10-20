#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream file("test.bin",ios::binary);
	int p=1234;
	file.write((char*)&p,sizeof(p));
	file.close();
	
	ifstream rd("test.bin",ios::binary);
	int i;
	cout<<"Value of i before: "<<i<<endl;
	rd.read((char*)&i,sizeof(i));
	cout<<"Value of i after: "<<i<<endl;
	rd.close();
}
