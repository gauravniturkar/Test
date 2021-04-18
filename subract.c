#include<stdio.h>

int main(){
  int a, b, subtract;
  printf("Enter two numbers\n");
  scanf("%d%d", &a, &b);
  subtract = a - b;
  printf("The subtraction of the two numbers is %d", subtract);
  return 0;
}
