#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"


GradeBook::GradeBook(string name)
{
    setCourseName(name);
}
void GradeBook::setCourseName(string name)
{   if(name.length() <=25)
        courseName = name;
        
        if(name.length() > 25){
            courseName = name.substr(0,25);
            
            cout << " O nome\"" <<name;
                cout <<"\" excede o comprimento máximo (25).\n"<<endl;     
                    cout <<"Limitando para os 25 primeiros caracteres.\n";
                        cout <<endl;
        }
    
}



    string GradeBook::getCourseName()
    {
        return courseName;
    }
    
    void GradeBook::displayMessage(string courseName)
    {
        cout<< "Bem-vindo ao livro de notas\n";
        cout<<getCourseName()<<"!"<<endl;
    }