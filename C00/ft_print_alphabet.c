#include<unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

int main(){
    char sub;
    int i;

    i = 0;
    sub = 'a';
    while(i < 26){
        ft_putchar(sub);
        sub = sub + 1;
        i = i + 1;
    }
}