#include <stdio.h>
#include <stdlib.h>

typedef struct _AAA
{
    int a;
    int a;
    int a;
    int a;
    int a;
    int a;
    int a;
    int a;
    int a;
    int a;
    int a;
    int a;
    int a;
    int a;
    int a;
    int a;
    int a;
    int a;
    int a;
    struct _AAA* next;
} AAA;

void printOne(AAA* ccc, int k)
{
    while (ccc)
    {
        if (ccc->a != k)
        {
            ccc = ccc->next;
            continue;
        }
        printf("a:%d\n", ccc->a);
        ccc = ccc->next;
    }
}

void deleteAll(AAA* ccc, int k)
{
    while (ccc)
    {
        if (ccc->a != k)
        {
            ccc = ccc->next;
            continue;
        }
        printf("a:%d\n", ccc->a);

        ccc = ccc->next;
    }
}

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
    aaa->next = bbb;

    AAA *ccc = (AAA*)malloc(sizeof(AAA));
    ccc->a = 30;
    //ccc->next = NULL;
    bbb->next = ccc;

    AAA *ddd;
    printf("dddd:%p\n", ddd);
    ccc->next = ddd;

    printAll(aaa);
    printOne(aaa, 20);
    deleteOne(aaa, 20);
    return 0;
}
