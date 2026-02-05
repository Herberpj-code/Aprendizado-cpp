#include <iostream>
#include <vector> //biblioteca que permite trabalhar com vetores e arrays
#include <fstream> //biblioteca que permite trabalhar com arquivos externos

class Student //classe dos estudantes
{
    std::string m_first =   "First"; // Inicializando as variáveis
    std::string m_last  =   "Last";
    int         m_id    =    0;
    float       m_avg   =    0;

public:

    Student() {}  // Função construtora vazia

    Student(std::string first, std::string last, int id, float avg) //Função construtora passando os argumentos com as variáveis
        : m_first   (first)
        , m_last    (last)      //Atribuinto os valores declarados na função construtora para os valores das variáveis privadas.
        , m_id      (id)
        , m_avg     (avg)
    {
    }


    //Funções para chamar os atributos declarados nas classes
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
    * void print() const  <-- o "const" no final está declarando a função como const, então os atributos não poderiam ser alterados dentro da função...
    * isso também abre a possibilidade de criarmos estudantes como const para não serem alterados, exemplo abaixo.
    */
    void print() const
    {
        std::cout << m_first << " " << m_last << " ";    // Função que mostrará os dados dos estudantes que forem invocados por ela.
        std::cout << m_id << " " << m_avg << "\n";
    }
};

//Exemplo de função "machine learning" onde você não quer que os dados sejam alterados, então você coloca o dado como "const" por isso o const Data, o "&" significa que sua função está pegando as informações por referência
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
            s.print();  // usando a função print para mostrar todos os estudantes do vetor
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

    //std::cout << s3.getLast() << "\n";  // Mostrará o ultimo nome do estudante 3

    //s3.print(); //Chamando o Student s3 com a função print, mostrando todos os dados dele

    return 0;
}

