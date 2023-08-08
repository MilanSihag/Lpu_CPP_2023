#include<iostream>
using namespace std;

class Room{
	public:
	int length;
	int breadth;
	int height;
	
	int area(){
		return length*breadth;
	}
	
	int volume(){
		return length*breadth*height;
	}
};

int main(){
	Room r1;
	r1.length=10;
	r1.breadth=20;
	r1.height=15;
	cout<<r1.area()<<endl;
	cout<<r1.volume()<<endl;
}
