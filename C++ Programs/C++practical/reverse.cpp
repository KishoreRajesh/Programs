#include <iostream>
#include <sstream>

void reverseWord(std::string& word) {
    int start = 0;
    int end = word.length() - 1;

    while (start < end) {
        std::swap(word[start], word[end]);
        start++;
        end--;
    }
}

int main() {
    std::string input;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::string word;
    bool reversePrevious = false;

    while (iss >> word) {
        if (reversePrevious) {
            reverseWord(word);
            reversePrevious = false;
        }

        std::cout << word;

        if (word.back() == '.') {
            reversePrevious = true;
            std::cout << " ";
        } else {
            std::cout << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}



#include<stdio.h>

