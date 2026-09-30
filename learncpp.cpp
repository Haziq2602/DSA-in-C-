#include <iostream>
using namespace std;

int main() {

  int age = 0;
  cin >> age;

  if (age >= 18) {
    cout << "You're an Adult.";
  } else {
    cout << "You're not an Adult.";
  };

  return 0;
}