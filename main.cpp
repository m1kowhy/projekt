#include <iostream>
#include <string>

using namespace std;

int wybor;
char dalej;



void zamiana_jednostek();
void menu_glowne();
void obliczanie_pol();
void obliczanie_objetosci();


int main(){

   
    do {
    menu_glowne();
    switch (wybor){

        case 1: zamiana_jednostek();
        break;
        case 2: obliczanie_pol();
        break;
        case 3: obliczanie_objetosci();
        break;
        case 4: exit(0);
        break;
    }
    }
    while (dalej != 'Y' || dalej != 'y');

}
 
void menu_glowne(){
    system("cls");
    cout << "--- Menu narzedzia inzynieryjnego ---" << endl << endl;
    cout << "1. Zamiana jednostek" << endl;
    cout << "2. Obliczanie pol figur" << endl;
    cout << "3. Obliczanie objetosci bryl" << endl;
    cout << "4. Wyjscie" << endl << endl;
    cout << "-------------------------------------" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor;
}

void zamiana_jednostek(){
    
    int wybor_pierwszej;
    int wybor_drugiej;

    double wartosc_wprowadzana;
    
    do{
    system("cls");

    cout << "--- Menu zamiany jednostek ---" << endl << endl;
    cout << "Wybierz jednostke poczatkowa: " << endl << endl;
    cout << "1. kg - kilogram" << endl;
    cout << "2. m - metr" << endl;
    cout << "3. K - Kelvin" << endl;
    cout << "4. F - Fahrenheit" << endl;
    cout << "5. C - Celsjusz" << endl;
    cout << "6. in - cal" << endl;
    cout << "7. lb - funt" << endl;
    cout << "8. oz - uncja" << endl;
    cout << "9. ft - stopa" << endl;
    cout << "10. mi - mila" << endl;
    cout << "11. km- kilometr" <<  endl;
    cout << "12. g - gram" <<  endl;
    cout << "13. mm - milimetr" << endl;
    cout << "14. cm - centymetr" << endl ;
    cout << "15. t - tona " <<  endl;
    cout << "16. dag - dekagram" << endl;
    cout << "17. mg - miligram" << endl << endl;
    cout << "-------------------------------" << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_pierwszej;

    cout << endl << "Wprowadz wartosc jednostki: ";
    cin >> wartosc_wprowadzana;



    switch (wybor_pierwszej){
        case 1:{
        system("cls"); // kilogram;
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. oz - uncja" << endl;
    cout << "2. lb - funt" << endl ;
    cout << "3. g - gram" << endl ;
    cout << "4. t - tona" <<  endl;
    cout << "5. dag - dekagram" << endl;
    cout << "6. mg - miligram" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " kg to: " << wartosc_wprowadzana * 35.27 << " oz" << endl;
             cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " kg to: " << wartosc_wprowadzana * 2.20 << " lb" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " kg to: " << wartosc_wprowadzana * 1000 << " g" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
	    case 4:{
            cout << endl << wartosc_wprowadzana << " kg to: " << wartosc_wprowadzana * 0.001 << " t" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
	    case 5:{
	    cout << endl << wartosc_wprowadzana << " kg to: " << wartosc_wprowadzana * 100 << " dag" << endl;
	    cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
	    case 6:{
	    cout << endl << wartosc_wprowadzana << " kg to: " << wartosc_wprowadzana * 1000000 << " mg" << endl;
	    cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
        }
        }

        
        break;
            case 2:{
            system("cls"); // metr;
        cout << "--- Menu zamiany jednostek ---" << endl;
        cout << "Wybierz jednostke docelowa: " << endl << endl;
        cout << "1. in - cal" << endl;
        cout << "2. ft - stopa" << endl;
        cout << "3. mi - mila" <<  endl;
        cout << "4. km - kilometr" << endl;
	cout << "5. cm - centymetr" << endl;
	cout << "6. mm - milimetr" << endl << endl;
        cout << "Wprowadz numer opcji: ";
        cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " m to: " << wartosc_wprowadzana * 39.37 << " in" << endl;
             cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " m to: " << wartosc_wprowadzana * 3.28 << " ft" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " m to: " << wartosc_wprowadzana * 0.000621371192 << " mi" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 4:{
            cout << endl << wartosc_wprowadzana << " m to: " << wartosc_wprowadzana * 0.001 << " km" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
	    case 5:{
	    cout << endl << wartosc_wprowadzana << " m to: " << wartosc_wprowadzana * 100 << " cm" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
	    case 6:{
	    cout << endl << wartosc_wprowadzana << " m to: " << wartosc_wprowadzana * 1000 << " mm" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
        }

        }
        break;
            case 3:{
        system("cls"); // kelviny;
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. F - Fahrenheit" << endl;
    cout << "2. C - Celsjusz" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " K to: " << (wartosc_wprowadzana * 1.8) - 459.67 << " F" << endl;
             cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " K to: " << wartosc_wprowadzana - 273.15 << " C" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
        }

        }
        break;
            case 4:{
        system("cls"); // fahrenheity;
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. K - Kelvin" << endl;
    cout << "2. C - Celsjusz" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " F to: " << (wartosc_wprowadzana + 459.67) / 1.8 << " K" << endl;
             cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " F to: " << (wartosc_wprowadzana - 32) / 1.8 << " C" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
        }

        }
        break;

            case 5:{
        system("cls"); // celsjusze;
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. K - Kelvin" << endl;
    cout << "2. F - Fahrenheit" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " C to: " << wartosc_wprowadzana + 273.15 << " K" << endl;
             cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " C to: " << (wartosc_wprowadzana * 1.8) + 32 << " F" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
        }

        }
        break;

            case 6:{
        system("cls"); // cale;
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. m - metr" << endl;
    cout << "2. ft - stopa" << endl;
    cout << "3. mi - mila"  << endl;
    cout << "4. km - kilometr" << endl;
    cout << "5. cm - centymetr" << endl;
    cout << "6. mm - milimetr" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " in to: " << wartosc_wprowadzana * 0.03 << " m" << endl;
             cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " in to: " << wartosc_wprowadzana * 0.08 << " ft" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " in to: " << wartosc_wprowadzana * 0.0000157828 << " mi" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 4:{
            cout << endl << wartosc_wprowadzana << " in to: " << wartosc_wprowadzana * 0.00003 << " km" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            break;
	    case 5:{
	    cout << endl << wartosc_wprowadzana << " in to: " << wartosc_wprowadzana * 2.54 << " cm" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
	    case 6:{
	    cout << endl << wartosc_wprowadzana << " in to: " << wartosc_wprowadzana * 25.4 << " mm" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
        }
		
        }
        break;
     
            case 7:{
        system("cls"); // funty;
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. kg - kilogram" << endl;
    cout << "2. oz - uncja" << endl ;
    cout << "3. g - gram" << endl ;
    cout << "4. t - tona " << endl;
    cout << "5. dag - dekagram" << endl;
    cout << "6. mg - miligram" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " lb to: " << wartosc_wprowadzana * 0.45 << " kg" << endl;
             cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " lb to: " << wartosc_wprowadzana * 16 << " oz" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " lb to: " << wartosc_wprowadzana *453.5923 << " g" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
	    case 4:{
            cout << endl << wartosc_wprowadzana << " lb to: " << wartosc_wprowadzana * 0.00045 << " t" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
	    case 5:{
	    cout << endl << wartosc_wprowadzana << " lb to: " << wartosc_wprowadzana * 45.35924 << " dag" << endl;
	    cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
	    case 6:{
	    cout << endl << wartosc_wprowadzana << " lb to: " << wartosc_wprowadzana * 453592.4 << " mg" << endl;
	    cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
        }

        }
        break;

            case 8:{
        system("cls"); // uncje;
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. kg - kilogram" << endl;
    cout << "2. lb - funt" << endl ;
    cout << "3. g - gram" << endl ;
    cout << "4. t - tona " << endl;
    cout << "5. dag - dekagram" << endl;
    cout << "6. mg - miligram" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " oz to: " << wartosc_wprowadzana * 0.03 << " kg" << endl;
             cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " oz to: " << wartosc_wprowadzana * 0.06 << " lb" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " oz to: " << wartosc_wprowadzana * 28.34952 << " g" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
	    case 4:{
            cout << endl << wartosc_wprowadzana << " oz to: " << wartosc_wprowadzana * 0.00003 << " t" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
	    case 5:{
	    cout << endl << wartosc_wprowadzana << " oz to: " << wartosc_wprowadzana * 2.834952 << " dag" << endl;
	    cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
	    case 6:{
	    cout << endl << wartosc_wprowadzana << " oz to: " << wartosc_wprowadzana * 28349.52 << " mg" << endl;
	    cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
        }

        }
        break;

            case 9:{
        system("cls"); // stopy;
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. m - metr" << endl;
    cout << "2. in - cal" << endl;
    cout << "3. km - kilometr" << endl;
    cout << "4. mi - mila" << endl;
    cout << "5. cm - centymetr" << endl;
    cout << "6. mm - milimetr" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " ft to: " << wartosc_wprowadzana * 0.30 << " m" << endl;
             cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " ft to: " << wartosc_wprowadzana * 12 << " in" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
	    case 3:{
	    cout << endl << wartosc_wprowadzana << " ft to: " << wartosc_wprowadzana * 0.000189394 << " mi" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }  
	    break;
            case 4:{
            cout << endl << wartosc_wprowadzana << " ft to: " << wartosc_wprowadzana * 0.0003 << " km" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
	    case 5:{
	    cout << endl << wartosc_wprowadzana << " ft to: " << wartosc_wprowadzana * 30.48 << " cm" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
	    case 6:{
            cout << endl << wartosc_wprowadzana << " ft to: " << wartosc_wprowadzana * 304.8 << " mm" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
        }
        }

        }
        break;


	    case 10:{
	system("cls"); // mila;
	cout << "--- Menu zamiany jednostek ---" << endl;
	cout << "Wybierz jednostke docelowa: " << endl << endl;
	cout << "1. km - kilometr" << endl;
	cout << "2. m - metr" << endl;
	cout << "3. cm - centymetr" << endl;
	cout << "4. mm - milimetr" << endl;
	cout << "5. in - cal" << endl;
	cout << "6. ft - stopa" << endl << endl;
	cout << "Wprowadz numer opcji: " << endl;
	cin >> wybor_drugiej;
	
	    switch(wybor_drugiej){
		case 1:{
		cout << endl << wartosc_wprowadzana << " mi to: " << wartosc_wprowadzana * 1.609344 <<" km" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 2:{
		cout << endl << wartosc_wprowadzana << " mi to: " << wartosc_wprowadzana * 1609.344 << " m" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 3:{
		cout << endl << wartosc_wprowadzana << " mi to: " << wartosc_wprowadzana * 160934.4 << " cm" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 4:{
		cout << endl << wartosc_wprowadzana << " mi to: " << wartosc_wprowadzana * 1609344 << " mm" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 5:{
		cout << endl << wartosc_wprowadzana << " mi to: " << wartosc_wprowadzana * 63360 << " in" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 6:{
		cout << endl << wartosc_wprowadzana << " mi to: " << wartosc_wprowadzana * 5280 << " ft" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
	}
	
	}
	break;

            case 11:{
        system("cls"); // kilometry;
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. m - metr" << endl;
    cout << "2. in - cal" << endl ;
    cout << "3. ft - stopa" << endl;
    cout << "4. mi - mila" << endl;
    cout << "5. cm - centymetr" << endl;
    cout << "6. mm - milimetr" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " km to: " << wartosc_wprowadzana * 1000 << " m" << endl;
             cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " km to: " << wartosc_wprowadzana * 39370.08 << " in" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " km to: " << wartosc_wprowadzana *  3280 << " ft" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 4:{
	    cout << endl << wartosc_wprowadzana << " km to: " << wartosc_wprowadzana * 0.621371192 << " mi" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
            case 5:{
	    cout << endl << wartosc_wprowadzana << " km to: " << wartosc_wprowadzana * 1000 << " cm" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
	    break;
	    case 6:{
	    cout << endl << wartosc_wprowadzana << " km to: " << wartosc_wprowadzana * 10000 << " mm" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
			
         
        }

        }
        break;
            case 12:{
        system("cls"); // gramy;
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. kg - kilogram" << endl;
    cout << "2. lb - funt " << endl ;
    cout << "3. oz - uncja " << endl;
    cout << "4. t - tona " << endl;
    cout << "5. dag - dekagram" << endl;
    cout << "6. mg - miligram" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " g to: " << wartosc_wprowadzana * 0.001 << " kg" << endl;
             cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " g to: " << wartosc_wprowadzana * 0.002204623 << " lb" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " g to: " << wartosc_wprowadzana * 0.03527396 << " oz" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
	    case 4:{
             cout << endl << wartosc_wprowadzana << " g to: " << wartosc_wprowadzana * 0.000001 << " t" << endl;
             cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
	    case 5:{
	    cout << endl << wartosc_wprowadzana << " g to: " << wartosc_wprowadzana * 0.1 << " dag" << endl;
	    cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
	    case 6:{
	    cout << endl << wartosc_wprowadzana << " g to: " << wartosc_wprowadzana * 1000 << " mg" << endl;
	    cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
        }

        }
        break;
	

	    	case 13:{
	system("cls"); // milimetry;
	cout <<" --- Menu zamiany jednostek --- " << endl;
	cout << " Wybierz jednostke docelowa: "<< endl << endl;
	cout << " 1. ft - stopa " << endl;
	cout << " 2. in - cal " << endl;
	cout << " 3. mi - mila " << endl;
	cout << " 4. km - kilometr " << endl;
	cout << " 5. m - metr " << endl;
	cout << " 6. cm - centrymetr " << endl << endl;
	cout << "Wprowadz numer opcji: " ;
	cin >> wybor_drugiej;

	    switch (wybor_drugiej){
		case 1:{
		cout << endl << wartosc_wprowadzana << " mm to: " << wartosc_wprowadzana * 0.003281 << " ft" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 2:{
		cout << endl << wartosc_wprowadzana << " mm to: " << wartosc_wprowadzana * 0.03937 << " in" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 3:{
		cout << endl << wartosc_wprowadzana << " mm to: " << wartosc_wprowadzana * 0.000000621371192 << " mi" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 4:{
		cout << endl << wartosc_wprowadzana << " mm to: " << wartosc_wprowadzana * 0.000001 << " km" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 5:{
		cout << endl << wartosc_wprowadzana << " mm to: " << wartosc_wprowadzana * 0.001 << " m" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 6:{
		cout << endl << wartosc_wprowadzana << " mm to: " << wartosc_wprowadzana * 0.1 << " cm" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
	    }

	    }
	    break;
	case 14:{
	system("cls"); // centymetry;
	cout <<" --- Menu zamiany jednostek --- " << endl;
	cout << " Wybierz jednostke docelowa: "<< endl << endl;
	cout << "1. ft - stopa " << endl;
	cout << "2. in - cal " << endl;
	cout << "3. mi - mila " << endl;
	cout << "4. km - kilometr " << endl;
	cout << "5. m - metr " << endl;
	cout << "6. mm - milimetr " << endl << endl;
	cout << "Wprowadz numer opcji: ";
	cin >> wybor_drugiej;
		
	    switch(wybor_drugiej){
		case 1:{
		cout << endl << wartosc_wprowadzana << " cm to: " << wartosc_wprowadzana * 0.032808399 << " ft" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 2:{
		cout << endl << wartosc_wprowadzana << " cm to: " << wartosc_wprowadzana * 0.393700787 << " in" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 3:{
		cout << endl << wartosc_wprowadzana << " cm to: " << wartosc_wprowadzana * 0.000006 << " mi" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 4:{
		cout << endl << wartosc_wprowadzana << " cm to: " << wartosc_wprowadzana * 0.00001 << " km" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 5:{
		cout << endl << wartosc_wprowadzana << " cm to: " << wartosc_wprowadzana * 0.01 << " cm" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 6:{
		cout << endl << wartosc_wprowadzana << " cm to: " << wartosc_wprowadzana * 10 << " mm" << endl;
        cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
	    }

	    }
	    break;
                


	     case 15:{
        system("cls"); // tona;
    cout << "--- Menu zamiany jednostek ---" << endl;
    cout << "Wybierz jednostke docelowa: " << endl << endl;
    cout << "1. kg - kilogram" << endl;
    cout << "2. lb - funt " << endl ;
    cout << "3. oz - uncja " << endl;
    cout << "4. g - gram " << endl;
    cout << "5. dag - dekagram" << endl;
    cout << "6. mg - miligram" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " t to: " << wartosc_wprowadzana * 1000 << " kg" << endl;
             cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " t to: " << wartosc_wprowadzana * 2204.623 << " lb" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " t to: " << wartosc_wprowadzana * 35273.96 << " oz" << endl;
            cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
	    case 4:{
             cout << endl << wartosc_wprowadzana << " t to: " << wartosc_wprowadzana * 1000000 << " g" << endl;
             cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
            }
            break;
	    case 5:{
	    cout << endl << wartosc_wprowadzana << " t to: " << wartosc_wprowadzana * 100000 << " dag" << endl;
	    cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
	    case 6:{
	    cout << endl << wartosc_wprowadzana << " t to: " << wartosc_wprowadzana * 1000000000 << " mg" << endl;
	    cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
	    }
	    break;
         
        }

        }
        break;


	    case 16:{
	system("cls"); //dekagram
	cout << "--- Menu zamiany jednostek ---" << endl;
        cout << "Wybierz jednostke docelowa: " << endl << endl;
	cout << "1. kg - kilogram" << endl;
        cout << "2. lb - funt " << endl ;
        cout << "3. oz - uncja " << endl;
        cout << "4. g - gram " << endl;
        cout << "5. t - tona" << endl;
        cout << "6. mg - miligram" << endl << endl;
        cout << "Wprowadz numer opcji: ";
        cin >> wybor_drugiej;
		    
	    switch(wybor_drugiej){
		case 1:{
		cout << endl << wartosc_wprowadzana << " dag to: " << wartosc_wprowadzana * 0.01 << " kg" << endl;
		cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 2:{
		cout << endl << wartosc_wprowadzana << " dag to: " << wartosc_wprowadzana * 0.022046 << " lb" << endl;
		cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 3:{
		cout << endl << wartosc_wprowadzana << " dag to: " << wartosc_wprowadzana * 0.35274 << " oz" << endl;
		cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 4:{
		cout << endl << wartosc_wprowadzana << " dag to: " << wartosc_wprowadzana * 10 << " g" << endl;
		cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 5:{
		cout << endl << wartosc_wprowadzana << " dag to: " << wartosc_wprowadzana * 0.00001 << " t" << endl;
		cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 6:{
		cout << endl << wartosc_wprowadzana << " dag to: " << wartosc_wprowadzana * 10000 << " mg" << endl;
		cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;

	    }

	    }
	    break;

	     case 17:{
	system("cls"); //miligram
	cout << "--- Menu zamiany jednostek ---" << endl;
        cout << "Wybierz jednostke docelowa: " << endl << endl;
	cout << "1. kg - kilogram" << endl;
        cout << "2. lb - funt " << endl ;
        cout << "3. oz - uncja " << endl;
        cout << "4. g - gram " << endl;
        cout << "5. t - tona" << endl;
        cout << "6. dag - dekagram" << endl << endl;
        cout << "Wprowadz numer opcji: ";
        cin >> wybor_drugiej;

	    switch(wybor_drugiej){
		case 1:{
		cout << endl << wartosc_wprowadzana << " mg to: " << wartosc_wprowadzana * 0.000001 << " kg" << endl;
		cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 2:{
		cout << endl << wartosc_wprowadzana << " mg to: " << wartosc_wprowadzana * 0.000002 << " lb" << endl;
		cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 3:{
		cout << endl << wartosc_wprowadzana << " mg to: " << wartosc_wprowadzana * 0.000035 << " oz" << endl;
		cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 4:{
		cout << endl << wartosc_wprowadzana << " mg to: " << wartosc_wprowadzana * 0.001 << " g" << endl;
		cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 5:{
		cout << endl << wartosc_wprowadzana << " mg to: " << wartosc_wprowadzana * 0.000000001 << " t" << endl;
		cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;
		case 6:{
		cout << endl << wartosc_wprowadzana << " mg to: " << wartosc_wprowadzana * 0.0001 << " dag" << endl;
		cout << endl << "Czy chcesz zamienic kolejna jednostke? (Y/N) : "; cin >> dalej;
		}
		break;

	     }

	     }
	     break;

}
}
while(dalej == 'Y' || dalej == 'y');
}

void obliczanie_pol(){

    int wybor_opcji;
    double wartosc_wprowadzana;
    do{
    system("cls");
    cout << "--- Menu obliczania pol figur ---" << endl;
    cout << "Wybierz figure: " << endl << endl;
    cout << "1. Kwadrat" << endl;
    cout << "2. Prostokat" << endl;
    cout << "3. Trojkat" << endl;
    cout << "4. Kolo" << endl;
    cout << "5. Trapez" << endl;
    cout << "6. Romb" << endl;
    cout << "7. Rownoleglobok" << endl;
    cout << "8. Wielokat foremny" << endl;
    cout << "9. Szescian" << endl;
    cout << "10. Prostopadloscian" << endl;
    cout << "11. Stozek" << endl;
    cout << "12. Walec" << endl;
    cout << "13. Kula" << endl;
    cout << "14. Graniastoslup" << endl;
    cout << "15. Ostroslup" << endl;
    cout << "---------------------------------" << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_opcji;
    switch(wybor_opcji){
        case 1:{
            
            cout << endl <<"Podaj dlugosc boku kwadratu (cm): ";
            cin >> wartosc_wprowadzana;
            cout << endl << "Pole kwadratu o boku " << wartosc_wprowadzana << " wynosi: " << wartosc_wprowadzana * wartosc_wprowadzana << " cm^2"<< endl;
            cout << endl << "Czy chcesz obliczyc pole innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        case 2:{
            
            double bok_a, bok_b;
            cout << endl << "Podaj dlugosc boku a (cm): ";
            cin >> bok_a;
            cout << endl <<"Podaj dlugosc boku b (cm): ";
            cin >> bok_b;
            cout << endl << "Pole prostokata o bokach " << bok_a << " i " << bok_b << " wynosi: " << bok_a * bok_b << " cm^2"<< endl;
            cout << endl << "Czy chcesz obliczyc pole innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        case 3:{
            
            double podstawa, wysokosc;
            cout << endl <<"Podaj dlugosc podstawy trojkata (cm): ";
            cin >> podstawa;
            cout << endl <<"Podaj wysokosc trojkata (cm): ";
            cin >> wysokosc;
            cout << endl << "Pole trojkata o podstawie " << podstawa << " i wysokosci " << wysokosc << " wynosi: " << (podstawa * wysokosc) / 2 <<" cm^2" << endl;
            cout << endl << "Czy chcesz obliczyc pole innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        case 4:{
            
            double promien;
            cout << endl <<"Podaj dlugosc promienia kola (cm): ";
            cin >> promien;
            cout << endl << "Pole kola o promieniu " << promien << " wynosi: " << 3.14 * promien * promien << " cm^2"<< endl;
            cout << endl << "Czy chcesz obliczyc pole innej figury? (Y/N) : "; cin >> dalej;

        }
        break;
        case 5:{
            
            double podstawa_a, podstawa_b, wysokosc;
            cout << endl <<"Podaj dlugosc podstawy a (cm): ";
            cin >> podstawa_a;
            cout << endl <<"Podaj dlugosc podstawy b (cm): ";
            cin >> podstawa_b;
            cout << endl <<"Podaj wysokosc trapezu (cm): ";
            cin >> wysokosc;
            cout << endl << "Pole trapezu o podstawach " << podstawa_a << " i " << podstawa_b << " oraz wysokosci " << wysokosc << " wynosi: " << ((podstawa_a + podstawa_b) * wysokosc) / 2 <<" cm^2"<< endl;
            cout << endl << "Czy chcesz obliczyc pole innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        case 6:{
            
            double przekatna_a, przekatna_b;
            cout << endl <<"Podaj dlugosc przekatnej a (cm): ";
            cin >> przekatna_a;
            cout << endl <<"Podaj dlugosc przekatnej b (cm): ";
            cin >> przekatna_b;
            cout << endl << "Pole rombu o przekatnych " << przekatna_a << " i " << przekatna_b << " wynosi: " << (przekatna_a * przekatna_b) / 2 <<" cm^2"<< endl;
            cout << endl << "Czy chcesz obliczyc pole innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        case 7:{

            double podstawa, wysokosc;
            cout << endl <<"Podaj dlugosc podstawy rownolegloboku (cm): ";
            cin >> podstawa;
            cout << endl <<"Podaj wysokosc rownolegloboku (cm): ";
            cin >> wysokosc;
            cout << endl << "Pole rownolegloboku o podstawie " << podstawa << " i wysokosci " << wysokosc << " wynosi: " << podstawa * wysokosc <<" cm^2"<< endl;
            cout << endl << "Czy chcesz obliczyc pole innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        case 8:{

            double obwod, apotema;
            cout << endl <<"Podaj dlugosc obwodu wielokata foremnego (cm): ";
            cin >> obwod;
            cout << endl <<"Podaj dlugosc apotemy wielokata foremnego (cm): ";
            cin >> apotema;
            cout << endl << "Pole wielokata foremnego o obwodzie " << obwod << " i apotece " << apotema << " wynosi: " << (obwod * apotema) / 2 <<" cm^2"<< endl;
            cout << endl << "Czy chcesz obliczyc pole innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        case 9:{

            double bok;
            cout << endl <<"Podaj dlugosc boku szescianu (cm): ";
            cin >> bok;
            cout << endl << "Pole szescianu o boku " << bok << " wynosi: " << 6 * bok * bok <<" cm^2"<< endl;
            cout << endl << "Czy chcesz obliczyc pole innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        case 10:{

            double bok_a, bok_b, bok_c;
            cout << endl << "Podaj dlugosc boku a (cm): ";
            cin >> bok_a;
            cout << endl <<"Podaj dlugosc boku b (cm): ";
            cin >> bok_b;
            cout << endl <<"Podaj dlugosc boku c (cm): ";
            cin >> bok_c;
            cout << endl << "Pole prostopadloscianu o bokach " << bok_a << ", " << bok_b << " i " << bok_c << " wynosi: " << 2 * (bok_a * bok_b + bok_a * bok_c + bok_b * bok_c) <<" cm^2"<< endl;
            cout << endl << "Czy chcesz obliczyc pole innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        case 11:{

            double promien, tworzaca;
            cout << endl <<"Podaj dlugosc promienia stozka (cm): ";
            cin >> promien;
            cout << endl <<"Podaj dlugosc tworzacej stozka (cm): ";
            cin >> tworzaca;
            cout << endl << "Pole stozka o promieniu " << promien << " i tworzacej " << tworzaca << " wynosi: " << 3.14 * promien * (promien + tworzaca) <<" cm^2"<< endl;
            cout << endl << "Czy chcesz obliczyc pole innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        case 13:{

            double promien;
            cout << endl <<"Podaj dlugosc promienia kuli (cm): ";
            cin >> promien;
            cout << endl << "Pole kuli o promieniu " << promien << " wynosi: " << 4 * 3.14 * promien * promien <<" cm^2"<< endl;
            cout << endl << "Czy chcesz obliczyc pole innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        case 14:{

            double podstawa, wysokosc;
            cout << endl <<"Podaj dlugosc podstawy graniastoslupa (cm): ";
            cin >> podstawa;
            cout << endl <<"Podaj wysokosc graniastoslupa (cm): ";
            cin >> wysokosc;
            cout << endl << "Pole graniastoslupa o podstawie " << podstawa << " i wysokosci " << wysokosc << " wynosi: " << podstawa * wysokosc <<" cm^2"<< endl;
            cout << endl << "Czy chcesz obliczyc pole innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        case 15:{

            double podstawa, wysokosc;
            cout << endl <<"Podaj dlugosc podstawy ostroslupa (cm): ";
            cin >> podstawa;
            cout << endl <<"Podaj wysokosc ostroslupa (cm): ";
            cin >> wysokosc;
            cout << endl << "Pole ostroslupa o podstawie " << podstawa << " i wysokosci " << wysokosc << " wynosi: " << podstawa * wysokosc <<" cm^2"<< endl;
            cout << endl << "Czy chcesz obliczyc pole innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        }
    } while(dalej == 'Y' || dalej == 'y');
    }

    void obliczanie_objetosci(){

    int wybor_opcji;
    double wartosc_wprowadzana;
    do{
    system("cls");
    cout << "--- Menu obliczania objetosci figur ---" << endl;
    cout << "Wybierz figure: " << endl << endl;
    cout << "1. Szescian" << endl;
    cout << "2. Prostopadloscian" << endl;
    cout << "3. Stozek" << endl;
    cout << "4. Walec" << endl;
    cout << "5. Kula" << endl;
    cout << "6. Graniastoslup" << endl;
    cout << "7. Ostroslup" << endl;
    cout << "---------------------------------" << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_opcji;
    switch(wybor_opcji){
        case 1:{
            
            cout << endl <<"Podaj dlugosc boku szescianu (cm): ";
            cin >> wartosc_wprowadzana;
            cout << endl << "Objetosc szescianu o boku " << wartosc_wprowadzana << " wynosi: " << wartosc_wprowadzana * wartosc_wprowadzana * wartosc_wprowadzana <<" cm^3"<< endl;
            cout << endl << "Czy chcesz obliczyc objetosc innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        case 2:{
            
            double bok_a, bok_b, bok_c;
            cout << endl << "Podaj dlugosc boku a (cm): ";
            cin >> bok_a;
            cout << endl <<"Podaj dlugosc boku b (cm): ";
            cin >> bok_b;
            cout << endl <<"Podaj dlugosc boku c (cm): ";
            cin >> bok_c;
            cout << endl << "Objetosc prostopadloscianu o bokach " << bok_a << ", " << bok_b << " i " << bok_c << " wynosi: " << bok_a * bok_b * bok_c <<" cm^3"<< endl;
            cout << endl << "Czy chcesz obliczyc objetosc innej figury? (Y/N) : "; cin >> dalej;
        }
        break;
        case 3:{
            
            double promien, wysokosc;
            cout << endl <<"Podaj dlugosc promienia stozka (cm): ";
            cin >> promien;
            cout << endl <<"Podaj wysokosc stozka (cm): ";
            cin >> wysokosc;
            cout << endl << "Objetosc stozka o promieniu " << promien << " i wysokosci " << wysokosc << " wynosi: " << (3.14 * promien * promien * wysokosc) / 3 <<" cm^3"<< endl;
            cout << endl << "Czy chcesz obliczyc objetosc innej figury? (Y/N) : "; cin >> dalej;

        }
        break;
        case 4:{
            
            double promien, wysokosc;
            cout << endl <<"Podaj dlugosc promienia walca (cm): ";
            cin >> promien;
            cout << endl <<"Podaj wysokosc walca (cm): ";
            cin >> wysokosc;
            cout << endl << "Objetosc walca o promieniu " << promien << " i wysokosci " << wysokosc << " wynosi: " << 3.14 * promien * promien * wysokosc <<" cm^3"<< endl;
            cout << endl << "Czy chcesz obliczyc objetosc innej figury? (Y/N) : "; cin >> dalej;      
    }
    break;
    case 5:{

        double promien;
        cout << endl <<"Podaj dlugosc promienia kuli (cm): ";
        cin >> promien;
        cout << endl << "Objetosc kuli o promieniu " << promien << " wynosi: " << (4 * 3.14 * promien * promien * promien) / 3 <<" cm^3"<< endl;
        cout << endl << "Czy chcesz obliczyc objetosc innej figury? (Y/N) : "; cin >> dalej;
    }
    break;
    case 6:{

        double podstawa, wysokosc;
        cout << endl <<"Podaj dlugosc podstawy graniastoslupa (cm): ";
        cin >> podstawa;
        cout << endl <<"Podaj wysokosc graniastoslupa (cm): ";
        cin >> wysokosc;
        cout << endl << "Objetosc graniastoslupa o podstawie " << podstawa << " i wysokosci " << wysokosc << " wynosi: " << podstawa * wysokosc <<" cm^3"<< endl;
        cout << endl << "Czy chcesz obliczyc objetosc innej figury? (Y/N) : "; cin >> dalej;
    }
    break;
    case 7:{

        double podstawa, wysokosc;
        cout << endl <<"Podaj dlugosc podstawy ostroslupa (cm): ";
        cin >> podstawa;
        cout << endl <<"Podaj wysokosc ostroslupa (cm): ";
        cin >> wysokosc;
        cout << endl << "Objetosc ostroslupa o podstawie " << podstawa << " i wysokosci " << wysokosc << " wynosi: " << (podstawa * podstawa * wysokosc) / 3 <<" cm^3"<< endl;
        cout << endl << "Czy chcesz obliczyc objetosc innej figury? (Y/N) : "; cin >> dalej;
    }
    break;
    }
    } while(dalej == 'Y' || dalej == 'y');
    }
