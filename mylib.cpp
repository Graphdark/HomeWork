#include <iostream>

namespace mylib
{
    float* MyArray(int n)
    {
        float* arr;
        arr = new (std::nothrow) float[n];
        if (arr != nullptr)
        {
            for (int i = 0; i < n; ++i)
            {
                arr[i] = rand() % 101 - 50;
            }
        }
        return arr;
        delete[] arr;
        arr = nullptr;
    }

    void printArray(const float array[], int size)
    {
        for (int i = 0; i < size; i++)
            std::cout << array[i] << " " << std::endl;
    }

    void posNeg(float array[], int size)
    {
        int pos = -1;
        int neg = 1;
        for (int i = 0; i < size; i++)
            if (array[i] > 0)
            {
                pos = pos + 1;
            }
            else
            {
                neg = neg + 1;
            }
        std::cout << "Pos: " << pos << " Neg: " << neg << std::endl;
    }
}