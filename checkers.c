#include <stdio.h>
#include <stdlib.h>

int main(void){
    int checker_board[8][8];
    int x, y;
 
    for(x = 0; x < 8; x++){
        for(y = 0; y < 8; y++){
            if(checker_board[x][y] == ((x+y)%2))
                checker_board[x][y] = 1;
            if(checker_board[x][y] != ((x+y)%2))
                checker_board[x][y] = 2;

            printf("%d",checker_board[x][y]);
        }
    }
    
    return 0;

}
