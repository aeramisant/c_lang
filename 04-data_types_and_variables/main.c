#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// enum menu {
//   TEA = 12,
//   COFFEE = 43,
//   JUICE = 11,
//   BEER,
// };

// Months of the year (1-12)
// enum months {
//   JANUARY = 1,
//   FEBRUARY,
//   MARCH,
//   APRIL,
//   MAY,
//   JUNE,
//   JULY,
//   AUGUST,
//   SEPTEMBER,
//   OCTOBER,
//   NOVEMBER,
//   DECEMBER,
// };

// typedef enum {
//   TEA,
//   COFFEE,
//   JUICE,
//   WATER,
// } Drinks;

// typedef enum {
//   NONE = 0,
//   LOW = 5,
//   MEDIUM = 9,
//   HIGH = 12,
//   MAXIMUM = 20
// } ThrustLevels;

int main(void) {

  // unsigned int students = 25U;
  // unsigned long long int worldPopulation = 7801235945ULL;

  // printf("%12u | Students in the class\n", students);
  // printf("%12llu | World population now\n", worldPopulation);

  // uint8_t count = UINT8_MAX;
  // printf("%12u | Count...\n", count);
  // count = count + 1;
  // printf("%12u | Count...+1 (OVERFLOW)\n", count);

  // printf("%12d | INT32_MIN\n", INT32_MIN);
  // printf("%12d | INT32_MAX\n", INT32_MAX);
  // printf("%12u | INT32_MIN\n", UINT32_MAX);

  //////////////////////////////////////////

  // /* 1.23456789 */
  // double decimalDigits = 1.23456789;
  // /* 7.801 x 10^9 */
  // double worldPopulation1 = 7.809E9;
  // /*  6.26 x 10^ -34*/
  // double plankConstant;

  // printf("%12.1f | 1 decimal digit\n", decimalDigits);
  // printf("%12.3f | 3 decimal digit\n", decimalDigits);
  // printf("%12.1f | 1 decimal digit of precision world population:\n",
  //        worldPopulation1);
  // printf("%12.1e | Scientific 1 digit of precision world population:\n",
  //        worldPopulation1);
  // printf("%12.3e | Scientific 3 digit of precision world population:\n",
  //        worldPopulation1);
  // printf("%12.1E | Plank Constant, scientific, 1 digit of precision\n",
  //        plankConstant);
  // printf("%12.2E | Plank Constant, scientific, 3 digit of precision\n",
  //        plankConstant);

  //////////////////CHARACTERS////////////////////////////////

  // char c = 'A';

  // printf("char c: %d\n", c);
  // printf("char c: %c\n", c);

  // c = 66;
  // printf("char c: %c\n", c);

  // // Accquire user input
  // printf("Enter a character:");
  // c = getchar();
  // printf("You entered: %c\n", c);
  // c = getchar();
  // printf("You entered: %c\n", c);

  //////////////////BOOLEANS////////////////////////////////

  // bool a = true;
  // bool b = false;

  // printf("a (true):   %d\n", a);
  // printf("b (false):  %d\n", b);

  //////////////////ENUMERATIONS////////////////////////////////

  // enum menu mario = JUICE;
  // enum menu angela = BEER;

  // printf("Mario chose:  ...%d\n", mario);
  // printf("Angela chose: ...%d\n", angela);

  // // Example usage of enum months
  // enum months current = SEPTEMBER;
  // printf("Month number:  %d\n", current);

  //////////////////TYPEDEF////////////////////////////////

  // int number = 0xff;

  // printf("NUmber: %d\n", number);

  // Drinks tea = TEA;
  // printf("Drink:  ...%d\n", tea);

  ///////////////////////////CHALLENGE//////////////////////////////////

  // ThrustLevels thrust = NONE;
  // printf("Ready to go to level: %d\n", thrust);
  // thrust = LOW;
  // printf("Ready to go to level: %d\n", thrust);
  // thrust = MEDIUM;
  // printf("Ready to go to level: %d\n", thrust);
  // thrust = HIGH;
  // printf("Ready to go to level: %d\n", thrust);
  // thrust = MAXIMUM;
  // printf("Ready to go to level: %d\n", thrust);
  const int moonLanding = 1969;
  const double speedOfLight = 299792458.;
  const double pi = 3.14;
  const unsigned hexaDead = 0xDEADU;
  const unsigned int hexaSecret = 51966;

  printf("Moonlanding %10d\n %010d\n", moonLanding, moonLanding);

  printf(" Speed of light >>> scientific notation with 3 digit of precision: "
         "%.3e\n , %.0f\n",
         speedOfLight, speedOfLight);

  printf("Pi: \n %.2f\n %+.1e\n\n", pi, pi);
  printf("Hexa dead: \n 0x%X\n %6u\n\n", hexaDead, hexaDead);
  printf("Hexa Secret: %x\n", hexaSecret);

  printf("\n\n===End of programme...===\n\n");
  return EXIT_SUCCESS;
}
