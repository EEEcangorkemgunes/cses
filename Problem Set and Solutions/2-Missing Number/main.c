#include <stdio.h>
int main(){
    int n, i, total = 0, numbers;

    scanf("%d", &n);

    for(i = 0;i < n - 1; i++){
        scanf("%d", &numbers);
        total += numbers;
    }

    printf("%d", (n * (n + 1) / 2) - total);

    return 0;
}
