#include <iostream>
using namespace std;

class Fact 
{
private:
    int num;

public:
    Fact(int n) 
    {
        num = n;
    }

    int calcFactoriel() 
    {
        int factorial = 1;
        for (int i = 1; i <= num; ++i) 
        {
            factorial *= i;
        }
        return factorial;
    }
};

int main() {
    int num;
    cin >> num;

    Fact fact(num);
    int result = fact.calcFactoriel();
    cout << result;
    return 0;
}
