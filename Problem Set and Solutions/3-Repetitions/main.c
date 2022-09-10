#include <stdio.h>
#include <string.h>
int main() {
    char str[1000000];
    int max = 0,current = 1, i;
    scanf("%s",str, sizeof(str));
    for (i = 0; i < strlen(str)-1; i++){
        if (str[i] == str[i+1]) {
            current++;
        }else{
            if(current > max){
                max = current;
            }
            current = 1;
        }
    }
    if(current > max){
        max = current;
    }

    printf("%d",max);
    return 0;
}