#include<stdio.h>

int main(){
	int number, firstNumber,secondNumber,thirdNumber,fourthNumber, reversed;
	printf("Moi nhap so nguyen co 4 chu so: ");
	scanf("%d", &number);
firstNumber = number/1000;

secondNumber = number/100%10;

thirdNumber = number/10%10;

fourthNumber = number%10;

reversed = fourthNumber*1000+thirdNumber*100+secondNumber*10+firstNumber;

printf("So nghich dao la: %d",reversed);

   return 0;
}
