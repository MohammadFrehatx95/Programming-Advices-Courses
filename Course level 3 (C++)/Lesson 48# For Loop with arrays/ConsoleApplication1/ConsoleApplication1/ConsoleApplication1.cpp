#include <iostream>

using namespace std;

void readArrayData(int arr1[100], int& length) {

    cout << "How Many Numbers do yo Want to enter? 1 to 100?" << endl;
    cin >> length;

    for (int i = 0; i <= length - 1; i++) {
        cout << "Please Enter Number " << i + 1 << endl;
        cin >> arr1[i];
    }
}

void printArrayData(int arr1[100], int length) {

        for (int i = 0; i <= length - 1; i++) {
            cout << "Number [" << i + 1 << "] : " << arr1[i] << endl;
        }
    }
   
int CalculateArraySum(int arr1[100], int length) {
    
    int sum = 0;
    for (int i = 0; i <= length - 1; i++) // 5 4 3 2 1
    {
        sum += arr1[i];
    }
    return sum;
}

float CalculateArrayAvg(int arr1[100], int length) {

    return (float)CalculateArraySum(arr1,length) / length;
}

int main()
{
    int arr1[100], length = 0;
    readArrayData(arr1, length);
    printArrayData(arr1, length);

    cout << "*****************************" << endl;
    cout << "Sum = " << CalculateArraySum(arr1, length) << endl;
    cout << "Avg = " << CalculateArrayAvg(arr1, length) << endl;
}

