#include<iostream>
using namespace std;
/*
unary operators-> operators which works on single operand. eg = ++, --, !
binary operators-> operators which work on two operands. eg-> +, -, *, etc.
*/
class UnaryOverload{
	int hr,min;
	public:
		void input(){
			cout<<"enter time: ";
			cin>>hr;
			cout<<endl;
			cin>>min;
		}
		void operator ++(int){ //we are passing parameter to make work postfix operation
			hr++;
			min++;
		}
		void operator --(){ //here only prefix will work
			hr--;
			min--;
		}
		void output(){
			cout<<"Time is: "<<hr<<" hrs "<<min<<" min."<<endl;
		}
};
int main(){
	UnaryOverload u1;
	u1.input();
	u1++; 
	cout<<"after increment:"<<endl;
	u1.output();
	--u1;
	cout<<"after decrement:"<<endl;
	u1.output();
}
