#include<iostream>
#include<string>
using namespace std;
int main(){
    // int x = 5;
    // const int constant_value = 10; // this value can't be changed/override
    // double y = 5.5;
    // float z = 10.5;
    // char ch = 'a';
    // bool a = true;
    // string str = "milan";
    // cout << x << endl;
    // cout << y << endl;
    // cout << z << endl;
    // cout << ch << endl;
    // cout << str << endl;
    // cout << a << endl;

    int userInput;
    cout << "Enter a number : ";
    cin >> userInput;
    cout << "Number is : " << userInput << endl;

    int input_first, input_second;
    cout << "Enter first number : ";
    cin >> input_first;
    cout << "Enter second number : ";
    cin >> input_second;
    int sumOfInputs = input_first + input_second;
    cout << "Sum is : " << sumOfInputs << endl;


    // string name;
    // cout << "Enter your name : ";
    // getline(cin,name);
    // cout << "Name is : " << name << endl;
}