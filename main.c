#include <stdio.h>
#include "marray.h"

int main() {
    Marray *arr = init_array(2);
    insert(arr,10);
    insert(arr, 20);
    insert(arr,30);
    insert(arr, 9);
    insert(arr, 2);
    insert(arr, 5);

    printf("elemenet at index 1: %d \n", get(arr, 0) );
    printf("element at index 2: %d\n",get(arr,2));
    set(arr, 2, 69);
    printf("changed alloaction of data: %d\n",get(arr,2));

    printf("before sorting:\n");
    for (int i = 0; i < arr->size; i++) printf("%d ", get(arr, i));
    printf("\n");
    Msort(arr);
    printf("After removing index 1:\n");
    for (int i = 0; i < arr->size; i++) printf("%d ", get(arr, i));
    printf("\n");


    int idx = Msearch(arr, 9);
    printf("index of 9: %d\n",idx);


    printf("array size: %d, capacity %d", arr->size, arr->capacity);
    printf("\n");
    MRmAt(arr, 0);
    printf("After removing index 1:\n");
    for (int i = 0; i < arr->size; i++) printf("%d ", get(arr, i));
    printf("\n");
    Mfree(arr);



    // char str1[50] = "heello";
    // char str2[] = "sahil";
    // printf("the length of the str1 is: %d\n", Mstrlen(str1));
    // printf("compare str1 & and str2: %d\n", Mstrcmp(str1, str2));
    // Mstrcat(str1,str2);
    // printf("after strcat: %s\n", str1);

    // char *sub = Msubstr(str1, 1,2);
    // printf("substraction of str1: %s\n", sub);
    // free(sub);

    return 0;
}