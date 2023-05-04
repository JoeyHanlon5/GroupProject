// **GROUP LAYOUT**
//JOEY = GETTING PLAYER INFORMATION AND CREATING QUESTIONS ALONG WITH PART OF THE CODE 
//DAVID = GETTING SOME INFORMATION AS WELL ALONG WITH CREATING THE FUNCTIONS 
//ALAN = CREATING THE POINT SYSTEM FOR THE QUESTIONS

#include <stdio.h>
#include <string.h>
#include "FileProcressing.h"









         



      






              //** Beginning of the code **//

int main(void) 

{

char answers[10]={'C','A','B','C','D','A','B','A','D','B',};
char inputs[10];
int currentscore=0;
  
  
  
  printf("\t\t\t\tWelcome to the NBA Basketball Q&A\n\n");
  currentscore=questionone(inputs,currentscore,answers);
  printf("The total points you got were %d\n\n", currentscore);
  currentscore=questiontwo(inputs,currentscore,answers);
  printf("The total points you got were %d\n\n", currentscore);
  currentscore=questionthree(inputs,currentscore,answers);
  printf("The total points you got were %d\n\n", currentscore);
  currentscore=questionfour(inputs,currentscore,answers);
  printf("The total points you got were %d\n\n", currentscore);
  currentscore=questionfive(inputs,currentscore,answers);
  printf("The total points you got were %d\n\n", currentscore);
  currentscore=questionsix(inputs,currentscore,answers);
  printf("The total points you got were %d\n\n", currentscore);
  currentscore=questionseven(inputs,currentscore,answers);
  printf("The total points you got were %d\n\n", currentscore);
  currentscore=questioneight(inputs,currentscore,answers);
  printf("The total points you got were %d\n\n", currentscore);
  currentscore=questionnine(inputs,currentscore,answers);
  printf("The total points you got were %d\n\n", currentscore);
  currentscore=questionten(inputs,currentscore,answers);
  printf("The total points you got were %d\n\n", currentscore);


  
  
  return 0;


// **QUESTIONS**
//What team did LeBron James start his NBA career with? Answer: Cleveland Cavaliers. *5 points. //Done 
//How many championship rings do the Golden State Warriors trio of Stephen Curry, Klay Thompson, and Draymond Green have? Answer: 4. *10 points
//How many MVP awards has Milwaukee Bucks superstar forward Giannis Antetokounmpo won? Answer: 2. *10 points
//Which player is the only Boston Celtics player in Celtics franchise history to average 30 or more points per game in a season? Answer: Jayson Tatum. *10 points
//Who is the player who scored the most points in an NBA game in NBA history with 100 points? Answer: Wilt Chamberlain. *10 points
//Which player has the most MVP awards in NBA history with 6? Answer: Kareem Abdul-Jabbar. *10 points
//Which player is the NBA's all-time leading scorer in history? Answer: LeBron James. *10 points
//Which player has scored the most points in an NBA playoff game with 63 points? Answer: Michael Jordan. *10 points.
//Name the last 5 NBA champions (teams): Answer: Warriors, Bucks, Lakers, Raptors, Warriors. *10 points
//How many MVP awards did Kobe Bryant win during his NBA career? Answer: 1. *10 points
}