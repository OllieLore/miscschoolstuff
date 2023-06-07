#include "horse.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string breed;
    string name;
    double weight;
    char gender;
    string fertility;
    string regID;
    string color;
    string miscellaneous;
    const int numElements = 3;
    vector <Horse> horseList;
    unsigned int i;

    Horse newHorse = Horse("Pinto", "Epona", 777.77, 'F', "fertile", "MVP1", "Brown", "Link's Horse");
    for(i = 0; i < 4; ++i){
        cout << "Horse Breed?" << endl; 
        cin >> breed;
        newHorse.SetBreed(breed);
        horseList.push_back(newHorse);
        
        cout << "Name?" << endl;
        cin >> name;
        newHorse.SetName(name);
        horseList.push_back(newHorse);

        cout << "Weight?" << endl;
        cin >> weight;
        newHorse.SetWeight(weight);
        horseList.push_back(newHorse);

        cout << "Gender? Please Type F for female or M for male." << endl;
        cin >> gender;
        newHorse.SetGender(gender);
        horseList.push_back(newHorse);


        cout << "Fertile? Please Type Fertile or Sterile." << endl;
        cin >> fertility;
        newHorse.SetFertility(fertility);
        horseList.push_back(newHorse);

        cout << "RegistrationID?" << endl;
        cin >> regID;
        newHorse.SetRegistrationID(regID);
        horseList.push_back(newHorse);

        cout << "Color?" << endl;
        cin >> color;
        newHorse.SetColor(color);
        horseList.push_back(newHorse);

        cout << "Other Comments?" << endl;
        cin >> miscellaneous;
        newHorse.SetMiscellaneous(miscellaneous);
        horseList.push_back(newHorse);

        
    
    newHorse.PrintInfo();
    }

    horseList.clear();

    return 0;
}