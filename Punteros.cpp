#include <iostream>

using namespace std;

/* Funcion ej2:void copiarray (int* part, int* dest, int n) {
    for (int i=0;i<n;i++){
        *(dest + i) = *(part + i);
    }
}*/

int main(){
    /*Ejercicio 1:Para un programa de terminal que use solo aritmética de punteros y pila 
    (sin estructuras de datos complejas como std::vector o listas enlazadas dinámicas), una excelente idea es un editor de texto básico.
    Este programa te permitiría: Crear y editar una línea de texto. La "línea" sería un char array en la pila.
    char  palabra[] = "Linea";
    char *p = palabra;

    int N, t;
    char c;

    cout << "Ingrese la cantidad de veces que desea cambiar una letra, entre 0 a 4" << endl;
    cin >> t;
    
    while (t<0 || t>4){
        cout << "El valor ingresado no es posible, vuelva a ingresar otro valor" << endl;
        cin >> t;
    }

    for (int i=0;i<t;i++){
        cout << "Ingrese un numero del 0 al 4" << endl;
        cin >> N;
        
        while (N<0 || N>4){
        cout << "El valor ingresado no es posible, vuelva a ingresar otro valor" << endl;
        cin >> N;
        }
        
        cout << "Ingrese una letra" << endl;
        cin >> c;
        *(p + N) = c;
    }

    cout << "La nueva palabra es: " << palabra;
    */
     
    /*Ejercicio 2: Copia de arreglo con punteros
    Crea una función que copie los elementos de un arreglo a otro usando punteros (sin usar []).

    int a;

    cout << "Ingrese el tamanio del array" << endl;
    cin >> a;

    int v1[a], v2[a];

    cout << "Ingrese los elementos numericos(int) de la matriz" << endl;

    for (int i=0;i<a;i++){
        cin >> v1[i];
    }

    copiarray (v1,v2,a);
    
    cout << "---------------------------" << endl;
    
    for (int i=0;i<a;i++){
        cout << v2[i] << endl;
    }*/

    /*Ejercicio 3:Reserva memoria para un arreglo de n enteros con new, rellénalo con números, muéstralo y libera la memoria con delete[].
    int n;
    
    cout << "Ingrese el tamano del array \n";
    cin >> n;
    
    int* p1 = new int[n];
    
    cout << "Ingrese los valores del array \n";
    
    for(int i=0;i<n;i++){
        cin >> p1[i];
    }
    
    for(int i=0;i<n;i++){
        cout << p1[i] << " ";
    }
    
    delete[] p1;*/

}