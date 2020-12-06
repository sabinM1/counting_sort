/*
   Metoda de sortare Counting Sort
   Cod modificat de pe tutorialspoint.com
   ----------------------------------------
   Algoritmul este facut pentru C++11, a se
   rula cu "g++ -std=c++11 main.cpp"
   ----------------------------------------
   Vectorul de intrare primeste doar
   numere naturale, fapt datorat metodei de
   sortare, care adauga 1 pentru fiecare
   element "i" din vectorul principal pe
   pozitia "i" din cel de-al doilea.
   ----------------------------------------
   Vezi mai multe informatii si explicatii
   in fisierul "README.md" si pe
   https://github.com/sabinM1/counting_sort
 */

#include <iostream>
using namespace std;

int getMax(int V[], int N); //aflarea celui mai mare numar din vector
void display(int V[], int N); //afisare

void countSort(int *V, int N)
{
	int rezultat[N+5]; //vectorul rezultat
	int max = getMax(V, N); //se afla cel mai mare numar din sir
	int count[max+5]; //se creeaza un vector, cunoscut pentru aceasta metoda se sortare, pana la max + 5...
	for(int i = 0; i <= max; i++)
		count[i] = 0; //...cu toate elementele initializare cu 0
	for(int i = 1; i <= N; i++)
		count[V[i]]++; //se creste fiecare element cu 1
	for(int i = 1; i <= max; i++)
		count[i] += count[i-1]; //se creste fiecare element (i) cu elementul predecesor
	for(int i = N; i >= 1; i--)
	{
		rezultat[count[V[i]]] = V[i]; //se copiaza in rezultat
		count[V[i]] -= 1; //si se scade cu 1 in vector
	}
	//--- aceasta parte se poate modifica pentru a nu se copia rezultatul in vectorul principal
	for(int i = 1; i <= N; i++)
	{
		V[i] = rezultat[i]; //copierea
	}
	//---
}

int main() {
	int n; //se da numarul n
	cin >> n;
	int a[n+5]; //iar apoi n numere naturale
	for(int i = 1; i <= n; i++)
		cin >> a[i]; //citite de la tastatura
	countSort(a, n); //se sorteaza
	display(a, n); //si se afiseaza
}

int getMax(int V[], int N)
{
	int max = V[1];
	for(int i = 2; i <= N; i++)
	{
		if(V[i] > max)
			max = V[i];
	}

	return max; //the max element from the V
}
void display(int V[], int N)
{
	for(int i = 1; i <= N; i++)
		cout << V[i] << " ";
	cout << endl;
}
