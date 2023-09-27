// You are using GCC
#include<iostream>
using namespace std;
class Complex{
  public:
  float r;
  float i;
  void setValue(float v1,float v2){
      r=v1;
      i=v2;
  }
  void display(){
      cout<<r<<" + "<<i<<"i";
  }
  void sum(Complex c1,Complex c2){
      r=c1.r+c2.r;
      i=c1.i+c2.i;
  }
  ~Complex(){
  }
};
int main(){
    Complex c1,c2;
    float v1,v2;
    cin>>v1>>v2;
    c1.setValue(v1,v2);
    cin>>v1>>v2;
    c2.setValue(v1,v2);
    Complex c3;
    c3.sum(c1,c2);
    cout<<"Sum of two complex numbers is ";
    c3.display();
}
