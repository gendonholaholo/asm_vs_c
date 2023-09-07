#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct numstr{
    unsigned int num;
    char *str;
};

void str_to_num(struct numstr *input){
    int i = 0;
    while(input->str[i] != '\0'){
        input->num *= 10;
        input->num += input->str[i++] - '0';
    }
}

int main(int argc, char *argv[]){
    size_t ns_size = sizeof(struct numstr);
    struct numstr *arg = malloc(ns_size);
    memset(arg, 0, ns_size);

    arg->str = argv[1];
    str_to_num(arg);
    arg->num++;

    printf("%u\n", arg->num);

    return 0;
}
