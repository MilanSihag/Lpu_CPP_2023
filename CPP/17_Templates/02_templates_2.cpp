#include<iostream>
using namespace std;
template<class T,class U,class V=char>
class A{
	T var1;
	U var2;
	V var3;
	public:
		A(T v1,U v2,V v3){
			var1=v1;
			var2=v2;
			var3=v3;
		}
		void print(){
			cout<<"Var1: "<<var1<<" Var2: "<<var2<<" Var3: "<<var3<<endl;
		}
};
int main(){
	A<int,double> obj(12,3.14,'M');
	obj.print();
	
}
