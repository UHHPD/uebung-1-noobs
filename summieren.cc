#include <iostream>
#include <fstream>
using namespace std;

int main () {

ifstream fin ("daten.txt");

int nr1;
int nr2;
int sm;
fin >> nr1;
fin >> nr2;
sm = nr1 + nr2;

cout << sm << '\n';

} ;