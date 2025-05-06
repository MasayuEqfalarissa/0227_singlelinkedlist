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

