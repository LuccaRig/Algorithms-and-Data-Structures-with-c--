#include <iostream>
using std::string;

//The Functionality of Encapspsulation is to stitch together data and methods that operetes on that data
//With that you can make sure that anything can direct acess and modify the data

class Planets{
//Every class in c++ is private by default, but is good to specify
//Private means that no one can acess this proprieties outside the class
private:
    string Name;
    string SolarSystem;
    int Radius;
public:
    
    /* Tredicional constructors are inacessible here, so are necessary getters and setters to acess the data
        void PlanetCaracteristics(){
        std::cout << Name << std::endl;
        std::cout << SolarSystem << std::endl;
        std::cout << Radius << std::endl;
    }
    Planets(string name, string solar_system, int radius){
        Name = name;
        SolarSystem = solar_system;
        Radius = radius;
    }*/
    
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setSolarsystem(string solar_system){
        SolarSystem = solar_system;
    }
    string getSolarSystem(){
        return SolarSystem;
    }
    void setRadius(int radius){
        //You can create conditions to acess or modify some characteristics of you class
        if(radius >= 10000){
        Radius = radius;
        }
    }
    int getRadius(){
        return Radius;
    }

};




int main(){

    /* Basic Construct inicialization is inacessible here becuse the proprieties of the class are private
    Planets planeta1;   
    planeta1.Name = "Saturno";
    planeta1.SolarSystem = "Sistema Solar";
    planeta1.Radius = 582326;
    Thist one too:
    Planets planeta1;
    planeta1.PlanetCaracteristics();*/

    Planets planet1;
    planet1.setRadius(23000);
    planet1.setName("Saturno");
    planet1.setSolarsystem("Solar");
    std::cout << "The Planet " << planet1.getName() << " Is on " << planet1.getSolarSystem() << ", and has: " << planet1.getRadius();  
    

    return 0;
}