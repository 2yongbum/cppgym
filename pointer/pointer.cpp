#include <iostream>

using namespace std;

struct AAA
{
    int a;
    int b;
    int c;
    int d;
    int e;
};

int change(void *ppp)
{
    AAA* aaa = (AAA*)ppp;
    cout << "a: " << aaa->a << endl;
    cout << "b: " << aaa->b << endl;
    aaa->a=30;
    aaa->b=40;
}

int main()
{
    int a = 10;
    int *b = &a;

    cout << "a: " << a << endl;
    cout << "b: " << *b << endl;

    *b=20;
    cout << "a: " << a << endl;



    AAA aaa;
    aaa.a=10;
    aaa.b=20;
    change(&aaa);
    cout << "a: " << aaa.a << endl;
    cout << "b: " << aaa.b << endl;

    cout << "size aaa: " << sizeof(aaa) << endl;
    cout << "size aaa: " << sizeof(&aaa) << endl;

    return 0;
}
