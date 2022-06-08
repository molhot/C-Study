#include<unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src){
    char *first;

    first = dest;
    while(*src != '\0'){
        *dest = *src;
        dest = dest + 1;
        src = src + 1;
    }
    *dest = '\0';

    return first;
}

int main(){
    char src[] = "yamucha";
    char dest[10];
    char *past;
    
    printf("%s",dest);
    past = ft_strcpy(&dest[0],&src[0]);
    printf("\n");
    printf("%s",past);
}