#include<stdio.h>
int main(){
	struct sinhVien{
		char name[100];
		int age;
		char phoneNumber[15];
	};
	struct sinhVien sv01;
	printf("nhap ten: ");
	fgets(sv01.name,100,stdin);
	printf("nhap tuoi: ");
	scanf("%d",&sv01.age);
	getchar();
	printf("ghi so dien thoai: ");
	fgets(sv01.phoneNumber,15,stdin);
	printf("ten sinh vien: %s\n",sv01.name);
	printf("tuoi: %d\n",sv01.age);
	printf("so dien thoai: %s\n",sv01.phoneNumber);
	return 0;
}
