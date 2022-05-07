#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <math.h> // 平方 开方
using namespace std;

/*
even odd teller
shape of triangle
BMI Calculator
guest number
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
  }
}

void exGuestNumber() {
  int hostUserNum, guestUserNum;
  printf("Enter a host number:\n");
  cin >> hostUserNum;
  system("clear");
  printf("Enter a guest number:\n");
  cin >> guestUserNum;

  if (guestUserNum == hostUserNum)
    printf("Correct.\n");
  else
    printf("Failed.\n");
}

int main() {
  //   exEvenOdd();
  //   exTriangleShape();
  // exBMICalculator();
  // exGuestNumber();
}
