#include<unistd.h>

void ft_ultimate_ft(int **nbr){
    **nbr = 42;
}

int main(){
    int num;
    int *nnbr;

    num = 40;
    nnbr = &num;
    write(1,&num,1);
    write(1,nnbr,1);
    ft_ultimate_ft(&nnbr);
    write(1,nnbr,1);
}