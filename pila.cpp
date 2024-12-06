#include <iostream>
#include "ListaPuntatori.cpp" // Assicurarsi che il file ListaPuntatori sia incluso

template <typename T>
class Pila {
private:
    ListaPuntatori<T> pila; // ListaPuntatori per la gestione della pila

public:
    // Aggiunge un elemento alla pila
    void push(T elem) {
        pila.inslista(elem, 1); // Inserisce l'elemento in testa
    }

    // Rimuove l'elemento in cima alla pila e lo restituisce
    T pop() {
        T PrimoElem = pila.leggilista(1);
        pila.canclista(1); // Rimuove l'elemento in testa
        return PrimoElem;
    }

    // Restituisce l'elemento in cima alla pila senza rimuoverlo


    
    T top() {
        return pila.leggilista(1); // Legge l'elemento in testa
    }

    // Verifica se la pila è vuota
    bool isEmpty() {
        return pila.listavuota();
    }

    // Restituisce il numero di elementi nella pila
    int size() {
        return pila.lunghezza();
    }
};
