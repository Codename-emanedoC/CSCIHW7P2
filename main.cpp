#include <iostream>
using namespace std;
void time(double s);
int main() {

  double s;

  cin >> s;

  time(s);
}

void time(double s) {
  double Hours, Min;

  Hours = s / 3600;
  Min = s / 60;

  cout << "Hours = " << Hours << " Min = " << Min << " Secs = " << s;
}