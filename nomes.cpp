#include <iostream>
#include <string>

int main()
{
	const int tamanho = 6;
	std::string nomes[tamanho], nomeBuscado;
	bool encontrado = false;
	
	for(int i = 0; i < tamanho; i++)
	{
		std::cout << "Digite o " << i + 1 << "º nome: ";
		std::getline(std::cin, nomes[i]);
	}
	
	std::cout << "Informe o nome a ser buscado: ";
	std::getline(std::cin, nomeBuscado);
	
	for(int i = 0; i < tamanho; i++)
	{
		if(nomeBuscado == nomes[i])
		{
			encontrado = true;
			break;
		}
	}
	
	if(encontrado)
	{
		std::cout << "O nome " << nomeBuscado << " está no vetor."
		<< std::endl;
	}
	else
	{
		std::cout << "Nome não encontrado.";
	}
}
