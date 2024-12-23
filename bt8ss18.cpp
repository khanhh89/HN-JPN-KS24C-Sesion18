#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char fullName[50];
    int age;
    char numberPhone[50];
} Student;

void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Ho Va Ten: %s\n", students[i].fullName);
        printf("Tuoi: %d\n", students[i].age);
        printf("So Dien Thoai: %s\n\n", students[i].numberPhone);
    }
}

void insertStudent(Student students[], int *size, int position, Student newStudent) {
    if (*size >= 50) {
        printf("Danh sach da day, khong the them sinh vien moi!\n");
        return;
    }
    if (position < 0 || position > *size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        students[i] = students[i - 1];
    }
    students[position] = newStudent;
    (*size)++;
}

int main() {
    Student students[50] = {
        {1, "Dao Xuan Khanh", 18, "0936123456"},
        {2, "Tran Van A", 90, "0653496849"},
        {3, "Nguyen Van B", 78, "0938284323"},
        {4, "Le Van C", 99, "0394258454"},
        {5, "Tong Gia N", 34, "0594385659"},
    };

    int size = 5;

    printf("Danh sach sinh vien hien tai:\n");
    printStudents(students, size);

    Student newStudent;
    printf("Nhap thong tin sinh vien moi:\n");
    newStudent.id = size + 1;
    printf("Ho va Ten: ");
    getchar();
    fgets(newStudent.fullName, sizeof(newStudent.fullName), stdin);
    newStudent.fullName[strcspn(newStudent.fullName, "\n")] = '\0';

    printf("Tuoi: ");
    scanf("%d", &newStudent.age);

    printf("So Dien Thoai: ");
    getchar();
    fgets(newStudent.numberPhone, sizeof(newStudent.numberPhone), stdin);
    newStudent.numberPhone[strcspn(newStudent.numberPhone, "\n")] = '\0';

    int position;
    printf("Nhap vi tri de chen (0-%d): ", size);
    scanf("%d", &position);

    insertStudent(students, &size, position, newStudent);

    printf("Danh sach sau khi chen sinh vien moi:\n");
    printStudents(students, size);

    return 0;
}

