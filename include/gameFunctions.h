
// this function take integer for size and a empty string which present garbage value
// we store string in it
void initializeBlankString(int length, char *string);

//this function just print space between string character
void printWithSpaces(const char *str);

//this function will take two string of same size and one character 
// the loop will be run untile both not equal to the '\0'
// if the non const strnge == character it well return 1 
// if not zero

int revealGuessedLetter(const char *salution,  char *revealed, char guessedLetter);
 // just compare the two strnge if true 1 not return 0
int checkGuess(const char *solution, const char *revealed);


//the following functions have been done for you.

/**
 * Sets the game up, checks for win condition,
 * prints relevant data
 */
void startGame(char word[25]);

/**
 * Clears the unix terminal of previous input
 */
void clearScreen();

/**
 * Prints part of the horse based on the ratio between
 * the two numbers.
 */
void drawHorse(int guessedSoFar, int allowedGuesses);
