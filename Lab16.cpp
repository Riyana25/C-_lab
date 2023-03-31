#include<iostream>
using namespace std;
class Vehicle{
    
   
    public:
     char vehicleType;
    void getType(void);
    
};
void Vehicle ::getType(void)
{
    cout<<"Enter the type of vehicle either it to be riding/flying/floating"<<endl;
    cin>>vehicleType;
     
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
    
     getType();
    if(vehicleType == 'R')
    {
        cout<<"It's a car"<<endl;
        cout<<"Enter the amount of fuel used by car"<<endl;
    cin>>fuelCar;
    }
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
    getType();
    if(vehicleType == 'B')
    {
        cout<<"It's a boat"<<endl;
        cout<<"Enter the amount of fuel used by boat"<<endl;
        cin>>fuelBoat;
    }
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
    getType();
    if(vehicleType == 'A')
    {
        cout<<"It's a aeroplane"<<endl;
        cout<<"Enter the amount of fuel used by aeroplane"<<endl;
    cin>>fuelAero;
    }
    

}
void Aeroplane :: displayAero()
{
     cout<<"The amount of fuel used by aeroplane"<<endl<<fuelAero<<endl;

}

int main()
{
    Car c;
    c.readCar();
    c.displayCar();
    Boat b;
    b.readBoat();
    b.displayBoat();
    Aeroplane a;
    a.readAero();
    a.displayAero();

    return 0;
}
