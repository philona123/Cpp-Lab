#include <iostream>
    using namespace std;
    //main Program
    int findGCD(int n1, int n2)
    {
        int gcd;
        
        return gcd;
    }
    int main()
    {
        int num1,den1;
        cout << “Enter numerator and denominator of first number: “;
        //user input
        cin >> num1 >> den1;
        int num2,den2;
        cout << “Enter numerator and denominator of second number: “;
        //user input
        cin >> num2 >> den2;
        //finding lcm of the denominators
        int lcm = (den1*den2)/findGCD(den1,den2);
        //finding the sum of the numbers
        int sum=(num1*lcm/den1) + (num2*lcm/den2);
        //normalizing numerator and denominator of result
        int num3=sum/findGCD(sum,lcm);
        lcm=lcm/findGCD(sum,lcm);
        //printing output
        cout<<num1<<“/”<<den1<<” + “<<num2<<“/”<<den2<<” = “<<num3<<“/”<<lcm;
        return 0;
    }
