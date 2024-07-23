#include "hangman_game.h"
#include <iostream>
#include <cctype>

HangmanGame::HangmanGame() : remainingAttempts(6) {
    currentWord = wordBank.getRandomWord();
    guessedWord = std::string(currentWord.length(), '_');
}

void HangmanGame::play() {
    std::cout << "Welcome to Hangman!" << std::endl;

    while (!isGameOver()) {
        displayStatus();
        char guess;
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        guess = std::tolower(guess);

        processGuess(guess);
    }

    if (isWordGuessed()) {
        std::cout << "Congratulations! You've guessed the word: " << currentWord << std::endl;
    } else {
        std::cout << "Game over. The word was: " << currentWord << std::endl;
    }
}

void HangmanGame::displayStatus() {
    std::cout << "Word: " << guessedWord << std::endl;
    std::cout << "Attempts remaining: " << remainingAttempts << std::endl;
}

void HangmanGame::processGuess(char guess) {
    bool correctGuess = false;

    for (size_t i = 0; i < currentWord.length(); ++i) {
        if (currentWord[i] == guess) {
            guessedWord[i] = guess;
            correctGuess = true;
        }
    }

    if (!correctGuess) {
        --remainingAttempts;
    }
}

bool HangmanGame::isGameOver() {
    return remainingAttempts <= 0 || isWordGuessed();
}

bool HangmanGame::isWordGuessed() {
    return guessedWord == currentWord;
}
