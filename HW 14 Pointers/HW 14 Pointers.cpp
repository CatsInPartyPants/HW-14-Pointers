// HW 14 Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

const int SIZE = 10;

void show_arr(int* arr, int len);

//task 2
void reverse_array(int* arr, int len);

//task 3

void copy_and_reverse(int* arr1, int* arr2, int len);

//task 4

void max_of_two(int*, int*);

//task 5

void negative_or_positive(int*);

//task 6

void chng(int*, int*);

//task 7

void primitive_calc();

//task 8 

void summ_of_arr(int*, int);


int main()
{
    // task 1

    int* first_arr = new int[SIZE]{1,2,3,4,5,6,7,8,9,10};
    int* second_arr = new int[SIZE];

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
    int second_task_array [SIZE]{ 1,2,3,4,5,6,7,8,9,10 };
    cout << "\n Array before reverse: ";
    show_arr(second_task_array, SIZE);
    cout << "\n Array after reverse: ";
    reverse_array(second_task_array, SIZE);
    show_arr(second_task_array, SIZE);

    //task 3
    cout << "\n Task3\n";
    int third_task_array_1[SIZE]{ 1,2,3,4,5,6,7,8,9,10 };
    int third_task_array_2[SIZE]{0};
    copy_and_reverse(third_task_array_1, third_task_array_2, SIZE);
    show_arr(third_task_array_2, SIZE);

    //task 4

    int* a = new int;
    int* b = new int;
    *a = 18;
    *b = 22;
    max_of_two(a, b);
    delete a;
    delete b;

    //task 5

    int* pnumber = new int;
    *pnumber = 0;
    negative_or_positive(pnumber);
    delete pnumber;

    //task 6

    int* first_number = new int;
    int* second_number = new int;
    *first_number = 123;
    *second_number = 777;
    cout << "Before change first is " << *first_number << " and second is " << *second_number << endl;
    chng(first_number, second_number);
    cout << "After change first is " << *first_number << " and second is " << *second_number << endl;
    delete first_number;
    delete second_number;

    //task 7 
    primitive_calc();

    //task 8

    int arr_task_8[SIZE]{ 1,2,3,10,99,11,91,13,12,13 };
    summ_of_arr(arr_task_8, SIZE);
    
}

void show_arr(int* arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//task 2

void reverse_array(int* arr, int len)
{
    int* tmp = new int[len];
    for (int i = 0, j = len-1; i < len; i++, j--)
    {
        tmp[j] = arr[i];
    }

    for (int i = 0; i < len; i++)
    {
        *(arr + i) = *(tmp + i);
    }
    delete[] tmp;
}

//task 3

void copy_and_reverse(int* arr1, int* arr2, int len)
{
    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        *(arr2 + j) = *(arr1 + i);
    }
}

//task 4

void max_of_two(int* a, int* b)
{
    *a > * b ? cout << *a << " bigger then " << *b << endl : cout << *b << " bigger then " << *a << endl;
}

//task 5

void negative_or_positive(int* a)
{
    if (*a == 0)
    {
        cout << "It's zero!\n";
    }
    else if(*a > 0)
    {
        cout << "It's positive number!\n";
    }
    else
    {
        cout << "It's negative number!\n";
    }
}

//task 6

void chng(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

//task 7

void primitive_calc()
{
    double* first = new double;
    double* second = new double;
    char* operation = new char;
    cout << "Enter first number ->";
    cin >> *first;
    cout << "Enter second number ->";
    cin >> *second;
    cout << "Enter operation (+,-,/,*) ->";
    cin >> *operation;
    if (*operation == '+')
        cout << *first << " + " << *second << " = " << *first + *second << endl;
    else if (*operation == '-')
        cout << *first << " - " << *second << " = " << *first - *second << endl;
    else if (*operation == '/')
        cout << *first << " / " << *second << " = " << *first / *second << endl;
    else if (*operation == '*')
        cout << *first << " * " << *second << " = " << *first * *second << endl;
    else
        cout << "Wrong operation.\n";

    delete first;
    delete second;
    delete operation;
}

//task 8

void summ_of_arr(int* arr, int len)
{
    int summ = 0;
    for (int i = 0; i < len; i++) 
    {
        summ += *(arr + i);
    }
    cout << "Summ of the array is " << summ << endl;

}