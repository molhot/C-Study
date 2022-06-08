#include<stdio.h>

void ft_div_mod(int *a,int *b){
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

int main(){
    int num1;
    int num2;
    int *div_p;
    int *mod_p;

    num1 = 40;
    num2 = 6;
    div_p = &num1;
    mod_p = &num2;
    ft_div_mod(div_p,mod_p);
    printf("div_p:%d", *div_p);
    printf("div_p:%d", *mod_p);
}