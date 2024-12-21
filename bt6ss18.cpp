#include<stdio.h>
#include<string.h>
int main(){
    int count=5;
    struct Student{
        int id;
        char name[50];
        int age;
        char phoneNumber[50];
    };
    struct Student students[50]={{1, "Dao Xuan Khanh",18,"0936123456"},{2, "Tran Van A",90,"0653496849"},{3, "Nguyen Van B",78,"0938284323"},{4, "Le van C",99,"0394258454"},{5, "Tong Gia N",34,"0594385659"},};
    if(count<50){
        students[count].id=count+1;
        printf("Nhap ten cho sinh vien moi: ");
        getchar();
        fgets(students[count].name,sizeof(students[count].name),stdin);
        students[count].name[strcspn(students[count].name, "\n")] = '\0';
        printf("Nhap tuoi cho sinh vien moi: ");
        scanf("%d",&students[count].age);
        printf("Nhap so dien thoai cho sinh vien moi: ");
        fgets(students[count].phoneNumber,sizeof(students[count].phoneNumber),stdin);
        getchar();
        students[count].phoneNumber[strcspn(students[count].phoneNumber, "\n")] = '\0';
        count++;
        printf("Them thanh cong sinh vien moi!!\n");
        }else{
        printf("Danh sach khong con trong,khong the them!!!!");
    }
    printf("Danh sach sinh vien day du: \n");
    for(int i=0;i<count;i++){
        printf("%d",students[i].id);
        printf("%s",students[i].name);
        printf("%d",students[i].age);
        printf("%s",students[i].phoneNumber);
    }
    return 0;
}