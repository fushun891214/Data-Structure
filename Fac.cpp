#include<iostream>

int Fac(int n){
    int s =1;
    if (n==0) return 1;
    else{
        for(int i=1;i<=n;i++){
            s*=i;
        }
        return s;
    }
}

int main(){
    std::cout << Fac(5) << std::endl; 
}