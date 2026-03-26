// create a program that dynamic changes the size of an array

#include <stdio.h>
#include  <stdlib.h>
int main(){

    int* ages;
    int n = 4;
    if (ages ==NULL) {
        printf("memory not allocated");
        return 0;
    }
    ages = (int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++) {
        printf("%d \n",*(ages +i));
    }
    printf("=====================\n");
    n = 6;

    ages = (int*)realloc(ages,n*sizeof(int));
    for (int i=0;i<n;i++) {
        printf("%d\n",*(ages+i));
        ages[4]=32;
        ages[5]=59;
    }
    free(ages);
    return 0;
}