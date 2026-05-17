#include <iostream>
#include <string>

int main() {
    std::string Str;
    int count = 0;

    std::cout << "Enter the expression here: ";
    std::getline(std::cin, Str);

    for (int i = 0; i < Str.length(); i++) {
        if (Str[i] == '(') {
            count++;
        } 
        else if (Str[i] == ')') {
            count--;
            // If count goes negative, a closing bracket came before an opening one
            if (count < 0) {
                break; 
            }
        }
    }

    // If count is 0, every '(' had a matching ')' in the correct order
    if (count == 0) {
        std::cout << "The bracket is closed perfectly" << std::endl;
    } else {
        std::cout << "The bracket is not closed correctly" << std::endl;
    }

    return 0;
}