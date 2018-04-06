#include "part4.h"
#include <ctype.h>
#include <string.h>

char* strlower(char string[], char buffer[]){
    int i = 0;
    int length = strlen(string);
    while (i < length){
        buffer[i] = tolower(string[i]);
        i++;
    }
    return buffer;
}

char* str_lower_mutate(char string[]){
    int i = 0;
    char temp = string[0];
    int length = strlen(string);
    while (i < length){
        temp = string[i];
        string[i] = tolower(temp);
    }
    return string;
}
