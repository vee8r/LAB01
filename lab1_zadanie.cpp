// lab1_zadanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{   //zadanie1
   /* string numer_albumu = "w66347";
    cout << numer_albumu;*/
    
    //------------------------------------------------------------------------------------------

    //zadanie2

    /*int liczba;

    cout << "podaj liczbe: ";
    cin >> liczba;

    if (liczba % 2 == 0)
    {
        cout << "liczba jest parzysta";
    }
    else
    {
        cout << "liczba jest nieparzysta";
    }
    */

    //zadanie3

    /*float liczba1, liczba2;

    cout << "podaj dwie liczby zmiennoprzecinkowe: ";
    cin >> liczba1 >> liczba2;

    if (liczba1 > liczba2)
    {
        cout << "pierwsza liczba jest wieksza";
    }
    else
    {
        cout << "druga liczba jest wieksza";
    }
    */

    //zadanie4

    /*float liczba1, liczba2, liczba3, liczba4;
    
    cout << "wprowadz 4 liczby zmiennoprzecinkowe: ";
    cin >> liczba1 >> liczba2 >> liczba3 >> liczba4;

    cout << "srednia arytmetyczna: " << (liczba1 + liczba2 + liczba3 + liczba4) / 4;
    */

    //zadanie5

    int liczba1, liczba2;

    char dzialanie;

    cout << "podaj liczbe 1: ";
    cin >> liczba1;

    cout << "podaj liczbe 2: ";
    cin >> liczba2;

    cout << "wybierz dzialanie: \n + = suma\n - = roznica\n *= iloczyn\n / = iloraz" << endl;
    cin >> dzialanie;

    switch (dzialanie)
    {
    case '+':
            cout << "dodawnie: " << liczba1 + liczba2;
        break;

    case '-':
        cout << "odejmowanie: " << liczba1 - liczba2;
        break;

    case '*':
        cout << "mnozenie: " << liczba1 * liczba2;
        break;

    case '/':
        cout << "dzielenie: " << liczba1 / liczba2;
            break;
    default:
        cout << "zly wybor"; 
        break;
    }








}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
