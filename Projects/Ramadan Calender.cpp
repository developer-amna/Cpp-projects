#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int startDay;
    cout << "?? RAMZAN CALENDAR GENERATOR ??\n";
    cout << "Enter starting day of Ramzan (1 = Monday, 2 = Tuesday ... 7 = Sunday): ";
    cin >> startDay;

    cout << "\nRamzan Calendar (30 Days)\n";
    cout << "---------------------------------------------\n";
    cout << left << setw(10) << "Day" << setw(12) << "Weekday" << setw(10) << "Sehri" << setw(10) << "Iftar" << endl;
    cout << "---------------------------------------------\n";

    string weekDays[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    string sehriTimes[30] = {
        "05:25", "05:25", "05:23", "05:23", "05:22", "05:22", "05:20", "05:20", "05:18", "05:17",
        "05:15", "05:15", "05:12", "05:12", "05:10", "05:10", "05:08", "05:08", "05:06", "05:06",
        "05:03", "05:02", "05:01", "04:59", "04:58", "04:57", "04:56", "04:55", "04:53", "04:52"
    };
    string iftarTimes[30] = {
        "06:01", "06:01", "06:03", "06:03", "06:04", "06:04", "06:06", "06:06", "06:07", "06:08",
        "06:09", "06:09", "06:11", "06:11", "06:12", "06:12", "06:13", "06:13", "06:15", "06:15",
        "06:16", "06:16", "06:17", "06:18", "06:19", "06:19", "06:20", "06:20", "06:21", "06:21"
    };

    for (int i = 1; i <= 30; i++) {
        string dayName = weekDays[(startDay - 1) % 7];
        cout << left << setw(10) << i << setw(12) << dayName 
             << setw(10) << sehriTimes[i-1] << setw(10) << iftarTimes[i-1] << endl;
        startDay++;
    }

    cout << "---------------------------------------------\n";
    cout << "Ramzan Mubarak! Stay Blessed ----\n";
    return 0;
}

/* 
OUTPUT

?? RAMZAN CALENDAR GENERATOR ??
Enter starting day of Ramzan (1 = Monday, 2 = Tuesday ... 7 = Sunday): 4

Ramzan Calendar (30 Days)
---------------------------------------------
Day       Weekday     Sehri     Iftar
---------------------------------------------
1         Thursday    05:25     06:01
2         Friday      05:25     06:01
3         Saturday    05:23     06:03
4         Sunday      05:23     06:03
5         Monday      05:22     06:04
6         Tuesday     05:22     06:04
7         Wednesday   05:20     06:06
8         Thursday    05:20     06:06
9         Friday      05:18     06:07
10        Saturday    05:17     06:08
11        Sunday      05:15     06:09
12        Monday      05:15     06:09
13        Tuesday     05:12     06:11
14        Wednesday   05:12     06:11
15        Thursday    05:10     06:12
16        Friday      05:10     06:12
17        Saturday    05:08     06:13
18        Sunday      05:08     06:13
19        Monday      05:06     06:15
20        Tuesday     05:06     06:15
21        Wednesday   05:03     06:16
22        Thursday    05:02     06:16
23        Friday      05:01     06:17
24        Saturday    04:59     06:18
25        Sunday      04:58     06:19
26        Monday      04:57     06:19
27        Tuesday     04:56     06:20
28        Wednesday   04:55     06:20
29        Thursday    04:53     06:21
30        Friday      04:52     06:21
---------------------------------------------
Ramzan Mubarak! Stay Blessed ----

--------------------------------
Process exited with return value 0

*/