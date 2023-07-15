#include <iostream>
#include <cstring>
#include <string>
#include <math.h>


//This function retruns true if a certain character exists in a string and false if not
//This function need a string S, any character c and the lenght l of the string
bool ExistsInTheString(std::string S, char c, int l){
    if(l <= 0){
        return false;
    }
    else if(S[l] == c){
        return true;
    }
    else{
        return ExistsInTheString(S, c, l-1);
    }
}




int main(){
    std::string String;
    std::cin >> String;
    int lenght = String.length();
    char c=0;
    std::cin >> c;
    if(ExistsInTheString(String, c, lenght)){
        std::cout << "this char exists";
    }else{
        std::cout << "this char doesnt exists";
    }


    return 0;
}