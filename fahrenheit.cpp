#include <iostream>

using namespace std;

double fahrenheit2celsius(double farenheit) {
        double celsius = (farenheit - 32) * 5/9;
        return celsius;
}

int main() {

    cout << "Enter a temperature in Fahrenheit: ";
    double temp_fahrenheit;
    cin >> temp_fahrenheit;
    cout << "Temperature in celsius: " << fahrenheit2celsius(temp_fahrenheit);
    
    return 0;

}



 
