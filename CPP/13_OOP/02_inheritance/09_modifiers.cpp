#include<iostream>
using namespace std;
class base{
	int private1=10;
	protected:
		int protected1=2;
	public:
		int public1=21;
		int getPrivateValue(){
			return private1;
		}
};
class protectedDerived: protected base{
	public:
		int getProtectedValue(){
			return protected1;
		}
		int getPublicValue(){
			return public1;
		}
};

int main(){
	protectedDerived obj1;
	cout<<"Public: "<<obj1.getPublicvalue()<<endl;
//	cout<<"Private: "<<pd1.getPrivateValue()<<endl;
//	cout<<"Protected: "<<pd1.getProtectedValue()<<endl;
}
