#ifndef MYARRAY_H
#define MYARRAY_H

typedef struct {
    int *data;
    int size;
    int capacity;
}Marray;

Marray* init_array(int capacity);
void insert(Marray *arr, int value);
int get(Marray *arr, int index);
int set(Marray *arr, int index, int value);
void Mfree(Marray *arr);

#endif