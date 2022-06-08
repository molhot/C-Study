#include<stdio.h>

void ft_div_mod(int a,int b, int *div, int *mod){
    *div = a / b;
    *mod = a % b;
}

int main(){
    int num1;
    int num2;
    int num3;
    int num4;
    int *div_p;
    int *mod_p;

    num1 = 40;
    num2 = 6;
    div_p = &num3;
    mod_p = &num4;
    ft_div_mod(num1,num2,div_p,mod_p);
    printf("div_p:%d", *div_p);
    printf("div_p:%d", *mod_p);
}