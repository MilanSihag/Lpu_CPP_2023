#include<iostream>
using namespace std;
class Number{
	int a;
	
	public:
		Number(){
			cout<<"Default Constructor"<<endl;
			a=10;
		}
		Number(int num){
			cout<<"Para const"<<endl;
			a=num;
		}
		//copy constructor
		Number(Number &obj){
			cout<<"Copy const"<<endl;
			a=obj.a;
		}
		void display(){
			cout<<"A: "<<a<<endl;
		}
};
int main(){
	Number n1;
	n1.display();
	Number n2(20);
	n2.display();
	Number n3(n2);
	n3.display();
}
