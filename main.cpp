int main() {
    Pila<int> pila;

    // Test della pila
    pila.push(10);
    pila.push(20);
    pila.push(30);

    std::cout << "Elemento in cima alla pila: " << pila.top() << std::endl;

    std::cout << "Pop elemento: " << pila.pop() << std::endl;
    std::cout << "Pop elemento: " << pila.pop() << std::endl;

    std::cout << "Dimensione della pila: " << pila.size() << std::endl;

    return 0;
}
