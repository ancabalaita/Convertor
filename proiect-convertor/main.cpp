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
    case 2:
        valoare=valoare/10;
    case 3:
        valoare=valoare/100;
    case 4:
        valoare=valoare/1000;
    case 5:
        valoare=valoare/1000;
    case 6:
        valoare=valoare*3.785;
    case 7:
        valoare=valoare*1000;
    case 8:
        valoare=valoare*0.016387064;
    case 9:
        valoare=valoare*764.56;
    case 10:
        valoare=valoare;
    case 11:
        valoare=valoare*28.32;


    }
    switch(unitate2)
    {
    case 1:
        valoare=valoare;
    case 2:
        valoare=valoare*10;
    case 3:
        valoare=valoare*100;
    case 4:
        valoare=valoare*1000;
    case 5:
        valoare=valoare*1000;
    case 6:
        valoare=valoare/3.785;
    case 7:
        valoare=valoare/1000;
    case 8:
        valoare=valoare/0.016387064;
    case 9:
        valoare=valoare/764.56;
    case 10:
        valoare=valoare;
    case 11:
        valoare=valoare/28.32;


    }
}
int main()
{
    unsigned short alegere,unitate1,unitate2;
    long double valoare;
    start:
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
        cout <<"Alegeti unitatile de masura:\n\nApasati '1' pentru Litri.\nApasati '2' pentru Decilitri.\nApasati '3' pentru Centilitri.\nApasati '4' pentru Mililitri.\nApasati '5' pentru Centimetri.\nApasati '6' pentru Galoane.\nApasati '7' pentru Metri.\nApasati '8' pentru Toli.\nApasati '9' pentru Yarzi.\nApasati '10' pentru Decimetri.\nApasati '11' pentru Picioare.\n";
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
            cout<<"Litri";
            break;
        case 2:
            cout<<"Decilitri";
            break;
        case 3:
            cout<<"Centilitri";
            break;
        case 4:
            cout<<"Mililitri";
            break;
        case 5:
            cout<<"Centimetri";
            break;
        case 6:
            cout<<"Galoane";
            break;
        case 7:
            cout<<"Metri";
            break;
        case 8:
            cout<<"Toli";
            break;
        case 9:
            cout<<"Yarzi";
            break;
        case 10:
            cout<<"Decimetri";
            break;
        case 11:
            cout<<"Picioare";
            break;
        }
        Volum(unitate1,unitate2,valoare);
        cout<<" = "<<valoare<<" ";
        switch (unitate2)
        {
        case 1:
            cout<<"Litri";
            break;
        case 2:
            cout<<"Decilitri";
            break;
        case 3:
            cout<<"Centilitri";
            break;
        case 4:
            cout<<"Mililitri";
            break;
        case 5:
            cout<<"Centimetri";
            break;
        case 6:
            cout<<"Galoane";
            break;
        case 7:
            cout<<"Metri";
            break;
        case 8:
            cout<<"Toli";
            break;
        case 9:
            cout<<"Yarzi";
            break;
        case 10:
            cout<<"Decimetri";
            break;
        case 11:
            cout<<"Picioare";
            break;
        }
        cout<<endl;
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
            goto start;

    }
    return 0;
}

