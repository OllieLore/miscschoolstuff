#ifndef HORSEH
#define HORSEH

#include <string>
using namespace std;

class Horse{
    
    public:

    Horse();
    Horse(string breed, string name, double weight, char gender, string fertility, string regID, string color, string miscellaneous);
    string GetBreed();
    void SetBreed(string breed);
    double GetWeight();
    void SetWeight(double weight);
    string GetName();
    void SetName(string name);
    char GetGender();
    void SetGender(char gender);
    string GetFertility();
    void SetFertility(string fertility);
    string GetRegistrationID();
    void SetRegistrationID(string regID);
    string GetColor();
    void SetColor(string color);
    string GetMiscellaneous();
    void SetMiscellaneous(string miscellaneous);
    void PrintInfo();


    private:
    string breed = "Pinto";
    string name = "Epona";
    double weight = 777.77;
    char gender = 'F';
    string fertility = "Fertile";
    string regID = "MVP1";
    string color = "Brown";
    string miscellaneous = "Link's Horse";

};

#endif