#include <iostream>
#include <string>


void find_all(const std::string &s, char c) {
    bool found = false;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == c) {
            std::cout << "Character '" << c << "' found at position " << i << std::endl;
            found = true;
        }
    }
    if (!found) {
        std::cout << "-1\n";
    }
}


void find_all(const std::string &s, const std::string &sub) {
    bool found = false;
    if (sub.empty() || sub.size() > s.size()) {
        std::cout << "Word \"" << sub << "\" not found.\n";
        return;
    }

    for (int i = 0; i <= (int)(s.size() - sub.size()); i++) {
        int j = 0;
        while (j < (int)sub.size() && s[i + j] == sub[j]) {
            j++;
        }
        if (j == (int)sub.size()) {
            std::cout << "Word \"" << sub << "\" found at position " << i << std::endl;
            found = true;
        }
    }
    if (!found) {
        std::cout << "Word \"" << sub << "\" not found.\n";
    }
}

int main() {
    std::string sentence;
    std::string charInput; 
    char ch;
    std::string word;

    
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    
    std::cout << "Enter a character to search for: ";
    std::getline(std::cin, charInput); 
    if (!charInput.empty()) {
        ch = charInput[0]; 
    } else {
        std::cout << "No character entered!\n";
        return 0;
    }

    
    find_all(sentence, ch);

    
    std::cout << "\nYour sentence was: \"" << sentence << "\"" << std::endl;

    
    std::cout << "Enter a word to search for: ";
    std::getline(std::cin, word);

    
    find_all(sentence, word);

    return 0;
}
