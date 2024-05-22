#include <stdio.h> // Biblioteca de comunicação com o usuário
#include <stdlib.h> // Biblioteca de alocação de espaçoem memória
#include <locale.h> //Biblioteca de alocações de texto por região
#include <string.h> //Biblioteca das strings


int registro() //Função responável por cadastrar o usuários no sistema
{
	//Inicio da criação de variáveis/strisg
	char arquivo[12];
	char cpf[12];
	char nome[60];
	char sobrenome[60];
	char cargo[60];
	//Final da criação de variáveis/strisg
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando informações do usuároio
	scanf("%s", cpf);// %s refere-se a strings
	
	strcpy(arquivo, cpf); //Espelhando as strings, para não perguntar novamente
	
		FILE *file;//Cria o arquivo no banco de dados
		file = fopen(arquivo, "w");//Cria o arquivo no banco de dados
		fprintf(file, "CPF: ");
		fprintf(file, cpf);//Salvo o valor da variável
		fclose(file);//Fecha a variável
	
			file = fopen(arquivo, "a");
			fprintf(file, "\n");
			fclose(file);
	
	printf("Digite o nome a ser cadastrado: "); //Coletando unformações do usuário
	scanf("%s", nome); //%s reere-se a strings
	
		file = fopen(arquivo, "a"); //Entra no arquivo já existente para registrar uma nova informação
		fprintf(file, "Nome: ");
		fprintf(file,nome);//Armazena a string coletada no arquivo
		fclose(file); //Fecha o arquivo 
	
			file = fopen(arquivo, "a");
			fprintf(file, " ");
			fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: "); //Coletando informações do usuário
	scanf("%s", sobrenome); //%s refere-se a strings
	
		file = fopen(arquivo, "a"); // Entra no arquivo já existente para registrar uma nova informação
		fprintf(file,sobrenome); // Armazena a sring coletada no arquivo
		fclose(file); //Fecha o arquivo
	
			file = fopen(arquivo, "a");
			fprintf(file, "\n");
			fclose(file);
		
	printf("Digite o cargo a ser cadastrado: "); // Coletando informaações do usuário
	scanf("%s", cargo); //%s refere-se a strings
	
		file = fopen(arquivo, "a"); //Abre o arquivo já existente para armazenar uma nova informaçõa
		fprintf(file, "Cargo: ");
		fprintf(file,cargo); // Armazena a string coletada no arquivo
		fclose(file); // Fecha o arquivo
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese_Brazil");//Definindo linguagem 
	
	//Inicio da criação de variaveis
	char cpf[12];
	char conteudo[250];
	//Final da criação de variaveis
	
	printf("Digite o CPF a ser consultado: "); // Coletando a informação do usuário à ser consultado
	scanf("%s", cpf); // %s refere-se a strings
	
	FILE *file; //Criando um novo arquivo
	file = fopen(cpf, "r"); // Lendo um arquivo já existente
		if(file == NULL) // Criando uma lógica e cima das informações contidas no arquivo
		{
			printf("\nNão foi possível abrir o arquivo, CPF não localizado!");
		}
			else
			{
				printf("\nInformações do usuário: \n\n");
				while(fgets(conteudo, 250, file) != NULL)
					{
						printf("   %s", conteudo);
					}
			}
	
	printf("\n\n");
	system("pause");
}

int deletar()
{
	setlocale(LC_ALL, "Portuguese_Brazil"); //Definindo linguagem
	//Inicio da criação de variaveis
	char cpf[12];
	//Final da criação de variaveis
	printf("Digite o CPF do usuário a ser deletado: "); //Coletando informações do usuário à ser deletado
	scanf("%s", cpf); //%s refere-se a stings
	
	FILE *file;
	file = fopen(cpf, "r"); //Lendo um arquivo já existente
		if(file != NULL)
		{
			remove(cpf);
			printf("\nUsuário deletado!\n\n");
		}
			else
			{
				printf("\nUsuário não encontrado\n\n");
			}
    		
	system("pause");
}

int main() 
{
	//Inicio da criação de variaveis
	int opcao=0;
	int laco=1;
	//Final da criação de variaveis
	
	for(laco=1;laco=1;)
	{
	
		system("cls"); // Limpando a tela
		
		setlocale(LC_ALL, "Portuguese_Brazil");//Definindo linguagem
		
		printf("###Cartório da EBAC###\n\n");//Inicio do menu
		printf("Escolha a opção desejada no menu:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n\n");
		printf("Opção: ");//Fim do menu
	
		scanf("%d", &opcao);//Armazenando a escolha do unuário
	
		system("cls"); // Limpando a tela
	
		switch(opcao) // Criando os botões
		{
			case 1:
			registro();
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			default:
			printf("Esta opção não está disponivel!\n\n");
			system("pause");
			break;
			
		}//Fim da seleção
		
		
	}
}
