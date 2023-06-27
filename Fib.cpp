#include <iostream>

int Fib_DP(int n){ //DP
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

int main()
{
    int n = 5;
    //std::cout << Fib_Interative(n) << std::endl;
    //std::cout << Fib_recursive(n) << std::endl;
    std::cout << Fib_DP(n) << std::endl;
}

int Fib_recursive(int n){ //recursive
    if (n==0) return 0;
    if (n==1) return 1;
    else return Fib_recursive(n-1)+Fib_recursive(n-2);
}

int Fib_Interative(int n){
    if (n==0) return 0;
    else if (n==1) return 1;
    else{
        int a=0,b=1,c;
        for (int i=2;i<=n;i++){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
}
