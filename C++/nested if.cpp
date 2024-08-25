#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a>b && a>c){
		cout<<"a is greatest"<<endl;
	}
	else if(b>a && b>c){
		cout<<"b is greatest"<<endl;
	}
	else if(c>a && c>b){
		cout<<"c is greatest"<<endl;
	}
	else if(a==b || a==c){
		cout<<"values are same"<<endl;
	}
	else if(b==a || b==c){
		cout<<"values are same"<<endl;
	}
	else if(c==b || c==a){
		cout<<"values are same"<<endl;
	}

	return 0;
}
