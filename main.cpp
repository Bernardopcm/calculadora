#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Fun��o para realizar a adi��o
double addition(double a, double b) {
    return a + b;
}

// Fun��o para realizar a subtra��o
double subtraction(double a, double b) {
    return a - b;
}

// Fun��o para realizar a multiplica��o
double multiplication(double a, double b) {
    return a * b;
}

// Fun��o para realizar a divis�o
double division(double a, double b) {
    if (b == 0) {
        cout << "Erro: Divis�o por zero n�o � permitida." << endl;
        return 0;  // Retorna 0 em caso de divis�o por zero
    } else {
        return a / b;
    }
}

int main() {
    double num1, num2, result;
    char operador;

    cout << "Bem-vindo � Calculadora Simples em C++" << endl;
    cout << "Digite uma opera��o (+, -, *, /): ";
    cin >> operador;

    cin.ignore();  // Limpar o caractere de nova linha pendente

    cout << "Digite dois n�meros separados por espa�o: ";
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
        cout << "Opera��o n�o suportada." << endl;
        return 1;  // Encerra o programa com c�digo de erro
    }

    cout << "Resultado: " << result << endl;

    return 0;  // Encerra o programa com sucesso
}
	

