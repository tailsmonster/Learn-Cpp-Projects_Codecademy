#include <vector>
#include <string>
#include <algorithm>

using namespace std;

extern double libraryBudget;

class Library {
public:
  void addBook(string title, double bookCost);
  bool borrowBook(string title);
  void listBooks() const;
  Library();
  int getTotalBorrowedBooks() const;
  void reserveBook(string title) const;
private:
  static vector<string> bookList;
  static int totalBooksBorrowed;
  mutable int reservedCount;
  mutable vector<string> reservedBooks;
};
