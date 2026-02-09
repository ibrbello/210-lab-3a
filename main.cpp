// COMSC-210 | Lab 3A | Ibrahim Bello
// Description: This program defines a struct named Restaurant and creates 2 functions: 
// one to receive input from the console and another to display the restaurant 
// information in a formatted manner.
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

// Step 1: Create a Struct named Restaurant
struct Restaurant {
    string name;
    string cuisineType;
    string city;
    int yearsInBusiness;
    double rating;
};

// Step 2: Prototype of function to receive input from the console
Restaurant getRestaurantInfo();

// Step 3: Prototype of function to display restaurant information
void displayRestaurantInfo(const Restaurant &rest);

int main() {
    Restaurant myRest = getRestaurantInfo();
    cout << myRest.name;
    return 0;
}

Restaurant getRestaurantInfo(){
    Restaurant temp;
    cout << "Enter restaurant name: " << endl;
    cin >> temp.name; 
}
