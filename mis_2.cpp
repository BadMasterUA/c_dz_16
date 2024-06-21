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
    //специально сделал функцию для замещения
    virtual void VehicleColor() = 0;
};

void Vehicle::VehicleColor()
{
    cout << "Vehicle has white color.\n";
}

//класс Car потомок
class Car : public Vehicle
{
public:
    Car(int speed, int pas) : itsSpeed(speed), itsPassengers(pas){}
    ~Car(){}
    int GetSpeed() { return itsSpeed; } //описываем функцию для Car
    int GetPassengers() {return itsPassengers; }
    virtual int GetMaxSpeed() = 0;
    void VehicleColor();

private:
    int itsSpeed;
    int itsPassengers;
    //int itsMaxSpeed;
};

void Car::VehicleColor()
{
    cout << "Car has sports red color!\n";
    Vehicle::VehicleColor();
}
//класс Bus потомок
class Bus : public Vehicle
{
public:
    Bus(int speed, int pas) : itsSpeed(speed), itsPassengers(pas){}
    ~Bus(){}
    int GetSpeed() { return itsSpeed; } //описываем функцию для Car
    int GetPassengers() {return itsPassengers; }
    void VehicleColor();

private:
    int itsSpeed;
    int itsPassengers;
};

//класс SportCar
class SportCar : public Car
{
public:
    SportCar(int speed, int pas, int maxSpeed) : Car(speed, pas), itsMaxSpeed(maxSpeed){}
    ~SportCar(){}
    int GetMaxSpeed() { return itsMaxSpeed; }

private:
    int itsSpeed;
    int itsPassengers;
    int itsMaxSpeed;
};

//класс Wagon
class Wagon : public Car
{
public:
    Wagon(int speed, int pas, int maxSpeed) : Car(speed, pas), itsMaxSpeed(maxSpeed){}
    ~Wagon(){}
    int GetMaxSpeed() { return itsMaxSpeed; }

private:
    int itsSpeed;
    int itsPassengers;
    int itsMaxSpeed;
};

//класс Coupr 
class Coupr : public Car
{
public:
    Coupr(int speed, int pas, int maxSpeed) : Car(speed, pas), itsMaxSpeed(maxSpeed){}
    ~Coupr(){}
    int GetMaxSpeed() { return itsMaxSpeed; }

private:
    int itsSpeed;
    int itsPassengers;
    int itsMaxSpeed;
};

int main()
{
    //test
    return 0;
}