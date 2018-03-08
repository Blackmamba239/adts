#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...

 L1.insert(2,1);
 L1.insert(4,2);
 L1.insert(6,3);
 L1.insert(8,4);

 L1.size();
 L1.empty();


 L2.insert(1,1);
 L2.insert(3,2);
 L2.insert(7,3);
 L2.insert(11,4);
 L2.insert(2,5);

 L2.size();
 L2.empty();


}
