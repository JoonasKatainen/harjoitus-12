#include <iostream>
using namespace std;
int main()
{
	int luku;
	int lkm;
	int rivinro;
	rivinro = 1;
	cout << "Anna luku 1-9 välillä"<<endl;
	cin >> luku;
	do
	{
		lkm = 1;
		do
		{
			cout << rivinro;
			lkm++;
		}while (lkm <= rivinro);
		cout << endl;
		rivinro++;
	}while (rivinro <= luku);

return 0;
}