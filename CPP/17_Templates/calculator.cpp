#include<iostream>
using namespace std;
template<class T>
class Calculator{
	T op1,op2;
	public:
		Calculator(T var1,T var2){
			op1=var1;
			op2=var2;
		}
		T getSum(){
			return op1+op2;
		}
		T getDiff(){
			return op1-op2;
		}
		T getMul(){
			return op1*op2;
		}
		T getDiv(){
			return op1/op2;
		}
};
int main(){
	cout<<"Choose the type: 1.int	2.float"<<endl;
	int type;
	cin>>type;
	if(type==1){
		cout<<"Enter the expression to be evaluated: ";
		int v1,v2;
		char op;
		cin>>v1;
		cin.ignore();
		cin>>op;
		cin.ignore();
		cin>>v1;
		Calculator<int> c1(v1,v2);
		cout<<"Result: ";
		switch(op){
			case '+':
				cout<<c1.getSum()<<endl;
				break;
			case '-':
				cout<<c1.getDiff()<<endl;
				break;
			case '*':
				cout<<c1.getMul()<<endl;
				break;
			case '/':
				cout<<c1.getDiv()<<endl;
				break;
			default:
				cout<<"invalid expression"<<endl;
		}
	}
	else if(type==2){
		cout<<"Enter the expression to be evaluated: ";
		float v1,v2;
		char op;
		cin>>v1>>op>>v2;
		Calculator<float> c1(v1,v2);
		cout<<"Result: ";
		switch(op){
			case '+':
				cout<<c1.getSum()<<endl;
				break;
			case '-':
				cout<<c1.getDiff()<<endl;
				break;
			case '*':
				cout<<c1.getMul()<<endl;
				break;
			case '/':
				cout<<c1.getDiv()<<endl;
				break;
			default:
				cout<<"invalid expression"<<endl;
		}
	}
	else{
		cout<<"invalid type";
	}
}
