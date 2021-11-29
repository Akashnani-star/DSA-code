#include <stdio.h>
#include <string.h>
#include "./reverseString.h"

void string_reverse(char main_string[],int i){
    static int j = 0;
    if(i == -1){
        rev[j++] = '\0';
        return;
    }
    if(main_string[i] != '\0'){
        rev[j++] = main_string[i];
    }
    string_reverse(main_string,i-1);
}
