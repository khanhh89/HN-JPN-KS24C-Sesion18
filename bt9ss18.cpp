#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    int count = 4;
    struct Dish {
        int id;
        char name[50];
        double price;
    };

    struct Dish Menu[100] = {
        {1, "Com muoi", 30.0},
        {2, "Xoi trang", 15.0},
        {3, "Thit kho", 50.0},
        {4, "Xoi lac", 10.0},
    };

    do {
        printf("\n__________MENU__________\n");
        printf("1. In danh sach cac mon an trong menu.\n");
        printf("2. Them mot mon an moi vao menu.\n");
        printf("3. Sua thong tin mot mon an.\n");
        printf("4. Xoa mot mon an khoi menu.\n");
        printf("5. Sap xep menu theo gia tang dan.\n");
        printf("6. Tim kiem mon an theo ten.\n");
        printf("7. Thoat.\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nDanh sach mon an trong menu:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. %s - %.2f VND\n", Menu[i].id, Menu[i].name, Menu[i].price);
                }
                break;

            case 2: {
                if (count < 100) {
                    Menu[count].id = count + 1;
                    printf("Nhap ten mon an moi: ");
                    getchar();
                    fgets(Menu[count].name, sizeof(Menu[count].name), stdin);
                    Menu[count].name[strcspn(Menu[count].name, "\n")] = '\0';
                    printf("Nhap gia mon an: ");
                    scanf("%lf", &Menu[count].price);
                    count++;
                    printf("Them mon an thanh cong!\n");
                } else {
                    printf("Menu da day, khong the them mon an moi.\n");
                }
                break;
            }

            case 3: {
                int editId, found = 0;
                printf("Nhap ID mon an can sua: ");
                scanf("%d", &editId);
                for (int i = 0; i < count; i++) {
                    if (Menu[i].id == editId) {
                        found = 1;
                        printf("Nhap ten moi: ");
                        getchar();
                        fgets(Menu[i].name, sizeof(Menu[i].name), stdin);
                        Menu[i].name[strcspn(Menu[i].name, "\n")] = '\0';
                        printf("Nhap gia moi: ");
                        scanf("%lf", &Menu[i].price);
                        printf("Sua thong tin mon an thanh cong!\n");
                        break;
                    }
                }
                if (!found) {
                    printf("Khong tim thay mon an voi ID %d.\n", editId);
                }
                break;
            }

            case 4: {
                int deleteId, found = 0;
                printf("Nhap ID mon an can xoa: ");
                scanf("%d", &deleteId);
                for (int i = 0; i < count; i++) {
                    if (Menu[i].id == deleteId) {
                        found = 1;
                        for (int j = i; j < count - 1; j++) {
                            Menu[j] = Menu[j + 1];
                        }
                        count--;
                        for (int j = 0; j < count; j++) {
                            Menu[j].id = j + 1;
                        }
                        printf("Xoa mon an thanh cong!\n");
                        break;
                    }
                }
                if (!found) {
                    printf("Khong tim thay mon an voi ID %d.\n", deleteId);
                }
                break;
            }

            case 5: {
                for (int i = 0; i < count - 1; i++) {
                    for (int j = i + 1; j < count; j++) {
                        if (Menu[i].price > Menu[j].price) {
                            struct Dish temp = Menu[i];
                            Menu[i] = Menu[j];
                            Menu[j] = temp;
                        }
                    }
                }
                printf("Sap xep menu theo gia thanh cong!\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. %s - %.2f VND\n", Menu[i].id, Menu[i].name, Menu[i].price);
                }
                break;
            }

            case 6: {
                char search[50];
                printf("Nhap ten mon an can tim: ");
                getchar();
                fgets(search, sizeof(search), stdin);
                search[strcspn(search, "\n")] = '\0';
                printf("Ket qua tim kiem:\n");
                int found = 0;
                for (int i = 0; i < count; i++) {
                    if (strstr(Menu[i].name, search)) {
                        printf("%d. %s - %.2f VND\n", Menu[i].id, Menu[i].name, Menu[i].price);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay mon an nao khop voi tu khoa '%s'.\n", search);
                }
                break;
            }

            case 7:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le, vui long chon lai!\n");
        }
    } while (choice != 7);

    return 0;
}

