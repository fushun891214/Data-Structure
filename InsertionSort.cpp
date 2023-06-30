#include<iostream>

void insert(int arr[],int r,int i){
    arr[-1] = r;
    int j = i;
    while(r<arr[j]){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = r;
}

int insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        insert(arr,arr[i],i-1);
    }
}

int main(){
    int arr[5] = {5,3,4,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
}