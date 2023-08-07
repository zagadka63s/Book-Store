#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include <map>
#include <string>
#include "book.h"

class Bookstore {
public:
    void addBook(const std::string& title, const std::string& author, int year);
    void displayBooks() const;

private:
    std::map<std::string, Book> books;
};

#endif // BOOKSTORE_H
