#include<iostream>

int GCD(int A,int B){
    if (A%B == 0) return B;
    else return GCD(B,A%B);
}

int main(){
    int A = 36;
    int B = 6;
    std::cout << GCD(A,B) << std::endl;
}