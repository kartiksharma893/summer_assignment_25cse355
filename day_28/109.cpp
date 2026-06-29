// Write a program to Create library management system.
#include <iostream>
#include <vector>
using namespace std;
class book
{
public:
    int book_id;
    string title;
    string author;
    bool issued;
};
vector<book> books;
void add_books()
{
    book b;
    cout << "enter book id: ";
    cin >> b.book_id;
    cout << "enter title of book: ";
    cin >> b.title;
    cout << "enter author name: ";
    cin >> b.author;
    b.issued = false;
    books.push_back(b);
    cout << "\nbook added successfully\n";
}
void display_books()
{
    if (books.size() == 0)
    {
        cout << "no book available";
        return;
    }
    cout << "      Book record \n";
    for (int i = 0; i < books.size(); i++)
    {
        cout << "book id: " << books[i].book_id << endl;
        cout << "title: " << books[i].title << endl;
        cout << "author: " << books[i].author << endl;

        if (books[i].issued)
        {
            cout << "status: issues\n";
        }
        else
        {
            cout << "status: not issued\n";
        }
    }
}

void search_book()
{
    int id;
    bool found = false;

    cout << "Enter Book ID: ";
    cin >> id;

    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].book_id == id)
        {
            found = true;

            cout << "Book Found\n";
            cout << "Book ID: " << books[i].book_id << endl;
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;

            if (books[i].issued)
                cout << "Status: Issued\n";
            else
                cout << "Status: Not Issued\n";

            break;
        }
    }

    if (!found)
        cout << "Book Not Found\n";
}

void issue_book()
{
    int id;
    bool found = false;

    cout << "Enter Book ID: ";
    cin >> id;

    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].book_id == id)
        {
            found = true;

            if (books[i].issued)
                cout << "Book already issued\n";
            else
            {
                books[i].issued = true;
                cout << "Book issued successfully\n";
            }

            break;
        }
    }

    if (!found)
        cout << "No such book found\n";
}
void return_book()
{
    int id;
    bool found = false;

    cout << "Enter Book ID: ";
    cin >> id;

    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].book_id == id)
        {
            found = true;

            if (books[i].issued)
            {
                books[i].issued = false;
                cout << "Book returned successfully\n";
            }
            else
            {
                cout << "Book is not issued\n";
            }

            break;
        }
    }

    if (!found)
    {
        cout << "No such book found\n";
    }
}
void delete_Book()
{
    int id;
    bool found = false;

    cout << "Enter Book ID to Delete: ";
    cin >> id;

    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].book_id == id)
        {
            books.erase(books.begin() + i);
            cout << "Book Deleted Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Book Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n      Library Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Delete Book\n";
        cout << "7. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add_books();
            break;

        case 2:
            display_books();
            break;

        case 3:
            search_book();
            break;

        case 4:
            issue_book();
            break;

        case 5:
            return_book();
            break;

        case 6:
            delete_Book();
            break;

        case 7:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 7);

    return 0;
}
