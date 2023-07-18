#include <iostream>
#include <string>
using namespace std;

class aviao{
    
    private:
    
    int VELmax;
    string tipo;
    
      public: 
    void initialize(int tp);
    void atrib_aviao(int vel, string tip);
    void exibir_aviao(void);
    
}; 

void aviao::atrib_aviao(int vm, string tip){
    VELmax=vm;
    tipo=tip;
}

void aviao::initialize(int tp){
    
    if(tp==1){
       atrib_aviao(100,"Planador");
    }
    
         if(tp==2){
       atrib_aviao(200,"Monomotor");
    }
             if(tp==3){
       atrib_aviao(300,"Jato");
    }
}
void aviao::exibir_aviao(void){
    cout<<"Velocidade do aviao: "<<VELmax<<endl;
        cout<<"Tipo do aviao: "<<tipo<<endl;
}

int main(){
    

    int opt;
    cout <<"Digite o tipo de aviao (1, 2, 3)"<<endl;
    cin >> opt;
    aviao av1;
    av1.initialize(opt);
    av1.exibir_aviao();
    
        
            system("pause");
                
                return 0;
}