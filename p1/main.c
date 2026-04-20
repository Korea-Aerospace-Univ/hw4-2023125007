#include <stdio.h>

int main(void){
    int answer = 0;
    int insert = 0;
    int count = 0;
    scanf("%d", &answer);

    do{
        scanf(" %d", &insert);
        count += 1;

        if(insert < answer){
            printf("%d<?", insert);
        }
        else{
            printf("%d>?", insert);
        }
    } while(insert != answer);

    printf("%d==?\n", insert);
    printf("%d", count);
    return 0;
}
