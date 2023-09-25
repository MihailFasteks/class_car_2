//
//  Car.hpp
//  Car1
//

//

#ifndef Car_hpp
#define Car_hpp

//#include <stdio.h>

#endif /* Car_hpp */

#pragma once
class Car
{
    char* model;
    char* color;
    int year;
    double price;
public:
    Car();
    Car(const char* m, const char* c, int y, double pr);
    ~Car();
    void Input();
    void Print();
    
    char* GetModel();
    char* GetColor();
    int GetYear();
    double GetPtice();
    
    void SetModel(const char* m);
    void SetColor(const char* c);
    void SetYear(int y);
    void SetPrice(double pr);
};
