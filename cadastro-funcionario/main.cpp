#include <iostream>
#include <string>
using namespace std;

class funcionario{
    
    private: 
    int ID_funcionario;
    char nome_funcionario[100];
    float salario_funcionario;

    public: 
    int atribuir_dados(int id, string nome, float dindin);
    void exibir_dados(void);
};

	int funcionario::atribuir_dados(int id, string nome, float dindin){
    
    sprintf_s(nome_funcionario,"%s",nome);
    ID_funcionario=id;
    salario_funcionario=dindin;
    
    return 1;
}
 
void funcionario::exibir_dados(void){
    cout<<"Identificação do funcionario: "<<ID_funcionario<<endl;
        cout<<"Nome do funcionario: "<<nome_funcionario<<endl;
            cout<<"Salario do funcionario: "<<salario_funcionario<<endl;
            
            
}

int main(){
    
    int ID_opt;
    float dindin_temp;
    char nome_temp[100];

	funcionario funcionario[2];
		
		for(int i=0;i<2;i++){
			cout << "Digite o ID do funcionario "<<i+1<<": \n"; cin >> ID_opt;
				cout << "Digite o nome do funcionario "<<i+1<<": \n"; cin >> nome_temp;
					cout << "Digite o salario do funcionario "<<i+1<<": \n"; cin >> dindin_temp;
		
					funcionario[i].atribuir_dados(ID_opt,nome_temp, dindin_temp);}

		for(int i=0;i<2;i++){
			funcionario[i].exibir_dados();}
													
system ("pause");
    
    
}
