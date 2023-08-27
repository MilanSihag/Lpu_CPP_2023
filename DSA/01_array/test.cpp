// You are using GCC
#include<iostream>
using namespace std;
void find(int arr[], int size, int t){
    int first=-1,last=-1;
    int low=0,high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==t && arr[mid-1]!=t){
            first=mid;
            if(arr[mid+1]==t){
                last=mid+1;
            }
            else{
                last=mid;
            }
        }
        else if(arr[mid]==t && arr[mid+1]!=t){
            last=mid;
            if(arr[mid-1]==t){
                first=mid-1;
            }
            else{
                first=mid;
            }
        }
        if(arr[mid]>t){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(first==-1 && last==-1){
        cout<<"Target value "<<t<<" is not found in the array.";
    }
    else{
        cout<<"The first occurence of "<<t<<" is at index "<<first<<"."<<endl;
        cout<<"The last occurence of "<<t<<" is at index "<<last<<"."<<endl;
    }
}
int main(){
    int n,t;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>t;
    find(arr,n,t);
}
