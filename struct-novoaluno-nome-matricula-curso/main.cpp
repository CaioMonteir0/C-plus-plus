#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


struct Ficha_Aluno
{
   long int matricula;
   string nome;
   string curso;
};
typedef struct Ficha_Aluno Aluno;

int main()
{
    Aluno novoaluno[4];
    for (int i = 0; i < 4; i++) {
        
        std::cout << "\n Digite a matrícula do aluno: " << std::endl;
            std::cin >> novoaluno[i].matricula;
            
            std::cout << "\n Digite o nome do aluno: " << std::endl;
                getline(cin>>ws,novoaluno[i].nome);
                
                std::cout << "\n Digite o curso: " << std::endl;
                    getline(cin>>ws,novoaluno[i].curso);
                    
                        std::cout << "\n Aluno cadastrado com sucesso!" << std::endl;
                    
                    
        
        
        
        
        
    }
        for (int i = 0; i < 4; i++) {
            
            std::cout << "Matrícula: " <<novoaluno[1].matricula<< std::endl;
            std::cout << "Nome: " <<novoaluno[1].nome<< std::endl;
            std::cout << "Curso: " <<novoaluno[1].curso<< std::endl;
        }
        return 0;
    
    }
