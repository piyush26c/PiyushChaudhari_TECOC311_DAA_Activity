/**
 *    author:  Piyush Rajendra Chaudhari
 *    created: 02.04.2020 18:01:16       
**/
#include <bits/stdc++.h>
using namespace std;

vector<string> numbers = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "forteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty"};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int hr, min;
    cin >> hr >> min;
    if(min == 0) {
        cout << numbers[hr - 1] << " o' clock" << "\n";
    } else if(min < 15) {
        cout << numbers[min] << " minute" << (min == 1 ? " " : "s ") << "past " << numbers[hr - 1] << "\n";
    } else if(min == 15) {
        cout << "quarter past " << numbers[hr - 1] << "\n";
    } else if(min < 30) {
        if(min < 20) {
            cout << numbers[min - 1] << " minute" << (min == 1 ? " " : "s ") << " past " << numbers[hr - 1] << "\n";
        } else {
            cout << numbers[min/10 + 17];
            if(min % 10 != 0) {
                cout << " " << numbers[min%10 - 1];
            }
            cout << " minutes" << " past " << numbers[hr - 1] << "\n";
        }
    } else if(min == 30) {
        cout << "half past " << numbers[hr - 1] << "\n";
    } else {
        if(min == 45) {
            cout << "quarter to " << numbers[hr] << "\n";
        } else {
            min = 60 - min;
            if(min < 20) {
                cout << numbers[min-1] << " minute" << (min == 1 ? " " : "s ") << "to " << numbers[hr] << "\n";
            } else {
                cout << numbers[min/10 + 17];
                if(min % 10 != 0) {
                    cout << " " << numbers[min%10 - 1];
                }
                cout << " minutes" << " to " << numbers[hr] << "\n";
            }
        }
    }
    return 0;
}
