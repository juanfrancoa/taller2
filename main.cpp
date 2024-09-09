#include <iostream>
#include <cstdlib>


void problema1();
void problema3();
void problema9();
void problema11();

int main()
{
    problema9();


    return 0;
}

void problema1(){
    unsigned short int dinero[10] = { 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    unsigned short int devuelta[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    unsigned short int index = 0;
    unsigned int pago;
    std::cout<<"Ingrese cantidad a pagar : "<<std::endl;
    std::cin>>pago;
    while(index <= 9){
        if(pago >= *(dinero + index) ){
            pago -= *(dinero + index);
            devuelta[index]++;
        }
        else{
            index++;
        }
    }
    for(int i = 0; i < 10; i++){
        std::cout<<*(dinero + i) <<": " << *(devuelta + i)<< std::endl;
    }
    std::cout<<"Faltante: "<<pago<<std::endl;
}

void problema3(){
    char caracter1[99], caracter2[99];
    std::cout<<"Ingrese primer cadena: "<<std::endl;
    std::cin>>caracter1;
    std::cout<<"Ingrese segunda cadena: "<<std::endl;
    std::cin>>caracter2;

}

void problema9(){
    char *cadena = new char[30];
    unsigned short int n, tamanio = 0;
    std::cout<<"Ingrese cadena de caracteres numericos : ";
    std::cin>>cadena;
    std::cout<<"Ingrese numero n : ";
    std::cin>>n;
    while(tamanio < 30){
        tamanio++;
        std::cout<<*(cadena + tamanio);
        if(*(cadena + tamanio) == '\n'){
            break;
        }
    }
    std::cout<<tamanio<<std::endl;
    delete [] cadena;
}

void problema11(){
    char cinema[20][20];
    char a = 'A';


    unsigned short int opcion ;


    std::cout<<"   ";
    for(int i = 1; i <= 20; i++){

        if(i >= 9){
            std::cout<<i<<" ";
        }
        else{
            std::cout<<i<<"  ";
        }
    }
    std::cout<<std::endl;

    for(int x = 0; x < 15; x++){
        std::cout<<char(a+x)<<"  ";

        for(int y = 0; y < 20; y++){
            cinema[x][y] = (rand() % 2) ? '+' : '-';
            std::cout<<cinema[x][y]<<"  ";
        }
        std::cout<<std::endl;
    }

    while(opcion != 3){
        a = 'A';
        std::cout<<"   ";
        for(int i = 1; i <= 20; i++){

            if(i >= 9){
                std::cout<<i<<" ";
            }
            else{
                std::cout<<i<<"  ";
            }
        }
        std::cout<<std::endl;

        for(int x = 0; x < 15; x++){
            std::cout<<char(a+x)<<"  ";

            for(int y = 0; y < 20; y++){

                std::cout<<cinema[x][y]<<"  ";
            }
            std::cout<<std::endl;
        }
        std::cout<<"Desea hacer una reserva (ingrese 1) o una cancelacion (ingrese 2) o salir (ingrese 3)"<<std::endl;
        std::cin>>opcion;
        if(opcion == 1){
            int columna;
            char fila;
            std::cout<<"Ingrese fila (A-O):";
            std::cin>>fila;
            std::cout<<"Ingrese columna (1-20):";
            std::cin>>columna;
            if(cinema[fila - 65][columna -1] == '+'){
                std::cout<<"Este asiento esta reservado"<<std::endl;
            }
            else{
                cinema[fila - 65][columna -1] = '+';
                std::cout<<"Asiento reservado"<<std::endl;
            }
        }
        else if(opcion == 2){
            int columna;
            char fila;
            std::cout<<"Ingrese fila (A-O):";
            std::cin>>fila;
            std::cout<<"Ingrese columna (1-20):";
            std::cin>>columna;
            if(cinema[fila - 65][columna -1] == '-'){
                std::cout<<"Este asiento NO esta reservado"<<std::endl;
            }
            else{
                cinema[fila - 65][columna -1] = '-';
                std::cout<<"Reserva Cancelada"<<std::endl;
            }
        }
    }

}



