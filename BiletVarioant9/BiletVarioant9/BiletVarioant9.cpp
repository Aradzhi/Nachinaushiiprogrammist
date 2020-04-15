#include <iostream>
using namespace std;

int main()
{
    int a1 = 1000;
    int a2 = 2000;
    int a3 = 3000;
    int a4 = 4000;
    int a5 = 5000;
    int a6 = 3000;
    int a7;
    int b;
    int c;
    int d;
    int e;

    cout << "Kuda  vy hotite otpravitsya?" << endl;
    cout << "1. Egypt" << endl;
    cout << "2. France" << endl;
    cout << "3.Maldives" << endl;
    cout << "4.USA" << endl;
    cout << "5.China" << endl;
    cin >> b;


    switch (b) {
    case 1:
        cout << "Kakoi otel predpochitaete(skolko zvezd)?" << endl;
        cout << "1.3" << endl;
        cout << "2.4" << endl;
        cout << "3.5" << endl;
        cin >> d;
        switch (d) {
        case 1:
            cout << "kolichestvo dney:" << endl;
            cin >> a6;


            cout << ("Stoimost otelya:", a1) << endl;
            a1 = a1 * a6;
            cout << a1 << endl;
            cout << "Na kakom vide transporta vy  hotite dobratycya do punkta  naznachenia?" << endl;
            cout << "1.Samolet" << endl;
            cout << "2.Poezd" << endl;
            cin >> e;
            switch (e) {
            case 1:
                cout << "stoimost :" << endl;
                cout << a6;
                break;
            case 2:
                cout << "stoimost :" << endl;
                cout << a6;
                break;
            deafault:break;
            }




            case 2:
                cout << "kolichestvo dney:" << endl;
                cin >> a6;

                cout << ("Stoimost otelya:") << endl;
                a1 = a1 * a6;
                cout << a1;

                break;
            case 3:
                cout << "kolichestvo dney:";
                cin >> a6;
                cout << ("Stoimost otelya:") << endl;
                a1 = a1 * a6;
                cout << a1;


                break;
            default: break;

            }
        }
    }








