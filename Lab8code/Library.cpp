#include "Library.h"
#include <iostream>




// Create a library with no books
Library::Library() {
    for(int i = 0; i < 10; i++){
        books[i] = "";
    }
}


// Adds the given book to the library and returns zero
// and returns false if the book already exists or if the library
// already has 10 books
bool Library::addBook(string bookName) {

    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            return false;
        }
    }

    for(int i = 0; i < 10; i++){
        if(books[i] == ""){
            books[i] = bookName;
            return true;
        }
    }
    return false;
}


// Removes the given book name from the library by setting the
// corresponding string to "", and returns true
// returns false if the library does not have the given book
bool Library::removeBook(string bookName) {

    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            books[i] = "";
            return true;
        }
    }
    return false;
}


// Prints the book names
void Library::print() {

    for(int i = 0; i < 10; i++){
        if(books[i] != ""){
            cout << books[i] << endl;
        }
    }
}