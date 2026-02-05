#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); // Codigo para permitir que palavras com acento sejam lidas pelo computador, por ex: "é".
	//system("cls");  // Usado para deixar o console limpo dos códigos anteriores a essa linha

	//==============================================================================
	//Exercício para contar os digitos de um número
	//int number;
	//cout << "Digite um número: " << endl;
	//cin >> number;
	//if (number == 0)
	//	cout << "Você digitou o número 0 meu chapa, ai não. \n";	
	//else 
	//{
	// if(number < 0)
	// number = -1 * number;
	// 
	//	int counter = 0;
	//	while (number > 0) 
	//	{
	//		//number = number / 10;
	//		number /= 10; // Mesma coisa que a linha de cima, mas simplificado
	//		counter++;
	//	}
	//	cout << "Seu número tem: " << counter << " Dígito(s)" << endl;
	//}


	//==============================================================================
	//Aula de loops, "do" e "while"
	//Escrever todos os números entre 100 e 500 que são divisíveis por 3 e por 5.

	//int counter = 100;
	//while (counter <= 500)
	//{
	//	if (counter % 3 == 0 && counter % 5 == 0)
	//		cout << counter << " É divisivel por 3 e por 5\n";
	//	counter++; // Já tinha entendido antes de terminar o video, ainda bem, sucesso!
	//}
	//==============================================================================
	


	//==============================================================================
	//Exercício, programa para apresentar quantos dias o mês digitado pelo usuário possui.
	//Formula que vamos utilizar para anos bissexto (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	//int year, month;
	//cout << "Entre o ano e o mês : ";
	//cin >> year >> month;


	//switch (month)
	//{
	//case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? // Aplicação do ternário com o switch
	//	cout << "Esse mês tem 29 dias" : cout << "Esse mês tem 28 dias"; break;
	//case 4:
	//case 6:
	//case 9:
	//case 11: cout << "Esse mês tem 30 dias"; break;
	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:  cout << "Esse mês tem 31 dias"; break;
	//default: cout << "Digite um número de mês válido";
	//}
	//==============================================================================


	//==============================================================================
	//Calculadora usando switch
	//double numero1, numero2;
	//char operador;

	//cout << "Calculadora" << endl;
	//cin >> numero1 >> operador >> numero2;

	//switch (operador)
	//{
	//case '-': cout << numero1 << operador << numero2 << "=" << numero1 - numero2; break;
	//case '+': cout << numero1 << operador << numero2 << "=" << numero1 + numero2; break;
	//case '*': cout << numero1 << operador << numero2 << "=" << numero1 * numero2; break;
	//case '/': cout << numero1 << operador << numero2 << "=" << numero1 / numero2; break;
	//case '%': 
	//	bool checarInteiro1, checarInteiro2;
	//	checarInteiro1 = ((int)numero1 == numero1);
	//	checarInteiro2 = ((int)numero2 == numero2);

	//	if (checarInteiro1 && checarInteiro2)
	//		cout << numero1 << operador << numero2 << "=" << (int)numero1 % (int)numero2;
	//	else
	//		cout << "Operação inválida";
	//	break;
	//default:
	//	cout << "Digite um operador certo espertinho" << endl;
	//}
	//==============================================================================
	
	
	//==============================================================================
	//Operador ternário/condicional (muitas vezes utilizado no lugar de if/else)

	//int numeroDigitado, numeroPalpite;
	//cout << "Digite o número que deverá ser adivinhado: ";
	//cin >> numeroDigitado;
	//system("cls"); //Limpando o console para sumir com o número Digitado que deverá ser adivinhado

	//cout << "Escreva o seu número palpite: ";
	//cin >> numeroPalpite;


	//Solução comum
	//if (numeroDigitado == numeroPalpite)
	//	cout << "Parabéns, você acertou o número!!";
	//else
	//	cout << "Infelizmente você errou o número, tente novamente!";

	//Solução do operador ternário
	//(numeroDigitado == numeroPalpite)? cout << "Parabéns, você acertou o número!!" : cout << "Infelizmente você errou o número, tente novamente!";

	// "?" funciona para checar a condição, é como se fosse o IF
	// ":" funciona retornando o que precisa ser retornado se a condição não for atingida, é como se fosse o ELSE
	// Essa forma é a mais utilizada, apesar de ser a menos legível a princípio.
	//==============================================================================


	
	//==============================================================================
	//Exercício prático
	//Calculadora de IMC
	//Peso(kg) / altura(m) * altura(m)
	//Abaixo de 18,5 = Peso baixo
	//Entre 18,5 e 24,9 = Peso normal
	//Entre 25 a 29,9 = Sobrepeso
	//Entre 30 a 34,9 = Obesidade 1
	//Entre 35 a 39,9 = Obesidade 2
	//Acima de 40 = Obesidade 3

	//float kg = 0;      //Está em float pois é previsto que os valores tenham no máximo duas casas decimais
	//float height = 0;  //Começando a colocar as variáveis em inglês por boa prática

	//cout << "Bem vindo a calculadora de IMC, para começarmos digite sua altura em metros, ex: 1.75 : " << endl;
	//cin >> height;
	//cout << "Perfeito, agora por favor digite seu peso no seguinte formato de ex: 82.5 : " << endl;
	//cin >> kg;

	//float imc = kg / (height * height);

	//if (imc < 18.5)
	//	cout << "Seu imc é de: " << imc << endl << "Seu peso está abaixo do esperado, você precisa se alimentar mais, consulte um nutricionista!";
	//else if (imc >= 18.5 && imc <= 24.9)
	//	cout << "Seu imc é de: " << imc << endl << "Parabéns, seu peso está dentro da conformidade, diminuindo assim seu risco de doenças relacionadas a obesidade, continue assim!";
	//else if (imc >= 25 && imc <= 29.9)
	//	cout << "Seu imc é de: " << imc << endl << "Seu peso está um pouco acima do esperado, atividade física e boa alimentação lhe ajudariam, consulte um nutricionista!";
	//else if (imc >= 30 && imc <= 34.9)
	//	cout << "Seu imc é de: " << imc << endl << "Você atingiu o primeiro grau de obesidade, é crucial que você consulte um especialista antes que a sua situação piore!";
	//else if (imc >= 35 && imc <= 39.9)
	//	cout << "Seu imc é de: " << imc << endl << "Você atingiu o segundo grau de obesidade, consulte um especialista o quanto antes para que você possa melhorar sua qualidade de vida!";
	//else if (imc >= 40)
	//	cout << "Seu imc é de: " << imc << endl << "Você atingiu o terceiro grau de obesidade, procure ajuda médica urgente!";
	//==============================================================================



	//==============================================================================
	//Programa para trocar o valor de duas variáveis

	//int valor1 = 5;
	//int valor2 = 10;
	//int valor3 = 0;

	//valor3 = valor1; //colocando o valor de 1 no valor 3 que está zerado
	//valor1 = valor2; //transformando o valor de 1 no valor de 2, lembrando que o valor de 1 está salvo no valor de 3 que estava zerado
	//valor2 = valor3; //transformando o valor de 2 no valor de 1 usando o valor de 3 que estava salvo com o valor de 1;

	//cout << valor1 << endl << valor2; //sucesso

	//Fazendo de uma forma mais elegante

	//int valor1 = 5;
	//int valor2 = 10;
	
	//valor1 = valor1 + valor2; // valor1 passa a ser 15 (5+10)
	//valor2 = valor1 - valor2; // valor2 passa a ser 5 (15-10)
	//valor1 = valor1 - valor2; // valor3 passa a ser 10 (15-5)
	//É um pensamento lógico/matemático, não é fácil chegar a essa conclusão, mas muitas vezes é isso que vai precisar ser feito, pensar fora da caixa.

	//cout << valor1 << endl << valor2;
	//==============================================================================


	//==============================================================================
	//Aula de Operadores
	//Para operadores de falso ou true, falso = 0 / true = 1
	//Operadores logicos "&&" = E (Obrigatório todas as condições serem verdadeiras)
	//					 "||" = OU (usado para verificar vários argumentos e encontrar pelo menos 1 condição necessária que seja verdadeira)
	//					 "!" = Não igual (Obrigatório todas as condições serem falsas, retorna verdadeiro se sim)
	//IMPORTANTE:  OPERADORES ARITMÉTICOS SEMPRE TEM PRIORIDADE SOBRE OS OPERADORES LÓGICOS.
	// 
	//int counter = 7;
	//cout << ++counter << endl;
	//
	//Operadores incrementais, =, +=, -=, *=, /=, %=.
	
	//int x = 5;

	//x %= 7; // Ambas as operações são iguais, só escritas de forma diferente, o += vai somar o valor da direita com o valor da esquerda.
	//x = x + 7; // Ambas as operações são iguais, só escritas de forma diferente, o += vai somar o valor da direita com o valor da esquerda.
	
	//==============================================================================



	//==============================================================================
	// Aula de IF e Else - com Exercício
	// Usuário deve inserir o tamanho dos 3 lados de um triângulo
	// O programa deve escrever se o triângulo é equilátero, isósceles ou escaleno.
	// Nota, resolvi sozinho e depois acompanhei o tutorial
	// Aprendi que o operador "&&" é necessário ser utilizado quando precisamos fazer mais de uma comparação no statement do IF ou ELSE.
	// Também aprendi o sinal de diferente "!=" em c++, o sinal de "==" é o igual do c++, esse eu ja tinha tido contato.
	// Talvez na proxima vez seja mais sensato declarar como float os valores do triângulo.

	//int lado1, lado2, lado3;
	//cout << "Por favor insira o valor do lado 1 de seu triângulo = ";
	//cin >> lado1;
	//cout << "Por favor insira o valor do lado 2 de seu triângulo = ";
	//cin >> lado2;
	//cout << "Por favor insira o valor do lado 3 de seu triângulo = ";
	//cin >> lado3;

	//if (lado1 == lado2 && lado1 == lado3)
	//	{
	//	cout << "Seu triângulo é Equilátero";
	//	}
	//else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)  // Nota, nesse "else if" na aula não foi utilizado dessa forma, e sim com o else {} e um novo if dentro abrindo outro {}
	//	{															// Houve também uma "elegância" aplicada no código, visto que foi recomendado tirar os {} dos statements de if,else que executam															
	//	cout << "Seu triângulo é Escaleno";							// apenas um comando
	//	}
	//else
	//	{
	//	cout << "Seu triângulo é Isósceles";
	//	}
	//==============================================================================

	//==============================================================================
	//Programa para verificar se o número é impar ou par. Exercício
	//int number;
	//cout << "Por favor digite o seu número" << endl;
	//cin >> number;
	
	//if (number % 2 == 0) 
	//{
	//	cout << "O número é par";
	//}
	//else 
	//{
	//	cout << "O número é impar";
	//}
	//==============================================================================



	//==============================================================================
	//Exercício de transformar uma frase para ASCII em números.
	//char c1; //Declarando variáveis sem inicialização para o usuário poder digitar.
	//char c2;
	//char c3;

	//char c1, c2, c3, c4, c5;  //Forma mais fácil de criar várias variáveis do mesmo tipo.

	//cout << "Por favor, formule sua frase: " << endl;
	//cin >> c1 >> c2 >> c3 >> c4 >> c5;
	//cout << "Sua frase em ASCII é a seguinte: " << int(c1) << " " << int(c2) << " "
	//											<< int(c3) << " " << int(c4) << " " << int(c5); //Transformando tudo em ASCII
	//==============================================================================


	//==============================================================================
	//Exemplos de uso de conversão ASCII
	//cout << (int)'a' << endl; //Transformando o char "a" em Inteiro, convertendo para a tabela ASCII
	//cout << int('a') << endl; //Outra forma de realizar essa transformação
	//cout << int('A') << endl; //Mostrando o valor de "A" maiúsculo, é diferente do a minúsculo.
	//cout << char(65) << endl; //Convertendo o número 65 para uma letra, no caso pela tabela ASCII ele vai se tornar no "A" maiúsculo.
	//==============================================================================

	//==============================================================================
	//Aula de datatype , colocando apenas novos aprendizados
	//int intMax = INT_MAX; //O INT_MAX pega o maior valor que a variável tipo "int" pode chegar
	//cout << intMax << endl;
	//cout << intMax + 1; // Isso vai gerar um data overflow, onde o valor vai até o mínimo, ficando no menor número que INT pode ir (negativo)
	//==============================================================================

	// return 0;  //Return 0 padrão

	system("pause>0"); // Forma mais elegante de parar o programa se o retorno não for 0 (falhar)	
}
