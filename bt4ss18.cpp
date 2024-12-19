#include<stdio.h>
#include<string.h>


int main(){
	struct Student{
	int age;
	int id;
	char fullName[100];
	char phoneNumber[100];
	};
	struct Student students[50];
	int n=5;
	printf("Moi ban nhap thong tin cho %d sinh vien.\n",n);
	for(int i=0;i<n;i++){
		students[i].id=i+1;
		printf("Sinh vien thu %d: \n",students[i].id);
		printf("Nhap ten day du cho sinh vien: ");
		getchar();
		fgets(students[i].fullName,sizeof(students[i].fullName),stdin);
		printf("Nhap tuoi cho sinh vien: ");
		scanf("%d",&students[i].age);
		printf("Nhap so dien thoai cho sinh vien: ");
		scanf("%s",&students[i].phoneNumber);
		}
		printf("Day la htong tin sinh vien vua nhap: \n");
		for(int i=0;i<n;i++){
			printf("Sinh vien thu %d\n",students[i].id);
			printf("ID: %d\n",students[i].id);
			printf("Ten sinh vien la: %s\n",students[i].fullName);
			printf("Tuoi sinh vien la: %d\n",students[i].age);
			printf("So dien thoai cua sinh vien la: %s\n",students[i].phoneNumber);
			}
	return 0;
}
