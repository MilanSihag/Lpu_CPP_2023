#include<iostream>
using namespace std;
//templates allows us to write generic programs.
//can be implemented in two ways - function templates and class templates
/*
1.1Class Template
	Declaration
	template<class T>
	class classname{
		int var; or T var;
		T print(){}
	};
1.2 defining class members outside class template
	template<class T>
	class classname{
		int var; or T var;
		T print();
	};
	template<class T>
	T className<T> :: print(){}
*/
template <class T>
class Number{
	T num;
	public:
		Number(T n) : num(n){}
		T getNum(){
			return num;}
		T print();
};
template<class T>
T Number<T>::print(){
	cout<<num<<endl;
}
int main(){
	Number<int> n1(2);
//	cout<<n1.getNum()<<endl;
	n1.print();
	Number<float> n2(3.14);
	cout<<n2.getNum()<<endl;
}
