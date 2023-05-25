#include <iostream>

int Fib_recursive(int n){ //recursive
    if (n==0) return 0;
    if (n==1) return 1;
    else return Fib_recursive(n-1)+Fib_recursive(n-2);
}

int Fib_Iterative(int n){ //Iterative
    int F [n+1] ;
    F [0] = 0;
    F [1] = 1;
    if (n==0) return F[0];
    else if (n==1) return F[1] ;
    else {
        for (int i=2; i<=n;i++ ){
            F[i] = F[i-1]+F[i-2];
        }
        return F[n];
    }
}

int Fib(int n){
    if (n==0||n==1) return 1;
    else return Fib(n-1)+Fib(n-2);
}

int main()
{
    int n = 5;
    std::cout << Fib(n) << std::endl;
}
