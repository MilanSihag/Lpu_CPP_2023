#include<iostream>
using namespace std;
class Not{
	int num;
	public:
		Not(){
			num=0;
		}
		int input(){
			cout<<"enter number: ";
			cin>>num;
		}
		void operator !(){
			num-=2;
		}
		void display(){
			cout<<"after 2 decrement value of number: "<<num<<endl;
		}
};
int main(){
	Not n1;
	n1.input();
	!n1;
	n1.display();
}
