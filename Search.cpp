#include<iostream>

//Linear Serach Algorithm
//n is input data size,X is the searching key
int Search(int arr[],int n,int x){
    for (int i=0;i<n;i++){
        if (arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr [5] = {5,3,6,8,2};
    int len = sizeof(arr);
    std :: cout << Search(arr,len,2) << std ::endl;
}

//Linear Search Algorithm With Sentinel
int Search_Sentinel(int arr[],int n,int x){
    int i = n;
    arr[0] = x;
    while (arr[i] != x)
    {
        i--;
    }
    return i;
    
}