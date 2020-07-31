Zadanie:
"Konstruujemy łańcuch znaków w następujący sposób: pierwszym elementem jest litera "X", każdy
następny fragment powstaje przez dodanie do już istniejącego łańcucha takiego samego, ale zamieniamy
w nim wszystkie litery "X" na "Y" i vice versa. Czyli kolejne iteracje wyglądają następująco:

"X"
"XY" (X + Y)
"XYYX" (XY + YX)
"XYYXYXXY" (XYYX + YXXY) i tak dalej.
Należy napisać program, który po podaniu liczby x z zakresu 0 <= x < 18446744073709551615 zwróci
znak stojący na tej pozycji w łańcuchu.
Uwaga - numeracja startuje od zera.
dla 0 program powinien zwrócić "X";
dla 2 program powinien zwrócić "Y";
dla 1000000000000000 program powinien zwrócić "X".""


Program rozwiązuje problem poprzez odwrócenie procesu iteracji podczas tworzenie łańcucha - znajdując
minimalną ilość iteracji konieczną do stworzenia łańcucha - od bazy 'X' do elementu na danej
pozycji - można określić ilość przemian znaku. Na podstawie parzystości tych przemian określić można czy
znak jest taki sam jak bazowy czy przeciwny.


Przykład:
Dla znaku na pozycji 9:

Znalezienie linii podziału podzielenie ciągu odwrotnie do procesu tworzenia:
01234567 0 1 234567
XYYXYXXY+Y(X)XYXYYX

Wybór elementu lewej części łańcucha na tej samej pozycji względem linii podziału:
X(Y)YXYXXY

Ponowne znalezienie linii podziału:
X+(Y)YXYXXY

Wybór elementu z lewej części łańcucha
(X)+(Y)

Element z lewej strony łańcucha znajduje się na pozycji 0 - zakończenie procesu.
Wykonano dwie iteracje w związku z tym element na szukanej pozycji jest taki sam jak elemen bazowy.
Rozwiązaniem jest 'X'.