#include <iostream>
#include "book.h"
#include "bookstore.h"

int main() {
    setlocale(LC_ALL, "russian");
    Bookstore bookstore;

    bookstore.addBook("Великий Гэтсби", "F. Scott Fitzgerald", 1925);
    bookstore.addBook("Убить пересмешника", "Harper Lee", 1960);
    bookstore.addBook("1984", "George Orwell", 1949);

    std::cout << "Книги в книжном магазине:" << std::endl;
    bookstore.displayBooks();

    return 0;
}

