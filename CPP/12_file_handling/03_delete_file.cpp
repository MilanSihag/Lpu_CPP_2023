#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	int val=remove("newFile.txt");
	if(val==0){
		cout<<"deleted successfully"<<endl;
	}
	else cout<<"file not deleted"<<endl;
}
