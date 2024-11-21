#include<stdio.h>

int main(){
	int number, firstNumber,secondNumber,thirdNumber,fourthNumber, sum;
	printf("Moi nhap so nguyen co 4 chu so: ");
	scanf("%d", &number);
firstNumber=number/1000;

secondNumber=number/100%10;

thirdNumber=number/10%10;

fourthNumber=number%10;

sum = firstNumber+secondNumber+thirdNumber+fourthNumber;

printf("Tong cua 4 chu so la: %d",sum);

   return 0;
}
