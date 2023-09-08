//#include<iostream>
//int main(){
//    char *ptr = "GeeksQuiz";
//    std::cout<<*&*&*ptr;
//    return 0;
//}
// You are using GCC
#include<iostream>
using namespace std;
int findMaxElement(int* arr,int n,int m){
    int max=*arr;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(*((arr+i*n)+j)>max){
                max=*((arr+i*n)+j);
            }
        }
    }
    return max;
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<findMaxElement((int*)arr,n,m);
}
