#include "../src/header.hpp"

#include <iostream>
using namespace std;

int main(){

float a = 3.5, b = 1.5;
    if ((add(a,b)) != 5){
        cerr << "FAIL: wrong number" << endl;
        return 1;
    }
    
    if ((sub(a,b)) != 2){
        cerr << "FAIL: wrong number" << endl;
        return 1;
    }

    
    cout << "OK" << endl;
        
    return 0;
       
}