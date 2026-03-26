# Dynamic_allocation
DYNAMIC MEMORY ALLOCATION+++
C give to use three types of memory allocation
Malloc()==memory allocation
ex.
    
    #include <stdio.h>
    int main(){
    int n=100;
    int* ptr;
    ptr=(int *)malloc(n *sizeof(int);
    return 0;
    }
this is to access the free memory that the memory has to use that the pointer P storage as a address
Realloc()== is for to change the size of the dynamic allocated memory supposing that we need to change the size of it
ex

    #include <stdio.h>
    #include  <stdlib.h>
    int main(){

    int n=4;

    int* ptr;

    ptr=(int *)malloc(n *sizeof(int));
    if(ptr == NULL){
    printf("memory allocation failed");
        return 0;
    }

    printf("Allocated memory\n");
    for (int i =0; i<n;i++){
    printf(%p\n,ptr+i);
    }
    n = 6;
    ptr = realloc(ptr, *n sizeof(int));
  
    printf(" New allocated memory %d");
    for (int i =0; i <n ;i++){
    printf("%p\n",*(ptr+i))
     }

    free(ptr);
    return 0;
    }

free()==this is to release the remainder dynamic memory in allocated in the pointer
ex.

    #include <stdio.h>
    #include  <stdlib.h>
    int main(){

    int n=4;

    int* ptr;

    ptr=(int *)malloc(n *sizeof(int));
    if(ptr == NULL){
    printf("memory allocation failed");
        return 0;
    }

    printf("Enter input values\n");

    for (int i = 0;i<4;i++){
       scanf("%d",ptr+i );
    }
    printf("Enter input values\n");

    for (int i = 0;i<4;i++){
    printf("value are %d /number : %d\n",*(ptr +i) , i);
    }
    free(ptr);
    return 0;
    }
  there is some times where the malloc can return a NULL point so for that we have to create a condition to avoid that and at the end just free the memory in the ram

