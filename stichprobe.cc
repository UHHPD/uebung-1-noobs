#include <iostream> //Ausgabe ins Terminal
#include <fstream> //Eingabe aus Datei
using namespace std; 

int main () { //beginne Funktion

ifstream fin ("datensumme.txt"); //aus datensumme.txt einlesen

int N=0; //Definieren der Variable N
double a=0; //Definieren der Variable a für den Mittelwert
int sm=0; //Definieren der Variable sm

for (int i=1;i<=234;i++) { //Schleife zum Füllen der Variable mit Werten aus Zeile 1 bis 234 in ganzen Schritten

fin >> N; //Wert an i'ter Stelle in Variable N schreiben
sm+=N; //Summe der Einträge in datensumme.txt berechnen

}; //Schleife beenden

a=(sm/234.0); //Summe durch Anzahl der Einträge teilen und in a schreiben

cout << a << endl; //Mittelwert ausgeben


} ; //beende Funktion