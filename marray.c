#include <stdlib.h>
#include "marray.h"


// array initializer 
Marray* init_array(int capacity){
    Marray *arr = (Marray*)malloc(sizeof(Marray));
    arr->data = (int*)malloc(sizeof(int)*capacity);
    arr->size = 0;
    arr->capacity = capacity;
    return arr;

}

// insert fucntion
void insert(Marray *arr, int value){
    if (arr->size == arr->capacity){
        arr->capacity *= 2;
        arr->data =(int*)realloc(arr->data, sizeof(int) * arr->capacity);
    }
    arr->data[ arr->size] = value;
    arr->size++;
}

// geting the element index
int get(Marray *arr, int index){
    if (index < 0 || index >=arr->size){
        return -1;
    }
    return arr->data[index];
}

// setting the elements in arrya
int set(Marray *arr, int index, int value){
    if (index >= 0 && index < arr->size ){
        arr->data[index] = value;
    }
}

// free hehe
void Mfree(Marray *arr){
    free(arr->data);
    free(arr);
}