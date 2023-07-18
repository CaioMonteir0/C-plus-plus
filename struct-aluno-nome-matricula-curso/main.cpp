/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct aluno
{
   long int matricula;
   string nome;
   string curso;
};

int main(){
    struct aluno a1,a2;
        
        cout <<"\n matricula: ";
            cin >> a1.matricula;
                cout<<"\n Nome: ";
                getchar();
                    getline(cin,a1.nome);                
                        cout<<"\n curso: ";
                            cin >>a1.curso ;
                                getline(cin,a1.curso);                

                            
                            a2=a1;

        cout <<"\n Matricula: "<<a2.matricula;
        cout <<"\n Nome: "<<a2.nome;
        cout <<"\n Curso: "<<a2.curso<<endl;
        
        system("pause");

                            

                                        return 0; }
                                        
                                        
    

    

