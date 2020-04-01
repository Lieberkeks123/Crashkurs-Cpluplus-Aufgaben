#include <iostream>

using namespace std;

void decompose(unsigned int n){
	if (n <= 1)
        cout << n << " = " << n << endl;
    else{
        cout << n << " = ";
        unsigned int factor = 2;
        bool first = true;//Wahrheitswert
        while (n > 1)
        {
            if (n % factor == 0)
            {
                if (first)
                    first = false;
                else cout << " * ";
                cout << factor;
                n /= factor;
            }
            else factor++;
        }
        cout << endl;
    }
}

void decompose_powers(unsigned int n)
{
	if (n <= 1)
        cout << n << " = " << n << endl;
    else{
	cout << n << " = ";
	unsigned int factor = 2;
	bool first = true;
	while (n > 1)
	{
		if (n % factor == 0)
		{
			unsigned int exponent;
			for (exponent=0; n % factor == 0; exponent++)
                n /= factor;
			if (first)
                first = false;
			else cout << " * ";
			cout << factor;
			if (exponent > 1)
                cout << "^" << exponent;
		}
		else factor++;
	}
	cout << endl;
    }
}

int main()
{
	decompose(0);
	decompose(1);
	decompose(5);
	decompose(42);
	decompose(1001);
	decompose(32);
	decompose_powers(32);
	decompose_powers(60);
	decompose_powers(1500);
}
