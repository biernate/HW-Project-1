/**
 *    @file: HWProject1.cc
 *  @author: Evan Biernat
 *    @date: 9/8/2025         
 *   @brief:  this is a program that will calculate the gas consumption for a trip given the
 *  number of miles driven in town and on the highway, which are user inputs.
 *  
 */
#include <iostream>
using namespace std;
///These two constants will be used alongside user input for miles driven to calculate all of the gas consumption
const float townMilesPerGallon = 22.5;
const float highwayMilesPerGallon = 29.5;
int main() {
///These two floats will be assigned user input in order to be used for calculations alongside the global constants
  float milesDrivenTown;
  float milesDrivenHighway;
  cout << "Enter number of miles driven in the town: ";
  ///User input for miles driven in town
  cin >> milesDrivenTown;
  /// If the miles driven are negative, an error is given and the user is prompted to change their input
  if (milesDrivenTown < 0) {
    cout << "ERROR: Please enter a number greater than or equal to 0" << endl;
    return 0;
  }
 
  cout << "Enter number of miles driven on the highway: ";
  ///User input for miles driven on highway
  cin >> milesDrivenHighway;
  /// If the miles driven are negative, an error is given and the user is prompted to change their input
  if (milesDrivenTown < 0) {
    cout << "ERROR: Please enter a number greater than or equal to 0" << endl;
    return 0;
  }
  ///Total miles driven = miles driven on highway and town combined
  float totalMilesDriven = milesDrivenHighway + milesDrivenTown;
  ///Gas used in town = miles driven in town times mpg for town
  float gasUsedTown = milesDrivenTown / townMilesPerGallon;
  ///Gas used in highway = miles driven in highway times mpg for highway
  float gasUsedHighway = milesDrivenHighway / highwayMilesPerGallon;
  ///Total gas used = gas used on highway and town combined
  float totalGasUsed = gasUsedTown + gasUsedHighway;
  ///Average miles per gallon calculation
  float avgMilesPerGallon = totalMilesDriven / totalGasUsed;
  cout << "Gas Consumption" << endl;
  cout << "Number of miles driven in town: " << milesDrivenTown << " miles" << endl;
  cout << "Amount of gas used in town: " << gasUsedTown << " gallons" << endl;
  cout << "Number of miles driven on highway: " << milesDrivenHighway << " miles" << endl;
  cout << "Amount of gas used on highway: " << gasUsedHighway << " gallons" << endl;
  cout << "Total amount of gas used: " << totalGasUsed << " gallons" << endl;
  cout << "Total miles driven: " << totalMilesDriven << " miles" << endl;
  if (totalGasUsed == 0){
    cout << "The average miles per gallon cannot be calculated." << endl;
    return 0;
  } else {
    cout << "The average miles per gallon for the trip" << avgMilesPerGallon << " miles/gallon" << endl;
  }
  


  return 0;
}
