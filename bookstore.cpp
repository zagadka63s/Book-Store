#include "bookstore.h"
#include <iostream>

void Bookstore::addBook(const std::string& title, const std::string& author, int year) {
    Book book(title, author, year);
    books[title] = book;
}

void Bookstore::displayBooks() const {
    for (const auto& pair : books) {
        const Book& book = pair.second;
        std::cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << ", Year: " << book.getYear() << std::endl;
    }
}

