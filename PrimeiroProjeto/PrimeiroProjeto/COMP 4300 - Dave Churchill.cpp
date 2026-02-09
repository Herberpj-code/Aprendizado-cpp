#include <iostream>
#include <vector> //biblioteca que permite trabalhar com vetores e arrays
#include <fstream> //biblioteca que permite trabalhar com arquivos externos

class Student //classe dos estudantes
{
    std::string m_first =   "First"; // Inicializando as vari�veis
    std::string m_last  =   "Last";
    int         m_id    =    0;
    float       m_avg   =    0;

public:

    Student() {}  // Fun��o construtora vazia

    Student(std::string first, std::string last, int id, float avg) //Fun��o construtora passando os argumentos com as vari�veis
        : m_first   (first)
        , m_last    (last)      //Atribuinto os valores declarados na fun��o construtora para os valores das vari�veis privadas.
        , m_id      (id)
        , m_avg     (avg)
    {
    }


    //Fun��es para chamar os atributos declarados nas classes
    std::string getFirst()
    {
        return m_first;
    }

    std::string getLast()
    {
        return m_last;
    }

    int getID()
    {
        return m_id;
    }

    float getAvg()
    {
        return m_avg;
    }

    /*
    * void print() const  <-- o "const" no final est� declarando a fun��o como const, ent�o os atributos n�o poderiam ser alterados dentro da fun��o...
    * isso tamb�m abre a possibilidade de criarmos estudantes como const para n�o serem alterados, exemplo abaixo.
    */
    void print() const
    {
        std::cout << m_first << " " << m_last << " ";    // Fun��o que mostrar� os dados dos estudantes que forem invocados por ela.
        std::cout << m_id << " " << m_avg << "\n";
    }
};

//Exemplo de fun��o "machine learning" onde voc� n�o quer que os dados sejam alterados, ent�o voc� coloca o dado como "const" por isso o const Data, o "&" significa que sua fun��o est� pegando as informa��es por refer�ncia
//void doMachineLearning(const Data& d)
//{
   // d.getValue();
//}

class Course  //classe do curso
{
    std::string m_name = "Course";
    std::vector<Student> m_students; //Atribuindo um vetor para a classe dos estudantes (Student)

public:

    Course() {}

    Course(const std::string& name)
        : m_name(name)
    {
    }
    

    void addStudent(const Student& s)
    {
        m_students.push_back(s); //adicionando os estudantes da classe "Student" no vetor m_students.
    }

    const std::vector<Student>&getStudents() const
    {
        return m_students; // Chamando pelos estudantes
    }

    void loadFromFile(const std::string& filename)
    {

    }

    void print() const
    {
        for (const auto& s : m_students)
        {
            s.print();  // usando a fun��o print para mostrar todos os estudantes do vetor
        }
    }
     
};

int REMOVERmain(int argc, char * argv[])
{
    Student s1;
    Student s2("Herber", "Pucinelli Jr", 18287481, 7.5);
    Student s3("Herber", "Pucinelli Jr", 204334, 9.23);

    Course comp4300("COMP 4300");
    comp4300.addStudent(s1);//Adicionando os estudantes no curso comp4300, objetos se relacionando, o objeto de Estudantes com o de Curso.
    comp4300.addStudent(s2);
    comp4300.addStudent(s3);
    comp4300.addStudent(Student("Billy", "Oswell", 1738713781, 4.5)); //Adicionando um estudante novo no Vector

    comp4300.print();
    //const Student s3("Herber", "Pucinelli Jr", 204334, 9.23); <--- Estudante criado como const

    //std::cout << s3.getLast() << "\n";  // Mostrar� o ultimo nome do estudante 3

    //s3.print(); //Chamando o Student s3 com a fun��o print, mostrando todos os dados dele

    return 0;
}

