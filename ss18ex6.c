#include <stdio.h>
#include <string.h>
struct sinhVien {
    char id[20];
    char name[100];
    int age;
    char phoneNumber[15];
};
void nhap(struct sinhVien* sv);
void in(struct sinhVien sv[], int soLuong);
void add(struct sinhVien sv[], int* soLuong);
int main() {
    struct sinhVien sv[50];  
    int soLuong = 5;
    for (int i = 0; i < soLuong; i++) {
        sprintf(sv[i].id, "SV%03d", i + 1);
        sprintf(sv[i].name, "Sinh Vien %d", i + 1);
        sv[i].age = 20 + i;
        sprintf(sv[i].phoneNumber, "0123456789");
    }
    themSinhVien(sv, &soLuong);
    printf("\nDanh sach sinh vien sau khi them moi:\n");
    inSinhVien(sv, soLuong);
    return 0;
}
void nhapSinhVien(struct sinhVien* sv) {
    printf("Nhap ten sinh vien: ");
    fgets(sv->name, sizeof(sv->name), stdin);
    sv->name[strcspn(sv->name, "\n")] = 0; 
    printf("Nhap tuoi: ");
    scanf("%d", &sv->age);
    getchar(); 
    printf("Nhap so dien thoai: ");
    fgets(sv->phoneNumber, sizeof(sv->phoneNumber), stdin);
    sv->phoneNumber[strcspn(sv->phoneNumber, "\n")] = 0;  
}
void inSinhVien(struct sinhVien sv[], int soLuong) {
    printf("----------------------------\n");
    for (int i = 0; i < soLuong; i++) {
        printf("ID: %s\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("SDT: %s\n", sv[i].phoneNumber);
        printf("----------------------------\n");
    }
}
void themSinhVien(struct sinhVien sv[], int* soLuong) {
    if (*soLuong < 50) {  // Ki?m tra n?u m?ng chua d?y
        printf("\nNhap thong tin sinh vien can them:\n");
        nhapSinhVien(&sv[*soLuong]);
        sprintf(sv[*soLuong].id, "SV%03d", *soLuong + 1);
        (*soLuong)++;
        printf("\nSinh vien da duoc them vao danh sach!\n");
    } else {
        printf("\nDanh sach sinh vien da day!\n");
    }
}
