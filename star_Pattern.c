#include<stdio.h>
int main(){
    int n=5;
/*
    *
   ***
  *****
 *******
*********
*/
    
    
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    
/*
*********
 *******
  *****
   ***
    *
*/
    
    for(int i=n;i>0;i--){       //change in this statement
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}


/*
output for complete code:
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/
