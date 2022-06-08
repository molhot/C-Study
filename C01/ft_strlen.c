#include <stdio.h>

int ft_putstr(char *str){
    int counter;

    counter = 0;
    while(*str != '\0'){
        counter = counter + 1;
        str = str + 1;
    }

    return counter;
}

int main(){
    char str1[4] = "123";
    int count;

    count = ft_putstr(&str1[0]);
    printf("%d",count);
}