#include <iostream>
using namespace std;

int main(){
   int b[3][2] = {{3,2},
                  {6,5},
                  {8,7}};

   cout << sizeof(b) << endl;

   cout << sizeof(b+0) << endl;

   cout << sizeof((b+0)+0) << endl;

   cout << sizeof(*(b+0)) << endl;

   cout << " b is: " << b << endl;

   cout << "b+1 is: " << b+1 << endl;

   cout << "&b is: " << &b << endl;

   cout << "&b+1 is: " << &b+1 << endl;

    return 0;
}