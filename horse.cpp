#include "horse.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Horse::Horse(string breed, string name, double weight, char gender, string fertility, string regID, string color, string miscellaneous){
    this-> breed = breed;
    this-> name = name;
    this-> weight = weight;
    this-> gender = gender;
    this-> fertility = fertility;
    this-> regID = regID;
    this-> color = color;
    this-> miscellaneous = miscellaneous;
}

string Horse::GetBreed(){
    return breed;
}

void Horse::SetBreed(string breed){
    this-> breed = breed;
}

string Horse::GetName(){
    return name;
}

void Horse::SetName(string name){
    this-> name = name;
}

double Horse::GetWeight(){
    return weight;
}

void Horse::SetWeight(double weight){
    this-> weight = weight;
}

char Horse::GetGender(){
    return gender;
}

void Horse::SetGender(char gender){
    this-> gender = gender;
}

string Horse::GetFertility(){
    return fertility;
}

void Horse::SetFertility(string fertility){
    this-> fertility = fertility;
}

string Horse::GetRegistrationID(){
    return regID;
}

void Horse::SetRegistrationID(string regID){
    this-> regID = regID;
}

string Horse::GetColor(){
    return color;
}

void Horse::SetColor(string color){
    this-> color = color;
}

string Horse::GetMiscellaneous(){
    return miscellaneous;
}

void Horse::SetMiscellaneous(string miscellaneous){
    this-> miscellaneous = miscellaneous;
}

void Horse::PrintInfo(){
    cout << "Name: " << name << endl;
    cout << "Breed: " << breed << endl;
    cout << "Weight: " << weight << endl;
    cout << "Gender: " << gender << endl;
    cout << "Fertility: " << fertility << endl;
    cout << "RegistrationID: " << regID << endl;
    cout << "Color: " << color << endl;
    cout << "Miscellaneous: " << miscellaneous << endl;
};