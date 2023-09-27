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
class publicDerived: public base{
	public:
		int getProtectedValue(){
			return protected1;
		}
};

int main(){
	publicDerived pd1;
	cout<<"Public: "<<pd1.public1<<endl;
	cout<<"Private: "<<pd1.getPrivateValue()<<endl;
	cout<<"Protected: "<<pd1.getProtectedValue()<<endl;
}
