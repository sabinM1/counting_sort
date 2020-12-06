# Program C++ pentru a demonstra metoda de sortare Counting Sort

## Principiul acestei metode

### Introducere

Această metoda este un algoritm eficient pentru a sorta un vector de elemente pozitive. <br>
Spre deosebire de alți algoritmi, precum Merge Sort, Counting Sort nu compară elementele între ele. <br>
Deși acceptă doar numere naturale, această sortare are o eficiență foarte bună, O(n+k). <br>

### Ok, deci ce trebuie să fac?

Prima etapa ar fi aflarea celui mai mare element din vector, iar apoi se creează un alt vector cu acel numar, cu toate elementele inițializate cu 0. <br>
Dupa, se adaugă 1 pentru fiecare element "i" din primul vector pe pozitia "i" din cel de-al doilea vector. <br>
Se modifică al doilea vector prin creșterea fiecărui element (de pe poziția "i") cu elementul predecesor (de pe poziția "i"-1). <br>
Se creează un alt vector, care va fi răspunsul final. Elementul "j" din al doilea vector, de pe pozitia "i" din primul vector, este pus pe poziția "j" din al treilea vector. După fiecare copiere se scade câte 1 din elementele folosite (din al doilea și al treilea vector). <br>
Elementele primului vector ar trebui sa fie sortate acum în cel de-al treilea vector, mai rămâne doar sa le copiem înapoi.

### Scuze eu nu am ințeles ce ai zis, poți să repeti?

Dacă nu te-ai lămurit din explicația mea, te poti uita pe cod, poate ințelegi mai bine. Am pus și acolo comentarii, dar nu foarte dezvoltate.

## Surse

Cod modificat de pe [tutorialspoint.com](https://www.tutorialspoint.com/Counting-Sort). <br>
Informații și surse de inspirație: [wikipedia.org](https://en.wikipedia.org/wiki/Counting_sort), [rosettacode.org](http://rosettacode.org/wiki/Sorting_algorithms/Counting_sort), [GeeksForGeeks](https://www.youtube.com/watch?v=7zuGmKfUt7s) și [Big-O Cheat Sheet](https://www.bigocheatsheet.com/).

## Licență MIT

Pentru mai multe informații despre licență, consultați fișierul "LICENSE" sau [mit-license.org](https://mit-license.org/).
