#include "Book.h"
#include <iostream>

int main() {
    Book book("Harry potter", "Rowling", 1979); // пример книги

    book.printInfo();
    std::cin.get();
    return 0;
}
