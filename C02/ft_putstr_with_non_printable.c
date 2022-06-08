#include<stdio.h>
#include<unistd.h>

void change(int sub){
    int sub_1;
    int sub_2;
    int sub_3;

    sub_3 = 92;
    write(1,&sub_3,1);
    sub_1 = sub / 16;
    sub_1 = sub_1 + 48;
    write(1,&sub_1,1);
    sub_2 = sub % 16;
    sub_2 = sub_2 + 48;
    if(sub_2 >= 58){
        sub_2 = sub_2 + 39;
    }
    write(1,&sub_2,1);
}

void ft_putstr_non_printable(char *str){
    int sub;

    while(*str != '\0'){
        if(*str < 32){
            sub = *str;
            change(sub);
            str = str + 1;
        }
        write(1,str,1);
        str = str + 1;
    }
}

int main(){
    char src_1[] = "Coucou\ntu vas bien ?";
    
    ft_putstr_non_printable(src_1);
}