#include<stdio.h>
#include<conio.h>
void fun(char i){
	printf("This is a fun function\n");
}
void func(){
	printf("This is a second fun function");
}
void run();
void main(){
	func();
	fun('a');
	run();
}
void run(){
	printf("function is running\n");
}
