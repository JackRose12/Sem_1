#include <stdio.h>
#include <fcntl.h>
#include <stdLib.h>
void main(){
	char ch;
    FILE     *rptr, *wptr;
	rptr = fopen("manas_025.txt", "r");
    if (rptr == NULL){
        printf("File could not be opened");
        exit(1);
    }
	wptr = fopen("copy.txt", "w");
    if (wptr == NULL){
        printf("File could not be opened");
        exit(1);
    }
	while (1){
        ch = fgetc(rptr);
        if (ch == EOF)
            break;
        fputc(ch, wptr);
    }
	fclose(rptr);
    fclose(wptr);
}
