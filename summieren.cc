#include <iostream>
#include <fstream>
using namespace std;

int main () {

ifstream fin ("daten.txt");

int nr1;
int nr2;
int sm;

for (int zeile=1;zeile<=234;zeile++) {

fin >> nr1;
fin >> nr2;
sm = nr1 + nr2;

cout << sm << '\n';

}

} ;