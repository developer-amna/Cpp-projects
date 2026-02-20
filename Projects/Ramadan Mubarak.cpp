#include <iostream>
#include <ctime>
using namespace std;

void showGreeting() {
    cout << "\n=====================================\n";
    cout << "        ?? RAMZAN MUBARAK ??\n";
    cout << "=====================================\n";
    cout << "May this Ramzan bring peace, blessings,\n";
    cout << "and happiness to your life.\n";
}

void showCurrentTime() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "\nCurrent Time: ";
    cout << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}

void sehriReminder() {
    cout << "\n?? Sehri Reminder\n";
    cout << "Don't forget to eat Sehri!\n";
    cout << "Sehri Time (Demo): 5:25 AM\n";
}

void iftarReminder() {
    cout << "\n?? Iftar Reminder\n";
    cout << "Time to break your fast!\n";
    cout << "Iftar Time (Demo): 6:02 PM\n";
}

int main() {
    int choice;

    do {
        showGreeting();
        cout << "\nMENU\n";
        cout << "1. Show Current Time\n";
        cout << "2. Sehri Reminder\n";
        cout << "3. Iftar Reminder\n";
        cout << "4. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                showCurrentTime();
                break;
            case 2:
                sehriReminder();
                break;
            case 3:
                iftarReminder();
                break;
            case 4:
                cout << "\nRamzan Mubarak! Stay Blessed ??\n";
                break;
            default:
                cout << "\nInvalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}

/* 
OUTPUT

=====================================
        ?? RAMZAN MUBARAK ??
=====================================
May this Ramzan bring peace, blessings,
and happiness to your life.

MENU
1. Show Current Time
2. Sehri Reminder
3. Iftar Reminder
4. Exit

Enter your choice: 1

Current Time: 21:30:36

=====================================
        ?? RAMZAN MUBARAK ??
=====================================
May this Ramzan bring peace, blessings,
and happiness to your life.

MENU
1. Show Current Time
2. Sehri Reminder
3. Iftar Reminder
4. Exit

Enter your choice: 2

?? Sehri Reminder
Don't forget to eat Sehri!
Sehri Time (Demo): 5:25 AM

=====================================
        ?? RAMZAN MUBARAK ??
=====================================
May this Ramzan bring peace, blessings,
and happiness to your life.

MENU
1. Show Current Time
2. Sehri Reminder
3. Iftar Reminder
4. Exit

Enter your choice: 3

?? Iftar Reminder
Time to break your fast!
Iftar Time (Demo): 6:02 PM

=====================================
        ?? RAMZAN MUBARAK ??
=====================================
May this Ramzan bring peace, blessings,
and happiness to your life.

MENU
1. Show Current Time
2. Sehri Reminder
3. Iftar Reminder
4. Exit

Enter your choice: 4

Ramzan Mubarak! Stay Blessed ??

--------------------------------
Process exited with return value 0
*/