/**
 * A game where the user has N chances to guess a random word pulled
 * from a file before they lose, one letter at a time.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "..\include\gameFunctions.h"

int main(int argc, char **argv) {
  char guessWords[50][25];

  FILE *inp = fopen("data/dictionary.txt", "r");

  // reads in all words from dictionary into the guessWords array
  int counter = 0;
  while (fscanf(inp, "%s", guessWords[counter]) != EOF) {
    counter++;
  }

  // Gets a random number between 0 abd counter to use for an index
  srand(time(NULL));
  int stringNumber = rand() % counter;

  // Starts the game
  startGame(guessWords[stringNumber]);
  int length = 10;
  char string[length + 1];
  initializeBlankString(length, string);
  printf("Initialized string: %s\n",string);
  printWithSpaces(string);
  const char *salution = "dinosaur";
  char revealed[] = "__________";
  char geuseedLetter = 'a';
  int checkGuess(salution, revealed);

  return 0;
}
