#include<iostream>
#include<stdio.h>

int BinarySearch_Iterative(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = (l+r) / 2;
        if (arr[m] == x) 
            return m;
        if (arr[m] < x) 
            l = m + 1;
        else 
            r = m - 1;
    }
    return -1;
}

int main(){
    int arr [5] = {1,2,3,4,5};
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]);
    std :: cout << BinarySearch_Iterative(arr,l,r,5) << std ::endl;
}