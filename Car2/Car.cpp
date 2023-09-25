//
//  Car.cpp
//  Car1
//

//

#include "Car.hpp"
#include <iostream>
using namespace std;
Car::Car()
{
//    char* model=nullptr;
//    char*colour=nullptr;
//    int year=0;
//    double price=0;
}
Car::Car(const char* m, const char* c, int y, double pr)
{
    this->model=new char[strlen(m)+1];
    strcpy(this->model, m);
    
    this->color=new char[strlen(m)+1];
    strcpy(this->color, c);
    
    this->price=pr;
    this->year=y;
}
Car::~Car()
{
    delete[]this->model;
    delete[]this->color;
}
void Car::Input()
{
    char buff[20];
    cout<<"Input model: ";
    cin>>buff;
    if (this->model!=nullptr)
    {
        delete[]this->model;
    }
    model=new char[strlen(buff)+1];
    strcpy(model, buff);
    
    cout<<"Input color: ";
    cin>>buff;
    if (this->color!=nullptr)
    {
        delete[]this->color;
    }
    color=new char[strlen(buff)+1];
    strcpy(color, buff);
    
    cout<<"Input year: ";
    cin>>this->year;
    cout<<"Input price: ";
    cin>>this->price;
    
    
}
void Car::Print()
{
    cout<<this->model<<endl;
    cout<<this->color<<endl;
    cout<<this->year<<endl;
    cout<<this->price<<endl;
}
char* Car::GetModel()
{
    return this->model;
}
char* Car::GetColor()
{
    return this->color;
}
int Car::GetYear()
{
    return this->year;
}
double Car::GetPtice()
{
    return this->price;

}
void Car::SetModel(const char* m)
{
    if (this->model!=nullptr)
    {
        delete[]this->model;
    }
    this->model=new char[strlen(m)+1];
    strcpy(this->model, m);
}
void Car::SetColor(const char* c)
{
    this->color=new char[strlen(c)+1];
    strcpy(this->color, c);
}
void Car::SetYear(int y)
{
    this->year=y;
}
void Car::SetPrice(double pr)
{
    this->price=pr;
}
