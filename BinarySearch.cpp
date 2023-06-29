#include<iostream>
#include<stdio.h>

int BinarySearch_Recursive(int arr[],int l,int r,int x){
    if (l<=r){
        int mid = (l+r)/2;
        if (arr[mid]==x)
            return mid;
        else if (arr[mid]>x)
            return BinarySearch_Recursive(arr,l,mid-1,x);
        else
            return BinarySearch_Recursive(arr,mid+1,r,x);
    }
}

int main(){
    int arr [5] = {1,2,3,4,5};
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]);
    std :: cout << BinarySearch_Recursive(arr,l,r,5) << std ::endl;
}

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