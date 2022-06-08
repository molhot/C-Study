#include <stdio.h>
int max_min_sum(int min, int max){
    return(min + max);
}

void ft_rev_int_tab(int *tab, int size){
    int num;
    int sum;

    num = 0;
    sum = max_min_sum(*tab, *(tab + size - 1));
    while(num != size){
        *tab = sum - *tab;
        tab = tab + 1;
        num = num + 1;
    }
}

int main(){
    int size;
    int num;

    num = 0;
    size = 5;
    int int_arr1[5] = {0, 1, 2, 3, 4};
    ft_rev_int_tab(&int_arr1[0], size);
    while(num != size){
        printf("%d",int_arr1[num]);
        printf("\n");
        num =num + 1;
    }
}