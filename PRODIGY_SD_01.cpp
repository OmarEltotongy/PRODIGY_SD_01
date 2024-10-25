/*
 * PRODIGY_SD_01.cpp
 *
 *  Created on: Oct 25, 2024
 *  Author: Omar Eltoutongy
 */

#include <iostream>
using namespace std;

/*Prototypes of functions*/
void Convert_from_Celsius(float temp);
void Convert_from_Fahrenheit(float temp);
void Convert_from_Kelvin(float temp);

/*Global Variables*/
int ProgramFlag = 1;
int continue_flag = 0;

int main()
{
    cout << "Welcome to Converter Program\n";

    do
    {
        cout << "Press 1 to Convert Temp\nPress 2 to Exit the Program\n";
        cin >> continue_flag;

        if (continue_flag == 1)
        {

            cout << "Please Enter a Temperature: ";

            float temp = 0;

            while (!(cin >> temp)) 
            { 
                cout << "Invalid input. Please enter a valid number for temperature: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            cout << "Is this Temperature in Celsius or Fahrenheit or Kelvin scales?\n"
                "For Celsius enter c\nFor Fahrenheit enter f\nFor Kelvin enter k\n"
                "Temperature is in: \n";

            char Temperature_type;
            cin >> Temperature_type;

            if (Temperature_type == 'c' || Temperature_type == 'C')
            {
                Convert_from_Celsius(temp);
            }
            else if (Temperature_type == 'f' || Temperature_type == 'F')
            {
                Convert_from_Fahrenheit(temp);
            }
            else if (Temperature_type == 'k' || Temperature_type == 'K')
            {
                Convert_from_Kelvin(temp);
            }
            else
            {
                cout << "Please Enter a Valid Charachter\n";
            }


        }
        else if (continue_flag == 2)
        {
            cout << "\nSee u again soon ... ";
            ProgramFlag = 0;
        }
        else
        {
            cout << "Invalid input.Please press 1 to convert temperature or 2 to exit.\n";
        }
        
    } while (ProgramFlag != 0);
}

void Convert_from_Celsius(float temp)
{
    float Celsius_to_Fahrenheit = (temp * 9 / 5) + 32;
    float Celsius_to_Kelvin = temp + 273.15;

    cout << "From Celsius to Fahrenheit: " << Celsius_to_Fahrenheit <<endl;
    cout << "From Celsius to Kelvin: " << Celsius_to_Kelvin <<endl;

}

void Convert_from_Fahrenheit(float temp)
{
    float Fahrenheit_to_Celsius = (temp - 32 ) * 5/9;
    float Fahrenheit_to_Kelvin = ((temp - 32) * (5.0 / 9.0) + 273.15  );

    cout << "From Fahrenheit to Celsius:   " << Fahrenheit_to_Celsius <<endl;
    cout << "From Fahrenheit to Kelvin:   " << Fahrenheit_to_Kelvin <<endl;
}

void Convert_from_Kelvin(float temp)
{
    float Kelvin_to_Celsius = temp - 273.15 ;
    float Kelvin_to_Fahrenheit = ((temp - 273.15) * (9.0 / 5.0) + 32);

    cout << "From Kelvin to Celsius:   " << Kelvin_to_Celsius << endl;
    cout << "From Kelvin to Fahrenheit:   " << Kelvin_to_Fahrenheit << endl;

}
