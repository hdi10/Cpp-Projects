#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float b = 2.898 * pow(10, -3);
    float l, t;

    unsigned char ch0;
    int tl;
    unsigned char ch1;
    int yn1;
    unsigned char ch2;
    int yn2;
    unsigned char ch3;
    int an;

    cout << "Wiensches Verschiebungsgesetz" << endl;
    cout << "by Harun Dastekin 2006" << endl;
    cout << "" << endl;
    cout << "Das Wiensche Verschiebungsgesetz lautet: t*l=b, wobei t die Temperatur" << endl;
    cout << "in Kelvin, l die strahlungsintensivste Wellenlaenge in m und b die Wien-" << endl;
    cout << "Konstante mit b = 2,898*10^-3 m/K ist." << endl;
    cout << "" << endl;

    do
    {
        do
        {
            cout << "" << endl;
            cout << "Berechnung von Temperaturen mit (t), Berechnung von Wellenlaenegen mit (l)" << endl;
            cin >> ch0;
            tl = static_cast<int>(ch0);
        } while ((tl != 116) && (tl != 108));

        ///////////////////////////////////////////////////////////////////////////////////////////////

        if (tl == 116)
        {
            do
            {
                cout << "" << endl;
                cout << "Eingabe der Wellenlaenge (l) in nm" << endl;
                cin >> l;
                t = pow(10, 9) * b / l;
                cout << "Temperatur = " << t << " K" << endl;

                do
                {
                    cout << "" << endl;
                    cout << "Fortsetzen mit (y), Beendigung mit (n)" << endl;
                    cin >> ch1;
                    yn1 = static_cast<int>(ch1);
                } while ((yn1 != 121) && (yn1 != 110));
            } while (yn1 == 121);
        }
        else
        {
            do
            {
                cout << "" << endl;
                cout << "Eingabe der Temperatur (t) in K" << endl;
                cin >> t;
                l = pow(10, 9) * b / t;
                cout << "Wllenlaenge = " << l << " nm" << endl;

                do
                {
                    cout << "" << endl;
                    cout << "Fortsetzen mit (y), Beendigung mit (n)" << endl;
                    cin >> ch2;
                    yn2 = static_cast<int>(ch2);
                } while ((yn2 != 121) && (yn2 != 110));
            } while (yn1 == 121);
        };

        ///////////////////////////////////////////////////////////////////////////////////////////////

        do
        {
            cout << "" << endl;
            cout << "Zuruecksetzen an den Anfang mit (a), Beendigung mit (n)" << endl;
            cin >> ch3;
            an = static_cast<int>(ch3);
        } while ((an != 97) && (an != 110));
    } while (an == 97);
}