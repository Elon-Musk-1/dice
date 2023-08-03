#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  // Seed the random number generator.
  srand(time(0));

  // Roll the dice.
  int die1 = rand() % 6 + 1;
  int die2 = rand() % 6 + 1;

  // Display the results.
  cout << "You rolled a " << die1 << " and a " << die2 << "." << endl;

  // Calculate the total.
  int total = die1 + die2;

  // Display the total.
  cout << "The total is " << total << "." << endl;

  return 0;
}
