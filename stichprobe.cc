#include <iostream> //Ausgabe ins Terminal
#include <fstream> //Eingabe aus Datei
#include <cmath> //Mathefunktionen
using namespace std; 

int main () { //beginne Funktion


//Start Aufgabe 1a

ifstream fin ("datensumme.txt"); //aus datensumme.txt einlesen

double N=0; //Definieren der Variable N
double a=0; //Definieren der Variable a für den Mittelwert
double sm=0; //Definieren der Variable sm

for (int i=1;i<=234;i++) { //Schleife zum Füllen der Variable mit Werten aus Zeile 1 bis 234 in ganzen Schritten

fin >> N; //Wert an i'ter Stelle in Variable N schreiben
sm+=N; //Summe der Einträge in datensumme.txt berechnen

}; //Schleife beenden

a=(sm/234.0); //Summe durch Anzahl der Einträge teilen und in a schreiben

cout << a << endl; //Mittelwert ausgeben

fin.close(); //Eingabedatei schließen 


//Start Aufgabe 1b: Varianz

fin.open("datensumme.txt"); //erneut aus datensumme.txt einlesen

double V=0; //Definieren der Variable V für die Varianz
N=0; //Variable N zurücksetzen
sm=0; //Variable sm zurücksetzen

for (int i=1;i<=234;i++) { //Schleife zum Füllen der Variable mit Werten aus Zeile 1 bis 234 in ganzen Schritten

fin >> N; //Werte an i'ter Stelle in Variable N schreiben
sm+=pow(N-a, 2); //Summe der Quadrate von N minus dem Mittelwert berechnen


}; //Schleife beenden

V=(sm/234.0); //Summe durch Anzahl der Einträge teilen und in V schreiben

cout << V << endl; //Varianz ausgeben


//Start Aufgabe 1c: Standardabweichung

double sigma=0; //Definieren der Variable sigma für die Standardabweichung

sigma = sqrt (V); //Die Wurzel aus der Varianz ziehen und in sigma schreiben

cout << sigma << endl; //Die Standardabweichung ausgeben

fin.close(); //Eingabedatei schließen

} ; //beende Funktion