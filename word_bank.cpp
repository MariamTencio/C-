#include "word_bank.h"
#include <cstdlib>
#include <ctime>

WordBank::WordBank() {
    words = {"hangman", "cplusplus", "programming", "code", "challenge"};
    std::srand(std::time(nullptr));  // Seed for random number generation
}

std::string WordBank::getRandomWord() const {
    return words[std::rand() % words.size()];
}
