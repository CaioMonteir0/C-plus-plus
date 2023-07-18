/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

struct dma
{
   int dia;
   int mes;
   int ano;
};

int main(){
    struct dma X1;
        std::cout << "\n insira o dia: " << std::endl;
            std::cin >> X1.dia;
                std::cout <<"\n insira o mes: "  << std::endl;
                    std::cin >> X1.mes;
                        std::cout <<"\n insira o ano: "  << std::endl;
                            std::cin >> X1.ano ;
                            
                            std::cout << "A data é: " << std::endl;
                                std::cout << X1.dia << std::endl;
                                    cout << "/" <<X1.mes;
                                        cout << "/"<<X1.ano<<endl;
                                        
                                        return 0; }
    

    
