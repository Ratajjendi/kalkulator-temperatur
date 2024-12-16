#include<cstdlib>
#include<iostream>
using namespace std;

int k, x, a, c, d, g,q,sec, savea,losowa, entitytoremove, pary = 0;
float y, z = 0;
int* pamiecZ = (int*)malloc(500 * sizeof(int));
double pamiecL[100];
char b;
char pamiecS[100];
int pamiec()
{
    if (a < 100)
    {


        pamiecL[a] = z;
        pamiecS[a] = b;
        a++;
        pary = pary + 2;
        return 0;
    }
    else
    {
        cout << "UWAGA brak pamieci" << endl;
    }
}
int main()
{
    d = 0;
    cout << "\t\tprogram do przeliczania temperatur" << endl;

    do {
        cout << "wybierz opcje:" << endl;
        cout << "1. F to C" << endl;
        cout << "2. F to K" << endl;
        cout << "3. C to F" << endl;
        cout << "4. C to K" << endl;
        cout << "5. K to C" << endl;
        cout << "6. K to F" << endl;
        cout << "7. zakoncz dzialanie programu" << endl;
        cout << "8. pokaz historie" << endl;
        cout << "9. usuwanie histori" << endl;
        cout << "10. modyfikacja wpisu z historii" << endl;
        cout << "11. losowe wypelnienie historii " << endl;
        cin >> x;

        if (x < 1 or x > 11) {
            cout << "Nieprawidłowy wybor. Prosze wybrac ponownie." << endl;
        }

    } while (x < 1 or x > 11);
    switch (x)
    {
    case 1:
        system("cls");
        cout << "Podaj temperature w Fahrenheitach: ";
        cin >> z;
        y = z;
        b = 'F';
        pamiec();

        while (cin.fail())
        {
            cout << "Wprowadziles bledne dane" << endl;
            cout << "Wprowadz dane ponownie:";
            cin >> z;

        }
        z = (z - 32) * 5 / 9;
        b = 'C';
        pamiec();
        cout << y << " Fahrenheitow to " << z << " stopni Celsjusza." << endl;
        break;
    case 2:
        system("cls");
        cout << "Podaj temperature w Fahrenheitach: ";
        cin >> z;
        y = z;
        b = 'F';
        pamiec();
        while (cin.fail())
        {
            cout << "Wprowadziles bledne dane" << endl;

            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Wprowadz dane ponownie:";
            cin >> z;
        }
        z = (z - 459.67) * 5 / 9;
        b = 'K';
        pamiec();
        cout << y << " Fahrenheitow to " << z << " kelwinow." << endl;
        break;
    case 3:
        system("cls");
        cout << "Podaj temperature w Celsjuszach: ";
        cin >> z;
        y = z;
        b = 'C';
        pamiec();
        while (cin.fail())
        {
            cout << "Wprowadziles bledne dane" << endl;

            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Wprowadz dane ponownie:";
            cin >> z;
        }
        z = z * 9 / 5 + 32;
        b = 'F';
        pamiec();
        cout << y << " stopni Celsjusza to " << z << " Fahrenheitow." << endl;
        break;
    case 4:
        system("cls");
        cout << "Podaj temperature w Celsjuszach: ";
        cin >> z;
        y = z;
        b = 'C';
        pamiec();
        while (cin.fail())
        {
            cout << "Wprowadziles bledne dane" << endl;

            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Wprowadz dane ponownie:";
            cin >> z;
        }
        z = z + 273.15;
        b = 'K';
        pamiec();
        cout << y << " stopni Celsjusza to " << z << " kelwinow." << endl;
        break;
    case 5:
        system("cls");
        cout << "Podaj temperature w kelwinach: ";
        cin >> z;
        y = z;
        b = 'K';
        pamiec();
        while (cin.fail())
        {
            cout << "Wprowadziles bledne dane" << endl;

            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Wprowadz dane ponownie:";
            cin >> z;
        }
        z = z - 273.15;
        b = 'C';
        pamiec();
        cout << y << " kelwinow to " << z << " stopni Celsjusza." << endl;
        break;
    case 6:
        system("cls");
        cout << "Podaj temperature w kelwinach: ";
        cin >> z;
        y = z;
        b = 'K';
        pamiec();
        while (cin.fail())
        {
            cout << "Wprowadziles bledne dane" << endl;

            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Wprowadz dane ponownie:";
            cin >> z;

        }
        z = z * 9 / 5 - 459.67;
        b = 'F';
        pamiec();
        cout << y << " kelwinow to " << z << " Fahrenheitow." << endl;
        break;
    case 7:
        system("cls");
        cout << "Zakonczenie programu." << endl;
        return 0;
        break;
    case 8:
    {
        system("cls");
        do
        {
            cout << "1. pokaz cala historie" << endl;
            cout << "2. pokaz tylko C" << endl;
            cout << "3. pokaz tylko K" << endl;
            cout << "4. pokaz tylko F" << endl;
            cin >> c;
            if (c < 1 or c>4)
            {
                cout << "Nieprawidłowy wybor. Prosze wybrac ponownie." << endl;
            }
        } while (c < 1 or c>4);

        switch (c)
        {
        case 1:
            for (int i = 0; i < a; i = i + 2)
            {
                cout << pamiecL[i] << pamiecS[i] << "\t=\t" << pamiecL[i + 1] << pamiecS[i + 1] << endl;
            }
            break;

        case 2:
            system("cls");
            for (int i = 0; i < a; i = i + 2)
            {
                if (pamiecS[i] == 'C')
                {
                    d++;
                    cout << pamiecL[i] << pamiecS[i] << "\t=\t" << pamiecL[i + 1] << pamiecS[i + 1] << endl;
                }
            }
            if (d == 0)
            {
                cout << "brak danych" << endl;
            }

            break;
        case 3:
            system("cls");
            for (int i = 0; i < a; i = i + 2)
            {
                if (pamiecS[i] == 'K')
                {
                    cout << pamiecL[i] << pamiecS[i] << "\t=\t" << pamiecL[i + 1] << pamiecS[i + 1] << endl;
                }
            }
            if (d == 0)
            {
                cout << "brak danych" << endl;
            }
            break;
        case 4:
            system("cls");
            for (int i = 0; i < a; i = i + 2)
            {
                if (pamiecS[i] == 'F')
                {
                    cout << pamiecL[i] << pamiecS[i] << "\t=\t" << pamiecL[i + 1] << pamiecS[i + 1] << endl;
                }
            }
            if (d == 0)
            {
                cout << "brak danych" << endl;
            }
            break;
        }
        break;
    }
    case 9:
        system("cls");
        entitytoremove = 1;
        for (int i = 0; i <= a; i = i + 2)
        {
            cout << entitytoremove << ".\t" << pamiecL[i] << pamiecS[i] << "\t=\t" << pamiecL[i + 1] << pamiecS[i + 1] << endl;
            entitytoremove++;
        }
        cout << "ktora linie chcesz usunac" << endl;
        cin >> entitytoremove;
        entitytoremove = entitytoremove * 2 - 2;
        for (int i = entitytoremove; i < a - 2; i++)
        {
            pamiecL[i] = pamiecL[i + 2];
            pamiecS[i] = pamiecS[i + 2];
        }
        a = a - 2;
        break;
    case 10:
        system("cls");
        entitytoremove = 1;
        for (int i = 0; i < a; i = i + 2)
        {
            cout << entitytoremove << pamiecL[i] << pamiecS[i] << "\t=\t" << pamiecL[i + 1] << pamiecS[i + 1] << endl;
            entitytoremove++;
        }
        cout << "ktora linie chcesz zmodyfikowac" << endl;
        cin >> entitytoremove;
        entitytoremove = entitytoremove * 2 - 2;
        savea = a;
        a = entitytoremove;
        cout << "jaka skala" << endl;
        do {
            cout << "wybierz opcje:" << endl;
            cout << "1. FtoC" << endl;
            cout << "2. FtoK" << endl;
            cout << "3. CtoF" << endl;
            cout << "4. CtoK" << endl;
            cout << "5. KtoC" << endl;
            cout << "6. KtoF" << endl;
            cin >> g;

            if (g < 1 or g > 10) {
                cout << "Nieprawidłowy wybor. Prosze wybrac ponownie." << endl;
            }

        } while (g < 1 or g > 10);
        switch (g)
        {
        case 1:
            system("cls");
            cout << "Podaj temperature w Fahrenheitach: ";
            cin >> z;
            y = z;
            b = 'F';
            pamiec();

            while (cin.fail())
            {
                cout << "Wprowadziles bledne dane" << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Wprowadz dane ponownie:";
                cin >> z;

            }
            z = (z - 32) * 5 / 9;
            b = 'C';
            pamiec();
            cout << y << " Fahrenheitow to " << z << " stopni Celsjusza." << endl;
            break;
        case 2:
            system("cls");
            cout << "Podaj temperature w Fahrenheitach: ";
            cin >> z;
            y = z;
            b = 'F';
            pamiec();
            while (cin.fail())
            {
                cout << "Wprowadziles bledne dane" << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Wprowadz dane ponownie:";
                cin >> z;
            }
            z = (z - 459.67) * 5 / 9;
            b = 'K';
            pamiec();
            cout << y << " Fahrenheitow to " << z << " kelwinow." << endl;
            break;
        case 3:
            system("cls");
            cout << "Podaj temperature w Celsjuszach: ";
            cin >> z;
            y = z;
            b = 'C';
            pamiec();
            while (cin.fail())
            {
                cout << "Wprowadziles bledne dane" << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Wprowadz dane ponownie:";
                cin >> z;
            }
            z = z * 9 / 5 + 32;
            b = 'F';
            pamiec();
            cout << y << " stopni Celsjusza to " << z << " Fahrenheitow." << endl;
            break;
        case 4:
            system("cls");
            cout << "Podaj temperature w Celsjuszach: ";
            cin >> z;
            y = z;
            b = 'C';
            pamiec();
            while (cin.fail())
            {
                cout << "Wprowadziles bledne dane" << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Wprowadz dane ponownie:";
                cin >> z;
            }
            z = z + 273.15;
            b = 'K';
            pamiec();
            cout << y << " stopni Celsjusza to " << z << " kelwinow." << endl;
            break;
        case 5:
            system("cls");
            cout << "Podaj temperature w kelwinach: ";
            cin >> z;
            y = z;
            b = 'K';
            pamiec();
            while (cin.fail())
            {
                cout << "Wprowadziles bledne dane" << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Wprowadz dane ponownie:";
                cin >> z;
            }
            z = z - 273.15;
            b = 'C';
            pamiec();
            cout << y << " kelwinow to " << z << " stopni Celsjusza." << endl;
            break;
        case 6:
            system("cls");
            cout << "Podaj temperature w kelwinach: ";
            cin >> z;
            y = z;
            b = 'K';
            pamiec();
            while (cin.fail())
            {
                cout << "Wprowadziles bledne dane" << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Wprowadz dane ponownie:";
                cin >> z;

            }
            z = z * 9 / 5 - 459.67;
            b = 'F';
            pamiec();
            cout << y << " kelwinow to " << z << " Fahrenheitow." << endl;
            a = savea;
            break;
            a = savea;
            break;
        }
    case 11:
    {
        system("cls");
        cout << "ile miejsc chcesz wypelnic" << endl;
        cin >> entitytoremove;
        if (entitytoremove + a > 100)
        {
            do {
                entitytoremove = 100 - a;
                cout << "brak miejsca mozna wypelnic tylko " << 100 - a << " miejsc" << endl;
                cout << "czy chcesz wypelnic tylko " << 100 - a << " miejsc" << endl;
                cout << "1. wypelniaj" << endl;
                cout << "2. nie wypelniaj" << endl;
                cin >> q;
                if (1 > q || q < 2)
                    cout << "bledna wartosc wprowadz ponownie" << endl;

            } while (1 > q || q < 2);
            if (q = 2)
            {
                main();
            }
        }
        for (int i = 1; i <= entitytoremove; i++)
        {
            sec = time(NULL);
            srand(sec);
            losowa = rand();
            int dice = (losowa % 2);
            int dice2;
            switch (dice)
            {
            case 0:
                b = 'C';
                dice = (losowa % (500 - (-200) + 1) + (-200));
                z = dice;
                dice2 = (losowa % 1);
                pamiec();
                switch (dice2)
                {
                case 0:
                    b = 'F';
                    z = z * 9 / 5 + 32;
                    pamiec();
                    break;
                case 1:
                    b = 'K';
                    z = z + 273.15;
                    pamiec();
                    break;
                }
                break;
            case 1:
                b = 'F';
                dice = (losowa % 1000);
                z = dice;
                dice2 = (losowa % 1);
                pamiec();
                switch (dice2)
                {
                case 0:
                    b = 'C';
                    z = (z - 32) * 5 / 9;
                    pamiec();
                    break;
                case 1:
                    b = 'K';
                    z = (z + 459.67) * 5 / 9;
                    pamiec();
                    break;
                }
                break;
            case 2:
                b = 'K';
                dice = (losowa % 1000);
                z = dice;
                dice2 = (losowa % 1);
                pamiec();
                switch (dice2)
                {
                case 0:
                    b = 'C';
                    z = z - 273.15;
                    pamiec();
                    break;
                case 1:
                    b = 'F';
                    z = z * 9 / 5 - 459.67;
                    pamiec();
                    break;
                }
                break;
            }
        }
    }
    break;
    }
    main();
}