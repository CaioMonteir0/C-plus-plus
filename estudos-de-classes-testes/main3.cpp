#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
    private:
        string courseName;
        
    public:
        void setCourseName (string name)
        {
            courseName=name;
        }
        
        string getCourseName()
        {
            return courseName;
        }
        
        void displayMessage()
        {
            std::cout << "Bem-vindo ao livro de notas de " << std::endl;
                std::cout <<getCourseName()<<"!"  << std::endl;
        }
};

int main()
{
    string nameOfCourse;
    
        GradeBook myGradeBook;
        
        std::cout << "O nome inicial da disciplina é: " << std::endl;
        std::cout << myGradeBook.getCourseName() << std::endl;
        
        std::cout << "\nPor favor, entre com o nome da disciplina: " << std::endl;
        
        getline(cin>>ws,nameOfCourse);
        
        myGradeBook.setCourseName(nameOfCourse);
        
            myGradeBook.displayMessage();
            return 0;
}










