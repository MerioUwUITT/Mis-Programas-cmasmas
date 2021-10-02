#include <iostream>//por matemática base, si de 52 cartas, 26 te suman pero 26 te restan 2, el juego tiene un total de ganancia de 0, establecere un rango de 15 tiros por jugada para ver que tan beneficioso es económicamente, pares rojas impares negras
using namespace std;
int main()
{
    srand(time(0));
    int balance = 0;
    cout << "Inserte la cantidad de cartas a tirar:";
    int cartas;
    cin >> cartas;
    for(int i = 0; i < cartas; i++)//decidi eliminar el limite de cartas, para ver si un mayor numero de iteraciones eventualmente regalaba suerte
    {
        if((rand()%52)%2==0)
        {
            cout << "Ha salido carta roja :(..." << endl;
            balance = balance - 2;
        }
        else
        {
            cout << "Ha salido carta negra :)!!!!" << endl;
            balance = balance + 1;
        }
    }
    cout << "Tu balance final es de: ";
    if(balance>0)
    {
        cout << balance << " Dolares! :D" << endl;
    }
    else if(balance<0)
    {
        cout << balance << " Dolares... :(" << endl;
    }
    else
    {
        cout << "nada :|";
    }
}//entre mas cartas se usan, mas pierde el jugador, es el juego menos economico del mundo