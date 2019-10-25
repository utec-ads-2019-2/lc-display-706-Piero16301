#include<bits/stdc++.h>

using namespace std;

char segmentoLCD [5][6] = {{"    "}, {"   |"}, {"|   "}, {"|  |"}, {" -- "}};
char secuenciaNumero [10][5] = {{4,3,0,3,4}, {0,1,0,1,0}, {4,1,4,2,4}, {4,1,4,1,4}, {0,3,4,1,0}, {4,2,4,1,4}, {4,2,4,3,4}, {4,1,0,1,0}, {4,3,4,3,4}, {4,3,4,1,4}};

void imprimirSecuenciaNumero(char secuenciaNumeros[], int alto) {
    
    int size;
    for(int a = 0; a < 5; a++) {
        if(a == 0 || a == 2 || a == 4) {
            size = 1;
        } else {
            size = alto;
        }
        while(size--) {
            for(int b = 0; secuenciaNumeros[b]; b++) {
                if(secuenciaNumeros[b] == ' ') {
                    putchar(' ');
                    continue;
                }
                putchar(segmentoLCD[secuenciaNumero[secuenciaNumeros[b] - '0'][a]][0]);
                for(int c = 0; c < alto; c++) {
                    putchar(segmentoLCD[secuenciaNumero[secuenciaNumeros[b] - '0'][a]][1]);
                }
                putchar(segmentoLCD[secuenciaNumero[secuenciaNumeros[b] - '0'][a]][3]);
                if(secuenciaNumeros[b+1] != '\0') {
                    putchar(' ');
                }
            }
            cout << endl;
        }
    }
    
}

int main() {
    int alto;
    char cadenaSecuenciaNumeros [20];
    while(scanf("%d %s", &alto, &cadenaSecuenciaNumeros) == 2) {
        if(alto == 0) {
            break;
        }
        imprimirSecuenciaNumero(cadenaSecuenciaNumeros, alto);
        cout << endl;
    }
    return 0;
}