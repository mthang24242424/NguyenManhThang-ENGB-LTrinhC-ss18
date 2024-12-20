#include<stdio.h>
struct sinhVien{
		char id[20];
		char name[100];
		int age;
		char phoneNumber[15];
	};
void nhap();
void in();
void check();
int main(){
	struct sinhVien sv[50];
	nhap(sv);
	check(sv);
	in(sv); 
	return 0;
}
void nhap(struct sinhVien sv[]){
	for(int i=0;i<5;i++){
		sprintf(sv[i].id, "SV%03d", i + 1);// tang id tu dong 
		printf("nhap ten sv thu %d: ",i+1);
		fgets(sv[i].name,100,stdin);
		printf("nhap tuoi: ");
		scanf("%d",&sv[i].age) ;
		getchar();
		printf("nhap so dien thoai: ");
		fgets(sv[i].phoneNumber,15,stdin);
	}
} 
void in(struct sinhVien sv[]){
	printf("----------------------------\n"); 
	for(int i=0;i<5;i++){
		printf("ten sv %d: %s\n",i+1,sv[i].name);
		printf("ID: %s\n", sv[i].id);
		printf("tuoi: %d\n",sv[i].age);
		printf("sdt: %s\n",sv[i].phoneNumber); 
	} 
} 
void check(struct sinhVien sv[]) {
    char idTimKiem[20];
    printf("\nNhap ID cua sinh vien can sua: ");
    fgets(idTimKiem, sizeof(idTimKiem), stdin);
    idTimKiem[strcspn(idTimKiem, "\n")] = 0;
    int timThay = 0;
    for (int i = 0; i < 5; i++) {
        if (strcmp(sv[i].id, idTimKiem) == 0) {
            timThay = 1;
            printf("\nSinh vien tim thay:\n");
            printf("ID: %s\n", sv[i].id);
            printf("Ten: %s\n", sv[i].name);
            printf("Tuoi: %d\n", sv[i].age);
            printf("\nNhap ten moi: ");
            fgets(sv[i].name, sizeof(sv[i].name), stdin);
            sv[i].name[strcspn(sv[i].name, "\n")] = 0; 
            printf("Nhap tuoi moi: ");
            scanf("%d", &sv[i].age);
            getchar();
            printf("\nThong tin sinh vien da duoc cap nhat.\n");
            break;
        }
    }
    if (!timThay) {
        printf("\nKhong tim thay sinh vien voi ID: %s\n", idTimKiem);
    }
}
