#include <iostream> //Ausgabe ins Terminal
#include <fstream> //Eingabe aus Datei
#include <cmath> //Mathefunktionen
using namespace std; 

int main () { //beginne Funktion


//Start Aufgabe 2a: Mittelwerte

ifstream fin ("datensumme.txt"); //aus datensumme.txt einlesen
ifstream fin2 ("datensumme.txt"); //erneut aus datensumme.txt einlesen
ofstream fout ("mittelwerte.txt"); //in mittelwerte.txt ausgeben

double N=0; //Definieren der Variable N
double a=0; //Definieren der Variable a für den Mittelwert
double sm=0; //Definieren der Variable sm

for (int j=1;j<=26;j++) { //Schleife für die 26 Mittelwerte beginnen

  for (int i=1;i<=9;i++) { //Schleife für's Bilden der Mittelwerte von immer neun aufeinander folgende Zahlenwerten beginnen

    fin >> N; //Wert an i'ter Stelle in Variable N schreiben
    sm+=N; //Summe der Einträge in datensumme.txt berechnen

  }; //Schleife für's Bilden der Mittelwerte von immer neun aufeinander folgende Zahlenwerten beenden

  a=(sm/9.0); //Summe durch Anzahl der Einträge teilen und in a schreiben

  fout << a << endl; //Mittelwert ausgeben

  sm=0; //Variable sm zurücksetzen

}; //Schleife für die 26 Mittelwerte beenden

fin.close(); //Eingabedatei schließen 
fout.close(); //Ausgabedatei schließen


//Aufgabe 2a: Varianzen

fin.open("datensumme.txt"); //erneut aus datensumme.txt einlesen
fout.open("varianzen.txt"); //in varianzen.txt ausgeben

double V=0; //Definieren der Variable V für die Varianz
N=0; //Variable N zurücksetzen
sm=0; //Variable sm zurücksetzen
a=0; //Variable a zurücksetzen

for (int j=1;j<=26;j++) { //Schleife für die 26 Varianzen beginnen

  for (int i=1;i<=9;i++) { //Schleife für's Bilden der Mittelwerte von immer neun aufeinander folgende Zahlenwerten beginnen

    fin >> N; //Werte an i'ter Stelle in Variable N schreiben
    sm+=N; //Summe der Einträge in datensumme.txt berechnen

  }; //Schleife beenden

  a=(sm/9.0); //Summe durch Anzahl der Einträge teilen und in a schreiben

  sm=0; //Variable sm zurücksetzen
  N=0; //Variable N zurücksetzen

  for (int k=1;k<=9;k++) { //Schleife für's Bilden der Varianzenn von immer neun aufeinander folgende Zahlenwerten beginnen

    fin2 >> N; //Werte an k'ter Stelle in Variable N schreiben
    sm+=pow(N-a, 2); //Summe der Quadrate von N minus dem Mittelwert berechnen

  }; //Schleife für's Bilden der Varianzenn von immer neun aufeinander folgende Zahlenwerten beenden  

  V=(sm/9); //Summe durch Anzahl der Einträge teilen und in V schreiben

  fout << V << endl; //Varianz ausgeben

  sm=0; //Variable sm zurücksetzen

}; //Schleife für die 26 Varianzen beenden

fout.close(); //Ausgabedatei schließen
fin.close(); //Eingabedatei schließen
fin2.close(); //weitere Eingabedatei schließen


//Start Aufgabe 2b

ifstream fin3("mittelwerte.txt"); //aus mittelwerte.txt einlesen

N=0; //Variable N zurücksetzen
sm=0; //Variable sm zurücksetzen
a=0; //Variable a zurücksetzen

for (int l=1;l<=26;l++) { //Schleife zum Füllen der Variable mit Werten aus Zeile 1 bis 26 in ganzen Schritten

  fin3 >> N; //Wert an l'ter Stelle in Variable N schreiben
  sm+=N; //Summe der Einträge in mittelwerte.txt berechnen

}; //Schleife beenden

a=(sm/26.0); //Summe durch Anzahl der Einträge teilen und in a schreiben

cout << a << endl; //Mittelwert ausgeben

fin3.close(); //Eingabedatei schließen

ifstream fin4("varianzen.txt"); //aus varianzen.txt einlesen

V=0; //Variable V zurücksetzen
N=0; //Variable N zurücksetzen
sm=0; //Variable sm zurücksetzen

for (int m=1;m<=26;m++) { //Schleife zum Füllen der Variable mit Werten aus Zeile 1 bis 26 in ganzen Schritten

  fin4 >> N; //Werte an m'ter Stelle in Variable N schreiben
  sm+=N; //Summe der Quadrate von N minus dem Mittelwert berechnen

}; //Schleife beenden

V=(sm/26.0); //Summe durch Anzahl der Einträge teilen und in V schreiben

cout << V << endl; //Varianz ausgeben

fin4.close(); //Eingabedatei schließen


} ; //beende Funktion