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
    Restaurant myRest = getRestaurantInfo();
    cout << myRest.name << endl;
    cout << myRest.city << endl;
    return 0;

}

Restaurant getRestaurantInfo(){
    Restaurant temp;
    cout << "Enter restaurant name: " << endl;
    cin >> temp.name; 
    cout << "Enter restaurant cuisine: " << endl;
    cin >> temp.cuisineType;
    cout << "Enter restaurant city: " << endl;
    cin >> temp.city;
    cout << "How many years the restaurant has been in business for: " << endl;
    cin >> temp.yearsInBusiness;
    cout << "Enter restaurant rating: " << endl;
    cin >> temp.rating;
    return temp;
}
