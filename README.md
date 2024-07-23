# C-
# Hangman Game

A simple command-line version of the Hangman game written in C++. The game allows a player to guess letters in a hidden word with a limited number of attempts.

## Features

- Basic Hangman game logic
- Player management
- Word selection from a predefined word bank
- Display of game status (word progress and remaining attempts)

## Files

- `main.cpp` - Entry point of the application.
- `hangman_game.h` / `hangman_game.cpp` - Definitions and implementations of the `HangmanGame` class.
- `player.h` / `player.cpp` - Definitions and implementations of the `Player` class.
- `word_bank.h` / `word_bank.cpp` - Definitions and implementations of the `WordBank` class.

## Compilation

Use the provided `Makefile` to compile the project:

```sh
make
