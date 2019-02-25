#include <iostream>
using namespace std;

class Fruit
{
public:
    virtual const char* color() = 0;
};

class Apple : public Fruit
{
public:
    const char* color() { return "Apple is red."; }
};

class Banana : public Fruit
{
public:
    const char* color() { return "Banana is yellow.";}
};

int main(int argc, char const *argv[])
{
    Fruit* fruit1 = new Apple();
    Fruit* fruit2 = new Banana();

    cout << "hello" << endl;
    cout << "fruit1 color: " << fruit1->color() << endl;
    cout << "fruit2 color: " << fruit2->color() << endl;
    return 0;
}
