#include<stdio.h>

int main(){
  const float PI = 3.14;
  
  int r;
   printf("Moi nhap ban kinh hinh tron: ");
   scanf("%d", &r);
  
  float chu_vi = 2*PI*r;
  
  printf("Chu vi hinh tron la %.2f\n", chu_vi);
  
  float dien_tich = PI*(r*r);
  
  printf("Dien tich hinh tron la %.2f", dien_tich);
  
  
  
   return 0;
}
