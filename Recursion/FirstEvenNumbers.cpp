#include <iostream>
#include <string>
#include <math.h>


int SumOfEvenNumbers(int n){
    //Base Case (Stops when the number 2 appears)
    if(n==2){
        return n;
    }

    //Verify if n is even
    if(n%2){
        return SumOfEvenNumbers(n-1);
    }else{
        return n + SumOfEvenNumbers(n-2);
    }
}


int main(){
    int x=0, TotalSum=0;
    std::cin >> x;
    TotalSum = SumOfEvenNumbers(x);
    std::cout << TotalSum;

    return 0;
}