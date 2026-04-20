#include <stdio.h>

int main(void){
    int N = 0;
    scanf("%d", &N);

    int countDigit = 0;
    int maxDigit = 0;
    int countLower = 0;
    int maxLower = 0;
    char current = 0;

    for(int i = 0; i<N; i++){
        scanf(" %c", &current);

        if('a' <= current && current <= 'z'){
            countLower += 1;
            countDigit = 0;
        }
        else if('0' <= current && current <= '9'){
            countDigit += 1;
            countLower = 0;
        }
        else{
            countDigit = 0;
            countLower = 0;
        }

        if(countDigit > maxDigit) maxDigit = countDigit;
        if(countLower > maxLower) maxLower = countLower;
    }

    printf("%d\n", maxLower);
    printf("%d", maxDigit);
    return 0;
}
