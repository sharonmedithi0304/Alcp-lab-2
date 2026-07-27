#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter number of elements:";
	cin>>n;
	int arr[n];
	cout<<"Enter the array:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	
	}
	
	int ans =0;
	for(int i=0;i<n;i++){
		ans^=arr[i];
	}
	cout<<"the Number which repeats once is "<<ans;
	return 0;
}
