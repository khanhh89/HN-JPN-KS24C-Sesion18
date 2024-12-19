#include<stdio.h>
#include<string.h>
int main(){
	struct student{
	char fullName[100];
	int age;
	char phoneNumber[100];
	};
	struct student user01={"Dao Xuan Khanh",18,"0342684600"};
	printf("In thong tin sinh vien: ");
	printf("%s\t",user01.fullName);
	printf("%d\t",user01.age);
	printf("%s\t",user01.phoneNumber);
	return 0;
}

