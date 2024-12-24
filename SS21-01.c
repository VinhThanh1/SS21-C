#include<stdio.h> 
int main(){
	FILE *fptr; // khai bao bien con tro de lam viec voi file
	char s[100];
	fptr = fopen("bt01.txt", "w");
	printf("Nhap mot chuoi bat ky: ");
	fgets(s, sizeof(s),stdin);
	fprintf(fptr," %s", s);
	fclose(fptr); // dong file
	return 0;
}
