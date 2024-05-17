#include <iostream>
#include <sstream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h, int m) : hours(h), minutes(m) {}

    string getInfo() {
        stringstream ss;
        ss << "Часы: " << hours << ", Минуты: " << minutes;
        return ss.str();
    }

    void TotalMinutes() {
        int totalMinutes = hours * 60 + minutes;
        cout << "Общее количество минут: " << totalMinutes << endl;
    }
};

int main() {
    setlocale(LC_ALL, "ru");
    int hours, minutes;

    cout << "Введите количество часов: ";
    cin >> hours;

    cout << "Введите количество минут: ";
    cin >> minutes;

    Time timeObj(hours, minutes);

    cout << timeObj.getInfo() << endl;
    timeObj.TotalMinutes();

    return 0;
}
