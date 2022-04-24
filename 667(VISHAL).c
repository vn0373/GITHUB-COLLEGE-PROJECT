#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char a,b;
    int n,g;
    int lower=1,upper=5;
    srand(time(NULL));
    int score;
    score=0;
    n=0;
   printf("WELCOME TO THE GAME");
   printf("\n\nCOMPUTER_CRICKET");
   printf("\n\nClick Y to continue:");
   scanf("%c",&a);
   if (a=='Y')
   {
       printf("\n\nRULES AND REGULATIONS:");
       printf("\n1) This games is based on luck.");
       printf("\n2) You are asked to enter any number from 1 to 5.");
       printf("\n3) And you are the batsman , who need to score as much as you can.");
       printf("\n4) The computer will return random number between 1 to 10 and if the entered number is same as the random number, then you are out and the final score is displayed.");
       while (n<=5)
       {
           printf("\n\nENTER THE NUMBER(1-5):");
           scanf("%d",&g);
           if((g-1)*(g-5) <= 0)
           {int num = (rand() % (upper-lower+1))+lower;
            if (g!=num)
               {
                   n=n+1;
                   printf("\nComputer's number is:%d",num);
                   score=score+g;


                   if (n==5)
                   {
                       printf("\nCONGRATULATIONS, YOU WON ALL THE ATTEMPTS!!!!!");
                       printf("\nHIGH SCORE:%d",score);
                       break;
                   }

                   else
                   {
                       continue;
                   }


               }

               else
               {
                   printf("\n\nAH!! You are out!!! \n\nGOOD TRY!! YOUR FINAL SCORE IS : %d",score);
                   break;

               }


           }

           else
           {
               printf("\n\nTHE NUMBER YOU ENTERED IS IN OUT OF THE SPECIFIED RANGE!!!");
               break;
           }


       }


   }
  else
  {
      printf("THANK YOU...SEE YOU AGAIN");
      exit;
  }
   return 0;


}
