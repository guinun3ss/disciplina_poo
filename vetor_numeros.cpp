#include <iostream>

int main()
{
	const int tamanho = 5;
	int numeros[tamanho];
	
	for(int i = 0; i < tamanho; i++)
	{
		std::cout << "Digite o " << i + 1 << "º número: ";
		std::cin >> numeros[i];
	}
	
	for(int i = 0; i < tamanho; i++)
	{
		std::cout << i + 1 << "º número: " << numeros[i] << std::endl;
	}
}
