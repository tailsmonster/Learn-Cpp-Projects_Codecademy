#include <exception> 
#include "Library.hpp"
#include "removeElement.hpp"
#include <iostream>

using namespace std;

int Library::totalBooksBorrowed = 0;
vector<string> Library::bookList;

int Library::getTotalBorrowedBooks() const {
  cout << totalBooksBorrowed << " books have been borrowed." << endl;
  return totalBooksBorrowed;
}

void Library::listBooks() const{
  for (auto book : bookList) {
    cout << book << endl;
  }
}


void Library::addBook(string title, double bookCost) {
  if (bookList.size() < 100) {
    bookList.push_back(title);
    libraryBudget-=bookCost;
  } else {
    cout << "Library is Full!" << endl;
  }
}

bool Library::borrowBook(string title) {
  if (find(bookList.begin(), bookList.end(), title) != bookList.end()) {
    removeElement(bookList, title);
    totalBooksBorrowed++;
    cout << "Book borrowed!" << endl;
    return true;
  } else {
    cout << "Book not found!" << endl;
    return false;
  }
}

void Library::reserveBook(string title) const {
  if (find(bookList.begin(), bookList.end(), title) != bookList.end() && !(find(reservedBooks.begin(), reservedBooks.end(), title) != reservedBooks.end())) {
    reservedBooks.push_back(title);
    reservedCount++;
    cout << "Book reserved: " << title << endl;
    cout << "Reserved book count: " << reservedCount++ << endl;
  } else {
    cout << "Book not reserved." << endl;
  }

}

Library::Library() : reservedCount(0) {};
