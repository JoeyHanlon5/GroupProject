#include <stdio.h>

//** Question one begins here **//

int questionone(char inputs[10], int currentscore, char answers[10]) 
{

  
  printf("Question One:\n\nWhat team did LeBron James start his career with?\n");
  printf("A: Lakers\nB: Celtics\nC: Cavaliers\nD: Heat\n\nEnter Either A,B,C, or D:\n");
  scanf("%s",&inputs[0]);
   
  if (inputs[0] == answers[0])
  {
    printf("\t\tCorrect!\n\n");
   currentscore += 10;
  
  }
  if(inputs[0] != answers[0])
  {
    printf("\t\tIncorrect\n\n");
   
  }
  return currentscore;
}
int questiontwo(char inputs[10], int currentscore, char answers[10]) 
{
  
  
  printf("Question Two:\n\nHow many championship rings do the Golden State Warriors trio of Stephen Curry, Klay Thompson, and Draymond Green have?\n");
  printf("A: 4\nB: 6\nC: 3\nD: 1\n\nEnter Either A,B,C, or D:\n");
  scanf("%s",&inputs[1]);
   
  if (inputs[1] == answers[1]) 
  
  {
    printf("\t\tCorrect!\n\n");
    currentscore += 10; 
  }
  
  
  if (inputs[1] != answers[1])
  
  {
    printf("\t\tIncorrect\n\n");
    
  }
  return currentscore;
}
int questionthree(char inputs[10], int currentscore, char answers[10]) 
{
  
  
  printf("Question Three:\n\nHow many MVP awards has Milwaukee Bucks superstar forward Giannis Antetokounmpo won?\n");
  printf("A: 3\nB: 2\nC: 3\nD: 1\n\nEnter Either A,B,C, or D:\n");
  scanf("%s",&inputs[2]);
   
  if (inputs[2] == answers[2]) 
  
  {
    printf("\t\tCorrect!\n\n");
    currentscore += 10; 
  }
  
  
  if (inputs[2] != answers[2])
  
  {
    printf("\t\tIncorrect\n\n");
    
  }
  return currentscore;
}
int questionfour(char inputs[10], int currentscore, char answers[10]) 
{
  
  
  printf("Question Four:\n\nWhich player is the only Boston Celtics player in Celtics franchise history to average 30 or more points per game in a season?\n");
  printf("A: Larry Bird\nB: Bill Russel\nC: Jayson Tatum\nD: Kevin Garnett\n\nEnter Either A,B,C, or D:\n");
  scanf("%s",&inputs[3]);
   
  if (inputs[3] == answers[3]) 
  
  {
    printf("\t\tCorrect!\n\n");
    currentscore += 10; 
  }
  
  
  if (inputs[3] != answers[3])
  
  {
    printf("\t\tIncorrect\n\n");
    
  }
  return currentscore;
}
int questionfive(char inputs[10], int currentscore, char answers[10]) 
{
  
  
  printf("Question Five:\n\nWho is the player who scored the most points in an NBA game in NBA history with 100 points?\n");
  printf("A: Michael Jordan\nB: LeBron James\nC: Kobe Bryant\nD: Wilt Chamberlain\n\nEnter Either A,B,C, or D:\n");
  scanf("%s",&inputs[4]);
   
  if (inputs[4] == answers[4]) 
  
  {
    printf("\t\tCorrect!\n\n");
    currentscore += 10; 
  }
  
  
  if (inputs[4] != answers[4])
  
  {
    printf("\t\tIncorrect\n\n");
    
  }
  return currentscore;
}
int questionsix(char inputs[10], int currentscore, char answers[10]) 
{
  
  
  printf("Question Six:\n\nWhich player has the most MVP awards in NBA history with 6?\n");
  printf("A: Kareem Abdul-Jabbar\nB: LeBron James\nC: Alan Martinez Moreta\nD: Damian Lillard\n\nEnter Either A,B,C, or D:\n");
  scanf("%s",&inputs[5]);
   
  if (inputs[5] == answers[5]) 
  
  {
    printf("\t\tCorrect!\n\n");
    currentscore += 10; 
  }
  
  
  if (inputs[5] != answers[5])
  
  {
    printf("\t\tIncorrect\n\n");
    
  }
  return currentscore;
}
int questionseven(char inputs[10], int currentscore, char answers[10]) 
{
  
  
  printf("Question Seven:\n\nWhich player is the NBA's all-time leading scorer in history?\n");
  printf("A: Larry Bird\nB: LeBron James\nC: Magic Johnson\nD: Kareem Abdul-Jabbar\n\nEnter Either A,B,C, or D:\n");
  scanf("%s",&inputs[6]);
   
  if (inputs[6] == answers[6]) 
  
  {
    printf("\t\tCorrect!\n\n");
    currentscore += 10; 
  }
  
  
  if (inputs[6] != answers[6])
  
  {
    printf("\t\tIncorrect\n\n");
    
  }
  return currentscore;
}
int questioneight(char inputs[10], int currentscore, char answers[10]) 
{
  
  
  printf("Question Eight:\n\nWhich player has scored the most points in an NBA playoff game with 63 points?\n");
  printf("A: Michael Jordan\nB: Kobe Bryant\nC: LeBron James\nD: Bob Cousy\n\nEnter Either A,B,C, or D:\n");
  scanf("%s",&inputs[7]);
   
  if (inputs[7] == answers[7]) 
  
  {
    printf("\t\tCorrect!\n\n");
    currentscore += 10; 
  }
  
  
  if (inputs[7] != answers[7])
  
  {
    printf("\t\tIncorrect\n\n");
    
  }
  return currentscore;
}
int questionnine(char inputs[10], int currentscore, char answers[10]) 
{
  
  
  printf("Question Nine:\n\nWho was the MVP in the NBA in the year 2021?\n");
  printf("A: Joel Embiid\nB: Jayson Tatum\nC: Devin Booker\nD: Nikola Jokic\n\nEnter Either A,B,C, or D:\n");
  scanf("%s",&inputs[8]);
   
  if (inputs[8] == answers[8]) 
  
  {
    printf("\t\tCorrect!\n\n");
    currentscore += 10; 
  }
  
  
  if (inputs[8] != answers[8])
  
  {
    printf("\t\tIncorrect\n\n");
    
  }
  return currentscore;
}
int questionten(char inputs[10], int currentscore, char answers[10]) 
{
  
  
  printf("Question Ten:\n\nHow many MVP awards did Kobe Bryant win during his NBA career?\n");
  printf("A: 4\nB: 1\nC: 3\nD: 2\n\nEnter Either A,B,C, or D:\n");
  scanf("%s",&inputs[9]);
   
  if (inputs[9] == answers[9]) 
  
  {
    printf("\t\tCorrect!\n\n");
    currentscore += 10; 
  }
  
  
  if (inputs[9] != answers[9])
  
  {
    printf("\t\tIncorrect\n\n");
    
  }
  return currentscore;
}
