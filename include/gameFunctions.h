
//TODO: define, document, and implement this function
void initializeBlankString(int length, char *string)

//TODO: define, document, and implement this function
void printWithSpaces(const char *str);

//TODO: define, document, and implement this function

int revealGuessedLetter(const char *salution,  char *revealed, char guessedLetter) 

//TODO: define, document, and implement this function
void checkGuess();


//the following functions have been done for you.

/**
 * Sets the game up, checks for win condition,
 * prints relevant data
 */
void startGame(char *wordToGuess);

/**
 * Clears the unix terminal of previous input
 */
void clearScreen();

/**
 * Prints part of the horse based on the ratio between
 * the two numbers.
 */
void drawHorse(int guessedSoFar, int allowedGuesses);
