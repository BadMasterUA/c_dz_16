#include<iostream>

using namespace std;

//базовый обстрактный класс
class Vehicle
{
public:
    Vehicle(){}
    virtual ~Vehicle(){}
    virtual int GetSpeed() = 0;
    virtual int GetPassengers() = 0;
};

//класс Car потомок
class Car : public Vehicle
{
public:
    Car(int speed, int pas) : itsSpeed(speed), itsPassengers(pas){}
    ~Car(){}
    int GetSpeed() { return itsSpeed; } //описываем функцию для Car
    int GetPassengers() {return itsPassengers; }
    virtual int GetMaxSpeed() = 0;

private:
    int itsSpeed;
    int itsPassengers;
    //int itsMaxSpeed;
};
//класс Bus потомок
class Bus : public Vehicle
{
public:
    Bus(int speed, int pas) : itsSpeed(speed), itsPassengers(pas){}
    ~Bus(){}
    int GetSpeed() { return itsSpeed; } //описываем функцию для Car
    int GetPassengers() {return itsPassengers; }

private:
    int itsSpeed;
    int itsPassengers;
};

int main()
{
    //test
    Car *myCar = nullptr;
    myCar = new Car(200, 2);
    return 0;
}