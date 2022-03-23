#include <iostream>
using namespace std;

int main() {
  // BMI calculator
  // weight(kg)/height * height(m)
  // Underweight 18.5
  // Normal weight 18.5-24.9
  // Overweight >25
  float weight, height, bmi; // bmi = weight(kg)/height * height(m)
  cout << "Enter your weight(kg): ";
  cin >> weight;
  cout << "Enter your height(m): ";
  cin >> height;
  bmi = weight / (height * height); // essential brackets

  // this if else statement is more precise:
  if (bmi < 18.5)
    cout << "you are underweight" << endl;
  else if (bmi > 25)
    cout << "you are overweight" << endl;
  else
    cout << "you are normal weight" << endl;

  cout << "Your BMI is: " << bmi << endl;
}
