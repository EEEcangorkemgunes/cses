#include <iostream>
int main(){
    int number;

    std::cin >> number;
    std::cout << number;

    while(number != 1){
        if(number % 2){
            number = number * 3 + 1;
        } else{
            number /= 2;
        }
        std::cout << number << "";
    }
    return 0;
}