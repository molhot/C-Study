#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
    while((size != 0) & (*src != '\0')){
        *dest = *src;
        dest = dest + 1;
        src = src + 1;
        size = size - 1;
    }
    if(size != 0){
        while(size != 0){
            *dest = '\0';
            dest = dest + 1;
            size = size - 1;
        }
    }
    return 0;
}

int main(){
    char src_1[] = "This is the test!";
    char src_2[] = "This is cat nya~";
    char src_3[] = "T";

    ft_strlcpy(src_1, src_2, 3);
    printf("%s",src_1);
    printf("\n");
    ft_strlcpy(src_2, src_3, 3);
    printf("%s",src_2);
    printf("\n");
    ft_strlcpy(src_3, src_1, 5);
    printf("%s",src_3);
}