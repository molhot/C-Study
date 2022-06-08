#include<unistd.h>

void ft_ft(int *nbr){
    *nbr = 42;
}

int main(){
    int num;

    num = 40;
    write(1,&num,1);
    ft_ft(&num);
    write(1,&num,1);
}