#include<stdio.h>

int main(){

int canh, chieu_cao;
printf("Moi nhap do dai canh: ");
scanf("%d", &canh);

printf("Moi nhap do dai chieu cao: ");
scanf("%d", &chieu_cao);

float dien_tich;
dien_tich=0.5*canh*chieu_cao;

printf("Dien tich cua tam giac la: %.2f",dien_tich);

   return 0;
}
