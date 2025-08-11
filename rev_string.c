// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char str[100];
    int i,len=0;
    scanf("%s",str);
    while(str[len]!='\0'){
        len++;
    }
    //or strlen(str);
    for(i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }

    return 0;
}
