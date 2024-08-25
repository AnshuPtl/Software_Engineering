#include<iostream>
using namespace std;
int main(){
	int i,a=0,arr[5];
	cout<<"enter array"<<endl;
	for(i=0;i<=3;i++){
		cin>>arr[i];
	}
	
	cout<<"--------------------"<<endl;
	for(i=0;i<=3;i++){
		a=a+arr[i];
	}
	cout<<a;
	return 0;
}
