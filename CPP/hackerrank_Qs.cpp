#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int integer; long b; char a; float f; double d;
    cin>> integer>>b>>a>>f>>d;
    cout<<integer<<endl<<b<<endl<<a<<endl;
    printf("%.3f\n%.9f",f,d);
    return 0;
}
