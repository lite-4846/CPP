// Dynamic Initialization of Objects Using Constructors!
// When using constructor, writing default constructor is mandatory. 


#include <iostream>
using namespace std;

class BankDeposit
{
private:
    int principle;
    int years;
    float interestRate;
    float returns;

public:
    BankDeposit(){};    // ---------- >> Default Constructor.
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int R);
    void showReturns(void);
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    interestRate = r;
    returns;
    for (int i = 0; i < y; i++)
    {
        returns += interestRate;
    }
}

BankDeposit::BankDeposit(int p, int y, int R)
{
    principle = p;
    years = y;
    interestRate = float(R) / 100;
    returns = principle;
    for (int i = 0; i < y; i++)
    {
        returns += interestRate * 100;
    }
}

void BankDeposit ::showReturns(void)
{
    cout << "Your Principle value is " << principle
         << " and your Returns after " << years
         << " years is " << returns << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y, R;
    float r;

    cout << "Enter the value for principle, year and interestRate" << endl;
    cin >> p >> y >> R;

    bd1 = BankDeposit(p, y, R);
    bd1.showReturns();

    cout << "Enter the value for principle, year and interestRate" << endl;
    cin >> p >> y >> r;

    bd2 = BankDeposit(p, y, r);
    bd2.showReturns();
    return 0;
}