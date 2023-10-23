#include<iostream>
using namespace std;
/*exceptions are runtime anomalies or unusual conditions that a program and programer may encounter
//during execution

TWO TYPES: 
	1. synchronous - which occur during program execution due to some fault in data input.
		eg. out of range, division by zero
	2. Asynchronous - cause by events or faults unrelated to program and beyond the control of prog.
		eg. keyboard failure, disk failure
	
	*****We only deal with synchronous.
	
	1. detect the problem(hit the exception)
	2. inform that an error has been detected(throw exception)
	3. receive error information(catch the exception)
	4. take corrective actions(handle the exception)

exception handling mechanism basically builds upon three keywords
	try
	catch
	throw
1. TRY
this keyword is used to preface a block of code which may generate an exception
	try{
		statement1;
		statement2;
	}
2. THROW
when the exception is detected it is thrown using 'throw' statement block in the block.
	throw(excep);
3. CATCH
this block catches the exception and handles it appropriately. The catch block that catches the
exception must immediately follow the try block that throws the exception
	try{
		statement1;
		statement2;
	}
	catch(argument){
		handle/action to be taken
	}
*/
int main(){
	int a,b;
	cout<<"Enter values of A and B: ";
	cin>>a>>b;
	cout<<a/b;
//	try{
//		if(b!=0){
//			cout<<a/b<<endl;
//		}
//		else throw b;
//	}
//	catch(int e){
//		cout<<"Division by zero: "<<e<<endl;
//	}
}
