/*// Define a classe GradeBook com uma função-membro que
// aceita um parâmetro;
// Cria um objeto GradeBook e chama sua função-membro
// displayMessage.
#include <iostream>
#include <string> // utiliza a classe string padrão C++
using namespace std;
// definição da classe GradeBook
class GradeBook
{
public:
// função que exibe uma mensagem de boas-vindas
// ao usuário de GradeBook

void displayMessage ( string courseName )
{
cout << "Bem-vindo ao livro de notas de \n";
cout << courseName << "!" << endl;
} // fim da função displayMessage
}; // fim da classe GradeBook
// a função main inicia a execução do programa
int main()
{
// string de caracteres para armazenar o nome da disciplina
string nameOfCourse;
// cria o objeto myGradeBook da classe GradeBook
GradeBook myGradeBook;

// prompt para entrada do nome da disciplina
cout <<"Entre o nome da disciplina:" << endl;
// lê o nome da disciplina com espaços em branco
getline( cin>>ws, nameOfCourse );
cout << endl; // gera saída de uma linha em branco
// chama a função displayMessage de myGradeBook
// e passa nameOfCourse como um argumento
myGradeBook.displayMessage( nameOfCourse );
return 0; // indica terminação bem-sucedida
} // fim da função main

*/