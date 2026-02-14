#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
};

class Library {
private:
    Book books[100];
    int count;

public:
    Library() {
        count = 0;
    }

    void addBook(int id, string title, string author) {
        books[count].id = id;
        books[count].title = title;
        books[count].author = author;
        books[count].isIssued = false;
        count++;
        cout << "Book added successfully!\n";
    }

    void displayBooks() {
        cout << "\n--- Library Books ---\n";
        for (int i = 0; i < count; i++) {
            cout << "ID: " << books[i].id
                 << " | Title: " << books[i].title
                 << " | Author: " << books[i].author
                 << " | Status: " << (books[i].isIssued ? "Issued" : "Available") << endl;
        }
    }

    void issueBook(int id) {
        for (int i = 0; i < count; i++) {
            if (books[i].id == id && !books[i].isIssued) {
                books[i].isIssued = true;
                cout << "Book issued successfully!\n";
                return;
            }
        }
        cout << "Book not found or already issued!\n";
    }

    void returnBook(int id) {
        for (int i = 0; i < count; i++) {
            if (books[i].id == id && books[i].isIssued) {
                books[i].isIssued = false;
                cout << "Book returned successfully!\n";
                return;
            }
        }
        cout << "Book not found or not issued!\n";
    }
};

int main() {
    Library lib;
    int choice, id;
    string title, author;

    do {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);
            lib.addBook(id, title, author);
            break;
        case 2:
            lib.displayBooks();
            break;
        case 3:
            cout << "Enter Book ID to issue: ";
            cin >> id;
            lib.issueBook(id);
            break;
        case 4:
            cout << "Enter Book ID to return: ";
            cin >> id;
            lib.returnBook(id);
            break;
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}

// Output

/* 

--- Library Menu ---
1. Add Book
2. Display Books
3. Issue Book
4. Return Book
5. Exit
Enter your choice: 1
Enter Book ID: 12
Enter Title: 234
Enter Author: Ali
Book added successfully!

--- Library Menu ---
1. Add Book
2. Display Books
3. Issue Book
4. Return Book
5. Exit
Enter your choice: 2

--- Library Books ---
ID: 12 | Title: 234 | Author: Ali | Status: Available

--- Library Menu ---
1. Add Book
2. Display Books
3. Issue Book
4. Return Book
5. Exit
Enter your choice: 3
Enter Book ID to issue: 12
Book issued successfully!

--- Library Menu ---
1. Add Book
2. Display Books
3. Issue Book
4. Return Book
5. Exit
Enter your choice: 4
Enter Book ID to return: 12
Book returned successfully!

--- Library Menu ---
1. Add Book
2. Display Books
3. Issue Book
4. Return Book
5. Exit
Enter your choice: 5
Exiting program...
*/
