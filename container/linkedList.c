#include <stdio.h>

typedef struct AAA
{
    int a;
    AAA* next;
} AAA;

void printAll(AAA* ccc)
{
    while (ccc)
    {
        printf("a:%d\n", ccc->a);
        ccc = ccc->next;
    }
}

int main()
{
    AAA *aaa = (AAA*)malloc(sizeof(AAA));
    aaa->a = 10;
    aaa->next = NULL;

    AAA *bbb = (AAA*)malloc(sizeof(AAA));
    bbb->a = 20;
    bbb->next = NULL;

    printAll(aaa);
    return 0;
}