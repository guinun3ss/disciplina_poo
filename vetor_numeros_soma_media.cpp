#include <iostream>
#include <iomanip>

int main()
{
	const int tamanho = 5;
	int numeros[tamanho], soma = 0;
	float media;
	
	for(int i = 0; i < tamanho; i++)
	{
		std::cout << "Digite o " << i + 1 << "º número: ";
		std::cin >> numeros[i];
	}
	
	for(int i = 0; i < tamanho; i++)
	{
		soma += numeros[i];
	}
	
	media = soma / tamanho;
	
	std::cout << "Soma: " << soma << std::endl;
	std::cout << "Média: " << std::fixed << std::setprecision(2) << media << std::endl;
}
