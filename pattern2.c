/*
1       2       3       4       5
1       2       3       4
1       2       3
1       2
1
*/

#include<stdio.h>
#include<conio.h>
int main(){

    for(int i =5; i>=1;i--){
        for(int j = 1;j<=i;j++){
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}