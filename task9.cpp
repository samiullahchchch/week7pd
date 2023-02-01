#include <iostream>
using namespace std;

int main()
{
            
    float number, count1 = 0, count2 = 0, count3 = 0, countT = 0;


    float minibus = 0, truck = 0, train = 0, average = 0;
    cout << "Enter the number of weight" << endl;
    cin >> number;

    for (int x = 1; x <= number; x++)
    {
        int weight;
        cout << "Enter the weight " << endl;
        cin >> weight;

        if (weight <= 3)
        {
            count1 = count1 + weight;
        }

        if (weight > 3 && weight <= 11)
        {
            count2 = count2 + weight;
        }

        if (weight > 11)
        {
            count3 = count3 + weight;
        }

        countT = count1 + count2 + count3;
        minibus = (count1 / countT) * 100.00;
        truck = (count2 / countT) * 100.00;
        train = (count3 / countT) * 100.00;
        average = (count1 * 200 + count2 * 175 + count3 * 120) / countT;
    }

    cout << average << "%" << endl;
    cout << minibus << "%" << endl;
    cout << truck << "%" << endl;
    cout << train << "%" << endl;

    return 0;
}