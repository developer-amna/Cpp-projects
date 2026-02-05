#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int choice;
    string username, password;
    string u, p;

    cout << "1. Register\n";
    cout << "2. Login\n";
    cout << "Enter choice: ";
    cin >> choice;

    // Registration
    if(choice == 1)
    {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        ofstream file("users.txt", ios::app);
        file << username << " " << password << endl;
        file.close();

        cout << "Registration successful!\n";
    }

    // Login
    else if(choice == 2)
    {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        ifstream file("users.txt");
        bool found = false;

        while(file >> u >> p)
        {
            if(u == username && p == password)
            {
                found = true;
                break;
            }
        }
        file.close();

        if(found)
            cout << "Login successful!\n";
        else
            cout << "Invalid username or password.\n";
    }

    else
    {
        cout << "Invalid choice.\n";
    }

    return 0;
}