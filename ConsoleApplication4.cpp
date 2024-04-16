#include <iostream>
#include <Windows.h>

class Animal {
protected:
    int x, y;

public:
    Animal(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

    void move() {
        ++x;
        ++y;
    }

    void printCoordinates() {
        std::cout << "Current coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};

class Lion : public Animal {
private:
    int age;
    float weight;

public:
    Lion(int xCoord, int yCoord, int lionAge, float lionWeight) : Animal(xCoord, yCoord), age(lionAge), weight(lionWeight) {}

    void roar() {
        std::cout << "Ррраааррр!" << std::endl;
    }
};

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Lion lion(0, 0, 5, 150.5);

    std::cout << "Кординати до початку руху:" << std::endl;
    lion.printCoordinates();

    lion.move();

    std::cout << "Кординати після початку руху:" << std::endl;
    lion.printCoordinates();

    lion.roar();

    return 0;
}
