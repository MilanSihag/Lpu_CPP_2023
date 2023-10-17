#include<iostream>
using namespace std;
	//one class type to other class type
/*
when we assign an object of a class to object of another class then it is called class to class type.
This can be defined either by defining casting operator function in source class or constructor in
destinantion class.
*/
class Rectangle{
	int width,length,area;
	public:
		Rectangle(int l,int w){
			length=l;
			width=w;
			area=length*width;
		}
		void print(){
			cout<<"Width : "<<width<<" Length: "<<length<<" Area of rectangle: "<<area<<endl;
		}
};
class Triangle{
	int base,height;
	float area;
	public:
		Triangle(int b,int h){
			base=b;
			height=h;
			area=0.5*base*height;
		}
		void print(){
			cout<<"Base : "<<base<<" Height: "<<height<<" Area of triangle: "<<area<<endl;
		}
		operator Rectangle(){
			Rectangle temp(base,height);
			return temp;
		}
};

int main(){
	Triangle t1(10,20);
	Rectangle r1 = t1;
	t1.print();
	r1.print();
}
