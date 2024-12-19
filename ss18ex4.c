#include<stdio.h>
struct sinhVien{
	char id[20]; 
	char name[100];
	int age;
	char phoneNumber[15];
	};
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
int main(){
	struct sinhVien sv[50];
	nhap(sv); 
	in(sv); 
	return 0; 
} 

