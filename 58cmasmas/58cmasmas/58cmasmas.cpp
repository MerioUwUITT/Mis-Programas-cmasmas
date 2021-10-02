#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	//imprimir todas las permutaciones de n cosas tomadas n a la vez para cualquier n menor igual que a diez
	//no entendi XD pero si es permutar numero para combinarlos, haciendo que el orden de estos nunca se repita seria como
	string ceroanueve = "0123456789";
	do 
	{
		cout << ceroanueve << "\n";
	} while (std::next_permutation(ceroanueve.begin(), ceroanueve.end()));//use librerías que ya venian en VS, dios me ampare si tengo que codificar esto a mano
}