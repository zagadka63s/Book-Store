#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:

    Book() = default;
    Book(const std::string& title, const std::string& author, int year);

    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;

private:
    std::string title;
    std::string author;
    int year;
};

#endif // BOOK_H
