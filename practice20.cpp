
#include<iostream>
using namespace std;
class Vehicle{
    
   
    public:
     char vehicleType;
    void readType();
    void displayType();
};
void Vehicle ::readType()
{
    cout<<"Enter the type of vehicle either it to be riding/flying/floating"<<endl;
    cin>>vehicleType;
    

}
void Vehicle :: displayType()
{
    cout<<"the type of vehicle either it to be riding/flying/floating"<<vehicleType<<endl;
    


}
class Car : public Vehicle{
    protected:
    int fuelCar;

    public:
    void readCar();
    void displayCar();
};
void Car :: readCar()
{
    cout<<"Enter the amount of fuel used by car"<<endl;
    cin>>fuelCar;

}
void Car :: displayCar()
{
    cout<<"The amount of fuel used by car"<<endl<<fuelCar<<endl;

}
class Boat : public Vehicle{
    protected:
    int fuelBoat;
    public:
    void readBoat();
    void displayBoat();
};
void Boat :: readBoat()
{
    cout<<"Enter the amount of fuel used by boat"<<endl;
    cin>>fuelBoat;

}
void Boat :: displayBoat()
{
     cout<<"The amount of fuel used by boat"<<endl<<fuelBoat<<endl;

}
class Aeroplane : public Vehicle{
    protected:
    int fuelAero;
    public:
    void readAero();
    void displayAero();
};
void Aeroplane :: readAero()
{
    cout<<"Enter the amount of fuel used by aeroplane"<<endl;
    cin>>fuelAero;

}
void Aeroplane :: displayAero()
{
     cout<<"The amount of fuel used by aeroplane"<<endl<<fuelAero<<endl;

}

int main()
{
    Vehicle v;
    v.readType();
    v.displayType();
    Car c;
    // c.readType();
    // c.displayType();
    // c.readCar();
    // c.displayCar();
    Aeroplane a;
    // a.readAero();
    // a.displayAero();
    Boat b;
    // b.readBoat();
    // b.displayBoat();
    switch(v.vehicleType)
    {
        case 'R':
        c.readCar();
        c.displayCar();
        break;
        case 'A':
        a.readAero();
        a.displayAero();
        break;
        case 'B':
        b.readBoat();
        b.displayBoat();
        break;
    }


    return 0;

}