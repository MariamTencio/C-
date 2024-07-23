#ifndef WORD_BANK_H
#define WORD_BANK_H

#include <vector>
#include <string>

class WordBank {
public:
    WordBank();
    std::string getRandomWord() const;

private:
    std::vector<std::string> words;
};

#endif // WORD_BANK_H
