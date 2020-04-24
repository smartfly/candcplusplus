//
// Created by taohu on 2020/4/6.
//

#include <cstring>
#include <iostream>

using namespace std;

void printBook(struct Books book);

void printBook(struct Books *book);

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {
    // 声明Book1, 类型为Book
    struct Books Book1;
    // 声明Book2, 类型为Book
    struct Books Book2;

    // Book1 详述
    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 10001;

    // Book2 详述
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 10002;

    // 输出Book1信息
    printBook(Book1);

    // 输出Book2信息
    printBook(Book2);

    cout << "-------------------" << endl;

    // 通过传Book1的地址来输出Book1信息
    printBook(&Book1);

    // 通过传Book2的地址来输出Book2信息
    printBook(&Book2);

    return 0;
}

void printBook(struct Books book) {
    cout << "Book title : " << book.title << endl;
    cout << "Book author : " << book.author << endl;
    cout << "Book subject : " << book.subject << endl;
    cout << "Book id : " << book.book_id << endl;
}

void printBook(struct Books *book) {
    cout << "Book title : " << book->title << endl;
    cout << "Book author : " << book->author << endl;
    cout << "Book subject : " << book->subject << endl;
    cout << "Book id : " << book->book_id << endl;
}