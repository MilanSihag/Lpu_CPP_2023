// You are using GCC
#include<iostream>
#include<string>
using namespace std;
class Parent{
    protected:
    int num;
    public:
    void setNum(int n){
        num=n;
    }
};
class Child : public Parent{
    public:
    void fun(){
        int temp = num;
        string s = to_string(temp);
        
        int n = s.length();
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i] = num%10;
            num/=10;
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;i<n;j++){
                count+=arr[i]+arr[j];
            }
        }
        cout<<count;
    }
};
int main(){
    int n;
    cin>>n;
    Child c;
    c.setNum(n);
    c.fun();
}
