#include<unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
    char *first;

    first = dest;
    while(n != 0){
        *dest = *src;
        dest = dest + 1;
        src = src + 1;
        n = n - 1;
    }
    *dest = '\0';

    return first;
}

int main(){
    char src[] = "yamuchamuchasiyagatte";
    char dest[30];
    
    printf("%s",dest);
    &dest = ft_strncpy(&dest[0],&src[0],5);
    printf("\n");
    printf("%s",dest);
}