/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

#include "GradeBook.h"
int main()
{   
    GradeBook gradeBook1("Ling. de Programação em C++");
    GradeBook gradeBook2("Algoritmos");
    
    cout << "\ngradeBook1 criado para a disciplina: \n";
        cout << gradeBook1.getCourseName();
            gradeBook1.displayMessage();
            
                cout << "\ngradeBook2 criado para disciplina: \n";
                     cout << gradeBook2.getCourseName() << endl;
                         gradeBook2.displayMessage() ;
                 
    
        return 0;

    
}