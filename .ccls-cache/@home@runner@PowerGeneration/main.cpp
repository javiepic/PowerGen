#include <iostream>
using namespace std;
const float  g = 9.81;
//Functions
int powerGen(double, int, int, int, double );

int main() {
  double P;
  powerGen(P);

  return 0;
}
int powerGen(double P, int p, int Q, double H)
{
  cin >> P >> p >> Q >> H;
  P = p * Q * H * g;
  
  return P;
}