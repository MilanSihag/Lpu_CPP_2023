#include<iostream>
#include<iomanip>
using namespace std;
/* A function is used to reduce code redudancy, as well as memory space.As it is invoked a bunch of
tasks are performed(matching arguments, matching return,etc  happens internally)
but when function defination contain 1 or 2 statements, then this bunch of tasks appers time-consuming
So we use concept of inline function
When we declare a function inline, the "function-body" is replicated at function calling space
*/

inline int add(int a, int b){
	return a+b;
}
int main(){
	cout<<"sum : "<<add(2,3);
}
