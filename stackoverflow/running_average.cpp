#include <bits/stdc++.h>
using namespace std;

class Running_Average
{
public:
    double sum = 0;
    double average = 0;
    int i;
    int buffersize;
    double buffer[buffersize];

    double Average(void); // Member functions declaration
    void AddSample(double);
    Running_Average(int);
};


Running_Average::Running_Average(int size) {
    buffersize = size;
    buffer[buffersize] = { 0 };
}

void Running_Average::AddSample(double val)  //Add new values to buffer
{
    for (i = 9; i>0; i--)
    {
        buffer[i] = buffer[i-1];
    }
    buffer[0] = val;
}

double Running_Average::Average(void) //Calculate Average of current values in buffer
{
    for (i = 0; i<buffersize; i++)
    {
        cout << buffer[i] << endl;
        sum += buffer[i];
    }
    average = sum / buffersize;
    sum = 0; 
    return average;
}

int main()
{
    double value;
    int i;
    int f = 0;
    Running_Average test;

    for (i = (40); i < (50); i++)
    {
        test.AddSample(i);
    }

    while (1) 
    {
        i = rand() % 100;
        test.AddSample(i);
        value = test.Average();
        cout << endl;
        cout << value << endl;
        cout << endl; 
        Sleep(1000);
    }

}