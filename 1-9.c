#include<stdio.h>


//1. My code and wrong code

void ReplaceMultipleBlanksWithSingle(){
    int c, prevchar='\0';
    while((c=getchar())!=EOF){
        if(c==' '){
            if(prevchar==' ')
                continue;
            else{
                prevchar=' ';
                putchar(c);
            }
        }

        else{
            prevchar=c;
            putchar(c);
        }


    }

}

// 2. Better Code

void ReplaceMultipleBlanksWithSingleBetter(){
    int c,prevchar='\0';

    while((c=getchar())!=EOF){
        if(c==' '){
            if(prevchar!=' ')
            putchar(c);
        }
        else
            putchar(c);

        prevchar=c;
    }
}


int main(void){

    return 0;
}