#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){



  int my_hand;
  int jykn = 0;//jyanken
  int wn = 0;//win number
  int bn = 0;//battle number
  int cn = 0;//continue number
  int WP = 0;//Winninng Percentage

  while(1){

  puts("Dicide your hand 1 (rock),2 (scissors) or3 (paper)!:");
  scanf("%d", &my_hand);
  bn++;

  if (my_hand == 1){
    printf("Your hand:guu\n");
    jykn += 5;
  }
  else if (my_hand == 2){
    printf("Your hand:tyoki\n");
    jykn += 8;
    }
  else if (my_hand == 3){
    printf("Your hand:paa\n");
    jykn += 11;
  }
  else if (my_hand != 1 || my_hand != 2 || my_hand != 3){
    puts("そーゆーのはせこいゆうねん");
    my_hand = 0;
    continue;
  }
  

puts("     VS");
  
  unsigned int  now = (unsigned int)time( 0 );
  srand( now );

     int  ran1 = rand() % 3;

     
     if (ran1 == 0){
       printf("Opponent's hand:guu\n");
       jykn += 0;
     }
     else if (ran1 == 1){
       printf("Opponent's hand:tyoki\n");
       jykn += 1;
     }
     else if (ran1 == 2){
       printf("Opponent's hand:paa\n");
       jykn += 2;
     }

     if (jykn == 6 || jykn == 10 || jykn == 11){
       puts("\n\x1b[31mYou are winner!\x1b[39m");
       wn ++;
       jykn = 0;
     }
     else if (jykn == 5 || jykn == 9 || jykn == 13){
       puts("\n\x1b[33mmdraw.\x1b[39m");
       jykn = 0;
     }
     else if (jykn == 7 || jykn == 8 || jykn == 12){
       puts("\n\x1b[34mYou are loser..\x1b[39m" );
       jykn = 0;
     }

      WP = wn * 100 / bn ;//Winning percentage

     printf("Now,your winning percentage is %d.\nDo you continue? Yes >>1  No >>2",WP);
     scanf("%d",&cn);

     if (cn == 1){
       continue;
     }            
     else if(cn == 2){
       break;
     }
     else if (cn != 1 || cn != 2){
       puts("しっかりしてやぁ。１か２ってゆったやん。");
       continue;
     }
  }
  printf("Thank you for your playing!\nYour winning percentage is %d.\nGood bye!\n",WP);
     
     return 0;
 
  
}
