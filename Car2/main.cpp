//
//  main.cpp
//  Car1
//

//

#include <iostream>
#include "Car.hpp"
using namespace std;
int main() {

    Car a("Audi A5", "White", 2021, 24000);
    char* model=a.GetModel();
    cout<<model<<endl;
    
    
    
    return 0;
}

