#include <iostream>

void imprimeNombre(int x)
{
    switch (x) // x evalúa a 3
    {
    case 1:
        std::cout << "Uno";
        break;
    case 2:
        std::cout << "Dos";
        break;
    case 3:
        std::cout << "Tres"; // ejecución comienza aquí
        break; // salta al final del bloque switch, pero dentro función               
    default:
        std::cout << "Unknown";
        break;
    }

    // ejecución continúa aquí
    std::cout << "\nEsto se imprime siempre que llamemos  imprimeNombre( )";
}

int main()
{
    imprimeNombre(3);

    return 0;
}
































/*#include <iostream>

void imprimeNombre(int x)
{
    switch (x)
    {
    case 1:
        std::cout << "Uno";
        return;    
    case 2:
        std::cout << "Dos";
        return;
    case 3:
        std::cout << "Tres";
        return;
    default:
        std::cout << "Desconocido";
        return;
    
    }
}

int main()
{
    imprimeNombre(3);

    return 0;
}*/



















/*#include <iostream>

void imprimeNombre(int x)
{
    if (x == 1)
        std::cout << "Uno";
    else if (x == 2)
        std::cout << "Dos";
    else if (x == 3)
        std::cout << "Tres";
    else
        std::cout << "Desconocido";
}

int main()
{
    imprimeNombre(2);

    return 0;
}*/







