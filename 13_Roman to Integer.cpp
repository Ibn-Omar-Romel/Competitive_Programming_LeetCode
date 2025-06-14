#include<iostream>
#include<string>

using namespace std;

int Decimal_Value( char ch ) {

    switch (ch)
    {
        case ('I'):
            return 1;
            break;
        
        case ('V'):
            return 5;
            break;
        
        case ('X'):
            return 10;
            break;
        
        case ('L'):
            return 50;
            break;
        
        case ('C'):
            return 100;
            break;
        
        case ('D'):
            return 500;
            break;
        
        case ('M'):
            return 1000;
            break;

        default:
            break;
    }

    return -1;
}

int main() {

    string s;
    cin >> s;
    
    int sum = 0, sub = 0;

    sum = sum + Decimal_Value(s[0]);

    for ( int i = 1 ; i < s.size() ; i++ ){


        if( Decimal_Value( s[i-1] ) >= Decimal_Value( s[i] ) ){

            sum = sum + Decimal_Value(s[i]);
            
        }

        else if( Decimal_Value( s[i-1] ) < Decimal_Value( s[i] ) ) {

            for ( int j = i-1 ; j >= 0 ; j-- ){

                if( Decimal_Value( s[i] ) > Decimal_Value( s[j] ) ){

                    sub = sub + Decimal_Value(s[j]);
                    sum = sum - Decimal_Value(s[j]);
                }
            }

            sum = sum + Decimal_Value(s[i]) - sub;
            sub = 0;
        }
    }
    cout << sum << '\n';


    return 0;
}