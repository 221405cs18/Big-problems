//
//  main.cpp
//  1fp
//
//  Created by Fayzulla Asatullaev on 25/02/23.
//

#include <iostream>
#include "dog & owner.hpp"
using namespace std;



int main(int argc, const char * argv[]) {
    
    Dog d("Beethoven","Saint Bernard" ,100,1,19.5,"Brown");
    d.printDetails ();
    cout <<"----------------------"<<endl;
    d.walk (5);
    cout <<"----------------------"<<endl;
    d.sleep (2);
    cout <<"----------------------"<<endl;
    d.bark();
    cout <<"----------------------"<<endl;
    d.eat();
    cout <<"----------------------"<<endl;
    d.printDetails ();
    cout <<"*------------------------------------------*"<<endl;
    
    Owner o("Jack" ,25,99891,"Beethoven");
    o.printDetails ();
    cout <<"----------------------"<<endl;
    cout <<"*------------------------------------------*"<<endl;
    
    Pair p[4];
    Dog d1[4];
    Owner o1[4];

    cout << endl <<"Dog: -->" << endl;
    for(int i = 0; i < 4; i++) {
        d1[i].setDetails();
    }
    
    cout << endl << "Owner: -->" << endl;
    for(int i = 0; i < 4; i++){
        o1[i].setDetails();
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if (o1[i].getDogName() == d1[j].getName()) {
                p[i].dogName = d1[j].getName();
                p[i].ownerName = o1[i].getName();
                cout << "Owner name is: " << p[i].ownerName << " his dog name is: "<< p[i].dogName << endl;
                break;
            }
        }
    }
    
    cout<<endl;
    return 0;
}
