#include<stdio.h>
int main(){
	struct sinhVien{
		char name[100];
		int age;
		char phoneNumber[15];
	};
	struct sinhVien sv01 = {"Nguyen Manh Thang",18,"0123456789"};
	printf("ten sinh vien: %s\n",sv01.name);
	printf("tuoi: %d\n",sv01.age);
	printf("so dien thoai: %s\n",sv01.phoneNumber);
	return 0;
}
