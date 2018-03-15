#include "StackV.h"
#include <string>
#include <iostream>

using namespace std;

int Stack::size()
{

int i = 0;
i = data.size();

return i;
}



void Stack::push(int node)
{

int i = 0;
i = node;
data.push_back(i);

}


void Stack::pop()
{

data.pop_back();

}

int Stack::top()
{
int i(0), a(0);
i = data.size();

cout<<"top of stack is #" << i << " " <<"Which contains: " << data[i] << endl;

a = data[i];

return a;
}


void Stack::clear()
{
int i(0);
i = data.size();

cout << "Destroying Data....." << endl;

for (int b = 0; b < i; b++)
{

data.pop_back();

}

cout<< "Done. " << endl;
}

