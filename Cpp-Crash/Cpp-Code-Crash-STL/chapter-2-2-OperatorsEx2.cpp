#include <cstdio>
#include <iostream>
#include <math.h> // 平方 开方
using namespace std;

/*
even odd teller
shape of triangle
BMI Calculator
*/
void exEvenOdd() { // determine whether the number is even or odd
  int number;
  printf("Please enter a number:\n");
  cin >> number;
  if (number % 2 == 0) {
    printf("%d is an even number.\n", number);
  } else {
    printf("%d is an odd number.\n", number);
  }
}

void exTriangleShape() { //输入三角形三边长度，让程序判定这个三角形
  float a, b, c;
  printf("Please enter the triangle's each side:\n");
  cin >> a >> b >> c;
  if (a == b && b == c)
    printf("This is an equilateral triangle.\n");

  else {
    if (a != b && b != c && a != c)
      printf("This is a scalene triangle.\n");
    else
      printf("This is an isosceles triangle.\n");
  }
}

void exBMICalculator() {
  // BMI calculator
  // weight(kg)/height * height(m)
  // Underweight 18.5
  // Normal weight 18.5-
  float weight, height, bmi;
  // bmi = weight(kg) / height ** 2(m)
  printf("Please enter your height(M):\n");
  cin >> height;
  printf("Please enter your weight(Kg):\n");
  cin >> weight;
  bmi = weight / pow(height, 2);
  if (bmi < 18.5)
    printf("You are underweight.\n");

  else {
    if (bmi > 25)
      printf("You are overwieight.\n");
    else
      printf("You are normalweight");
    // // this if else statement is more precise:
    // if (bmi < 18.5)
    //   cout << "you are underweight" << endl;
    // else if (bmi > 25)
    //   cout << "you are overweight" << endl;
    // else
    //   cout << "you are normal weight" << endl;
  }
}

int main() {
  //   exEvenOdd();
  //   exTriangleShape();
  exBMICalculator();
}
