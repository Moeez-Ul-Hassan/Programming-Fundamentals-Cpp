#include<iostream>
using namespace std;
int main()
{
	int x, totalcost, discountcost;
	cout << "enter the no.of units bought";
	cin >> x;
	totalcost = x * 50;
	if (totalcost > 600) {
		discountcost = totalcost-totalcost*0.03;
		cout << "the total amount was" << totalcost << endl;
		cout << "the cost after discount is" << discountcost;


	}
	else {
		cout << "total cost is" << totalcost;
	}












}