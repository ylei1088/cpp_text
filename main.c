#include<stdio.h>
#include<stdlib.h>
#define MAX_FLOORS 15

int CurrentFloor;

int returnChoiceToPlayAgain(){
    int Keeplaying = 0;
    int choice;
    printf("\nWould you like to go to a new floor? y(1)/n(0)" );        
    scanf("%d", &choice);

    if(choice == 1)
    {
        Keeplaying = 0;
    }
    else
    {
        Keeplaying = 1;
        
        printf("Bye");
    }
    return Keeplaying;
}

int PlayerChosenFloor(){
    int PlayersChosenFloor;

    printf("What Floor Would you Like to go to? The Current Floor is %d, The Top Floor is 15.", CurrentFloor,"\n");
    scanf("%d", &PlayersChosenFloor);

    return PlayersChosenFloor;
}


int main()
{
    int floors [16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
    int size = sizeof(floors)/sizeof(floors[0]);
    int chosenFloorAnswer = 0;
    
    CurrentFloor = 0;
    
    while(returnChoiceToPlayAgain() == 0)
    {
        int x = PlayerChosenFloor();

        while(chosenFloorAnswer == 0)
        {
            if(x < floors[size] || x > 0)
            {
                chosenFloorAnswer = 1;
            }
            else
            {
                printf("Invalid floor");
            }
        }

        CurrentFloor = x;
        
        //Print the floor you are going into !
        if(CurrentFloor < x)
        {
            for(int i = CurrentFloor; i < size; i++)
            {
                if(i == x)
                {
                    printf("%d\n", floors[i]);
                    printf("Ding");
                    break;
                } 
                else
                {
                    printf("%d\n", floors[i]);
                }
            }
        }
        else if(CurrentFloor > x)
        {
            for(int i = CurrentFloor; i > x; i--)
            {
                if(i == x)
                {
                    printf("%d\n", floors[i]);
                    printf("Ding");
                    break;
                } 
                else
                {
                    printf("%d\n", floors[i]);
                }
            }
        }
        

        
    }

    return 0;
}

