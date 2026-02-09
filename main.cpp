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
    // Basic tests
    for (int i = 0; i < 4; i++) {
        cout << "Enter data for Restaurant " << (i + 1) << ": " << endl;
        Restaurant tempRest = getRestaurantInfo();
        displayRestaurantInfo(tempRest);
    }
    return 0;
}
// This function returns a struct filled with data from user 
Restaurant getRestaurantInfo(){
    Restaurant temp;
    cout << "Enter restaurant name: ";
    cin >> temp.name; 
    cout << "Enter restaurant cuisine: ";
    cin >> temp.cuisineType;
    cout << "Enter restaurant city: ";
    cin >> temp.city;
    cout << "How many years the restaurant has been in business for: ";
    cin >> temp.yearsInBusiness;
    cout << "Enter restaurant rating: ";
    cin >> temp.rating;
    return temp;
}

// This function displays restaurant info
void displayRestaurantInfo(const Restaurant &rest) {
    cout << "Restaurant info: " << endl;
    cout << "Restaurant name: " << rest.name << endl;
    cout << "Restaurant cuisine: " << rest.cuisineType << endl;
    cout << "Restuarant city: " << rest.city << endl;
    cout << "Restaurant years in business: " << rest.yearsInBusiness << endl;
    cout << "Restaurant rating: " << rest.rating << endl;
}
