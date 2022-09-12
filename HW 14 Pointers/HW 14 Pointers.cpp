// HW 14 Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

const int SIZE = 10;

void show_arr(int* arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // task 1

    int* first_arr = new int[10]{1,2,3,4,5,6,7,8,9,10};
    int* second_arr = new int[10];

    for (int i = 0; i < SIZE; i++)
    {
        *(second_arr + i) = *(first_arr + i);
        
    }

    cout << "First array is : ";
    show_arr(first_arr, SIZE);
    cout << "Second array is : ";
    show_arr(second_arr, SIZE);

    delete[] first_arr;
    delete[] second_arr;

    //task 2


    
}

