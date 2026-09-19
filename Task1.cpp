// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // 1
    int year = 2025;
    int days = 365 + (year % 4 == 0);

    cout << days << '\n';
    
    //2
    int grn = 11;
    int kop = 150;

    grn = grn + kop / 100;
    kop = kop % 100;

    cout << grn << " " << kop << '\n';
    //3

	float length = 5.0;
	float width = 3.0;
	float height = 2.0;

    float primer = length * width * height;

    cout << length << '\n';
    cout << width << '\n';
    cout << height << '\n';
    cout << primer << '\n';

    // 4 

    float first = 120;
    float second = 3.5;

    float result = first * second;

	cout << first << '\n';
	cout << second << '\n';
	cout << result << '\n';

    //5 

	const float pi = 3.14;
    float r = 5.0;

    float v = 4 * r * r * r * pi / 3;

	cout << v << '\n';
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
