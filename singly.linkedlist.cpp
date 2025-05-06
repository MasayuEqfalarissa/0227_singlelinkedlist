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

