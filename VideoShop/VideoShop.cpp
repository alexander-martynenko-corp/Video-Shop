#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
using namespace std;

/*
* 1 Группа каждое задание по 2 минуты  2 * 6 = 12 минут.
*
* 2 Группа
* 1 задание - 3 мин
* 2 задание - 10 мин
* 3 задание - 5 - 12 мин
*  итого ~ 25 мин
*
* 3 Группа
* 1 задание - 10 мин
* 2 задание - 12 мин
* 3 задание - 5 мин
* итого ~ 27 мин
*
* 4 Группа
* 1 задание - 7 мин
* 2 задание - 10 мин
* 3 задание - 10 мин
* итого ~ 27 мин
*
* 5 Группа
* 1 задание - 15 мин
* 2 задане - 8 мин
* 3 задание - 20 мин
* итого ~ 43 мин
*
* 6 Группа
* 1 задание - 20 мин
* 2 задание  - 15 - 25 мин
* 3 задание - 12 - 15 мин
* 4 задание 15 мин
* итого ~
*
* 7 Группа
* 1 задание - 12 - 15 мин
* 2 задание
*
* 8 Группа
* 1 задание - 30 мин
*
* 9 Группа
* 1 задание - 20 мин
* 2 задание - 25 мин
* 3 задание -
*
* 10 Группа
* 1 задание - 25 - 40 мин
* 2 задание - 30 мин
*
* 11 Группа 25 мин
*
* 12 Группа
* 1 задание - 15 мин
* 2 задание - 10 - 15 мин
* 3 задание - 15 - 25 мин
* 4 задание - 25 мин
* 5 задание - 30 мин
* 6 задание -
*
* 13 Группа 30 мин
*
* 14 Группа 20 мин
*
* 15 Группа Одна Вечность.......
*
*/

// Группа 13 Структура - Видео Магазин
struct videoShop
{
    string NamesOfFilm;
    string DirectedBy;
    string ProducedBy;
    string DistrubedBy;
    string Action; // Жанр
    string Country;
    string OriginalLanguage;
    int ReleaseDate;
    short popularityRating;// 1 - 100;
    double costOfDVD;

};

void printInformationOfFilm(videoShop Film)
{
    cout << "Names of Film - " << Film.NamesOfFilm << "\n";
    cout << "Directed by  - " << Film.DirectedBy << "\n";
    cout << "Produced by - " << Film.ProducedBy << "\n";
    cout << "Distrubed by - " << Film.DistrubedBy << "\n";
    cout << "Action - " << Film.Action << "\n";
    cout << "Country - " << Film.Country << "\n";
    cout << "Original Language - " << Film.OriginalLanguage << "\n";
    cout << "Release date - " << Film.ReleaseDate << "\n";
    cout << "Popular Rating - " << Film.popularityRating << "\n";
    cout << "Cost on DVD - " << Film.costOfDVD << "\n";
}


int main()
{
    setlocale(0, "");
    /*
    //1. Напишите программу, вычисляющую среднее арифметическое двух чисел.
    int a, b;
    cin >> a >> b;
    cout << "Средне арифметическое числа " << a << " и " << b << " = " << a + b / 2 << endl;
    cout << endl;


    //2. Выведите на экран следующий текст: "To be or not to be" \Shakespeare
    cout << "\t\"To be or not to be\"" << endl;

    //3.В C нет операции возведения в квадрат. Напишите программу, которая вычисляет квадрат любого, введенного числа.
    cout << "Введите число для возведения в квадрат" << endl;
    int sq;
    cin >> sq;
    cout << "Результат: " << pow (sq,2) << endl;
    //4.Введите три числа и выведите на экран значение суммы и произведения этих чисел.
    int first, second, third;
    cin >> first >> second >> third;
    cout << first << " + " << second << " + " << third << " = " << first + second + third << endl;
    cout << first << " * " << second << " * " << third << " = " << first * second * third << endl;
    */


    videoShop FirstFilm = { "White sun of the desert" , "Vladimir Motyl" , "Studio of Mosfilm" , "Lenfilm-Mosfilm" , "Drama" , "SovietUnion" , "Russian" , 1970 ,  75 , 25.99 };
    printInformationOfFilm(FirstFilm);
    //  Lenfilm-Mosfilm , Drama , Soviet Union , "Russian" };
    cout << "Hello world!" << endl;


    system("pause");
    return 0;
}