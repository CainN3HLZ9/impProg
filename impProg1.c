#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void clearBuffer() {
  int buffer;
  while ((buffer = getchar()) != '\n' && buffer != EOF);
}
float scanNums(){
  float num;
  bool validInput = false;
  while (validInput == false) {
    if (scanf("%f", &num) == 1){
      validInput = true;
      clearBuffer();
      return num;
    }
    else {
      clearBuffer();
      printf("Please enter the data in the requested form: \n");
    }
  }
}
void feladat1() {
  printf("1. Feladat: \n");
  printf("Molnár István Viktor\n");
  printf("---------------------------------------------------\n\n");
}
void feladat2() {
  printf("2. Feladat: \n");
  int num1, num2, sum;

  printf("Please type the 1st interger number:\n");
  num1 = (int)scanNums();
  printf("Please type the 2st interger number:\n");
  num2 = (int)scanNums();
  printf("The sum of the two number is: %d\n",sum = num1+num2);
  printf("---------------------------------------------------\n\n");
}
void feladat3() {
  printf("3. Feladat: \n");
  float num1, num2;
  printf("Please type the 1st number:\n");
  num1 = scanNums();
  printf("Please type the 2st interger number:\n");
  num2 = scanNums();
  float div = num1 / num2;
  printf("Result (with 2 decimal places): %.2f\n",div);
  printf("Result (in interger): %d\n",(int)div);
  printf("---------------------------------------------------\n\n");
}
void feladat4() {
  printf("4. Feladat: \n");
  float aRectangle, bRectangle, areaRectangle, circumferenceRectangle, circleR, circleArea, circleCircumference;
  const float pi = 3.1415;
  printf("Please type the size of the \"a\" side of the rectangle:\n");
  aRectangle = scanNums();
  printf("Please type the size of the \"b\" side of the rectangle:\n");
  bRectangle = scanNums();
  printf("The area of the rectangle is: %.4f\n and the circumference is: %.4f\n", areaRectangle = aRectangle * bRectangle, circumferenceRectangle = (2*aRectangle)+(2*bRectangle));

  printf("Please type the size of the \"R\" of the circle:\n");
  circleR = scanNums();
  printf("The area of the circle is: %.4f\n and the circumference is: %.4f\n", circleArea = pi*circleR*circleR, circleCircumference = 2 * pi * circleR);
  printf("---------------------------------------------------\n\n");
}
void feladat5(){
  char name[50];
  printf("Type your name here:\n");
  fgets(name, sizeof(name), stdin);
  printf("Congratulation you know your own name, which is oBViOusLy:\n %s\n", name);
}
void feladat6(){
  int years = 0, weeks = 0;
  printf("Please enter the number of days: \n");
  float days = scanNums();
  while(days != 0){
    if (days / 365 >= 1) {
      years = days / 365;
      days -= years * 365;
    }
    else if (days / 52 >= 1){
      weeks = days / 52;
      days -= weeks * 52;
    }
    else {
      break;
    }
  }
  printf("The typed days equals %i year(s), %i week(s) and %i days\n",years, weeks, days);
}
int main() {
//  feladat1();
//  feladat2();
//  feladat3();
//  feladat4();
//  feladat5();
//  feladat6();
  return 0;
}
