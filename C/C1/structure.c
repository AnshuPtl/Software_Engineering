#include<stdio.h>
#include<string.h>

struct address{
	int hno;
	int pin;
};

struct student{
	int id;
	int rollno;
	char name[30];
	struct address addr;
};
void main(){
	struct student s1={1,11,"dhruv",{101,3801};};
	struct student s2={2,12,"Deep"};
	struct student s3={3,13,"Anshu"};
	struct student s4={4,14,"Ridham"};
	struct student s5={5,15,"Jay"};
	struct student s6;
	struct student s7;
	printf("id = %d rollno = %d name = %s\n",s1.id,s1.rollno,s1.name,s1.addr.hno,s1.addr.pin);
	printf("id = %d rollno = %d name = %s\n",s2.id,s2.rollno,s2.name);
	printf("id = %d rollno = %d name = %s\n",s3.id,s3.rollno,s3.name);
	printf("id = %d rollno = %d name = %s\n",s4.id,s4.rollno,s4.name);
	printf("id = %d rollno = %d name = %s\n",s5.id,s5.rollno,s5.name);
	s6.id=6;
	s6.rollno=16;
	strcpy(s6.name,"xyz");
	printf("id = %d rollno = %d name = %s\n",s6.id,s6.rollno,s6.name);
	printf("enter id : ");
	scanf("%d",&s7.id);
	printf("roll no : ");
	scanf("%d",&s7.rollno);
	printf("enter name : ");
	scanf("%s",&s7.name);
	printf("id = %d rollno = %d name = %s\n",s7.id,s7.rollno,s7.name);
}
