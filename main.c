#include<stdio.h>
#include<stdlib.h>
#define MAX_FLOORS 15



int main()
{
    int floors [16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
    int size = sizeof(floors);
    int CurrentFloor = 0;
    int PlayersFloor = 0;
    bool Keepplaying = true;

    printf("What Floor Would you Like to go to? The Current Floor is %d, The Top Floor is 15.", CurrentFloor);
    
    scanf("%d", &PlayersFloor);
    CurrentFloor = PlayersFloor;

    for( int i = 0; i <= size; i++)
    {
       
        if(i == PlayersFloor)
        {c
            printf("%d\n", floors[i]);
            printf("Ding");
            return;
        } 
        else
        {
             printf("%d\n", floors[i]);
        }
    }
    printf("Would you like to go to a new floor? y/n" );
    do
    {

    }while(Keepplaying)
    
    
    return 0;
}

