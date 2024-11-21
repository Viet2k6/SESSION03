#include<stdio.h>

int main(){

 float toan, van, anh, sum, average;

printf("Moi nhap diem toan: ");
scanf("%f", &toan);

printf("Moi nhap diem van: ");
scanf("%f", &van);

printf("Moi nhap diem anh: ");
scanf("%f", &anh);

sum= toan + van + anh;

average = sum/3;

printf("Diem tong la: %.2f\n",sum);

printf("Diem trung binh la: %.2f",average);
   
   return 0;
}
