#include<iostream>
using namespace std;
int main(){
    // int a = 5;
    // if(condition){
    //     execute
    // }
    // if(a>0){
    //     cout << "Number is positive" << endl;
    // }
    // else{
    //     cout << "Number is negative" << endl;
    // }
    int userInput;
    cout << "Enter a number : ";
    cin >> userInput;
    if(userInput%2==0){
        cout << "Number is even" << endl;
    }
    else{
        cout << "Number is odd" << endl;
    }
}