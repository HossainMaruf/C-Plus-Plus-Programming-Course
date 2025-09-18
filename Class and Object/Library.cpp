#include <iostream>
#include <vector>
#include <cstdbool>

using namespace std;

class Book {
   string title; 
   string author;
   string isbn;
   int publicationYear;
   int stock;
   public:
   Book(string title, string author, string isbn, int year, int stock) {
    this->title = title;
    this->author = author;
    this->isbn = isbn;
    this->publicationYear = year;
    this->stock = stock;
   }
   string getTitle() { return title; }
   void setTitle(string title) { this->title = title; }
   string getAuthor() { return author; }
   void setAuthor(string author) { this->author = author; }
   string getIsbn() { return isbn; }
   void setIsbn(string isbn) { this->isbn = isbn; }
   int getPublicationYear() { return publicationYear; }
   void setPublicationYear(int publicationYear) { this->publicationYear = publicationYear; }
   bool isAvailable() { return stock > 0 ? true : false; }
};

class Library {
   string name;
   string address;
   vector<Book> books;
   public:
   Library(string name, string address) {
    this->name = name;
    this->address = address;
   }
   void setName(string name) { this->name = name; }
   string getName() { return name; }
   void setAddress(string address) { this->address = address; }
   string getAddress() { return address; }
   void addBook(Book b) {
    books.push_back(b);
   }
   void showAllBooks() {
        for(int i=0; i<books.size(); i++) {
            cout << "Title: " << books[i].getTitle() << " Author: " << books[i].getAuthor() << endl;
        }
   }
};


int main() {
    Library library("Bidya Niketon", "Mirpur 11, Lane: 11, Road: 10, Dhaka");
    Book book1("C Programming", "Balagurusamy", "302xx", 2025, 10);
    library.addBook(book1);
    Book book2("C Programming Lab", "Balagurusamy", "303xx", 2025, 10);
    library.addBook(book2);
    library.showAllBooks();
    return 0;
}
