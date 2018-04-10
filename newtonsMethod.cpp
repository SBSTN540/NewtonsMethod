#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    // declaring variables
    double coef0, coef1, coef2, coef3, coef4;
    double derivative, eq, x;
    char repeat = 'y';

    cout << "I take in polynomial functions up to 4 degrees and return an \n";
    cout << "accurate guess to its x-intercepts using a primary guess from you.\n";




    //asking for user input
    while(repeat == 'y' || repeat == 'Y')
        {
            char yes = 'n';
            while(yes == 'N' || yes == 'n')
            {

                cout <<  "what is the coefficient of x^4\n";
                cin >> coef4;
                cout << "what is the coefficient of x^3\n";
                cin >> coef3;
                cout << "what is the coefficient of x^2\n";
                cin >> coef2;
                cout << "what is the coefficient of x^1\n";
                cin >> coef1;
                cout << "what is the coefficient of X^0\n";
                cin >> coef0;
                //printing out the Function
                cout << "calculate the principle root of this formuoli\n";
                if(coef4 != 0 )
                cout << coef4 << "x^4 ";
                if(coef3 > 0 && coef4 != 0 )
                cout << "+ ";
                if(coef3 != 0 )
                cout << coef3 << "x^3 ";
                if(coef2 > 0 && coef3 != 0)
                cout << "+ ";
                if(coef2 != 0 )
                cout << coef2 << "x^2 ";
                if(coef1 > 0 && coef2 != 0)
                cout << "+ ";
                if(coef1 != 0)
                cout << coef1 << "x^1 ";
                if(coef0 > 0 )
                cout << "+ ";
                if(coef0 != 0)
                cout << coef0;
                cout << endl;
                cout << "Is this correct? Enter Y for yes and N for no.\n";
                cin >> yes;
            }
        cout << "Enter a guess for where the function crosses the x-intercept.\n";
        cin >> x;
        double previousX, roundedx;
        int x1,counter = 0;
        bool zero = false;

        //equation
        while (!zero)
        {


            if (counter > 0)
            {
                previousX = roundedx;
                x = roundedx;
            }


            eq = coef4 * (pow(x,4)) + coef3 * (pow(x,3)) + coef2 * (pow(x,2)) + coef1 * (pow(x,1)) + coef0;

            derivative = ((coef4 * 4) * (pow(x, 3)) + (coef3 * 3) * (pow(x,2)) + (coef2 * 2)* x + coef1);

            x = x - (eq / derivative);


            x1 = x * (pow(10, 6)) + 5;

            roundedx = x1 / (pow(10, 6));

            if (roundedx == previousX)
            zero = true;

            counter++;

        }
    cout << "A more accurate guess (that is accurate to the 4th decimal) is " << roundedx << endl;
    repeat = 'n';
    cout << "Want to repeat the program enter Y\n";
    cin >> repeat;
    }


    return 0;
}
