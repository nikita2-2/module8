#include "Book.h"
#include <iostream>

Book::Book(const std::string& title, const std::string& author, int year)
    : title(title), author(author), year(year) {} //?????????? ???????????

std::string Book::getTitle() const {  
    return title;
} 

std::string Book::getAuthor() const {
    return author;
}

int Book::getYear() const {
    return year;
}// ?????????? ??????? ??? ????, ?????? ? ????????

void Book::printInfo() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Year: " << year << std::endl;
} // ????? ??? ?????? ?????????? ?? ?????
