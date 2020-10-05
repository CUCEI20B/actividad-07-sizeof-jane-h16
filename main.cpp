#include <iostream>
#include <string.h>


using namespace std;

int main() {

    
    string valor;
    cout <<"Ingrese tipo de dato: ";
    getline(cin,valor);

    if (valor == "int"){
        cout <<sizeof(int)<<endl;
    }
    else if(valor == "char"){
        cout <<sizeof(char)<<endl;
    }
    else if(valor == "short"){
        cout <<sizeof(short)<<endl;
    }
    else if(valor == "float"){
        cout <<sizeof(float)<<endl;
    }
    else if(valor == "double"){
        cout <<sizeof(double)<<endl;
    }
    else if(valor == "long"){
        cout <<sizeof(long)<<endl;
    }

    return 0;
}