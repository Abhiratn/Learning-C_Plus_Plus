#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string input;

    std::cout << "Enter a line of text: ";

    // Using get() to read a single character
    char character = std::cin.get();
    std::cout << "Character read using get(): " << character << std::endl;

    // Using put() to display the character
    std::cout << "Character displayed using put(): ";
    std::cout.put(character);
    std::cout << std::endl;

    // Clearing the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Using getline() to read a line of text
    std::cout << "Enter a line of text: ";
    std::getline(std::cin, input);
    std::cout << "Line of text read using getline(): " << input << std::endl;

    // Using ignore() to skip characters
    std::cout << "Enter a number: ";
    std::cin.ignore(256, '\n'); // Ignore up to 256 characters or until a newline is encountered

    // Using putback() and peek() to read a character
    std::cout << "Enter a character: ";
    char ch = std::cin.get();
    std::cin.putback(ch);
    ch = std::cin.peek();
    std::cout << "Character read using putback() and peek(): " << ch << std::endl;

    return 0;
}
