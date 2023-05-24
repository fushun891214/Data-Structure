#include<iostream>

int Sum(int n){
    if (n == 0) return 0;
    else return n+Sum(n-1);
}

int main(){
    int n = 2;
    std:: cout << Sum(n) << std::endl;
}

