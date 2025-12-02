#include <iostream>

int main()
{
	const int tamanho = 8;
	int numeros[tamanho];
	int maior = -1000000, menor = 1000000;
	int posicaoMaior, posicaoMenor;
	
	for(int i = 0; i < tamanho; i++)
	{
		std::cout << "Digite o " << i + 1 << "º número: ";
		std::cin >> numeros[i];
	}
	
	for(int i = 0; i < tamanho; i++)
	{
		if(numeros[i] > maior)
		{
			maior = numeros[i];
			posicaoMaior++;
			break;
		}
	}
	
	for(int i = 0; i < tamanho; i++
	{
		if(numeros[i] < menor)
		{
			menor = numeros[i];
			posicaoMenor++;
			break;
		}
	}
	
	std::cout << "Maior número: " << maior << "Posição: " << posicaoMaior << std::endl;
	std::cout << "Menor número: " << menor << << "Posição: " << posicaoMenor << std::endl;
}
