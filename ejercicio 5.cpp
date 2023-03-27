#include <bits/stdc++.h>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    int n;  cin >> n;
    vector<Date> dates(n);

    for (int i = 0; i < n; i++) {
        cin >> dates[i].day >> dates[i].month >> dates[i].year;
    }

    sort(dates.begin(), dates.end());

    for (int i = 0; i < n; i++) {
        cout << dates[i].day << " " << dates[i].month << " " << dates[i].year << endl;
    }

    return 0;
}