#include <iostream> \\Ausgabe ins Terminal
#include <fstream> \\Ausgabe Datei
using namespace std;

int main () { \\beginne Funktion

ifstream fin ("daten.txt"); \\aus daten.txt einlesen
ofstream fout ("datensumme.txt"); \\in datensumme.txt ausgeben

int nr1; \\Definieren der ersten Variable
int nr2; \\Definieren der zweiten Varbiable
int sm; \\Definieren der Bezeichnung für die Summe

for (int zeile=1;zeile<=234;zeile++) { \\Schleife zum Füllen der Variablen mit Werten aus Zeile 1 bis 234 in ganzen Schritten

fin >> nr1; \\Wert an erster Stelle in Variable 1 schreiben
fin >> nr2; \\Wert an zweiter Stelle in Variable 2 schreiben
sm = nr1 + nr2; \\Variable 1 und 2 summieren und in sm schreiben

fout << sm << '\n'; \\Summe ausgeben

}

fin.close(); \\Eingabedatei schließen 
fout.close(); \\Ausgabedatei schließen

} ;