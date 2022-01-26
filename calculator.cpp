#include <bits/stdc++.h>
using namespace std;

double division(double, double);
double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double power(double, double);
double square(double);
double cube(double);
double cube_root(double);
double square_root(double);
double log_e(double);
double log_10(double);
double factorial(double);
double sin_a(double);
double cos_a(double);
double tan_a(double);
double degree_to_rad(double);
void print_menu();

int main()
{
    double a, b, c;
    double pi = 3.14159;
    cout << "  **** scientific calculator ****" << endl;
    cout << "  **** Operations menu ****" << endl;
    print_menu();

    int choice;

    while (true)
    {
        cout << endl
             << "Enter the Operation number " << endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            cout << "Enter the value of a and b" << endl;
            cin >> a >> b;
            cout << a << " + " << b << " = " << addition(a, b) << endl;
            break;
        case 2:
            cout << "Enter the value of a and b" << endl;
            cin >> a >> b;
            cout << a << " - " << b << " = " << subtraction(a, b) << endl;
            break;
        case 3:
            cout << "Enter the value of a and b" << endl;
            cin >> a >> b;
            cout << a << " * " << b << " = " << multiplication(a, b) << endl;
            break;
        case 4:
            cout << "Enter the value of a and b" << endl;
            cin >> a >> b;
            cout << a << " / " << b << " = " << division(a, b) << endl;
            break;
        case 5:
            cout << "Enter the value of a and b" << endl;
            cin >> a >> b;
            cout << a << " power " << b << " = " << power(a, b) << endl;
            break;
        case 6:
            cout << "Enter the value of a " << endl;
            cin >> a;
            cout << " Square of " << a << " = " << square(a) << endl;
            break;
        case 7:
            cout << "Enter the value of a " << endl;
            cin >> a;
            cout << " cube of " << a << " = " << cube(a) << endl;
            break;
        case 8:
            cout << "Enter the value of a " << endl;
            cin >> a;
            cout << " Square root of " << a << " = " << square_root(a) << endl;
            break;
        case 9:
            cout << "Enter the value of a " << endl;
            cin >> a;
            cout << " cube root of " << a << " = " << cube_root(a) << endl;
            break;
        case 10:
            cout << "Enter the value of a " << endl;
            cin >> a;
            cout << " log of " << a << " base e"
                 << " = " << log_e(a) << endl;
            break;
        case 11:
            cout << "Enter the value of a " << endl;
            cin >> a;
            cout << " log of " << a << " base 10"
                 << " = " << log_10(a) << endl;
            break;
        case 12:
            cout << "Enter the value of a " << endl;
            cin >> a;
            cout << " factorial of " << a << " = " << factorial(a) << endl;
            break;
        case 13:
            cout << "Enter the value of a (in degree) " << endl;
            cin >> a;
            c = degree_to_rad(a);
            cout << " sin of " << a << " = " << sin_a(c) << endl;
            break;
        case 14:
            cout << "Enter the value of a (in degree) " << endl;
            cin >> a;
            c = degree_to_rad(a);
            cout << " cos of " << a << " = " << cos_a(c) << endl;
            break;
        case 15:
            cout << "Enter the value of a (in degree) " << endl;
            cin >> a;
            c = degree_to_rad(a);
            cout << " tan of " << a << " = " << tan_a(c) << endl;
            break;
        }
    }
    return 0;
}
void print_menu()
{
    cout << "       press 0 to stop   " << endl;
    cout << "       press 1 for a + b   " << endl;
    cout << "       press 2 for a - b            " << endl;
    cout << "       press 3 for a * b            " << endl;
    cout << "       press 4 for a / b            " << endl;
    cout << "       press 5 for a power b        " << endl;
    cout << "       press 6 for a square         " << endl;
    cout << "       press 7 for a cube         " << endl;
    cout << "       press 8 for a square root    " << endl;
    cout << "       press 9 for a cube root      " << endl;
    cout << "       press 10 for log(a) base e   " << endl;
    cout << "       press 11 for log(a) base 10 " << endl;
    cout << "       press 12 for factorial      " << endl;
    cout << "       press 13 for sin(a)      " << endl;
    cout << "       press 14 for cos(a)      " << endl;
    cout << "       press 15 for tan(a)      " << endl;
}

double addition(double a, double b)
{
    return a + b;
}

double subtraction(double a, double b)
{
    return a - b;
}
double division(double a, double b)
{
    return a / b;
}
double multiplication(double a, double b)
{
    return a * b;
}
double power(double a, double b)
{
    return pow(a, b);
}

double square(double a)
{
    return a * a;
}
double cube(double a)
{
    return a * a * a;
}
double cube_root(double a)
{
    return cbrt(a);
}
double square_root(double a)
{
    return sqrt(a);
}
double log_e(double a)
{

    return log(a);
}
double log_10(double a)
{
    return log10(a);
}
double factorial(double a)
{
    if (a == 1)
        return 1;
    return a * factorial(a - 1);
}
double sin_a(double a)
{
    return sin(a);
}

double cos_a(double a)
{
    return cos(a);
}

double tan_a(double a)
{
    return tan(a);
}
double degree_to_rad(double a)
{
    double pi = 3.14159265359;
    return (a * (pi / 180));
}
