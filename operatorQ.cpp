// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class WeatherData{
    float temp;
    public:
    WeatherData(float t){
        temp = t;
    }
    char c=176;
    void operator ++(){
        temp = (temp*1.8)+32;
        cout<<fixed<<setprecision(1)<<temp<<c<<"F"<<endl;
    }
    void operator --(){
        temp = -(temp*1.8)+32;
        cout<<fixed<<setprecision(1)<<temp<<c<<"F"<<endl;
    }
};
int main(){
    float t;
    cin>>t;
    WeatherData d1(t);
    ++d1;
    // WeatherData d2(-t);
    --d1;
    return 0;
}
