#include <iostream>
#include <string.h>
using namespace std;

class node 
{
public : 
    int nomhs;
    node *next;
};

class linkedlist 
{
    node *start ;

public: 
    linkedlist ()
    {
        start = NULL;
    }

    void addnode()
    {
        int nim;
        cout << "\nmasukkan nomor mahasiswa: ";
        cin >> nim;

        node *nodebaru = new node;
        nodebaru -> nomhs = nim;

        if (start == NULL || nim <= start -> nomhs)
        {
            if ((start != NULL) && (nim == start -> nomhs))
            {
                cout<< "\nduplikat nomhs tidak diijinkan\n";
                return;
            }
            nodebaru -> next = start;
            start = nodebaru;
            return;
        }
        node *previous = start;
        node *current = start;

        while ((current != NULL ) && (nim >= current -> nomhs))
        {
            if (nim == current -> nomhs)
            {
                cout << "\nduplikat nomhs tidak diijinkan\n";
                return;
            }
            previous = current;
            current = current -> next;
        }

        nodebaru -> next = current;
        previous -> next = nodebaru;
    }

    bool listempty()
    {
        return (start == NULL);
    }

    bool search(int nim, node **previous, node **current)
    {
        *previous = start;
        *current = start;
        while ((*current != NULL) && (nim != (*current) -> nomhs))
        {
            *previous = *current;
            *current = (*current)->next;
         }

         return (*current != NULL);
    }

