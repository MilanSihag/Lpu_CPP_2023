#include<iostream>
using namespace std;

class Building{
	public:  //below this is accesible outside class also;
	int door;
	string doorColor;
	int window;
	string windowColor;
	private: //below this is accesible in this class only
	int elevator;
	
	void elevatorFunctioning(){
		//working of elevator
	}
};

int main(){
	Building b1;
	b1.door;
}
