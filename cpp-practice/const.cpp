#include <iostream>

using namespace std;

class Account
{
public:
	Account() : money(0) {}
	Account(int money) : money(money) {}

	void Deposit(int d)
	{
		money += d;
		cout << d << "원을 예금했습니다." << endl;
	}

	void Draw(int d)
	{
		if (money >= d)
		{
			money -= d;
			cout << d << "원을 인출했습니다." << endl;
		}
	}

	int ViewMoney()
	{
		return money;
	}

private:
	int money;
};

int main()
{
	Account myAccount(100);
	myAccount.Deposit(100);
	myAccount.Draw(20);

	cout << myAccount.ViewMoney() << endl;
}