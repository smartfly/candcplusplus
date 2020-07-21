//
// Created by smartfly on 2020/7/8.
//

#include <iostream>

struct inflatable {             // struct definition
    char name[20];
    float volume;
    double price;
};

int main() {
    using namespace std;

    auto *ps = new inflatable;                          //allot memory for structure
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);                           // method 1 for member access
    cout << "Enter  volume in cubic feet: ";
    cin >> (*ps).volume;                                // method 2 for member access
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;                 // method2
    cout << "Volume: " << ps->volume << " cubic feet\n";    //method1
    cout << "Price: $" << ps->price << endl;                 //method1
    delete ps;
    return 0;
}