#include<stdio.h>
struct sinhVien{
		char name[100];
		int age;
		char phoneNumber[15];
	};
int main(){
	struct sinhVien sv[5];
    for (int i = 0; i < 5; i++) {
        printf("\nNhap thong tin cho sinh vien thu %d:\n", i + 1);
        printf("Ten: ");
        fflush(stdin);
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        printf("Tuoi: ");
        scanf("%d", &sv[i].age);
        printf("So dien thoai: ");
        fflush(stdin);
        fgets(sv[i].phoneNumber, sizeof(sv[i].phoneNumber), stdin);
    }
    printf("\n-----------------------------\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
    }

	return 0;
} 
