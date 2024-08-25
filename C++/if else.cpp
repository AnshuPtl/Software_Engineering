#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,per;
	cin>>a;
	cin>>b;
	cin>>c;
	d=a+b+c;
	per = d/3;
	cout<<"pr = "<<per<<endl;
	if(per>90){
		cout<<"You scored first class"<<endl;
	}
	else{
			cout<<"you scored second class"<<endl;
		}
	if(per>70){
			cout<<"you scored third class"<<endl;
		}
	else{
			cout<<"you have passed the exam"<<endl;
		}

	
	return 0;
}
