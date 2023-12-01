#include <iostream>
#include <clocale>  
#include <cmath>
#include <ctime>
#include <vector>

double Zad1()
{
    double b1 = 0, b2 = 0, h = 0;
    std::cin >> b1 >> b2 >> h;
    return ((b1 + b2) * h) / 2;
}

std::vector<double> Zad2()
{
    double r = 0;
    std::vector<double> arr(2);
    std::cin >> r;
    arr[0] = 2 * 3.14 * r;
    arr[1] = r * r * 3.14;
    return arr;
}

std::vector<double> Zad3()
{
    int a, b;
    std::vector<double> arr(2);
    std::cin >> a >> b;
    arr[0] = a * b / 2;
    arr[0] = sqrt(a * a + b * b);
    return arr;

}

int Zad4()
{
    std::string zxc;
    std::cin >> zxc;
    int sum = 0;
    for (int i = 0; i < 4; i++) sum += ((int)zxc[i] - 48);

    return sum;
}
void Zad5()
{
    double x, y;
    std::cin >> x >> y;
    std::cout << sqrt(x * x + y * y) << " " << y / x;
}

void Zad6()
{
    double rad, ang;
    std::cin >> rad >> ang;
    std::cout << rad * cos(ang * 3.14 / 180) << " " << rad * sin(ang * 3.14 / 180);
}
// 5 - 6

void Zad9()
{
    int sec;
    std::cin >> sec;
    std::cout << sec / 3600 << " hours " << (sec - sec / 3600 * 3600) / 60 << " min " << sec - ((sec - sec / 3600 * 3600) / 60 * 60) - sec / 3600 * 3600 << " sec";
}

void Zad12()
{
    double height, weight;
    std::cin >> height >> weight;
    if (height - 100 < weight) std::cout << "Fuck you're skinny, go get some protein and hit the gym";

    else if (height - 100 > weight)  std::cout << "go lose weight to the gym fat";

    else std::cout << "You're beautiful<3";
}

void Zad14()
{
    // стоимость переговора 3$
    int cost = 3;
    int day, hours;
    std::cin >> day >> hours;
    if (day == 6 || day == 7) std::cout << "You should pay: " << hours * cost * 0.8 << "$";

    else std::cout << "You should pay: " << hours * cost << "$";
}

void Zad16()
{

    std::string zxc;
    std::cin >> zxc;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++)  sum1 += ((int)zxc[i] - 48);

    for (int i = 3; i < 6; i++)  sum2 += ((int)zxc[i] - 48);

    if (sum1 == sum2) std::cout << "Congratulate, you very lucky";

    else std::cout << "Congratulate, you very unlucky";
}

void Zad18()
{
    std::string zxc;
    std::cin >> zxc;
    if (zxc[0] == zxc[3] && zxc[1] == zxc[2]) std::cout << "Palindrom epte";

    else std::cout << "Not palindrom(";

}

void Zad20()
{
    double a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if ((((a < c) && (b < d)) || ((a < d) && (b < c))) || (((c < a) && (d < b)) || ((d < a) && (c < b)))) std::cout << "You can";
    else std::cout << "You can't";
}


void Zad10(float a, float b, float c) {
    float a, b, c;
    std::cout << "Введите длины сторон треугольника: ";
    std::cin >> a >> b >> c;

    if (a == b  and  b != c)
        std::cout << "Треугольник равнобедренный" << std::endl;
    else if (a == c    and    c != b)
        std::cout << "Треугольник равнобедренный" << std::endl;
    else if (b == c    and    c != a)
        std::cout << "Треугольник равнобедренный" << std::endl;
    else
        std::cout << "Треугольник не является равнобедренным" << std::endl;

}

void Zad7() {
    float a, b, c;
    float D, x1, x2;
    std::cout << "Введите коэффициенты a, b и c квадратного уравнения: ";
    std::cin >> a >> b >> c;
    D = b * b - 4 * a * c;
    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        std::cout << "Корни уравнения: " << x1 << " и " << x2 << std::endl;
    }
        
    else if (D == 0)
    {
        x1 = -b / (2 * a);
        std::cout << "Уравнение имеет один корень: " << x1 << std::endl;
    }
   
    else 
    {
        std::cout << "Уравнение не имеет действительных корней" << std::endl;

    }
}
 

void Zad8() {
    float a, b, c;
    float MedA, MedB, MedC, m1, m2, m3;
    std::cout << "Введите cтороны треугольника: ";
    std::cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        MedA = sqrt((2 * b * b + 2 * c * c - a * a) / 4);
        MedB = sqrt((2 * a * a + 2 * c * c - b * b) / 4);
        MedC = sqrt((2 * b * b + 2 * a * a - c * c) / 4);
        if (MedA + MedB > MedC && MedA + MedC > MedB && MedB + MedC > MedA)
        {
            m1 = sqrt((2 * MedB * MedB + 2 * MedC * MedC - MedA * MedA) / 4);
            m2 = sqrt((2 * MedA * MedA + 2 * MedC * MedC - MedB * MedB) / 4);
            m3 = sqrt((2 * MedB * MedB + 2 * MedA * MedA - MedC * MedC) / 4);
            std::cout << "Исходная медиана 1 = " << m1 << std::endl;
            std::cout << "Исходная медиана 2 = " << m2 << std::endl;
            std::cout << "Исходная медиана 3 = " << m3 << std::endl;
        }
        else
        {
            std::cout << "Такой треугольник невозможен";
        }
    }
    else
    {
        std::cout << "Такой треугольник невозможен";
    }
}

void Zad11() {
    float buy, itog;
    std::cout << "Введите сумму заказа: ";
    std::cin >> buy;
    if (buy > 1000)
    {
        itog = buy * 0.9;
    }
    else
    {
        itog = buy;
    }
    std::cout << "Итоговая цена = " << itog << std::endl;
}

void Zad13() {
    srand(time(0));
    int Ymn, Try;
    int start = 1;
    int end = 9;
    int a = rand() % (end - start + 1) + start;
    int b = rand() % (end - start + 1) + start;

    Ymn = a * b;
    std::cout << "Выданы числа " << a << " " << b << " Каково их произведение?";
    std::cin >> Try;
    if (Try == Ymn)
    {
        std::cout << "Молодец, все верно!";
    }
    else
    {
        std::cout << "Ошибка, можешь лучше!";
    }
}

void Zad15() {
    int month;
    std::cout << "Введите номер месяца: ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "Январь, зима";
        break;
    case 2:
        std::cout << "Февраль, зима";
        break;
    case 3:
        std::cout << "Март, весна";
        break;
    case 4:
        std::cout << "Апрель, весна";
        break;
    case 5:
        std::cout << "Май, весна";
        break;
    case 6:
        std::cout << "Июнь, лето";
        break;
    case 7:
        std::cout << "Июль, лето";
        break;
    case 8:
        std::cout << "Август, лето";
        break;
    case 9:
        std::cout << "Сентябрь, осень";
        break;
    case 10:
        std::cout << "Октябрь, осень";
        break;
    case 11:
        std::cout << "Ноябрь, осень";
        break;
    case 12:
        std::cout << "Декабрь, зима";
        break;
    default:
        std::cout << "Ошибка: введите номер месяца от 1 до 12";
    }
}

void Zad17() {
    int Ko;
    std::cout << "Введите кол-во копеек: ";
    std::cin >> Ko;
    if (Ko == 1 || Ko == 21 || Ko == 31 || Ko == 41 || Ko == 51 || Ko == 61 || Ko == 71 || Ko == 81 || Ko == 91)
    {
        std::cout << "С Вас " << Ko << " копейка";
    }
    else if ((2 <= Ko && Ko <= 4) || (22 <= Ko && Ko <= 24) || (32 <= Ko && Ko <= 34) || (42 <= Ko && Ko <= 44) || (52 <= Ko && Ko <= 54) || (62 <= Ko && Ko <= 64) || (72 <= Ko && Ko <= 74) || (82 <= Ko && Ko <= 84) || (92 <= Ko && Ko <= 94))
    {
        std::cout << "С Вас " << Ko << " копейки";
    }
    else if ((5 <= Ko && Ko <= 20) || (25 <= Ko && Ko <= 30) || (35 <= Ko && Ko <= 40) || (45 <= Ko && Ko <= 50) || (55 <= Ko && Ko <= 60) || (65 <= Ko && Ko <= 70) || (75 <= Ko && Ko <= 80) || (85 <= Ko && Ko <= 90) || (95 <= Ko && Ko <= 99))
    {
        std::cout << "С Вас " << Ko << " копеек";
    }
}

void Zad19() {
    int b, int CH;
    int digit1 = CH / 100;
    int digit2 = (CH / 10) % 10;
    int digit3 = CH % 10;
    int proiz = digit1 * digit2 * digit3;
    int sum = digit1 + digit2 + digit3;
    if(CH >= 100 && CH <= 999)
    {
       std::cout << "Введите трехзначное число: ";
       std::cin >> CH;
    }
    else
    {
        std::cout << "Введено некорректное значение";
    }
    std::cout << "Введите число b: ";
    std::cin >> b;
    if (proiz > b)
    {
        std::cout << "Произведение чисел больше числа b ";
    }
    else 
    {
        std::cout << "Произведение чисел меньше числа b ";
    }
    if (sum % 7 == 0)
    {
        std::cout << "Число делится нацело на 7";
    }
    else
    {
        std::cout << "Число не делится нацело на 7";
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    Zad1();

    return 0;
}
