#include<iostream>
using namespace std;
// Write a C++ class called "Rectangle" that has two private member
// variables: "length" and "width". The class should have a constructor that initializes
// these member variables and public member functions called "getArea" and "getPerimeter"
// that return the rectangle's area and perimeter, respectively.
class Rectangle{
	int length;
	int width;
	public:
		Rectangle(){
			
		}
		Rectangle(int l,int w){
			length=l;
			width=w;
		}
		int area(){
			return length*width;
		}
		int perimeter(){
			return 2*(length+width);
		}
};
int main(){
	Rectangle r1(2,3);
	cout<<"Area : "<<r1.area()<<endl;
	cout<<"Perimeter : "<<r1.perimeter()<<endl;
}
