#include<stdio.h>

// 1. First way

void fun(){
    int c;

    while((c=getchar())!=EOF){
        if(c=='\t'){
            putchar('\\');  // You have to use '\\' for specifying '\'(backslash) as it is also escape character used in '\n','\t' etc
            putchar('t');
        }

        else if(c=='\\'){
            putchar('\\');
            putchar('\\');
        }
        else if(c=='\b'){
            putchar('\\');
            putchar('b');
        }

        else
            putchar(c);
    }

}

// 2. Second way...elegant looking code

void fun1(){
    int c;
    while((c=getchar())!=EOF){
        switch(c){
            case '\t': putchar('\\');putchar('t');break;
            case '\b': putchar('\\');putchar('b');break;
            case '\\': putchar('\\');putchar('\\');break;
            case EOF : return;
            default  : putchar(c);
        }
    }
}


int main(){

    return 0;
}