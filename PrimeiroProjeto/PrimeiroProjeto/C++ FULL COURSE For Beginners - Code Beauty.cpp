#include <iostream>
#include <iomanip>

//using namespace std; // Maravilhoso de usar, mas como boa prática não estou usando no momento;

int main()
{
	setlocale(LC_ALL, ""); // Codigo para permitir que palavras com acento sejam lidas pelo computador, por ex: "é".
	//system("cls");  // Usado para deixar o console limpo dos códigos anteriores a essa linha
	// Desenhando formas usando c++


	//Desenhando Triangulos

	int length, width;
	char symbol;

	std::cout << "Por favor insira o comprimento do triângulo: ";
	std::cin >> length;
	/*std::cout << "Por favor insira o comprimento do triângulo: ";
	std::cin >> width;*/
	std::cout << "Entre o símbolo que formará o triângulo: ";
	std::cin >> symbol;

	for (int i = 1; i <= length; i++)
	{
		for (int h = 1; h <= i; h++)
		{
			std::cout << std::setw(3) << symbol;
		}
		std::cout << "\n";
	}


	//Desenhando retangulos/quadrados
	//int height, width;
	//char symbol;
	
	//std::cout << "Por favor insira a altura do retângulo: ";
	//std::cin >> height;
	//std::cout << "Por favor insira o comprimento do retângulo: ";
	//std::cin >> width;
	//std::cout << "Entre o símbolo que formará o retângulo: ";
	//std::cin >> symbol;
	//for (int h = 0; h < height; h++)
	//{
	//	for (int w = 0; w < width; w++)
	//	{
	//		std::cout << std::setw(3) << symbol;  //acabei de descobrir que o setw precisa do std:: e também da biblioteca iomanip, funcionam juntos;
	//	}
	//		std::cout << "\n";
	//}
	


	//==============================================================================
	//Programa de taboada completa do 1 ao 10 completa e de 1x

	//for (int i = 1; i <= 10; i++)
	//{
	//	for (int j = 1; j <= 10; j++)
	//	{
	//		std::cout << i << " x " << j << " = " << i * j << "\n";
	//	}
	//	std::cout << "\n";
	//}
	//==============================================================================

	//==============================================================================
	// Mais exemplos de nested for and while
	// Programa de tabuada;

	
	//int number;
	//int multiTable = 1;

	//std::cout << "Digite o número que você quer da taboada: ";
	//std::cin >> number;

	//for (int i = 1; i <= 10; i++) // Vai executar o programa até o "i" ser igual a 10;
	//{
	//	do
	//	{
	//		multiTable = number * i;
	//	} 
	//	while (i > 10); // enquanto I não for maior que 10 vai printar a mensagem para o usuário
	//	{		
	//		std::cout << number << " " << " x " << " " << i << " " << " = " << multiTable << "\n";
	//	}
	//}
	//==============================================================================
	







	//==============================================================================
	// Nested for and while

	//int grades, gradesSum = 0;

	//for (int i = 0; i < 3; i++)
	//{
	//	do
	//	{
	//		std::cout << "Digite as suas notas " << i + 1 << " :";
	//		std::cin >> grades;
	//	} 
	//	while (grades < 1 || grades > 5);  // Não permitindo notas abaixo de 1 e acima de 5.
	//	{
	//		gradesSum += grades;
	//	}
	//}

	//std::cout << "Sua média é : " << (float)gradesSum/3; // transformando em float para dar a media correta.
	//==============================================================================

	//==============================================================================
	//For Loops - Exercícios
	// Fatorial de um número
	//exemplo:  6! = 1 * 2 * 3 * 4 * 5 *6 = 720

	//int number;
	//std::cout << "Digite seu número: ";
	//std::cin >> number;
	//int factorial = 1;

	//Ainda nao tive contato com For, portanto não tentei resolver sozinho visto que não tenho certeza da sintaxe e não acho justo pesquisar por fora da video-aula.
	//for (int counter = 1;  counter <= number ; counter++)
	//{
	//	factorial = factorial * counter; // perfeito, entendi 100% e o for é exatamente como eu me lembrava que seria
	//}

	// testando com o algoritmo ao contrário que também da certo
	//for (int counter = number; counter >= 1; counter--)
	//{
	//	factorial = factorial * counter;
	//}

	//std::cout << "O fatorial é = " << factorial;
	//==============================================================================


	//==============================================================================
	//Do While exercício
	//int userPin = 1234, pin, errorCounter = 0;

	//do {
	//	std::cout << "Pin: ";
	//	std::cin >> pin;
	//	
	//	if (pin != userPin)
	//	{
	//		errorCounter++;	// Aumenta o contador de erro se o Pin for diferente
	//	}
	//
	//	} while (errorCounter < 3 && pin != userPin);  // Enquanto o contador for menor que 3 e ao mesmo tempo o Pin digitado é diferente do pin declarado, executará o codigo do DO e também a condição de IF embaixo
	//	{
	//	if (errorCounter < 3) // Se o contador de erro ainda for menor que 3 e a condição do Pin for falsa, ou seja, o usuáriuo acertou, ele executará o primeiro cout do IF.
	//		{
	//			std::cout << "Você digitou corretamente";
	//		}
	//	else											// Se ainda estiver incorreto após as 3 tentativas, ele executará o cout abaixo do else
	//		{
	//			std::cout << "Sua conta foi bloqueada";
	//		}
	//	}
	//  Nao vou mentir que essa lógica final estou tendo dificuldades pra entender, preciso de mais casos
	//==============================================================================


	//==============================================================================
	//Como um bom programador, fui resolver um problema e criei outro, arrumei o UTF-8 que tava dando pau no vscode e buguei o do visual studio kkkkkkkkkkk
	//==============================================================================


	//==============================================================================
	// Um pouco frustrante, eu queria aprender a fazer percorrendo o numero digitado como um array e reorganizando, a formula matematica nao e algo que eu conseguiria chegar na intuição provavelmente
	//Exerc�cio de inverter um n�mero

	//int numero{};
	//int numeroReverso{};

	//std::cout << "Digite seu número: ";
	//std::cin >> numero;

	//a logica por tras � multiplicar por 10 a dezena do primeiro numero e ir somando de tr�s para frente os outros digitos.

	//while (numero != 0)
	//{
	//	numeroReverso *= 10;
	//	int ultimoDigito = numero % 10;
	//	numeroReverso += ultimoDigito;
	//	numero /= 10;
	//}

	//std::cout << numeroReverso;
	//==============================================================================


	//==============================================================================
	//Exerc�cio para contar os digitos de um n�mero
	//int number;
	//cout << "Digite um numero: " << endl;
	//cin >> number;
	//if (number == 0)
	//	cout << "Voce digitou o numero 0 meu chapa, ai não. \n";	
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
	//	cout << "Seu numero tem: " << counter << " Digito(s)" << endl;
	//}


	//==============================================================================
	//Aula de loops, "do" e "while"
	//Escrever todos os numeros entre 100 e 500 que sao divisiveis por 3 e por 5.

	//int counter = 100;
	//while (counter <= 500)
	//{
	//	if (counter % 3 == 0 && counter % 5 == 0)
	//		cout << counter << " � divisivel por 3 e por 5\n";
	//	counter++; // Ja tinha entendido antes de terminar o video, ainda bem, sucesso!
	//}
	//==============================================================================
	


	//==============================================================================
	//Exerc�cio, programa para apresentar quantos dias o m�s digitado pelo usu�rio possui.
	//Formula que vamos utilizar para anos bissexto (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	//int year, month;
	//cout << "Entre o ano e o m�s : ";
	//cin >> year >> month;


	//switch (month)
	//{
	//case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? // Aplica��o do tern�rio com o switch
	//	cout << "Esse m�s tem 29 dias" : cout << "Esse m�s tem 28 dias"; break;
	//case 4:
	//case 6:
	//case 9:
	//case 11: cout << "Esse m�s tem 30 dias"; break;
	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:  cout << "Esse m�s tem 31 dias"; break;
	//default: cout << "Digite um n�mero de m�s v�lido";
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
	//		cout << "Opera��o inv�lida";
	//	break;
	//default:
	//	cout << "Digite um operador certo espertinho" << endl;
	//}
	//==============================================================================
	
	
	//==============================================================================
	//Operador tern�rio/condicional (muitas vezes utilizado no lugar de if/else)

	//int numeroDigitado, numeroPalpite;
	//cout << "Digite o n�mero que dever� ser adivinhado: ";
	//cin >> numeroDigitado;
	//system("cls"); //Limpando o console para sumir com o n�mero Digitado que dever� ser adivinhado

	//cout << "Escreva o seu n�mero palpite: ";
	//cin >> numeroPalpite;


	//Solu��o comum
	//if (numeroDigitado == numeroPalpite)
	//	cout << "Parab�ns, voc� acertou o n�mero!!";
	//else
	//	cout << "Infelizmente voc� errou o n�mero, tente novamente!";

	//Solu��o do operador tern�rio
	//(numeroDigitado == numeroPalpite)? cout << "Parab�ns, voc� acertou o n�mero!!" : cout << "Infelizmente voc� errou o n�mero, tente novamente!";

	// "?" funciona para checar a condi��o, � como se fosse o IF
	// ":" funciona retornando o que precisa ser retornado se a condi��o n�o for atingida, � como se fosse o ELSE
	// Essa forma � a mais utilizada, apesar de ser a menos leg�vel a princ�pio.
	//==============================================================================


	
	//==============================================================================
	//Exerc�cio pr�tico
	//Calculadora de IMC
	//Peso(kg) / altura(m) * altura(m)
	//Abaixo de 18,5 = Peso baixo
	//Entre 18,5 e 24,9 = Peso normal
	//Entre 25 a 29,9 = Sobrepeso
	//Entre 30 a 34,9 = Obesidade 1
	//Entre 35 a 39,9 = Obesidade 2
	//Acima de 40 = Obesidade 3

	//float kg = 0;      //Est� em float pois � previsto que os valores tenham no m�ximo duas casas decimais
	//float height = 0;  //Come�ando a colocar as vari�veis em ingl�s por boa pr�tica

	//cout << "Bem vindo a calculadora de IMC, para come�armos digite sua altura em metros, ex: 1.75 : " << endl;
	//cin >> height;
	//cout << "Perfeito, agora por favor digite seu peso no seguinte formato de ex: 82.5 : " << endl;
	//cin >> kg;

	//float imc = kg / (height * height);

	//if (imc < 18.5)
	//	cout << "Seu imc � de: " << imc << endl << "Seu peso est� abaixo do esperado, voc� precisa se alimentar mais, consulte um nutricionista!";
	//else if (imc >= 18.5 && imc <= 24.9)
	//	cout << "Seu imc � de: " << imc << endl << "Parab�ns, seu peso est� dentro da conformidade, diminuindo assim seu risco de doen�as relacionadas a obesidade, continue assim!";
	//else if (imc >= 25 && imc <= 29.9)
	//	cout << "Seu imc � de: " << imc << endl << "Seu peso est� um pouco acima do esperado, atividade f�sica e boa alimenta��o lhe ajudariam, consulte um nutricionista!";
	//else if (imc >= 30 && imc <= 34.9)
	//	cout << "Seu imc � de: " << imc << endl << "Voc� atingiu o primeiro grau de obesidade, � crucial que voc� consulte um especialista antes que a sua situa��o piore!";
	//else if (imc >= 35 && imc <= 39.9)
	//	cout << "Seu imc � de: " << imc << endl << "Voc� atingiu o segundo grau de obesidade, consulte um especialista o quanto antes para que voc� possa melhorar sua qualidade de vida!";
	//else if (imc >= 40)
	//	cout << "Seu imc � de: " << imc << endl << "Voc� atingiu o terceiro grau de obesidade, procure ajuda m�dica urgente!";
	//==============================================================================



	//==============================================================================
	//Programa para trocar o valor de duas vari�veis

	//int valor1 = 5;
	//int valor2 = 10;
	//int valor3 = 0;

	//valor3 = valor1; //colocando o valor de 1 no valor 3 que est� zerado
	//valor1 = valor2; //transformando o valor de 1 no valor de 2, lembrando que o valor de 1 est� salvo no valor de 3 que estava zerado
	//valor2 = valor3; //transformando o valor de 2 no valor de 1 usando o valor de 3 que estava salvo com o valor de 1;

	//cout << valor1 << endl << valor2; //sucesso

	//Fazendo de uma forma mais elegante

	//int valor1 = 5;
	//int valor2 = 10;
	
	//valor1 = valor1 + valor2; // valor1 passa a ser 15 (5+10)
	//valor2 = valor1 - valor2; // valor2 passa a ser 5 (15-10)
	//valor1 = valor1 - valor2; // valor3 passa a ser 10 (15-5)
	//� um pensamento l�gico/matem�tico, n�o � f�cil chegar a essa conclus�o, mas muitas vezes � isso que vai precisar ser feito, pensar fora da caixa.

	//cout << valor1 << endl << valor2;
	//==============================================================================


	//==============================================================================
	//Aula de Operadores
	//Para operadores de falso ou true, falso = 0 / true = 1
	//Operadores logicos "&&" = E (Obrigat�rio todas as condi��es serem verdadeiras)
	//					 "||" = OU (usado para verificar v�rios argumentos e encontrar pelo menos 1 condi��o necess�ria que seja verdadeira)
	//					 "!" = N�o igual (Obrigat�rio todas as condi��es serem falsas, retorna verdadeiro se sim)
	//IMPORTANTE:  OPERADORES ARITM�TICOS SEMPRE TEM PRIORIDADE SOBRE OS OPERADORES L�GICOS.
	// 
	//int counter = 7;
	//cout << ++counter << endl;
	//
	//Operadores incrementais, =, +=, -=, *=, /=, %=.
	
	//int x = 5;

	//x %= 7; // Ambas as opera��es s�o iguais, s� escritas de forma diferente, o += vai somar o valor da direita com o valor da esquerda.
	//x = x + 7; // Ambas as opera��es s�o iguais, s� escritas de forma diferente, o += vai somar o valor da direita com o valor da esquerda.
	
	//==============================================================================



	//==============================================================================
	// Aula de IF e Else - com Exerc�cio
	// Usu�rio deve inserir o tamanho dos 3 lados de um tri�ngulo
	// O programa deve escrever se o tri�ngulo � equil�tero, is�sceles ou escaleno.
	// Nota, resolvi sozinho e depois acompanhei o tutorial
	// Aprendi que o operador "&&" � necess�rio ser utilizado quando precisamos fazer mais de uma compara��o no statement do IF ou ELSE.
	// Tamb�m aprendi o sinal de diferente "!=" em c++, o sinal de "==" � o igual do c++, esse eu ja tinha tido contato.
	// Talvez na proxima vez seja mais sensato declarar como float os valores do tri�ngulo.

	//int lado1, lado2, lado3;
	//cout << "Por favor insira o valor do lado 1 de seu tri�ngulo = ";
	//cin >> lado1;
	//cout << "Por favor insira o valor do lado 2 de seu tri�ngulo = ";
	//cin >> lado2;
	//cout << "Por favor insira o valor do lado 3 de seu tri�ngulo = ";
	//cin >> lado3;

	//if (lado1 == lado2 && lado1 == lado3)
	//	{
	//	cout << "Seu tri�ngulo � Equil�tero";
	//	}
	//else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)  // Nota, nesse "else if" na aula n�o foi utilizado dessa forma, e sim com o else {} e um novo if dentro abrindo outro {}
	//	{															// Houve tamb�m uma "eleg�ncia" aplicada no c�digo, visto que foi recomendado tirar os {} dos statements de if,else que executam															
	//	cout << "Seu tri�ngulo � Escaleno";							// apenas um comando
	//	}
	//else
	//	{
	//	cout << "Seu tri�ngulo � Is�sceles";
	//	}
	//==============================================================================

	//==============================================================================
	//Programa para verificar se o n�mero � impar ou par. Exerc�cio
	//int number;
	//cout << "Por favor digite o seu n�mero" << endl;
	//cin >> number;
	
	//if (number % 2 == 0) 
	//{
	//	cout << "O n�mero � par";
	//}
	//else 
	//{
	//	cout << "O n�mero � impar";
	//}
	//==============================================================================



	//==============================================================================
	//Exerc�cio de transformar uma frase para ASCII em n�meros.
	//char c1; //Declarando vari�veis sem inicializa��o para o usu�rio poder digitar.
	//char c2;
	//char c3;

	//char c1, c2, c3, c4, c5;  //Forma mais f�cil de criar v�rias vari�veis do mesmo tipo.

	//cout << "Por favor, formule sua frase: " << endl;
	//cin >> c1 >> c2 >> c3 >> c4 >> c5;
	//cout << "Sua frase em ASCII � a seguinte: " << int(c1) << " " << int(c2) << " "
	//											<< int(c3) << " " << int(c4) << " " << int(c5); //Transformando tudo em ASCII
	//==============================================================================


	//==============================================================================
	//Exemplos de uso de convers�o ASCII
	//cout << (int)'a' << endl; //Transformando o char "a" em Inteiro, convertendo para a tabela ASCII
	//cout << int('a') << endl; //Outra forma de realizar essa transforma��o
	//cout << int('A') << endl; //Mostrando o valor de "A" mai�sculo, � diferente do a min�sculo.
	//cout << char(65) << endl; //Convertendo o n�mero 65 para uma letra, no caso pela tabela ASCII ele vai se tornar no "A" mai�sculo.
	//==============================================================================

	//==============================================================================
	//Aula de datatype , colocando apenas novos aprendizados
	//int intMax = INT_MAX; //O INT_MAX pega o maior valor que a vari�vel tipo "int" pode chegar
	//cout << intMax << endl;
	//cout << intMax + 1; // Isso vai gerar um data overflow, onde o valor vai at� o m�nimo, ficando no menor n�mero que INT pode ir (negativo)
	//==============================================================================

	// return 0;  //Return 0 padr�o

	system("pause>0"); // Forma mais elegante de parar o programa se o retorno n�o for 0 (falhar)	
}
