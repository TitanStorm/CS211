#include <iostream>
#include <vector>
using namespace std;

int main() {
vector <int> v; //v is an empty vector
v.push_back(1); //add one element to the end of the vector
cout << v.size() << endl; //now the size of the vector is 1
for (int i = 0; i < 10; i++) //use a for loop to add 5 elements in to

v.push_back(i);
cout << v.size() << endl; //now the size of the vector is 6
for (int i = 0; i < 11; i++){
    cout << v[i];

} //print all the elements inside the

cout << endl;

v.pop_back(); //remove last element but not return.
for (int i = 0;i < v.size(); i++) //equivalent methods: v[i] == v.at(i);
cout << v[i];
cout << endl;
cout << v.back(); //return the last element but not remove it.
cout << v.front(); //return the first element but not remove it.
return 0;
}
