# fgets
Bei **fgets()** handelt es sich um eine Funktion aus der
stdio.h Library. Die **Aufgabe** von fgets() ist es von
einem spezifizierten Input-File so lange zu lesen, bis
entweder das **Ende eines vorher spezifizierten
Buffers**, 
ein **newline** Character oder **EOF** erreicht ist.

fgets() liest dabei **nur Char-Texteingaben**. 

## Parameter
fgets muss mit **drei** Parametern aufgerufen werden:
1. *str

> fgets benötigt einen Zeiger auf einen
vorher erstellten Pufferbereich um
die Eingaben abzuspeichern.

2. count

> Dient zur Spezifizierung der maximalen Länge des
einzugebenden Strings. Hilft dabei
Buffer-Overflow-Fehlern vorzubeugen

3. *stream

> Spezifiziert den stream von dem gelesen werden soll.

## Rückgabewerte
Läuft die Funktion fgets fehlerfrei bis zum Ende, ist
der Rückgabewert der Funktion der Zeiger \*str, welcher
bereits Eingabeparameter war. Schlägt das Lesen fehl,
liefert die Funktion **NULL** zurück.
Desweiteren manipuliert fgets **im Fehlerfall** den
Struct des streams indem der feof- oder
ferror-Indikator gesetzt werden.
