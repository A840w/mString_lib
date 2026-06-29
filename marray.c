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

// removing allocations 
void MRmAt(Marray *arr, int index) {
    if (index < 0 || index >= arr->size)return;

    for (int i = index; i < arr->size -1; i++){
        arr->data[i] = arr->data[i + 1];
    }
   arr->size--;
}

// searching elements
int Msearch(Marray *arr, int value){
    for (int i = 0; i < arr->size; i++){
        if(arr->data[i] == value) return i;
    }
    return -1;
}

// sorting of array
void Msort(Marray *arr){
    for(int i = 0; i < arr->size -1; i++){
        for(int j = 0; j < arr->size - i - 1; j++) {
            if(arr->data[j] > arr->data[j +1 ]){
                int temp = arr-> data[j];
                arr->data[j]= arr->data[j + 1];
                arr->data[j + 1] = temp;
            }
        }
    }
}

// resing arrays
void Mresize(Marray *arr, int new_capacity){
    if (new_capacity < arr->size)return;
    arr->capacity = new_capacity;
    arr->data = (int*)realloc(arr->data, sizeof(int)* new_capacity);
}