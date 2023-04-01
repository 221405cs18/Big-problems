//
//  dog & owner.cpp
//  1fp
//
//  Created by Fayzulla Asatullaev on 25/02/23.
//

#include "dog & owner.hpp"
#include <string>

//class Owner
Dog::Dog(string n,string b, int e, int a,float s,string c){
    name=n;
    breed=b;
    energy=e;
    age=a;
    size=s;
    color=c;
}

//setters
void Dog::setName(string n){
    getline(cin, name);
}
void Dog::setBreed(string b){
    getline(cin, breed);
}
void Dog::setEnergy(int e){
    cin >> energy;
}
void Dog::setAge(int a){
    cin >> age;
}
void Dog::setSize(float s){
    cin >> size;
}
void Dog::setColor(string c){
    getline(cin, color);
}

//getters
string Dog::getName(){
    return name;
}
string Dog::getBreed(){
    return breed;
}
int Dog::getEnergy(){
    return energy;
}
int Dog::getAge(){
    return age;
}
float Dog::getSize(){
    return size;
}
string Dog::getColot(){
    return color;
}

//set and print
void Dog::setDetails(){
    //cout << endl;
//    cout << "\tEnter the dog name: " << endl;
//    getline(cin, name);
//    getline(cin, breed);
//    cin >> energy;
//    cin >> age;
//    cin >> size;
//    cin >> color;
    
    cout << "Enter name: ";
            getline(cin, name);
            //cout << "Enter breed: ";
            getline(cin, breed);
            //cout << "Enter energy level: ";
            cin >> energy;
            //cout << "Enter age: ";
            cin >> age;
            //cout << "Enter size: ";
            cin >> size;
            cin.ignore(); // to ignore the newline character left by previous input
            //cout << "Enter color: ";
            getline(cin, color);
}
void Dog::printDetails(){
//    cout << name << endl;
//    cout << breed << endl;
//    cout << energy << endl;
//    cout << age << endl;
//    cout << size << endl;
//    cout << color << endl;
    
    cout << "Name: " << name << endl;
            cout << "Breed: " << breed << endl;
            cout << "Energy level: " << energy << endl;
            cout << "Age: " << age << endl;
            cout << "Size: " << size << endl;
            cout << "Color: " << color << endl;
}
void Dog::walk(int minutes){
    for(int i = 1; i <= minutes; i++){
        energy=energy-2;
    }
    if(energy <= 0){
        cout << energy << " " << Dog::getName() << " " << "Dog needs some sleep!";
    } else {
        cout << energy << " " << Dog::getName();
    }
}
void Dog::sleep(int minutes){
    if(energy != 100){
        for(int i = 1; i <= minutes; i++){
        energy=energy+3;
    }
    if(energy > 100){
        energy = 100;
    }
        cout << energy << " " << Dog::getName();
    } else {
        cout << energy << " " << Dog::getName() ;
    }
}
void Dog::bark(){
    cout << "Bowwow!" << " " << Dog::getName();
}
void Dog::eat(){
    size=size+0.5;
    cout << size << " " << getName();
}


//class Owner
Owner::Owner(string n,int a, int pn,string dn){
    name=n;
    age=a;
    phoneNumber=pn;
    dogName=dn;
}

//setters
void Owner::setName(string n){
    getline(cin,name);
}
void Owner::setAge(int a){
    cin >> age;
}
void Owner::setPhoneNumber(int pn){
    cin >> phoneNumber;
}
void Owner::setDogName(string dn){
    getline(cin,dogName);
}

//getters
string Owner::getName(){
    return name;
}
int Owner::getAge(){
    return age;
}
int Owner::getPhoneNumber(){
    return phoneNumber;
}
string Owner::getDogName(){
    return dogName;
}

//set and print
void Owner::setDetails(){
//    cout << endl;
//    cout << "\tEnter the owner name: " << endl;
//    getline(cin, name);
//    cin >> age;
//    cin >> phoneNumber;
//    getline(cin, dogName);
    
    cout << "Enter name: ";
    getline(cin, name);
    //cout << "Enter age: ";
    cin >> age;
    //cout << "Enter phoneNumber: ";
    cin >> phoneNumber;
    cin.ignore();
    //cout << "Enter dogName: ";
    getline(cin, dogName);
}
void Owner::printDetails(){
//    cout << name << endl;
//    cout << age << endl;
//    cout << phoneNumber << endl;
//    cout << dogName << endl;
    
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "PhoneNumber: " << phoneNumber << endl;
    cout << "DogName: " << dogName << endl;
    
}
