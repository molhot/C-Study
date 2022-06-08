#include <stdio.h>

void changewords(char *str){
    while(*str != '\0'){
        if(*str == 32){
            str = str + 1;
            if((97 <= *str) & (*str <= 122)){
                *str = *str - 32;
                str = str + 1;
            }
            else{
                str = str + 1;
            }
        }
        else if((65 <= *str) & (*str <= 90)){
            *str = *str + 32;
            str = str + 1;
        }
        else{
            str = str + 1;
        }
    }
}

char *ft_strcapitalize(char *str){
    char *first;

    first = str;
    if(*str == '\0'){
        return str;
    }
    else if((97 <= *str) & (*str <= 122)){
        first = str;
        *str = *str - 32;
        str = str + 1;
        changewords(str);
    }
    return first;
}

int main(){
    char src[] = "i am dog! wAn wan ; This is A d+o+G!?";
    char *change;

    change = ft_strcapitalize(&src[0]);
    printf("%s",change);
}