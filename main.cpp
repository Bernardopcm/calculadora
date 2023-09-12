#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Função para realizar a adição
double addition(double a, double b) {
    return a + b;
}

// Função para realizar a subtração
double subtraction(double a, double b) {
    return a - b;
}

// Função para realizar a multiplicação
double multiplication(double a, double b) {
    return a * b;
}

// Função para realizar a divisão
double division(double a, double b) {
    if (b == 0) {
        cout << "Erro: Divisão por zero não é permitida." << endl;
        return 0;  // Retorna 0 em caso de divisão por zero
    } else {
        return a / b;
    }
}

int main() {
    double num1, num2, result;
    char operador;

    cout << "Bem-vindo à Calculadora Simples em C++" << endl;
    cout << "Digite uma operação (+, -, *, /): ";
    cin >> operador;

    cin.ignore();  // Limpar o caractere de nova linha pendente

    cout << "Digite dois números separados por espaço: ";
    string input;
    getline(cin, input);
    istringstream inputStream(input);
    inputStream >> num1 >> num2;

    if (operador == '+') {
        result = addition(num1, num2);
    } else if (operador == '-') {
        result = subtraction(num1, num2);
    } else if (operador == '*') {
        result = multiplication(num1, num2);
    } else if (operador == '/') {
        result = division(num1, num2);
    } else {
        cout << "Operação não suportada." << endl;
        return 1;  // Encerra o programa com código de erro
    }

    cout << "Resultado: " << result << endl;

    return 0;  // Encerra o programa com sucesso
}
	

