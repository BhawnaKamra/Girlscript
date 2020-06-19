#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    //Excercise-1
    /*For Finding the maximum
    int a,b,c;

    cout << "Enter three numbers a,b and c: ";
    cin >> a >> b >> c;

    // Finding the maximum
    if(a > b && a > c)
        cout<< "maximum is:" << a;
    else if (b > a && b > c)
        cout<< "maximum is :" << b;
    else
        cout<< "maximum is:" << c;


        */

        //Excercise-2
        /*
        int A;
        cout<<"Enter a number:" << endl;
        cin>> A;
        if(A%7==0) //To check whether divisible by 7 or not
            cout<<"Number is Divisible by 7";
        else
            cout<<"Number is Not Divisible by 7";
            */

            //Excercise-3
            /*
            char s;
            cout<< "enter a character:"<< endl;
            cin>> s;
            //condition to check for all the vowels
            if (((s =='a') ||(s == 'e') ||(s=='i') ||(s== 'o') || (s=='u' ))||((s =='A') ||(s == 'E') ||(s=='I') ||(s== 'O') || (s=='U' )))
                cout<< "The entered character is vowel";
            else
                cout<< "The entered character is not a vowel";

                */

                //Excercise-4

   /* float a,b,c,s;
    cout<< "Enter a, b and c" << endl;
    cin>> a>>b>>c;
    s=(b*b-4*a*c);
    if(s>0)
        cout<< "Roots are real and different";
    else if(s==0)
        cout<< "roots are real and equal";
    else
        cout<< "roots are complex";
    return 0;
*/










                //Excercise-5

    float a, b, c, x1, x2, s, rp, ip;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    s = b*b - 4*a*c;

    if (s > 0) {
        x1 = (-b + sqrt(s)) / (2*a);
        x2 = (-b - sqrt(s)) / (2*a);
        cout << "Roots are real & different" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (s == 0) {
        cout << "Roots are real & same." << endl;
        x1 = (-b + sqrt(s)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        rp = -b/(2*a);
        ip =sqrt(-s)/(2*a);
        cout << "Roots are complex & different."  << endl;
        cout << "x1 = " << rp << "+" << ip << "i" << endl;
        cout << "x2 = " << rp << "-" << ip << "i" << endl;
    }

    return 0;



}
#GirlscriptCpp
