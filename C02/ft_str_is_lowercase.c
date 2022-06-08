#include <stdio.h>

int ft_str_is_lowercase(char *str){
    int judge;

    judge = 0;
    if(*str == '\0'){
        judge = 1;
    }
    while(*str != '\0'){
        if((97 > *str) | (122 < *str)){
            judge = 1;
        }
        str = str + 1;
    }

    return judge;
}

int main(){
    char test[] = "AbscdF";
    int judge;

    judge = ft_str_is_lowercase(&test[0]);
    printf("%d",judge);
}