#include<stdio.h>
#include<string.h>
	struct Students{
		int age;
		char phoneNumber[20];
		char fullName[100];
	};
int main(){
	struct Students students[5];
	 	printf("Moi ban nhap thong tin sinh vien.\n");
		for(int i=0;i<5;i++){
			printf("Sinh vien thu %d: \n",i+1);
			printf("Moi ban nhap ten day du cua sinh vien: ");
			getchar();
			fgets(students[i].fullName, sizeof(students[i].fullName),stdin);
			printf("Moi ban nhap vao so tuoi: ");
			scanf("%d",&students[i].age);
			printf("Moi ban nhap vao so dien thoai cua sinh vien: ");
			scanf("%s",&students[i].phoneNumber);
			}
		printf("Day la thong tin sing vien da nhap: \n");
		for(int i=0;i<5;i++){
			printf("Sinh vien thu %d: \n",i+1);
			printf("Ten day du %s: ",students[i].fullName);
			printf("So tuoi hien tai cua sinh vien %d: \n",students[i].age);
			printf("So dien thoai cua sinh vien %s: \n",students[i].phoneNumber);
		}
	return 0;
}

