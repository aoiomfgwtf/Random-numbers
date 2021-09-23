
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
 int main() 
 {
    srand(time(NULL));
    int a, b, c;
    a = rand() % 100;
    c = 1;
    while (c<=10)
    {
        printf("%d try:", c);
        scanf("%d", &b);
        if (b<a)
        {
          printf("Few\n");
        }
        else
        {
          if (b>a)
          {
            printf("Many\n");
          }
          else
          {
            printf("Got it!\n");
            break;
          } 
          
        }  
                
    c+=1;
    }  
    if (c==11)
    {
      printf("Game over!");
    }
    return 0;   
 }
  


