#include <stdio.h>

char *returnStr(){
    static char p[]="Hello World!";
    return p;
}
int main(){
    char *str = nullptr;
    str = returnStr();
    printf("%s\n",str);
    printf("Hi");
    return 0;
}