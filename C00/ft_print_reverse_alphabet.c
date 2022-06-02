#include<unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

int main(){
    char sub;
    int i;

    i = 26;
    sub = 'z';
    while(i > 0){
        ft_putchar(sub);
        sub = sub - 1;
        i = i - 1;
    }
}