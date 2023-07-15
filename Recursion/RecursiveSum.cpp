#include <iostream>
#include <string>
#include <math.h>


//Return the sum of the first n natural numbers
int RecursiveSum(int n){
    //Base Case
    if(n<=1){
        return n;
    }else{
        return n + RecursiveSum(n-1);
    }
}

int main(){
    int x=0, TotalSum=0;
    std::cin >> x;
    TotalSum = RecursiveSum(x);
    std::cout << TotalSum;

    return 0;
}