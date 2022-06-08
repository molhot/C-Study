#include <stdio.h>

int ft_str_is_alpha(char *str){
    int judge;

    judge = 0;
    while(*str != '\0'){
        if((65 > *str) | (90 < *str)){
            if((97 > *str) | (122 < *str)){
                judge = 1;
            }
        }
        str = str + 1;
    }

    return judge;
}

int main(){
    char test[] = "yamutyamutya2siyagatte";
    int judge;

    judge = ft_str_is_alpha(&test[0]);
    printf("%d",judge);
}