#include <iostream>

int main()
{
	const int tamanho = 10;
	int numeros[tamanho], numeroX, posicaoX = -1;
	
	for(int i = 0; i < tamanho; i++)
	{
		std::cout << "Digite o " << i + 1 << "º número: ";
		std::cin >> numeros[i];
	}
	
	std::cout << "Agora digite um número qualquer: ";
	std::cin >> numeroX;
	
	for(int i = 0; i < tamanho; i++)
	{
		if(numeros[i] == numeroX)
		{
			posicaoX = i;
			break;
		}
	}
	
	if(posicaoX >= 0 and posicaoX < tamanho)
	{
		std::cout << "O número " << numeroX <<
		" aparece pela primeira vez na posição " << posicaoX << "." <<
		std::endl;
	}
	else
	{
		std::cout << "O número " << numeroX << " não está no vetor."
		<< std::endl;
	}
}
