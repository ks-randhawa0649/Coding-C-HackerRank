#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
	if(n==1){
		return true;
	}
	//Rec Case
	if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
		return true;
	}
	return false;
}


int main(){

	int arr[] = {3,4,5,6,8};
	int n = 5;

	if(isSorted(arr,n)){
		cout<<"Sorted Array!";
	}
	else{
		cout<<"Unsorted Array!";
	}
	return 0;
}