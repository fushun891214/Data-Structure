#include<iostream>

int Exp_recursive(int x,int n){
    if (n==0) return 0;
    else if (n>1) return x*Exp_recursive(x,n-1);
}

int Exp_recursive_LogN(int x,int n){
    int f;
    if (n%2==0) f=1;
    else f=x;
    if(n<=1) return f;
    return f*Exp_recursive_LogN(x*x,n/2);
}

int main(){
    int x = 2;
    int n = 7;
    std::cout << Exp_recursive(x,n) << std::endl;
    std::cout << Exp_recursive_LogN(x,n) << std::endl;
}