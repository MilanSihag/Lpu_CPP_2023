#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class Employee{
	public:
		int id;
		char name[20],address[30];
		Employee(){
		}
		Employee(int _id,string _name,string _address){ //string is a class
			id=_id;
//			name=_name;
//			address=_address;
			strcpy(name,_name.c_str());
			strcpy(address,_address.c_str());
		}
		void info(){
			cout<<"ID: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Address: "<<address<<endl;
		}
};
void create(Employee obj){
	ofstream file("details.dat",ios::binary | ios::app);
	file.write((char*)&obj,sizeof(obj));
	file.close();
}
void read(){
	ifstream file("details.dat",ios::binary);
	Employee obj;
	while(file.read((char*)&obj,sizeof(obj))){
		obj.info();
	}
	file.close();
}
bool Update(int id,string address){
	bool found=false;
	fstream file("details.dat",ios::in|ios::out|ios::binary);
	Employee obj;
	while(file.read((char*)&obj,sizeof(obj))){
		if(obj.id==id){
			found=true;
			strcpy(obj.address,address.c_str());
			file.seekg(file.tellg()-sizeof(obj),ios::beg);
			file.write((char*)&obj,sizeof(obj));
			break;
		}
	}
	file.close();
	return found;
}
int main(){
	Employee a(1,"milan","raj");
	Employee b(2,"sujal","up");
	create(a);
	create(b);
	read();
}
