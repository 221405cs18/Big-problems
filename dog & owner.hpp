//
//  dog & owner.hpp
//  1fp
//
//  Created by Fayzulla Asatullaev on 25/02/23.
//

#ifndef dog___owner_hpp
#define dog___owner_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Dog{
private:
    string name;
    string breed;
    int energy;
    int age;
    float size;
    string color;
public:
    Dog(){};
    Dog(string n,string b,int e,int a,float s,string c);
    
    //Setter functions
    void setName(string n);
    void setBreed(string b);
    void setEnergy(int e);
    void setAge(int a);
    void setSize(float s);
    void setColor(string c);
    
    //Getter functions
    string getName();
    string getBreed();
    int getEnergy();
    int getAge();
    float getSize();
    string getColot();
    
    void setDetails();
    void printDetails();
    void walk(int minutes);
    void sleep(int minutes);
    void bark();
    void eat();
    
};

class Owner{
private:
    string name;
    int age;
    int phoneNumber;
    string dogName;
public:
    Owner(){}
    Owner(string n,int a, int pn, string dn);
    
    //Setter functions
    void setName(string name);
    void setAge(int age);
    void setPhoneNumber(int phoneNumber);
    void setDogName(string dogName);
    
    
    //Getter functions
    string getName();
    int getAge();
    int getPhoneNumber();
    string getDogName();
    
    //set and print
    void setDetails();
    void printDetails();
};

struct Pair{
    string ownerName;
    string dogName;
};

#endif /* dog___owner_hpp */
