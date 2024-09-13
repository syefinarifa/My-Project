#include <iostream>
#include <cmath> // To use the M_PI constant

using namespace std;

// Function to calculate the volume of a sphere
double calculateVolume(double radius) {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

// Function to calculate the surface area of a sphere
double calculateSurfaceArea(double radius) {
    return 4 * M_PI * pow(radius, 2);
}

int main() {
    double radius;
    
    // Asking user to input the radius
    cout << "Enter the radius of a sphere: ";
    cin >> radius;
    
    // Calculate volume and surface area
    double volume = calculateVolume(radius);
    double surfaceArea = calculateSurfaceArea(radius);
    
    // Display the results
    cout << "The volume of the sphere is: " << volume << endl;
    cout << "The surface area of the sphere is: ";
    
    return 0;
}