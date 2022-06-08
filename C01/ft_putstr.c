#include<unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_putstr(char *str){
    while(*str != '\0'){
        ft_putchar(*str);
        str = str + 1;
    }
}

int main(){
    char str1[4] = "123";

    ft_putstr(&str1[0]);
}