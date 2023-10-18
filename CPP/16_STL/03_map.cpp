#include<iostream>
#include<map>
using namespace std;
//maps are associative containers that stores paired data. These paired data are called key-value pair
//where key is unique but value is not.

int main(){
	map<int,string> student={
		{1,"milan"},{2,"sujal"},{3,"sunny"},{4,"sujal"}
	};
	student[5] = "deepak";
	student.insert(make_pair(6,"Ayush"));
	student[5] = "ghanshyam";
	cout<<"1: "<<endl;
	map<int,string>::iterator iter;
	for(iter=student.begin();iter!=student.end();iter++){
		cout<<iter->first<<" - "<<iter->second<<endl;
	}
	student.erase(student.find(2),student.find(5));
	cout<<"2: "<<endl;
	for(int i=1;i<=student.size();i++){
		cout<<"Student["<<i<<"]:"<<student[i]<<endl;
	}
}
