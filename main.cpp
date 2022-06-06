#include <iostream>
#include <time.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
	srand(time(0));
	string senha;

	// all data
	string data = "abcdefghijklmnopqrstuvwxyz"
				  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
				  "0987654321"
				  "~`!@#$%^&*()_+-={}|[]:>?<;.,";

	for (int i = 1; i <= 12; i++)
	{
		senha = senha + data[rand() % 93];
	}
    cout<<" _______________________________________________________\n";
	cout<<"|Senha de 12 dígitos gerada com sucesso: "<<senha << "   |\n";
    cout<<"|_______________________________________________________|\n";

}
