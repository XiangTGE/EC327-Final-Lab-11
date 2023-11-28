#include <iostream>
#include "Library.h"

int main() {
    Library library;

    std::string command;
    std::string bookName;

    while (true) {
        std::cout << "Enter a command (a/r/p/q): ";
        std::cin >> command;

        if (command == "a") {
            std::cout << "Enter the book name: ";
            std::cin >> bookName;

            if (library.addBook(bookName)) {
                std::cout << "Book added successfully." << std::endl;
            } else {
                std::cout << "Failed to add book." << std::endl;
            }
        } else if (command == "r") {
            std::cout << "Enter the book name: ";
            std::cin >> bookName;

            if (library.removeBook(bookName)) {
                std::cout << "Book removed successfully." << std::endl;
            } else {
                std::cout << "Failed to remove book." << std::endl;
            }
        } else if (command == "p") {
            library.print();
        } else if (command == "q") {
            break;
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}