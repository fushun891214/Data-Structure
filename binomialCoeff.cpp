#include<iostream>

int min(int i,int j){
    if (i<j) return i;
    else return j;
}

int binomialCoeff(int n,int k){
    int C[n+1][k+1];
    int i;
    int j;

    for (i=0;i<=n;i++){
      for(j=0;j<=min(i,k);j++){
        if(j==0 || j==i)
            C[i][j] = 1;
        else
            C[i][j] = C[i-1][j-1] + C[i-1][j];
      }  
    }
    return C[n][k];
}

int main(){
    int n = 5;
    int k = 3;
    std:: cout << binomialCoeff(n,k) << std:: endl;
}
