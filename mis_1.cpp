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

private:
    int itsSpeed;
    int itsPassengers;
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
    myCar = new Car(120, 4);
    cout << "Car max speed: " << myCar->GetSpeed() << " kl/h" << endl;
    cout << "Car has " << myCar->GetPassengers() << " passengers." << endl;
    delete myCar;

    cout << "\n";

    Bus *myBus = nullptr;
    myBus = new Bus(90, 21);
    cout << "Bus max speed: " << myBus->GetSpeed() << " kl/h" << endl;
    cout << "Bus has " << myBus->GetPassengers() << " passengers." << endl;
    delete myBus;

    return 0;
}