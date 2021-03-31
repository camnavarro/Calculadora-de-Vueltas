#include <iostream>
using namespace std;
int main()
{
    int costo, pago, vueltas, c1000, c500, c100;
    cout <<"Ingrese el valor del costo"<<endl;
    cin >> costo;
    cout <<"Ingrese el valor del pago"<<endl;
    cin >> pago;
    
    if(costo <= pago)
        
    {
        if (pago-costo > 0)
        {
            cout << "El total de las vueltas es " << pago-costo <<endl;
            vueltas = pago-costo;
            c1000 = vueltas/1000;
            vueltas = vueltas%1000;
            c500 = vueltas/500;
            vueltas = vueltas%500;
            c100 = vueltas/100;
            if (c1000 <= 0)
                cout <<"No dar billetes de mil"<<endl;
            else
                cout<< "Dar " << c1000 << " billete(s) de mil"<<endl;
            if (c500 <= 0)
                cout <<"No dar billetes de quinientos"<<endl;
            else
                cout<< "Dar " << c500 << " billete(s) de quinientos"<<endl;
            if (c100 <= 0)
                cout<<"No dar billetes de cien"<<endl;
            else
                cout<< "Dar " << c100 << " billete(s) de cien"<<endl;
        }
        else
            cout << "Pago exacto. No dar vueltas"<< endl;
        
        
    }
    
    else
        
        cout <<"La cantidad pagada no es suficiente. Por favor complete el pago" << endl;

    
    
    return 0;
}

