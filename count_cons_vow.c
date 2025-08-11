// Online C compiler to run C program online
#include <stdio.h>
#include<ctype.h>
int main() {
    char str[100];
    scanf("%s",str);
    int c=0,v=0,i;
    for(int i=0;str[i]!='\0';i++){
          char ch=tolower(str[i]);
          if(ch>='a' && ch<='z'){
              if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                  v++;
              }
              else{
                  c++;
              }
             
          }
    }
    printf("%d %d",c,v);
  

    return 0;
}
