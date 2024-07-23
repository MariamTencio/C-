#ifndef HANGMAN_GAME_H
#define HANGMAN_GAME_H

#include "player.h"
#include "word_bank.h"

class HangmanGame {
public:
    HangmanGame();
    void play();

private:
    Player player;
    WordBank wordBank;
    std::string currentWord;
    std::string guessedWord;
    int remainingAttempts;

    void displayStatus();
    void processGuess(char guess);
    bool isGameOver();
    bool isWordGuessed();
};

#endif // HANGMAN_GAME_H
