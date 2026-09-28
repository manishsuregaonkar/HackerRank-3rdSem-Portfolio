#include <iostream>
#include <string>
using namespace std;

int main() {
    string time;
    cin >> time;

    int hour = stoi(time.substr(0, 2));
    string period = time.substr(8, 2);

    if (period == "AM") {
        if (hour == 12)
            hour = 0;
    } 
    else {
        if (hour != 12)
            hour += 12;
    }

    cout << (hour < 10 ? "0" : "") << hour
         << time.substr(2, 6);

    return 0;
}
