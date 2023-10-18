#include<iostream>
using namespace std;
void merge(int* left,int* right,int* arr){
	int index1=0,index2=0,k=0;
	int len1=sizeof(left)/sizeof(left[0]);
	int len2=sizeof(right)/sizeof(right[0]);
	int len=(sizeof(arr))/sizeof(arr[0]);
	while(index1<len1&&index2<len2){
		if(left[index1]<right[index2]){
			arr[k++]=left[index1++];
		}
		else arr[k++]=right[index2++];
	}
	while(index1<len1) arr[k++]=left[index1++];
	while(index2<len2) arr[k++]=right[index2++];
}
void mergesort(int* arr){
	int len=sizeof(arr)/sizeof(arr[0]);
	if(len<2) return;
	int mid= len/2;
	int* left = new int[mid];
	int* right = new int[len-mid];
	for(int i=0;i<mid;i++){
		left[i]=arr[i];
	}
	for(int i=0;i<len-mid;i++){
		right[i]=arr[mid+i];
	}
	mergesort(left);
	mergesort(right);
	merge(left,right,arr);
	delete []left;
	delete []right;
}
int main(){
	int arr[8]={1,4,2,8,3,0,7,5};
	mergesort(arr);
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
	}
}
