#include<iostream>

int Bin(int n,int m){
    if (n==m||m==0) return 1;
    else return Bin(n-1,m)+Bin(n-1,m-1);
}

int main(){
    int n = 5;
    int m = 3;
    std::cout << Bin(n,m) << std::endl; 
}