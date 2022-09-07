#include <stdio.h>
int main(){
    int number;

    scanf("%d", &number);
    printf("%d", number);

    while(number != 1){
        if(number % 2){

            number = number * 3 + 1;

        } else{

            number /= 2;
        }
        printf("%d ", number);
        
    }
    return 0;
}