#include <stdio.h>

int ft_str_is_numeric(char *str){
    int judge;

    judge = 0;
    if(*str == '\0'){
        judge = 1;
    }
    while(*str != '\0'){
        if((48 > *str) | (57 < *str)){
            judge = 1;
        }
        str = str + 1;
    }

    return judge;
}

int main(){
    char test[] = "";
    int judge;

    judge = ft_str_is_numeric(&test[0]);
    printf("%d",judge);
}