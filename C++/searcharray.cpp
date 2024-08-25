#include<iostream>
using namespace std;
int main(){
	int i,n,a,arr[10],found=0;
	cout<<"enter array"<<endl;
	for(i=0;i<=3;i++){
		cin>>arr[i];
	}
	
	cout<<"--------------------"<<endl;
	for(i=0;i<=3;i++){
		a=a+arr[i];
	}
	cout<<a<<endl;
	
	cout<<"--------------------"<<endl;
	
	cout<<"Enter element to search in array : "<<endl;
	cin>>n;
	for(i=0;i<=3;i++){
		if(n==arr[i]){
			found=1;
		}
	}
	if(found==1){
		cout<<"value found";
	}
	else{
		cout<<"value not found";
	}
	return 0;
}
