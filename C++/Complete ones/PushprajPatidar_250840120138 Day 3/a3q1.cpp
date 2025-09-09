/* store today's date as single integer by using bitwise operators.
and then convert this integer back to date
write a function int compressdate(int dd,int mm,int yyyy)

decompress(int datecode) and display date dd/mm/yyyy
*/

#include <bits/stdc++.h>
using namespace std;

int compress(int dd, int mm, int yyyy)
{

	int date = dd << 4;
	date |= mm;
	date <<= 11;
	date |= yyyy;
	// bitset<32> binaryRepesentation(date);
	// cout<<binaryRepresentation<<endl;
	return date;
}

void decompress(int date)
{
	int year = date & 2047;
	date >>= 11;
	int month = date & 15;
	date >>= 4;
	// int day = date
	cout << date << "/" << month << "/" << year << endl;
}

int main()
{
	int dd, mm, yyyy;
	cout << "Enter today's day: ";
	cin >> dd;
	cout << "Enter month: ";
	cin >> mm;
	cout << "Enter year: ";
	cin >> yyyy;

	int compDate = compress(dd, mm, yyyy);
	decompress(compDate);
	return 0;
}
