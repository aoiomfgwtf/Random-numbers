#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void getnum();


int main()
{
    getnum();
    return 0;
}

void getnum()
{
    srand(time(NULL));
    int a, b, c;
    char again;
    a = rand()%100+1;
    b = rand()%100;
   
    if (a<=b)
    {
        printf("Orel\n");
        printf("again? Y or N?: ");
        scanf("%1s", again);
    }
    if (a>=b)
    {
        printf("Reshka\n");
        printf("again? Y or N?: ");
        scanf("%1s", &again);
    } 
    if ((again == 'Y') || (again == 'y')) getnum();
    else return;
       
}