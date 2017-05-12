#ifndef __MINPQUEUE_H_INCLUDED__
#define __MINPQUEUE_H_INCLUDED__

#include<iostream>
#include<random>
#include<time.h>

using namespace std;

template <typename E> class MinPQueue{
    private:
        int arr_size, size;
        E **arr;
        void min_heapify(int i);
    public:
        MinPQueue(int arr_size);
        ~MinPQueue();
        bool is_empty();
        E * extract_min();
        E * get_min();
        void insert(E *e);
        void decrease_key(int i, E *e);
        void print();
};

template <typename E> void MinPQueue<E>::min_heapify(int i){
    int j;
    E *tmp;
    while (2*i <= this->size) {
        j = 2*i;
        if(j < this->size && *(this->arr[j]) > *(this->arr[j+1])){
            ++j;
        }
        if(*(this->arr[i]) < *(this->arr[j])){
            break;
        }
        tmp = this->arr[i];
        this->arr[i] = this->arr[j];
        this->arr[j] = tmp;
        i = j;
    }
}
template <typename E> MinPQueue<E>::MinPQueue(int arr_size){
    this->arr_size = arr_size;
    this->size = 0;
    arr = new E*[arr_size + 1];
}
template <typename E> MinPQueue<E>::~MinPQueue(){
    delete [] this->arr;
}
template <typename E> bool MinPQueue<E>::is_empty(){
    return this->size == 0;
}
template <typename E> E * MinPQueue<E>::extract_min(){
    E *min = arr[1];
    this->arr[1] = this->arr[this->size];
    this->arr[this->size--] = NULL;
    this->min_heapify(1);
    return min;
}
template <typename E> E * MinPQueue<E>::get_min(){
    return this->arr[1];
}
template <typename E> void MinPQueue<E>::insert(E *e){
    if(this->size >= this->arr_size){
        cout << "Full" << endl;
    }
    this->arr[++(this->size)] = e;
    int i = this->size;
    E *tmp;
    while(i > 1 && *(this->arr[i/2]) > *(this->arr[i])){
        tmp = this->arr[i];
        this->arr[i] = this->arr[i/2];
        this->arr[i/2] = tmp;
        i /= 2;
    }
}
template <typename E> void MinPQueue<E>::decrease_key(int i, E *e){
    if(i > this->size || i <= 0){
        cout << i << " is not valid." << endl;
        return;
    }
    if(*e <= *(this->arr[i])){
        cout << "Key is bigger." << endl;
        return;
    }
    this->arr[i] = e;
    E *tmp;
    while(i > 1 && *(this->arr[i/2]) > *(this->arr[i])){
        tmp = this->arr[i];
        this->arr[i] = this->arr[i/2];
        this->arr[i/2] = tmp;
        i /= 2;
    }
}
template <typename E> void MinPQueue<E>::print(){
    for(int i = 1; i <= this->size; ++i){
        cout << *this->arr[i] << ", ";
    }
    cout << endl;
}

#endif
