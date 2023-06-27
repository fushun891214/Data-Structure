#include<iostream>

int Fac_Iterative(int n){
    int s =1;
    if (n==0) return 1;
    else{
        for(int i=1;i<=n;i++){
            s*=i;
        }
        return s;
    }
}

int Fac_Recursive(int n){
    if (n==0) return 1;
    else return Fac_Recursive(n-1)*n;
}

int main(){
    std::cout << Fac_Recursive(5) << std::endl; 
    std::cout << Fac_Iterative(5) << std::endl;
}