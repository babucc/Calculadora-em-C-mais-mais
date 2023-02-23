#include <iostream>

using namespace  std;

	int main(){
		int op, calculo,  valor01, valor02;
		
		cout<<"      Calculadora        "    <<endl;
		cout<<"1 - Somar                "	 <<endl;
		cout<<"2 - Subtrair             "    <<endl;
		cout<<"3 - Multiplicar          "	 <<endl;
		cout<<"4 - Dividir              "    <<endl;
		cout<<"Informe a opcao desejada!"    <<endl;
		cin>>op;
		cout<<"Informe o valor01:       "    <<endl;
		cin>>valor01;
		
		while(valor01 <=0){
			cout<<"Valor Inválido!      "    <<endl;
			cin>>valor01;
		}
		cout<<"Informe o valor02:       "    <<endl;
		cin>>valor02;
		
		while(valor02 <=0){
			cout<<"Valor Inválido!      "    <<endl;
			cin>>valor02;
		}
		
		if(op == 1){
			calculo = valor01 + valor02;
		}else if(op == 2){
			calculo = valor01 - valor02; 
		}else if(op == 3){
			calculo = valor01 * valor02;
		}else if(op == 4){
			calculo = valor01 / valor02;
		}else{
			cout<<"Opcao Invalida!      "    <<endl;
		}
		cout<<"Resultado: "                  <<calculo;
	}
