#include <iostream>
using namespace std;

class Fruit
{
public:
    virtual const char* color() = 0;
    virtual int sweet() = 0;
    void taste()
    {
        if (sweet()>5)
            cout << "good" << endl;
        else
            cout << "bad" << endl;
    }
};

class Apple : public Fruit
{
public:
    const char* color() { return "Apple is red."; }
    int sweet() { return 4; }
};

class Banana : public Fruit
{
public:
    const char* color() { return "Banana is yellow.";}
    int sweet() { return 6; }
};

int main(int argc, char const *argv[])
{
    Fruit* fruit1 = new Apple();
    Fruit* fruit2 = new Banana();

    cout << "hello" << endl;
    cout << "fruit1 color: " << fruit1->color() << endl;
    cout << "fruit2 color: " << fruit2->color() << endl;

    fruit1->taste();
    fruit2->taste();
    return 0;
}
