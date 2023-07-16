#include <iostream>
using std::string;

//Classes are non-basic variables
class Planet{
//To acess the class proprieties from a function the proprieties need to be public
public:
    string name;
    string SolarSystem;
    int radius;

//Class Methods are functions that creates the behavior of some class
    void PlanetCharacteristics(){
        std::cout << "Name: " << name << std::endl;
        std::cout << "Solar System Name: " << SolarSystem << std::endl;
        std::cout << "Radius: "<< radius << std::endl;
    }
};

int main(){
    //Variable inicialization like: int A;
    Planet planeta1;
    planeta1.name = "Saturno";
    planeta1.SolarSystem = "Sistema Solar";
    planeta1.radius = 582326;

    //Calling the method
    planeta1.PlanetCharacteristics();

    
    return 0;
}