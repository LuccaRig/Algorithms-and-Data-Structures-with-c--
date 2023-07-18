#include <iostream>
using std::string;

//Classes are non-basic variables
class Planet{
//To acess the class proprieties from a function the proprieties need to be public
public:
    string Name;
    string SolarSystem;
    int Radius;

//Class Methods are functions that creates the behavior of some class
    void PlanetCharacteristics(){
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Solar System Name: " << SolarSystem << std::endl;
        std::cout << "Radius: "<< Radius << std::endl;
    }
    //If you want to create a specified construct method or inicialization you need to create a function like this:
    Planet(string name, string solar_system, int radius){
        Name = name;
        SolarSystem = solar_system;
        Radius = radius;
    }
};

int main(){
    //Variable inicialization like: int A;
    
    /* Basic Construct inicialization:
    Planet planeta1;
    planeta1.Name = "Saturno";
    planeta1.SolarSystem = "Sistema Solar";
    planeta1.Radius = 582326;*/

    //Especified constructor inicialization:
    Planet planeta1 = Planet("Saturno", "Sistema Solar", 582326);
    Planet planeta2 = Planet("Netuno", "Sistema Solar", 24000);

    //Calling the method
    planeta1.PlanetCharacteristics();
    planeta2.PlanetCharacteristics();

    
    return 0;
}