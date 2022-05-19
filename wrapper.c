#include <stdio.h>


void printmenu();
int getselect();

int main()
{
    int selection;
    
    printmenu();

    while ((selection = getselect()) != 7)
    {
        switch (selection)
        {
        case 1:
            mileage();
            break;
        
        case 2:
            printsquare();
            break;
        
        case 3:
            loopy();
            break;
        
        case 4:
            tictactoe();
            break;
        
        case 5:
            dungeoncrawl();
            break;
        
        case 6:
            blockbuster();
            break;
        
        default:
            break;
        }
        printmenu();
    }
}

void printmenu()
{
    printf("Welcome to my sandbox!\n\n");
    printf("What do you want to do today?\n");
    printf("1. Gas Mileage\n");
    printf("2. Squares\n");
    printf("3. Loopy\n");
    printf("4. Tic Tac Toe\n");
    printf("5. Craps\n");
    printf("6. Blockbuster\n");
    printf("7. Exit\n");
}

int getselect()
{
    while (1)
    {
        int input;
        scanf("%d", &input);
        if (input > 0 && input <= 7)
        {
            return input;
        } // If input is not accepted, clears stdin buffer and prints invalid input.
        else
        {
            char c;
            while (1)
            {
                c = getchar();
                if (c == '\n')
                {
                    break;
                }
            }
            printf("Invalid input! Try a number between 1 and 7.\n");
        }
    }
    return 0;
}

//When compiling code, don't forget -lncurses to link ncurses to the compiled code