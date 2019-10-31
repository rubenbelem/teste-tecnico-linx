//
// Created by rubelem on 10/29/19.
//

#ifndef TECHNICAL_TEST_LINX_TOKENIZER_HPP
#define TECHNICAL_TEST_LINX_TOKENIZER_HPP

#include <string>
#include <vector>
#include <unordered_map>

class Tokenizer {
public:
    std::vector<std::string> extractFrom(const std::string &s);

    Tokenizer();

    explicit Tokenizer(std::ifstream &stopWordsFile);

private:
    std::unordered_map<std::string, bool> stopWordsMap; // the unoderderd_map allows fast lookup to check whether a string is a stop word.
    bool isStopWord(const std::string &s);
};

#endif //TECHNICAL_TEST_LINX_TOKENIZER_HPP