#include <iostream>
#include "ListaPuntatori.cpp" 

template <typename T>
class Coda {
private:
    ListaPuntatori<T> coda; 

public:
   
    void enqueue(T elem) {
        coda.inslista(elem, coda.lunghezza() + 1); 
    }

    
    T dequeue() {
        T frontElem = coda.leggilista(1); 
        coda.canclista(1); 
        return frontElem;
    }

    
    T front() {
        return coda.leggilista(1); 
    }

   
    bool isEmpty() {
        return coda.listavuota();
    }


    int size() {
        return coda.lunghezza();
    }
};

