#include<iostream>
using namespace std;
/*
	Pure Virtual Function:
	a function for which we do not have an implementation. We do not write any functionality.
	We only declare this function.
	
	Any class containing one or more pure virtual function cannot be used to define any object.
	These classes are also known as abstract classes.
	classes derived from abstract class need to implement the pure virtual function.
	syntax:
	virtual <function_type> <fun_name>() = 0;
*/
class Shape{
	public:
		virtual float calculate_area()=0;
};
class Square : public Shape{
	float a;
	public:
		Square(float len){
			a=len;
		}
		float calculate_area(){
			return a*a;
		}
};
class Circle : public Shape{
	float r;
	public:
		Circle(float rad){
			r=rad;
		}
		float calculate_area(){
		//just defining because this class is derived from abstract class
		}
};
int main(){
	Square s1(10);
	cout<<"Area by object call: "<<s1.calculate_area()<<endl;
	Circle c1(12);
	Shape* shape; //we can create pointer of abstract class.
	shape=&s1;
	cout<<"Area by pointer call: "<<shape->calculate_area()<<endl;
}
