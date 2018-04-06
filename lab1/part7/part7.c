#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int i = 0;
    int len = argc;
    while (i < len){
        if(strncmp(argv[i], "-", 1) == 0){
            printf("%s\n", argv[i]);
        }
        i++;
    }
    return 0;
}
