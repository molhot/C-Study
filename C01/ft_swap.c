#include<unistd.h>

void ft_swap(int *a, int *b){
    int num;

    num = *b;
    *b = *a;   
    *a = num;
}

int main(){
    int num1;
    int *num1_p;
    int num2;
    int *num2_p;
    
    num1 = 42;
    num2 = 43;
    num1_p = &num1;
    num2_p = &num2;
    write(1,num1_p,1);
    write(1,num2_p,1);
    ft_swap(num1_p, num2_p);
    write(1,num1_p,1);
    write(1,num2_p,1);
}