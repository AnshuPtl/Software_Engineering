#include<stdio.h>
int fun(int a,int b){
	return(a+b);
}
void main(){
	int ans;
	int (*p)(int,int);
	p=fun;
	ans = (*p)(10,20);
	printf("%d",ans);
}
