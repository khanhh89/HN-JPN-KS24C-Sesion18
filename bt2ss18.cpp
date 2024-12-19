#include<stdio.h>
#include<string.h>
int main(){
	struct student{
		int age;
		char fullName[100];
		char phoneNumber[100];
	};
	struct student usesr02;
	printf("Moi ban nhap thong tin sinh vien.\n");
	printf("Nhap ten day du cho sinh vien: ");
	scanf("%s",&usesr02.fullName);
	fflush(stdin);
	printf("Nhap tuoi cho sinh vien: ");
	scanf("%d",&usesr02.age);
	printf("Moi ban nhap phone number cho sinh vien: ");
	scanf("%s",&usesr02.phoneNumber);
	printf("Thong tin sinh vien ban vua nhap la: ");
	printf("%s\t",usesr02.fullName);
	printf("%d\t",usesr02.age);
	printf("%s",usesr02.phoneNumber);
	return 0;
}

