#include <iostream>

using namespace std;

void Lungime(unsigned short unitate1, unsigned short unitate2,long double &valoare)
{
    switch (unitate1)
    {
    case 1:
        valoare=valoare;
        break;
    case 2:
        valoare=valoare/100;
        break;
    case 3:
        valoare=valoare/1000;
        break;
    case 4:
        valoare=valoare*1000;
        break;
    case 5:
        valoare=valoare/3.280839895013123;
        break;
    case 6:
        valoare=valoare/0.0005399568034557236;
        break;
    case 7:
        valoare=valoare/39.37007874015748;
        break;
    case 8:
        valoare=valoare/1.0936130000578717;
        break;
    }
    switch(unitate2)
    {
    case 1:
        valoare=valoare;
        break;
    case 2:
        valoare=valoare*100;
        break;
    case 3:
        valoare=valoare*1000;
        break;
    case 4:
        valoare=valoare/1000;
        break;
    case 5:
        valoare=valoare*3.280839895013123;
        break;
    case 6:
        valoare=valoare*0.0005399568034557236;
        break;
    case 7:
        valoare=valoare*39.37007874015748;
        break;
    case 8:
        valoare=valoare*1.0936130000578717;
        break;

    }

}

void Arie(unsigned short unitate1, unsigned short unitate2,long double &valoare)
{
    switch (unitate1)
    {
    case 1:
        valoare=valoare;
        break;
    case 2:
        valoare=valoare/10000;
        break;
    case 3:
        valoare=valoare/1000000;
        break;
    case 4:
        valoare=valoare*1000000;
        break;
    case 5:
        valoare=valoare*0.0929;
        break;
    case 6:
        valoare=valoare*0.0006452;
        break;
    case 7:
        valoare=valoare*0.836127816;
        break;
    case 8:
        valoare=valoare*100;
        break;
    case 9:
        valoare=valoare*10000;
        break;
    case 10:
        valoare=valoare*4046.856119;
        break;
    }
    switch (unitate2)
    {
    case 1:
        valoare=valoare;
        break;
    case 2:
        valoare=valoare*10000;
        break;
    case 3:
        valoare=valoare*1000000;
        break;
    case 4:
        valoare=valoare/1000000;
        break;
    case 5:
        valoare=valoare/0.0929;
        break;
    case 6:
        valoare=valoare/0.0006452;
        break;
    case 7:
        valoare=valoare/0.836127816;
        break;
    case 8:
        valoare=valoare/100;
        break;
    case 9:
        valoare=valoare/10000;
        break;
    case 10:
        valoare=valoare/4046.856119;
        break;
    }
}


void Volum(unsigned short unitate1, unsigned short unitate2,long double &valoare)
{
    switch(unitate1)
    {
    case 1:
        valoare=valoare;
        break;
    case 2:
        valoare=valoare/100000;
        break;
    case 3:
        valoare=valoare/1000000;
        break;
    case 4:
        valoare=valoare/10000;
        break;
    case 5:
        valoare=valoare/1000;
        break;
    case 6:
        valoare=valoare/35.31;
        break;
    case 7:
        valoare=valoare/220;
        break;
    case 8:
        valoare=valoare/61023.7440947;
        break;
    case 9:
        valoare=valoare/1000;
        break;
    case 10:
        valoare=valoare/1000000;
        break;
    case 11:
        valoare=valoare/1.308;
        break;

    }
    switch(unitate2)
    {
    case 1:
        valoare=valoare;
        break;
    case 2:
        valoare=valoare*100000;
        break;
    case 3:
        valoare=valoare*1000000;
        break;
    case 4:
        valoare=valoare*10000;
        break;
    case 5:
        valoare=valoare*1000;
        break;
    case 6:
        valoare=valoare*35.31;
        break;
    case 7:
        valoare=valoare*220;
        break;
    case 8:
        valoare=valoare*61023.7440947;
        break;
    case 9:
        valoare=valoare*1000;
        break;
    case 10:
        valoare=valoare*1000000;
        break;
    case 11:
        valoare=valoare*1.308;
        break;

    }
}

void Timp(unsigned short unitate1, unsigned short unitate2,long double &valoare)
{
    switch(unitate1)
    {
    case 1:
        valoare=valoare;
        break;
    case 2:
        valoare=valoare*604800;
        break;
    case 3:
        valoare=valoare*86400;
        break;
    case 4:
        valoare=valoare*3600;
        break;
    case 5:
        valoare=valoare*60;
        break;
    case 6:
        valoare=valoare*0.1;
        break;
    case 7:
        valoare=valoare*0.01;
        break;
    case 8:
        valoare=valoare*0.001;
        break;
    case 9:
        valoare=valoare*0.000001;
        break;
    case 10:
        valoare=valoare*1e-9;
        break;
    }

    switch(unitate2)
    {
    case 1:
        valoare=valoare;
        break;
    case 2:
        valoare=valoare*0.0000016534391534391535;
        break;
    case 3:
        valoare=valoare*0.000011574074074074073;
        break;
    case 4:
        valoare=valoare*0.0002777777777777778;
        break;
    case 5:
        valoare=valoare*0.016666666666666666;
        break;
    case 6:
        valoare=valoare*10;
        break;
    case 7:
        valoare=valoare*100;
        break;
    case 8:
        valoare=valoare*1000;
        break;
    case 9:
        valoare=valoare*1000000;
        break;
    case 10:
        valoare=valoare*1000000000;
        break;
    }
}

void Viteza(unsigned short unitate1, unsigned short unitate2,long double &valoare)
{
    switch(unitate1)
    {
    case 1:
        valoare=valoare;
        break;
    case 2:
        valoare=valoare/6000;
        break;
    case 3:
        valoare=valoare/100;
        break;
    case 4:
        valoare=valoare/11810.9771221;
        break;
    case 5:
        valoare=valoare/196.8503937;
        break;
    case 6:
        valoare=valoare/3.28083;
        break;
    case 7:
        valoare=valoare/39.3700787;
        break;
    case 8:
        valoare=valoare/3.6;
        break;
    case 9:
        valoare=valoare/0.06;
        break;
    case 10:
        valoare=valoare/0.001;
        break;
    case 11:
        valoare=valoare/3600 ;
        break;
    case 12:
        valoare=valoare/60 ;
        break;

    }
    switch(unitate2)
    {
    case 1:
        valoare=valoare;
        break;
    case 2:
        valoare=valoare*6000;
        break;
    case 3:
        valoare=valoare*100;
        break;
    case 4:
        valoare=valoare*11810.9771221;
        break;
    case 5:
        valoare=valoare*196.8503937;
        break;
    case 6:
        valoare=valoare*3.28083;
        break;
    case 7:
        valoare=valoare*39.3700787;
        break;
    case 8:
        valoare=valoare*3.6;
        break;
    case 9:
        valoare=valoare*0.06;
        break;
    case 10:
        valoare=valoare*0.001;
        break;
    case 11:
        valoare=valoare*3600 ;
        break;
    case 12:
        valoare=valoare*60 ;
        break;

    }
}
void Temperatura(unsigned short unitate1, unsigned short unitate2,long double &valoare)
{
    switch(unitate1)
    {
    case 1:
        valoare=valoare;
    case 2:
        valoare=(valoare-32)*5/9;
    case 3:
        valoare=valoare-273.15;
    case 4:
        valoare=(valoare-491.67)*5/9;
    }

    switch(unitate2)
    {
    case 1:
        valoare=valoare;
    case 2:
        valoare=valoare*9/5+32;
    case 3:
        valoare=valoare+273.15;
    case 4:
        valoare=(valoare+273.15)*9/5;
    }
}

int main()
{
    unsigned short alegere,unitate1,unitate2;
    long double valoare;
//start:
    cout << "CONVERTOR\n\n";
    cout << "Apasati '1' pentru Lungime.\nApasati '2' pentru Arie.\nApasati '3' pentru Volum.\nApasati '4' pentru Timp.\nApasati '5' pentru Viteza.\nApasati '6' pentru Temperatura.\nApasati '7' pentru Masa.\nApasati '8' pentru Energie.\nApasati '9' pentru Presiune.\nApasati '10' pentru Densitate.\nApasati '11' pentru Consum conbustibil.\n" << endl;
    cin >> alegere;
    switch (alegere)
    {
    case 1:
        cout <<"Alegeti unitatile de masura:\n\nApasati '1' pentru Metri.\nApasati '2' pentru Centimetri.\nApasati '3' pentru Milimetri.\nApasati '4' pentru Kilometri.\nApasati '5' pentru Picioare.\nApasati '6' pentru Mila Maritima.\nApasati '7' pentru Toli.\nApasati '8' pentru Yarzi.\n";
        cout<<"Din: ";
        cin >> unitate1;
        cout<<"In: ";
        cin>> unitate2;
        cout<<"Introduceti valoarea: ";
        cin>>valoare;
        cout<<valoare<<" ";
        switch (unitate1)
        {
        case 1:
            cout<<"Metri";
            break;
        case 2:
            cout<<"Centimetri";
            break;
        case 3:
            cout<<"Milimetri";
            break;
        case 4:
            cout<<"Kilometri";
            break;
        case 5:
            cout<<"Picioare";
            break;
        case 6:
            cout<<"Mile Maritime";
            break;
        case 7:
            cout<<"Toli";
            break;
        case 8:
            cout<<"Yarzi";
            break;
        }
        Lungime(unitate1,unitate2,valoare);
        cout<<" = "<<valoare<<" ";
        switch (unitate2)
        {
        case 1:
            cout<<"Metri";
            break;
        case 2:
            cout<<"Centimetri";
            break;
        case 3:
            cout<<"Milimetri";
            break;
        case 4:
            cout<<"Kilometri";
            break;
        case 5:
            cout<<"Picioare";
            break;
        case 6:
            cout<<"Mile Maritime";
            break;
        case 7:
            cout<<"Toli";
            break;
        case 8:
            cout<<"Yarzi";
            break;
        }
        cout<<endl;
        break;
    case 2:
        cout <<"Alegeti unitatile de masura:\n\nApasati '1' pentru Metri^2.\nApasati '2' pentru Centimetri^2.\nApasati '3' pentru Milimetri^2.\nApasati '4' pentru Kilometri^2.\nApasati '5' pentru Picioare^2.\nApasati '6' pentru Toli^2.\nApasati '7' pentru Yarzi^2.\nApasati '8' pentru Ari.\nApasati '9' pentru Hectare.\nApasati '10' pentru Acri.\n";
        cout<<"Din: ";
        cin >> unitate1;
        cout<<"In: ";
        cin>> unitate2;
        cout<<"Introduceti valoarea: ";
        cin>>valoare;
        cout<<valoare<<" ";
        switch (unitate1)
        {
        case 1:
            cout<<"Metri^2";
            break;
        case 2:
            cout<<"Centimetri^2";
            break;
        case 3:
            cout<<"Milimetri^2";
            break;
        case 4:
            cout<<"Kilometri^2";
            break;
        case 5:
            cout<<"Picioare^2";
            break;
        case 6:
            cout<<"Toli^2";
            break;
        case 7:
            cout<<"Yarzi^2";
            break;
        case 8:
            cout<<"Ari";
            break;
        case 9:
            cout<<"Hectare";
            break;
        case 10:
            cout<<"Acri";
            break;
        }
        Arie(unitate1,unitate2,valoare);
        cout<<" = "<<valoare<<" ";
        switch (unitate2)
        {
        case 1:
            cout<<"Metri^2";
            break;
        case 2:
            cout<<"Centimetri^2";
            break;
        case 3:
            cout<<"Milimetri^2";
            break;
        case 4:
            cout<<"Kilometri^2";
            break;
        case 5:
            cout<<"Picioare^2";
            break;
        case 6:
            cout<<"Toli^2";
            break;
        case 7:
            cout<<"Yarzi^2";
            break;
        case 8:
            cout<<"Ari";
            break;
        case 9:
            cout<<"Hectare";
            break;
        case 10:
            cout<<"Acri";
            break;
        }
        cout<<endl;
        break;
    case 3:
        cout <<"Alegeti unitatile de masura:\n\nApasati '1' pentru Metri^3.\nApasati '2' pentru Centilitri.\nApasati '3' pentru Centimetri^3.\nApasati '4' pentru Decilitri.\nApasati '5' pentru Decimetri^3.\nApasati '6' pentru Picioare^3.\nApasati '7' pentru Galoane(UK).\nApasati '8' pentru Toli^3.\nApasati '9' pentru Litri.\nApasati '10' pentru Mililitri.\nApasati '11' pentru Yarzi^3.\n";
        cout<<"Din: ";
        cin >> unitate1;
        cout<<"In: ";
        cin>> unitate2;
        cout<<"Introduceti valoarea: ";
        cin>>valoare;
        cout<<valoare<<" ";
        switch (unitate1)
        {
        case 1:
            cout<<"Metri^3";
            break;
        case 2:
            cout<<"Centilitri";
            break;
        case 3:
            cout<<"Centimetri^3";
            break;
        case 4:
            cout<<"Decilitri";
            break;
        case 5:
            cout<<"Decimetri^2";
            break;
        case 6:
            cout<<"Picioare^3";
            break;
        case 7:
            cout<<"Galoane(UK)";
            break;
        case 8:
            cout<<"Toli^3";
            break;
        case 9:
            cout<<"Litri";
            break;
        case 10:
            cout<<"Mililitri";
            break;
        case 11:
            cout<<"Yarzi^3";
            break;
        }
        Volum(unitate1,unitate2,valoare);
        cout<<" = "<<valoare<<" ";
        switch (unitate2)
        {
        case 1:
            cout<<"Metri^3";
            break;
        case 2:
            cout<<"Centilitri";
            break;
        case 3:
            cout<<"Centimetri^3";
            break;
        case 4:
            cout<<"Decilitri";
            break;
        case 5:
            cout<<"Decimetri^2";
            break;
        case 6:
            cout<<"Picioare^3";
            break;
        case 7:
            cout<<"Galoane(UK)";
            break;
        case 8:
            cout<<"Toli^3";
            break;
        case 9:
            cout<<"Litri";
            break;
        case 10:
            cout<<"Mililitri";
            break;
        case 11:
            cout<<"Yarzi^3";
            break;
        }
    case 4:
        cout <<"Alegeti unitatile de masura:\n\nApasati '1' pentru Secunde.\nApasati '2' pentru Saptamani.\nApasati '3' pentru Zile.\nApasati '4' pentru Ore.\nApasati '5' pentru Minute.\nApasati '6' pentru Decisecunde.\nApasati '7' pentru Centisecunde.\nApasati '8' pentru Milisecunde.\nApasati '9' pentru Microsecunde.\nApasati '10' pentru Nanosecunde.\n";
        cout<<"Din: ";
        cin >> unitate1;
        cout<<"In: ";
        cin>> unitate2;
        cout<<"Introduceti valoarea: ";
        cin>>valoare;
        cout<<valoare<<" ";
        switch (unitate1)
        {
        case 1:
            cout<<"Secunde";
            break;
        case 2:
            cout<<"Saptamani";
            break;
        case 3:
            cout<<"Zile";
            break;
        case 4:
            cout<<"Ore";
            break;
        case 5:
            cout<<"Minute";
            break;
        case 6:
            cout<<"Decisecunde";
            break;
        case 7:
            cout<<"Centisecunde";
            break;
        case 8:
            cout<<"Milisecunde";
            break;
        case 9:
            cout<<"Microsecunde";
            break;
        case 10:
            cout<<"Nanosecunde";
            break;
        }
        Timp(unitate1,unitate2,valoare);
        cout<<" = "<<valoare<<" ";
        switch (unitate2)
        {
        case 1:
            cout<<"Secunde";
            break;
        case 2:
            cout<<"Saptamani";
            break;
        case 3:
            cout<<"Zile";
            break;
        case 4:
            cout<<"Ore";
            break;
        case 5:
            cout<<"Minute";
            break;
        case 6:
            cout<<"Decisecunde";
            break;
        case 7:
            cout<<"Centisecunde";
            break;
        case 8:
            cout<<"Milisecunde";
            break;
        case 9:
            cout<<"Microsecunde";
            break;
        case 10:
            cout<<"Nanosecunde";
            break;
        }
        cout<<endl;
        break;
    case 5:
        cout <<"Alegeti unitatile de masura:\n\nApasati '1' pentru Metri pe secunda.\nApasati '2' pentru Centimetri pe minut.\nApasati '3' pentru Centimetri pe secunda.\nApasati '4' pentru Picioare pe ora.\nApasati '5' pentru Picioare pe minut.\nApasati '6' pentru Picioare pe secunda.\nApasati '7' pentru Toli pe secunda.\nApasati '8' pentru Kilometri pe ora.\nApasati '9' pentru Kilometri pe minut.\nApasati '10' pentru Kilometri pe secunda.\nApasati '11' pentru Metri pe ora.\nApasati '12' pentru Metri pe minut.\n";
        cout<<"Din: ";
        cin >> unitate1;
        cout<<"In: ";
        cin>> unitate2;
        cout<<"Introduceti valoarea: ";
        cin>>valoare;
        cout<<valoare<<" ";
        switch (unitate1)
        {
        case 1:
            cout<<"Metri pe secunda";
            break;
        case 2:
            cout<<"Centimetri pe minut";
            break;
        case 3:
            cout<<"Centimetri pe secunda";
            break;
        case 4:
            cout<<"Picioare pe ora";
            break;
        case 5:
            cout<<"Picioare pe minut";
            break;
        case 6:
            cout<<"Picioare pe secunda";
            break;
        case 7:
            cout<<"Toli pe secunda";
            break;
        case 8:
            cout<<"Kilometri pe ora";
            break;
        case 9:
            cout<<"Kilometri pe minut";
            break;
        case 10:
            cout<<"Kilometri pe secunda";
            break;
        case 11:
            cout<<"Metri pe ora";
            break;
        case 12:
            cout<<"Metri pe minut";
            break;
        }
        Viteza(unitate1,unitate2,valoare);
        cout<<" = "<<valoare<<" ";
        switch (unitate2)
        {
        case 1:
            cout<<"Metri pe secunda";
            break;
        case 2:
            cout<<"Centimetri pe minut";
            break;
        case 3:
            cout<<"Centimetri pe secunda";
            break;
        case 4:
            cout<<"Picioare pe ora";
            break;
        case 5:
            cout<<"Picioare pe minut";
            break;
        case 6:
            cout<<"Picioare pe secunda";
            break;
        case 7:
            cout<<"Toli pe secunda";
            break;
        case 8:
            cout<<"Kilometri pe ora";
            break;
        case 9:
            cout<<"Kilometri pe minut";
            break;
        case 10:
            cout<<"Kilometri pe secunda";
            break;
        case 11:
            cout<<"Metri pe ora";
            break;
        case 12:
            cout<<"Metri pe minut";
            break;
        }
        cout<<endl;
        break;
        case 6:
        cout <<"Alegeti unitatile de masura:\n\nApasati '1' pentru Grade Celsius.\nApasati '2' pentru Grade Fahrenheit.\nApasati '3' pentru Grade Kelvin.\nApasati '4' pentru Grade Rankine\n";
        cout<<"Din: ";
        cin >> unitate1;
        cout<<"In: ";
        cin>> unitate2;
        cout<<"Introduceti valoarea: ";
        cin>>valoare;
        cout<<valoare<<" ";
        switch (unitate1)
        {
        case 1:
            cout<<"Grade Celsius";
            break;
        case 2:
            cout<<"Grade Fahrenheit";
            break;
        case 3:
            cout<<"Grade Kelvin";
            break;
        case 4:
            cout<<"Grade Rankine";
            break;
        }
        Temperatura(unitate1,unitate2,valoare);
        cout<<" = "<<valoare<<" ";
        switch (unitate2)
        {
        case 1:
            cout<<"Grade Celsius";
            break;
        case 2:
            cout<<"Grade Fahrenheit";
            break;
        case 3:
            cout<<"Grade Kelvin";
            break;
        case 4:
            cout<<"Grade Rankine";
            break;
        }
        cout<<endl;
        break;
        /*cout<<endl;
        break;
        cout<<endl<<"Apasati '1' pentru a continua.\nApasati '0' pentru a iesi.";
        bool x;
        cin>>x;
        while(x!=0&&x!=1)
        {
            cout<<"Valoare invalida.";
            cin>>x;
        }
        if(x==1)
            goto start;*/

    }
    return 0;
}

