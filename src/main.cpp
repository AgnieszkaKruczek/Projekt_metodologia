#include <iostream>
#include "header.hpp"

using namespace std;

int main(){
cout << "Addition and substraction" << endl;

cout << "Enter first number: " << endl;
float a;
cin >> a;
cout << "Enter second number: " << endl;
float b;
cin >> b;
cout << "The result of addition is " << add(a,b) << endl;
cout << "The result of substraction is " << sub(a,b) << endl;

return 0;
}