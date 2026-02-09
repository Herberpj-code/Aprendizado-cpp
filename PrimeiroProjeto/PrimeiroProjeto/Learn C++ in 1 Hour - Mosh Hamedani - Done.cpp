#include <iostream>
#include <locale.h> //Biblioteca necess�ria para usar palavras com acento nas strings.
#include <cmath> //Habilita diversas fun��es matem�ticas de forma simples.
#include <cstdlib> //Habilita fun��es de randomiza��o.
#include <ctime> //Habilita fun��es com hor�rios e dias

using namespace std;

int ohmyboy() 
{	
	setlocale(LC_ALL, ""); // Codigo para permitir que palavras com acento sejam lidas pelo computador, por ex: "�".

	//system("cls");  // Usado para deixar o console limpo


	//__________________________________________________________________________________
	//Solu��o para o programa de rodar o dado.
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
	//int number = rand() % 10; //Gera o n�mero aleat�rio de segundos e faz o modulo dividido por 10.
	//cout << number;
	//__________________________________________________________________________________



	//__________________________________________________________________________________
	//Aula de narrowing
	//int number = 1'000'000; // � poss�vel usar as aspas simples para separar as casas dos n�meros para tornar o c�digo mais leg�vel.
	//short another = number; // Esse comando vai "estreitar" o n�mero, seja la o que significa isso. no Short s� vai at� 2 bytes, o int vai at� 4 bytes, entao ele vai tentar ler o maximo poss�vel aparentemente.
	//cout << another;
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//aula de tipo de n�meros (decimal, bin�rio e hexadecimal)
	//unsigned int number = -255; //a tipagem de "unsigned" n�o permite o n�mero ser negativo, o resultado disso vai ser que o compilador vai gerar n�meros aleat�rios do que estiver na mem�ria do sistema naquele momento.
	//evitar usar o unsigned.
	//int number = 0b11111111; //Est� em bin�rio e vai mostrar 255
	//int number = 0xff; //�st� em hexadecimal e vai mostrar 255
	//cout << number;
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	//aula de Inicializa��o de vari�veis
	//double price = 99.99;
	//float taxaDeJuros = 3.67F; //se voc� n�o inserir o "F" de float no final do n�mero (pode ser mai�sculo ou min�sculo, tanto faz), o compilador vai tratatar a vari�vel como double, mesmo escrito float.
	//long fileSize = 9000L; //Mesma coisa que o F do Float, precisa colocar o L no final para o compilador tratar ele como Long, se n�o ele vai tratar ele como inteiro ou double dependendo de como est� apresentado o valor.
	//char letter = 'a';
	//bool isValid = true;
	//auto tantoFaz = false; // Aqui o compilador est� tratando como bool, quando se usa auto o compilador tenta encontrar qual � o tipo correto.

	//int number {}; //Inicializando sem valor, o compilador inicia a vari�vel atribuindo "0" para ela.
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//Entendendo os bytes que o c++ utiliza
	// tipo int = 4 bytes = suporta n�meros de -2bilh�es at� +2bilh�es
	// tipo short = 2 bytes = suporta n�meros de -32.768 at� +32.768
	// tipo long = 4 bytes = suporta n�meros de -2bilh�es at� +2bilh�es
	// tipo long long =  8 bytes = suporta n�meros gigantescos.

	//tipo float = 4 bytes = numeros de -3.4E38 at� + 3.4E38
	//tipo double = 8 bytes = numeros de -1.7E308 at� + 1.7E308
	//tipo long double = 8 bytes = numeros de 3.4E932 at� + 3.4E932
	//tipo bool = 1 byte = true/false
	//tipo char = 1 byte = strings
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	//Exerc�cio, o usu�rio deve inserir o raio de um c�rculo e o programa calcular a �rea do circulo com esse dado. O PAI DEITOU D+ NESSE EXERC�CIO SEHLOKO
	//double raio;
	//cout << "Insira o Raio do Circulo: ";
	//cin >> raio;
	//double pi = 3.14;
	//double area = pi * pow(raio, 2);
	//cout << "A �rea do c�rculo �: " << area;
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//Aula das express�es matem�ticas utilizando a biblioteca <cmath>
	//double result = pow(2, 3);//A fun��o "pow" � de elevar a pot�ncia, o primeiro n�mero � elevado a pot�ncia do segundo, nesse caso seria 2�, o que daria o resultado de 8
	//cout << result;
	//double result = floor(1.2); //exemplo, "floor" � uma fun��o matem�tica para arredondar o n�mero.
	//cout << result;
	//__________________________________________________________________________________



	//__________________________________________________________________________________
	//Exerc�cio para converter a temperatura de Celsius para Fahrenheit, minha resolu��o;

	//double celsius;
	//	cout << "Digite a temperatura em Celsius: ";
	//cin >> celsius;
	//double fahrenheit = (celsius * 1.8) + 32;
	//cout << "A temperatura em Fahrenheit �: " << fahrenheit;
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	//Aula para entender como usar valores digitados pelo usu�rio no console
	//cout << "Insira o valor para x e y: ";
	//double x;
	//double y;
	//cin >> x >> y;

	//cout << x + y;
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//Exerc�cio para apresentar os valores de venda, do imposto do estado, do condado e a soma desses impostos, o pai deitou na solu��o
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
	//Escrevendo no console e combinando a string com as vari�veis
	//int x = 10;
	//int y = 15;

	//cout << "x = " << x << endl
	//	   << "y = " << y << endl;
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	// Exerc�cio de c�lculo
	//double y = 5;
	//double x = 10;
	//double z = (x + 10) / (3 * y);

	//cout << z;
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	//double x = 1 + 2 * 3; //de forma bem obvia o resultado dessa equa��o � 7 lol multiplica��o e divis�o s� tem menos prioridade do que "(Instru��es dentro de parenteses)".
	//std::cout << x;
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//int x = 10;
	//int y = 3;
	//int z = x % y; // O operador "%" � o modulo, ele apresenta o resto da divis�o de 2 valores.
	//z++; // Esse operador "++" � de incremento, ele vai acrescentar 1 a cada vez que for chamado.
	//int f = z++; // O valor de F ser� o valor de Z sem o incremento, mas o valor de z ser� incrementado em 1
	//int g = ++z; // O valor de G ser� o valor de Z+1 fazendo dessa forma pois os operadores de soma est�o vindo antes do valor de Z, o valor de Z tamb�m ser� Z+1.

	//std::cout << z; // O valor n�o vai ter casas decimais se os valores estiverem declarados como INT, para isso os valores precisam estar declarados como DOUBLE ou FLOAT
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	//Naming Conventions
	//int file_size;   //Snake Case
	//int FileSize;    //Pascal Case
	//int fileSize;	   //Camel Case (o que eu prefiro)
	//int iFileSize;   //Nota��o H�ngara (N�o � mais utilizado amplamente), o I na frente � pelo tipo da vari�vel, nesse caso � I pois � inteiro
	//__________________________________________________________________________________

	//__________________________________________________________________________________
	//const double pi = 3.14; // Agora n�o � mais poss�vel mudar o valor de PI colocando o const na frente, se voc� tentar for�ar o valor vai dar um erro.
	//pi = 0;  // Esse c�digo n�o funcionaria
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//Exerc�cio, transformando A em B e B em A
	//int a = 1;
	//int b = 2;
	//int temp = a;

	//a = b;
	//b = temp;

	//std::cout << a << "\n";
	//std::cout << b;
	//__________________________________________________________________________________


	//__________________________________________________________________________________
	//int fileSize = 100; //� boa pr�tica sempre inicializar suas vari�veis
	//int counter = 0;
	//double sales = 9.99;
	//std::cout << fileSize << "\n";
	//__________________________________________________________________________________

	//std::cout << "Hello World"; //statement, ta dizendo ao sistema o que est� fazendo, deve sempre terminar com ";"


	return 0; //Para garantir que termine com code 0, se o programa encontrar um erro ele n�o vai retornar 0, significando que falhou, se retornar 0, � porque a rodada foi um sucesso, por isso a "main" � int(inteiro).
}