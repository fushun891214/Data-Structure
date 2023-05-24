#include<iostream>

int Sum(int n){
    if (n == 0) return 0;
    else if (n > 0)
    {
        return Sum(n-1)+Sum(n);
    }
}

int main(){
    int n = 5;
    std:: cout << Sum(n) << std::endl;
}

