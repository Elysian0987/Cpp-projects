#include <iostream>
using namespace std;

double celsius_to_fahrenheit(double celsius){
    return (celsius * 9/5) + 32;
}
void convertCelsiusToFahrenheit() {
    double celsius;
    cout<<"Enter value in Celsius : ";
    cin>>celsius;
    double fahrenheit = celsius_to_fahrenheit(celsius);
    cout<<celsius<<" Celsius is "<<fahrenheit<<" Fahrenheit."<<endl;
};    
double fahrenheit_to_celsius(double fahrenheit){
    return (fahrenheit - 32) * 5/9;
}
void convertFahrenheitToCelsius(){
    double fahrenheit;
    cout<<"Enter value in Fahrenheit : ";
    cin>>fahrenheit;
    double celsius = fahrenheit_to_celsius(fahrenheit);
    cout<<fahrenheit<<" Fahrenheit is "<<celsius<<" Celsius."<<endl;
};
int main() {
    int choice;
    cout<<"Temperature converter Menu : "<<endl;
    cout<<"1. Celsius to Fahrenheit. "<<endl;
    cout<<"2. Fahrenheit to Celsius. "<<endl;
    while (1) {
        cout<<"Enter choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
            convertCelsiusToFahrenheit();
            break;
            case 2:
            convertFahrenheitToCelsius();
            break;
            default:
            cout << "Invalid choice." << endl;
            break;
        }
    }
    return 0;
}