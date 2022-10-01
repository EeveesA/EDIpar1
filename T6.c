#include <stdio.h>
int pattern[10][10];
int main(){
    for(int i =0; i <10; i++){
        pattern[0][i]=1;
        pattern[10-1][i]=1;
        pattern[i][0]=1;
        pattern[i][10-1]=1;
    }
    int r, c;
    for(r=0; r < 10; r++){
        for(c=0; c < 10; c++){
            printf("%d ",pattern[r][c]);
        }
        printf("\n");
    }
}