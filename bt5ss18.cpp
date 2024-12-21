#include<stdio.h>
int main(){
    struct students{
        int id;
        char name[50];
        int age;
        char phoneNumber[50];
    };
    struct students student[]={
		{1," Dao Xuan Khanh", 18," 0936123456"},
		{2," Tran Van A", 90," 0653496849"},
		{3," Nguyen Van B", 78," 0938284323"},
		{4," Le van C", 99," 0394258454"},
		{5," Tong Gia N", 34," 0594385659"},
		};
    int search;
    int count = 5;
    int found = 0;
    printf("Nhap id de chinh sua: ");
    scanf("%d",&search);
    for(int i=0;i<count;i++){
    	if(student[i].id ==search){
    		found=1;
    		printf("Da tim thay sinh vien %d\n",search);
    		printf("================================\n");
    		printf("Nhap ten moi: ");
    		getchar();
    		fgets(student[i].name, sizeof(student[i].name), stdin);
    		
    		printf("Nhap tuoi moi: ");
    		scanf("%d",&student[i].age);
    		printf("Sua xong!!\n");
    		printf("=============================");
    		}
    	}
	if (!found) {
        printf("Khong tim thay sinh vien co ID = %d.\n", search);
    printf("=========================================");
    printf("\nThong tin sinh vien hien tai la:\n");
    for(int i=0;i<5;i++){
            printf("%d\n",student[i].id);
            printf("%s\n",student[i].name);
            printf("%d\n",student[i].age);
            printf("%s\n\n",student[i].phoneNumber);
        }
    return 0;
}
