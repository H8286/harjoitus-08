/*Sami Liimatainen
IIO14S1
Harjoitus 8
Versio 1
23.9.2014

Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
järjestyksessä (pienimmästä suurimpaan) näytölle
(katso harj. 1 suunnitelma)
a) käytä kokonaislukuja
b) käytä liukulukuja (=reaalilukuja)
*/

/*a)
#include <iostream>
using namespace std;
int main()
{
	int luku1;
	int luku2;
	int luku3;

	int suurin;
	int keski;
	int pienin;

	cout << "Anna ensimmäinen luku ";
	cin >> luku1;

	cout << "Anna toinen luku ";
	cin >> luku2;

	cout << "Anna kolmas luku ";
	cin >> luku3;

	if (luku1 > luku2 && luku1 > luku3)
		suurin = luku1;

	if (luku2 > luku1 && luku2 > luku3)
		suurin = luku2;

	if (luku3 > luku2 && luku3 > luku1)
		suurin = luku3;

	if (luku1 < luku2 && luku1 < luku3)
		pienin = luku1;

	if (luku2 < luku1 && luku2 < luku3)
		pienin = luku2;

	if (luku3 < luku2 && luku3 < luku1)
		pienin = luku3;

	if (luku1 > pienin && luku1 < suurin)
		keski = luku1;

	if (luku2 > pienin && luku2 < suurin)
		keski = luku2;

	if (luku3 > pienin && luku3 < suurin)
		keski = luku3;


	cout <<endl <<pienin <<endl <<keski <<endl <<suurin;
}*/



/*b)*/
#include <iostream>
using namespace std;
int main()
{
	float luku1;
	float luku2;
	float luku3;

	float suurin;
	float keski;
	float pienin;

	cout << "Anna ensimmäinen luku ";
	cin >> luku1;

	cout << "Anna toinen luku ";
	cin >> luku2;

	cout << "Anna kolmas luku ";
	cin >> luku3;

	if (luku1 > luku2 && luku1 > luku3)
		suurin = luku1;

	if (luku2 > luku1 && luku2 > luku3)
		suurin = luku2;

	if (luku3 > luku2 && luku3 > luku1)
		suurin = luku3;

	if (luku1 < luku2 && luku1 < luku3)
		pienin = luku1;

	if (luku2 < luku1 && luku2 < luku3)
		pienin = luku2;

	if (luku3 < luku2 && luku3 < luku1)
		pienin = luku3;

	if (luku1 > pienin && luku1 < suurin)
		keski = luku1;

	if (luku2 > pienin && luku2 < suurin)
		keski = luku2;

	if (luku3 > pienin && luku3 < suurin)
		keski = luku3;


	cout << endl << pienin << endl << keski << endl << suurin;
}