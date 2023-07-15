#include <iostream>
#include <string>
#include <math.h>


int Fibonacci(int n){
    //Base Case
    if(n==0){ //-> element 0 of fibonacci
        return n;
    }
    else if(n==1){//-> element 1 of fibonacci
        return n;
    }
    else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }

}


int main(){

    int x=0, NthTermOfFibonacci=0;
    std::cin >> x;
    NthTermOfFibonacci = Fibonacci(x);
    std::cout << NthTermOfFibonacci;

    return 0;
}