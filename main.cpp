#include <iostream>
#include <string>

using namespace std;

int wybor;

void zamiana_jednostek();
void menu_glowne();

int main(){



    menu_glowne();
    switch (wybor){

        case 1: zamiana_jednostek();
        break;
    }

}

void menu_glowne(){
    system("cls");
    cout << "--- Menu narzedzia inzynieryjnego (idk) ---" << endl << endl;
    cout << "1. Zamiana jednostek" << endl;
    cout << "2. Opcja2" << endl << endl;
    cout << "-------------------------------------------" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor;
}

void zamiana_jednostek(){

    int wybor_pierwszej;
    int wybor_drugiej;
    float wartosc_wprowadzana;
    //float wynik;

    system("cls");

    cout << "--- Menu zamiany jednostek ---" << endl;
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
    cout << "15. t - tona " <<  endl << endl  ;
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
    cout << "4. t - tona" <<  endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " kg to: " << wartosc_wprowadzana * 35.27 << " oz" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " kg to: " << wartosc_wprowadzana * 2.20 << " lb" << endl;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " kg to: " << wartosc_wprowadzana * 1000 << " g" << endl;
            }
            break;
	    case 4:{
            cout << endl << wartosc_wprowadzana << " kg to: " << wartosc_wprowadzana * 0.001 << " t" << endl;
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
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " m to: " << wartosc_wprowadzana * 3.28 << " ft" << endl;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " m to: " << wartosc_wprowadzana * 0.000621371192 << " mi" << endl;
            }
            break;
            case 4:{
            cout << endl << wartosc_wprowadzana << " m to: " << wartosc_wprowadzana * 0.001 << " km" << endl;
            }
            break;
	    case 5:{
	    cout << endl << wartosc_wprowadzana << " m to: " << wartosc_wprowadzana * 100 << " cm" << endl;
	    }
	    break;
	    case 6:{
	    cout << endl << wartosc_wprowadzana << " m to: " << wartosc_wprowadzana * 1000 << " mm" << endl;
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
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " K to: " << wartosc_wprowadzana - 273.15 << " C" << endl;
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
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " F to: " << (wartosc_wprowadzana - 32) / 1.8 << " C" << endl;
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
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " C to: " << (wartosc_wprowadzana * 1.8) + 32 << " F" << endl;
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
    cout << " 5. cm - centymetr" << endl;
    cout << "6. mm - milimetr" << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " in to: " << wartosc_wprowadzana * 0.03 << " m" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " in to: " << wartosc_wprowadzana * 0.08 << " ft" << endl;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " in to: " << wartosc_wprowadzana * 0.0000157828 << " mi" << endl;
            }
            break;
            case 4:{
            cout << endl << wartosc_wprowadzana << " in to: " << wartosc_wprowadzana * 0.00003 << " km" << endl;
            break;
	    case 5:{
	    cout << endl << wartosc_wprowadzana << " in to: " << wartosc_wprowadzana * 2.54 << " cm" << endl;
	    }
	    break;
	    case 6:{
	    cout << endl << wartosc_wprowadzana << " in to: " << wartosc_wprowadzana * 25.4 << " mm" << endl;
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
    cout << "4. t - tona " << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " lb to: " << wartosc_wprowadzana * 0.45 << " kg" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " lb to: " << wartosc_wprowadzana * 16 << " oz" << endl;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " lb to: " << wartosc_wprowadzana *453.5923 << " g" << endl;
            }
            break;
	    case 4:{
            cout << endl << wartosc_wprowadzana << " lb to: " << wartosc_wprowadzana * 0.00045 << " t" << endl;
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
    cout << "4. t - tona " << endl << endl;		    
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " oz to: " << wartosc_wprowadzana * 0.03 << " kg" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " oz to: " << wartosc_wprowadzana * 0.06 << " lb" << endl;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " oz to: " << wartosc_wprowadzana * 28.34952 << " g" << endl;
            }
            break;
	    case 4:{
            cout << endl << wartosc_wprowadzana << " oz to: " << wartosc_wprowadzana * 0.00003 << " t" << endl;
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
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " ft to: " << wartosc_wprowadzana * 12 << " in" << endl;
            }
            break;
	    case 3:{
	    cout << endl << wartosc_wprowadzana << " ft to: " << wartosc_wprowadzana * 0.000189394 << " mi" << endl;
	    }  
	    break;
            case 4:{
            cout << endl << wartosc_wprowadzana << " ft to: " << wartosc_wprowadzana * 0.0003 << " km" << endl;
            }
            break;
	    case 5:{
	    cout << endl << wartosc_wprowadzana << " ft to: " << wartosc_wprowadzana * 30.48 << " cm" << endl;
	    }
	    break;
	    case 6:{
            cout << endl << wartosc_wprowadzana << " ft to: " << wartosc_wprowadzana * 304.8 << " mm" << endl;
	    }
	    break;
        }
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
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " km to: " << wartosc_wprowadzana * 39370.08 << " in" << endl;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " km to: " << wartosc_wprowadzana *  3280 << " ft" << endl;
            }
            break;
            case 4:{
	    cout << endl << wartosc_wprowadzana << " km to: " << wartosc_wprowadzana * 0.621371192 << " mi" << endl;
	    }
	    break;
            case 5:{
	    cout << endl << wartosc_wprowadzana << " km to: " << wartosc_wprowadzana * 1000 << " cm" << endl;
            }
	    break;
	    case 6:{
	    cout << endl << wartosc_wprowadzana << " km to: " << wartosc_wprowadzana * 10000 << " mm" << endl;
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
    cout << "4. t - tona " << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " g to: " << wartosc_wprowadzana * 0.001 << " kg" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " g to: " << wartosc_wprowadzana * 0.002204623 << " lb" << endl;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " g to: " << wartosc_wprowadzana * 0.03527396 << " oz" << endl;
            }
            break;
	    case 4:{
             cout << endl << wartosc_wprowadzana << " g to: " << wartosc_wprowadzana * 0.000001 << " t" << endl;
            }
            break;
         
        }

        }
        break;
	case 13:{
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
		}
		break;
		case 2:{
		cout << endl << wartosc_wprowadzana << " mi to: " << wartosc_wprowadzana * 1609.344 << " m" << endl;
		}
		break;
		case 3:{
		cout << endl << wartosc_wprowadzana << " mi to: " << wartosc_wprowadzana * 160934.4 << " cm" << endl;
		}
		break;
		case 4:{
		cout << endl << wartosc_wprowadzana << " mi to: " << wartosc_wprowadzana * 1609344 << " mm" << endl;
		}
		break;
		case 5:{
		cout << endl << wartosc_wprowadzana << " mi to: " << wartosc_wprowadzana * 63360 << " in" << endl;
		}
		break;
		case 6:{
		cout << endl << wartosc_wprowadzana << " mi to: " << wartosc_wprowadzana * 5280 << " ft" << endl;
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
	cout << "Wprowadz numer opcji: " << endl;
	cin >> wybor_drugiej;
		
	    switch(wybor_drugiej){
		case 1:{
		cout << endl << wartosc_wprowadzana << " cm to: " << wartosc_wprowadzana * 0.032808399 << " ft" << endl;
		}
		break;
		case 2:{
		cout << endl << wartosc_wprowadzana << " cm to: " << wartosc_wprowadzana * 0.393700787 << " in" << endl;
		}
		break;
		case 3:{
		cout << endl << wartosc_wprowadzana << " cm to: " << wartosc_wprowadzana * 0.000006 << " mi" << endl;
		}
		break;
		case 4:{
		cout << endl << wartosc_wprowadzana << " cm to: " << wartosc_wprowadzana * 0.00001 << " km" << endl;
		}
		break;
		case 5:{
		cout << endl << wartosc_wprowadzana << " cm to: " << wartosc_wprowadzana * 0.01 << " cm" << endl;
		}
		break;
		case 6:{
		cout << endl << wartosc_wprowadzana << " cm to: " << wartosc_wprowadzana * 10 << " mm" << endl;
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
    cout << "4. t - tona " << endl << endl;
    cout << "Wprowadz numer opcji: ";
    cin >> wybor_drugiej;

        switch (wybor_drugiej){
            case 1:{
             cout << endl << wartosc_wprowadzana << " t to: " << wartosc_wprowadzana * 1000 << " kg" << endl;
            }
            break;
            case 2:{
            cout << endl << wartosc_wprowadzana << " t to: " << wartosc_wprowadzana * 2204.623 << " lb" << endl;
            }
            break;
            case 3:{
            cout << endl << wartosc_wprowadzana << " t to: " << wartosc_wprowadzana * 35273.96 << " oz" << endl;
            }
            break;
	    case 4:{
             cout << endl << wartosc_wprowadzana << " t to: " << wartosc_wprowadzana * 1000000 << " t" << endl;
            }
            break;
         
        }

        }
        break;

	    case 16:{
	system("cls"); // milimetry;
	cout <<" --- Menu zamiany jednostek --- " << endl;
	cout << " Wybierz jednostke docelowa: "<< endl << endl;
	cout << " 1. ft - stopa " << endl;
	cout << " 2. in - cal " << endl;
	cout << " 3. mi - mila " << endl;
	cout << " 4. km - kilometr " << endl;
	cout << " 5. m - metr " << endl;
	cout << " 6. cm - centrymetr " << endl;
	cout << "Wprowadz numer opcji: " ;
	cin >> wybor_drugiej;

	    switch (wybor_drugiej){
		case 1:{
		cout << endl << wartosc_wprowadzana << " mm to: " << wartosc_wprowadzana * 0.003281 << " ft" << endl;
		}
		break;
		case 2:{
		cout << endl << wartosc_wprowadzana << " mm to: " << wartosc_wprowadzana * 0.03937 << " in" << endl;
		}
		break;
		case 3:{
		cout << endl << wartosc_wprowadzana << " mm to: " << wartosc_wprowadzana * 0.000000621371192 << " mi" << endl;
		}
		break;
		case 4:{
		cout << endl << wartosc_wprowadzana << " mm to: " << wartosc_wprowadzana * 0.000001 << " km" << endl;
		}
		break;
		case 5:{
		cout << endl << wartosc_wprowadzana << " mm to: " << wartosc_wprowadzana * 0.001 << " m" << endl;
		}
		break;
		case 6:{
		cout << endl << wartosc_wprowadzana << " mm to: " << wartosc_wprowadzana * 0.1 << " cm" << endl;
		}
		break;
	    }

	    }
	    break;
			
		
	

	     
	

}
}
