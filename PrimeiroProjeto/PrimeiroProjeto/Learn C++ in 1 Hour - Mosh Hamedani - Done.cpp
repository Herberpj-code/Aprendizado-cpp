#include <iostream>
#include <locale.h> //Biblioteca necessária para usar palavras com acento nas strings.
#include <cmath> //Habilita diversas funções matemáticas de forma simples.
#include <cstdlib> //Habilita funções de randomização.
#include <ctime> //Habilita funções com horários e dias

using namespace std;

int ohmyboy() 
{	
	setlocale(LC_ALL, ""); // Codigo para permitir que palavras com acento sejam lidas pelo computador, por ex: "é".

	//system("cls");  // Usado para deixar o console limpo


	//__________________________________________________________________________________
	//Solução para o programa de rodar o dado.
	//const int minValue = 1;
	//const int maxValue = 6;


	//srand(time(0));
	//short first = (rand() % (maxValue - minValue + 1)) + minValue; // Rodando o dado
	//short second = (rand() % (maxValue - minValue + 1)) + minValue; // Rodando o dado

	//cout << first << ", " << second;
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	//long elapseSeconds = time(nullptr); //Randomiza o tempo a partir de Janeiro de 1970
	//srand(elapseSeconds);
	//int number = rand() % 10; //Gera o número aleatório de segundos e faz o modulo dividido por 10.
	//cout << number;
	//__________________________________________________________________________________



	//__________________________________________________________________________________
	//Aula de narrowing
	//int number = 1'000'000; // é possível usar as aspas simples para separar as casas dos números para tornar o código mais legível.
	//short another = number; // Esse comando vai "estreitar" o número, seja la o que significa isso. no Short só vai até 2 bytes, o int vai até 4 bytes, entao ele vai tentar ler o maximo possível aparentemente.
	//cout << another;
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//aula de tipo de números (decimal, binário e hexadecimal)
	//unsigned int number = -255; //a tipagem de "unsigned" não permite o número ser negativo, o resultado disso vai ser que o compilador vai gerar números aleatórios do que estiver na memória do sistema naquele momento.
	//evitar usar o unsigned.
	//int number = 0b11111111; //Está em binário e vai mostrar 255
	//int number = 0xff; //Éstá em hexadecimal e vai mostrar 255
	//cout << number;
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	//aula de Inicialização de variáveis
	//double price = 99.99;
	//float taxaDeJuros = 3.67F; //se você não inserir o "F" de float no final do número (pode ser maiúsculo ou minúsculo, tanto faz), o compilador vai tratatar a variável como double, mesmo escrito float.
	//long fileSize = 9000L; //Mesma coisa que o F do Float, precisa colocar o L no final para o compilador tratar ele como Long, se não ele vai tratar ele como inteiro ou double dependendo de como está apresentado o valor.
	//char letter = 'a';
	//bool isValid = true;
	//auto tantoFaz = false; // Aqui o compilador está tratando como bool, quando se usa auto o compilador tenta encontrar qual é o tipo correto.

	//int number {}; //Inicializando sem valor, o compilador inicia a variável atribuindo "0" para ela.
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//Entendendo os bytes que o c++ utiliza
	// tipo int = 4 bytes = suporta números de -2bilhões até +2bilhões
	// tipo short = 2 bytes = suporta números de -32.768 até +32.768
	// tipo long = 4 bytes = suporta números de -2bilhões até +2bilhões
	// tipo long long =  8 bytes = suporta números gigantescos.

	//tipo float = 4 bytes = numeros de -3.4E38 até + 3.4E38
	//tipo double = 8 bytes = numeros de -1.7E308 até + 1.7E308
	//tipo long double = 8 bytes = numeros de 3.4E932 até + 3.4E932
	//tipo bool = 1 byte = true/false
	//tipo char = 1 byte = strings
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	//Exercício, o usuário deve inserir o raio de um círculo e o programa calcular a área do circulo com esse dado. O PAI DEITOU D+ NESSE EXERCÍCIO SEHLOKO
	//double raio;
	//cout << "Insira o Raio do Circulo: ";
	//cin >> raio;
	//double pi = 3.14;
	//double area = pi * pow(raio, 2);
	//cout << "A área do círculo é: " << area;
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//Aula das expressões matemáticas utilizando a biblioteca <cmath>
	//double result = pow(2, 3);//A função "pow" é de elevar a potência, o primeiro número é elevado a potência do segundo, nesse caso seria 2³, o que daria o resultado de 8
	//cout << result;
	//double result = floor(1.2); //exemplo, "floor" é uma função matemática para arredondar o número.
	//cout << result;
	//__________________________________________________________________________________



	//__________________________________________________________________________________
	//Exercício para converter a temperatura de Celsius para Fahrenheit, minha resolução;

	//double celsius;
	//	cout << "Digite a temperatura em Celsius: ";
	//cin >> celsius;
	//double fahrenheit = (celsius * 1.8) + 32;
	//cout << "A temperatura em Fahrenheit é: " << fahrenheit;
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	//Aula para entender como usar valores digitados pelo usuário no console
	//cout << "Insira o valor para x e y: ";
	//double x;
	//double y;
	//cin >> x >> y;

	//cout << x + y;
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//Exercício para apresentar os valores de venda, do imposto do estado, do condado e a soma desses impostos, o pai deitou na solução
	//double sales = 95000;
	//double stateTax = 0.04;
	//double countyTax = 0.02;
	//double stateTaxResult = sales * stateTax;
	//double countyTaxResult = sales * countyTax;
	//double totalTax = (sales * stateTax) + (sales * countyTax);

	//cout << "Month Sales = R$ " << sales            << endl
	//	 << "State Tax = R$ "   << stateTaxResult   << endl
	//	 << "County Tax = R$ "  << countyTaxResult  << endl
	//	 << "Total Tax = R$"    << totalTax;
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//Escrevendo no console e combinando a string com as variáveis
	//int x = 10;
	//int y = 15;

	//cout << "x = " << x << endl
	//	   << "y = " << y << endl;
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	// Exercício de cálculo
	//double y = 5;
	//double x = 10;
	//double z = (x + 10) / (3 * y);

	//cout << z;
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	//double x = 1 + 2 * 3; //de forma bem obvia o resultado dessa equação é 7 lol multiplicação e divisão só tem menos prioridade do que "(Instruções dentro de parenteses)".
	//std::cout << x;
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//int x = 10;
	//int y = 3;
	//int z = x % y; // O operador "%" é o modulo, ele apresenta o resto da divisão de 2 valores.
	//z++; // Esse operador "++" é de incremento, ele vai acrescentar 1 a cada vez que for chamado.
	//int f = z++; // O valor de F será o valor de Z sem o incremento, mas o valor de z será incrementado em 1
	//int g = ++z; // O valor de G será o valor de Z+1 fazendo dessa forma pois os operadores de soma estão vindo antes do valor de Z, o valor de Z também será Z+1.

	//std::cout << z; // O valor não vai ter casas decimais se os valores estiverem declarados como INT, para isso os valores precisam estar declarados como DOUBLE ou FLOAT
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	//Naming Conventions
	//int file_size;   //Snake Case
	//int FileSize;    //Pascal Case
	//int fileSize;	   //Camel Case (o que eu prefiro)
	//int iFileSize;   //Notação Húngara (Não é mais utilizado amplamente), o I na frente é pelo tipo da variável, nesse caso é I pois é inteiro
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	//const double pi = 3.14; // Agora não é mais possível mudar o valor de PI colocando o const na frente, se você tentar forçar o valor vai dar um erro.
	//pi = 0;  // Esse código não funcionaria
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//Exercício, transformando A em B e B em A
	//int a = 1;
	//int b = 2;
	//int temp = a;

	//a = b;
	//b = temp;

	//std::cout << a << "\n";
	//std::cout << b;
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//int fileSize = 100; //É boa prática sempre inicializar suas variáveis
	//int counter = 0;
	//double sales = 9.99;
	//std::cout << fileSize << "\n";
	//__________________________________________________________________________________

	//std::cout << "Hello World"; //statement, ta dizendo ao sistema o que está fazendo, deve sempre terminar com ";"


	return 0; //Para garantir que termine com code 0, se o programa encontrar um erro ele não vai retornar 0, significando que falhou, se retornar 0, é porque a rodada foi um sucesso, por isso a "main" é int(inteiro).
}