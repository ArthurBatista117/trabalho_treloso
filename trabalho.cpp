#include <iostream>
#include <cstdlib>
#include <ctime>
// #include <cctype>
using namespace std;

char gen();
bool sel(char);
void prn(char, bool);

int main() {

        srand(static_cast<unsigned int>(time(0)));
        char letra = gen();
        bool eh_vogal = sel(letra);
        prn(letra, eh_vogal);

    return 0;
}


    char gen(void){
        const int tamanho_alfabeto = 26;
        int posicao = rand() % tamanho_alfabeto;
            return 'a' + posicao;
    }

    bool sel(char letra){
       // letra = tolower(letra);
    return letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u';
    }

    void prn(char letra, bool eh_vogal){
        cout << "Letra gerada: " << letra << endl;
        cout << "Eh vogal?" << (eh_vogal ? "Sim" : "Nao") << endl;
    }