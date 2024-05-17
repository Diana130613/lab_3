#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Rectangle 
{
private:
    int x1, y1, x2, y2;
public:
    Rectangle() : x1(0), y1(0), x2(0), y2(0) {}
    Rectangle(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}
    // деструктор для освобождения памяти
    ~Rectangle() {
        cout << "Объект класса Rectangle уничтожен" << endl;
    }
    int calculateSquare() {
        int width = abs(x2 - x1);
        int height = abs(y2 - y1);
        return width * height;
    }
    string getInfo() {
        ostringstream oss;
        oss << "Прямоугольник с координатами (" << x1 << ", " << y1 << ") и (" << x2 << ", " << y2 << ")";
        return oss.str();
    }
};

int main() {
    setlocale(LC_ALL, "ru");

    Rectangle rectangle1(10, 10, 30, 30);
    cout << "Площадь прямоугольника : " << rectangle1.calculateSquare() << endl;
    cout << "Информация о прямоугольнике: " << rectangle1.getInfo() << endl;

    return 0;
}