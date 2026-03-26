//
// Created by marce on 3/8/2026.
//#
#include <stdio.h>
void swap(int *a,int *b);

int main() {
   int num1,num2;
    num1 = 23;
    num2= 3;
    int *a = &num1;
    int *b = &num2;
    swap(a,b);
    printf("%p----> %p\n",*a,*b);
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}