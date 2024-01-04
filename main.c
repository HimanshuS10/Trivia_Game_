#include <stdio.h>
#define RED_COLOR "\x1b[31m"
#define RESET_COLOR "\x1b[0m"
#define BLUE_COLOR "\x1b[34m"
#define RESET_COLOR "\x1b[0m"
#define YELLOW_COLOR "\x1b[33m"
#define RESET_COLOR "\x1b[0m"
#define GREEN_COLOR "\x1b[32m"
#define RESET_COLOR "\x1b[0m"
#define PURPLE_COLOR "\x1b[35m"
#define RESET_COLOR "\x1b[0m"
#define CYAN_COLOR "\x1b[36m"
#define RESET_COLOR "\x1b[0m"

int main(void) {
  int playerPoints = 0;
  char playerName[50]; // Changed to an array to store a string
  printf("Enter your name: ");
  scanf("%s", playerName);

  printf(RED_COLOR "Hi %s, welcome to the trivia game!\n" RESET_COLOR, playerName);
  printf(RED_COLOR "There will be 5 questions. Let's see how many can you get right! (Enter 1 to start): " RESET_COLOR);

  int playerStart;
  scanf("%d", &playerStart);

  if (playerStart == 1) {
    printf(BLUE_COLOR "Question 1: Which planet is known as the Red Planet?\n" RESET_COLOR);
    printf("a. Venus, b. Mars, c. Jupiter, d. Saturn\n");

    char playerChoice;
    scanf(" %c", &playerChoice);

    if (playerChoice == 'b' || playerChoice == 'B'){
      printf("Correct!\n");
      playerPoints = playerPoints + 1;
    }
    else {
      printf("Wrong!\n");
      playerPoints = playerPoints + 0;
    }
                              /*Question 2*/    
    printf(YELLOW_COLOR "Question 2: Who wrote the play Romeo and Juliet?\n" RESET_COLOR);
    printf("a. Jane Austen, b. William Shakespeare, c. Charles Dickens, d. Mark Twain\n");

  char playerChoice1;
  scanf(" %c", &playerChoice1);

  if (playerChoice1 == 'b' || playerChoice1 == 'B'){
    printf("Correct!\n");
    playerPoints = playerPoints + 1;
  }
  else {
    printf("Wrong!\n");
    playerPoints = playerPoints + 0;
  }
  }
                              /*Question 3*/    
  printf(GREEN_COLOR "Question 3: In what year did the Titanic sink?\n" RESET_COLOR);
  printf("a. 1907, b. 1915, c. 1912, d. 1908\n");

  char playerChoice2;
  scanf(" %c", &playerChoice2);

  if (playerChoice2 == 'c' || playerChoice2 == 'C'){
    printf("Correct!\n");
    playerPoints = playerPoints + 1;
  }
  else {
    printf("Wrong!\n");
    playerPoints = playerPoints + 0;
  }
                              /*Question 4*/    
  printf(PURPLE_COLOR "Question 4: What is the capital city of Australia?\n" RESET_COLOR);
  printf("a. Sydney, b. Melbourne, c. Canberra, d. Brisbane\n");


  char playerChoice3;
  scanf(" %c", &playerChoice3);

  if (playerChoice3 == 'c' || playerChoice3 == 'C'){
    printf("Correct!\n");
    playerPoints = playerPoints + 1;
  }
  else {
    printf("Wrong!\n");
    playerPoints = playerPoints + 0;
  }
                              /*Question 5*/    
  printf(CYAN_COLOR "Question 5: Which element has the chemical symbol \"He\"?\n" RESET_COLOR);
  printf("a. Gold, b. Mercury, c. Helium, d. Hydrogen\n");

  char playerChoice4;
  scanf(" %c", &playerChoice4);

  if (playerChoice4 == 'c' || playerChoice4 == 'C'){
    printf("Correct!\n");
    playerPoints = playerPoints + 1;
  }
  else {
    printf("Wrong!\n");
    playerPoints = playerPoints + 0;
  }

  if (playerPoints == 5) {
    printf("Good job! You aced it! %d/5", playerPoints);
  }
  else if (playerPoints == 4) {
    printf("Good job! You only got one wrong! %d/5", playerPoints);
  }
  else if (playerPoints == 2 || playerPoints == 3) {
    printf("Good try! You'll get it next time. %d/5", playerPoints);
  }
  else if (playerPoints == 1) {
    printf("It's okay! You'll get it next time. %d/5", playerPoints);
  }
  else{
    printf("It's okay! You'll get it next time. %d/5", playerPoints);
  }

  return 0;
  }

