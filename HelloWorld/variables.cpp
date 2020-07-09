#include <iostream>

using namespace std;

int x;
int y, z;


int a = 0;
int b = 0;

int main()
{
  int width(5);
  cout << width << endl;
  width = width + 5;
  cout << width << endl;


  int height{6};
  cout << height << endl;
  height = {10};
  cout << height << endl;


  cout << "Zahl 1: \n";
  cin >> a;
  cout << "Zahl 2: \n";
  cin >> b;

  int ergebnis = a + b;
  cout << "Ergebnis: " <<  ergebnis;

  cin;
  return 0;
}
