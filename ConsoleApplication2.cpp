

#include <iostream>
using namespace std;

int main()
{
    double x = 0;
    double y = 0;
    char n = ' ';
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter operator (+, -, *, /,2,i): ";
    cin >> n;
    cout << "Enter second number: ";
    cin >> y;
    int w = x;
    int q = y;
    int o = x / y;
    int r = w % q;
    switch (n)
    {
    case '+': cout << "Result: " << x + y; break;
    case '-': cout << "Result: " << x - y; break;
    case '*': cout << "Result: " << x * y; break;
    case '/': cout << "Result: " << x / y; break;
    case '2': cout << "Result only x * x: " << x * x; break;
    case 'i': cout << "Result: "<<r; break;
    default:cout << "Wrong operator";
    }

}