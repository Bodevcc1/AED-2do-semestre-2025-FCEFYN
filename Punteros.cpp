#include <iostream>

using namespace std;

/*Funcion ej6:int** mat(int filas, int columnas){
    int** matriz;
    
    matriz = new int*[filas];
    
    for(int i=0;i<filas;i++){
        matriz[i] = new int[columnas];
    }
    
    cout << "Ingrese los valores de la matriz\n";
    
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cin >> *(*(matriz + i) + j);
        }
    }
    
    return matriz;
}*/

/*Estructura ej4:struct Animal{
    string Nombrea,Nombred,Raza;
    int edad;
}*/

/*Funcion ej2:void copiarray (int* part, int* dest, int n) {
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
     
/*Ejercicio 2:Copia de arreglo con punteros
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

/*Ejercicio 4:Se necesita almacenar información sobre animales,para gestionar una clínica veterinaria. Para comenzar,
 se supondrá que sólo hay un animal. Del animal esnecesario conocer:
 Tipo de animal (perro, gato, etc.)
 Nombre
 Edad
 Nombre del dueño 
    Animal *a;
    a = new Animal;

    cout << "Ingrese el nombre de su mascota \n";
    cin >> a->Nombrea;
    cout << "Ingrese su nombre \n";
    cin >> a->Nombred;
    cout << "Ingrese la Raza de su mascota \n";
    cin >> a->Raza;
    cout << "Ingrese la edad de su mascota \n";
    cin >> a->edad;

    cout << a->Nombrea << " " << a->Nombred << " " << a->Raza << " " << a->edad;
    
    delete a;*/
/*Ejercicio 5:a)Escribe una función llamada operacion que tome como parámetros dos enteros y un puntero a una función.
 La función a la que apunta el puntero debe tomar dos enteros y devolver un entero. 
 La función operacion debe llamar a la función a la que apunta el puntero y devolver el resultado
 b)Implementación: En tu programa principal (main), crea dos funciones: 
 sumar que devuelva la suma de dos enteros y restar que devuelva la resta de dos enteros. 
 Luego, usa tu función operacion dos veces: una para realizar una suma y otra para realizar una resta,
 pasando el puntero a la función adecuada en cada caso. 
 Imprime ambos resultados para verificar.
    int a,b;
    char op;
    
    cout << "Ingrese los valores tanto de a como de b\n";
    cin >> a >> b;
    
    cout << "Elija una operacion, s = suma, r = resta\n";
    cin >> op;
    
    switch (op){
        case 's':{
        int resultado_sumar = operacion(a,b,sumar);
        cout << resultado_sumar;
        break;
    }
        case 'r':{
        int resultado_restar = operacion(a,b,restar);
        cout << resultado_restar;
        break;
    }
        default:
        cout << "Opcion no valida\n";
        break;
    }*/

/*Ejercicio 6: Crear una matriz con punteros de punteros, que el usuario la rellene, para luego cambiar
    la posicion de fila 1 columna 2, con el valor 99
    int f=3,c=4;
    
    int **mi_matriz = mat(f,c);
    
    //Matriz original
    
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout << *(*(mi_matriz + i) +j) << " ";
        }
        cout << endl;
    }
    
    *(*(mi_matriz + 0) + 1) = 99;
    
    cout << "-----------------------------\n";
    
    //Matriz con el valor(0,1) modificado
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout << *(*(mi_matriz + i) + j) << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < f; i++) {
        delete[] mi_matriz[i];
    }
    
    delete[] mi_matriz;*/
}
