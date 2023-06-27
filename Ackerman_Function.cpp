#include<iostream>

int AckermanFunction(int m,int n){
    if (m==0) return n+1;
    else if (n==0) return AckermanFunction(m-1,1);
    return AckermanFunction(m-1,AckermanFunction(m,n-1));
}

int main(){
    std::cout << AckermanFunction(2,2) << std::endl;
}