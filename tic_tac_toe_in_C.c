#include <stdio.h>
#include<conio.h>

// for graphics 
//#include<graphics.h>
 
char matrix[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };


//BOARD DESIGN //

void tic_tac_board()
{

    printf("\n\n \t\t\t\t\t\t****tTic Tac Toe**** *\n\n");

    printf(" \t\t\t\t\t Player 1 (X)  -  Player 2 (O)\n\n\n");

	printf("\t\t\t\t\t\t");
    printf("     |     |     \n");
		printf("\t\t\t\t\t\t");

    printf("  %c  |  %c  |  %c \n", matrix[1], matrix[2], matrix[3]);
		printf("\t\t\t\t\t\t");


    printf("_____|_____|_____\n");
		printf("\t\t\t\t\t\t");

    printf("     |     |     \n");
		printf("\t\t\t\t\t\t");


    printf("  %c  |  %c  |  %c \n", matrix[4], matrix[5], matrix[6]);
		printf("\t\t\t\t\t\t");


    printf("_____|_____|_____\n");
		printf("\t\t\t\t\t\t");

    printf("     |     |     \n");
		printf("\t\t\t\t\t\t");


    printf("  %c  |  %c  |  %c \n", matrix[7], matrix[8], matrix[9]);
		printf("\t\t\t\t\t\t");


    printf("     |     |     \n\n");
}


// check for  win and loose //
// return 1 0 for win and loose repect.
int win_loose()
{
    if (matrix[1] == matrix[2] && matrix[2] == matrix[3])
        return 1;
        
    else if (matrix[4] == matrix[5] && matrix[5] == matrix[6])
        return 1;
        
    else if (matrix[7] == matrix[8] && matrix[8] == matrix[9])
        return 1;
        
    else if (matrix[1] == matrix[4] && matrix[4] == matrix[7])
        return 1;
        
    else if (matrix[2] == matrix[5] && matrix[5] == matrix[8])
        return 1;
        
    else if (matrix[3] == matrix[6] && matrix[6] == matrix[9])
        return 1;
        
    else if (matrix[1] == matrix[5] && matrix[5] == matrix[9])
        return 1;
        
    else if (matrix[3] == matrix[5] && matrix[5] == matrix[7])
        return 1;
        
    else if (matrix[1] != '1' && matrix[2] != '2' && matrix[3] != '3' &&
        matrix[4] != '4' && matrix[5] != '5' && matrix[6] != '6' && matrix[7] 
        != '7' && matrix[8] != '8' && matrix[9] != '9')

        return 0;
    else
        return  - 1;
}



int main()
{
    int player = 1, i, input;

    char mark;
    do
    {
        tic_tac_board();
        player = (player % 2) ? 1 : 2;

        printf("\t\t\t\t\tPlayer %d, enter a number:  ", player);
        scanf("%d", &input);

        mark = (player == 1) ? 'X' : 'O';

        if (input == 1 && matrix[1] == '1')
            matrix[1] = mark;
            
        else if (input == 2 && matrix[2] == '2')
            matrix[2] = mark;
            
        else if (input == 3 && matrix[3] == '3')
            matrix[3] = mark;
            
        else if (input == 4 && matrix[4] == '4')
            matrix[4] = mark;
            
        else if (input == 5 && matrix[5] == '5')
            matrix[5] = mark;
            
        else if (input == 6 && matrix[6] == '6')
            matrix[6] = mark;
            
        else if (input == 7 && matrix[7] == '7')
            matrix[7] = mark;
            
        else if (input == 8 && matrix[8] == '8')
            matrix[8] = mark;
            
        else if (input == 9 && matrix[9] == '9')
            matrix[9] = mark;
            
        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = win_loose();

        player++;
    }while (i ==  - 1);
    
    tic_tac_board();
    
    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}

