#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> myVector;
    vector <int> :: iterator i;
    vector <int> :: reverse_iterator ir;

    for (int i = 1; i <= 5; i++)
        myVector.push_back(i);

    //resize(size_type g) – Resizes the container so that it contains ‘g’ elements
    myVector.resize(5);
    myVector.resize(8,100);
    myVector.resize(12);

    //begin() – Returns an iterator pointing to the first element in the vector
    //end() – Returns an iterator pointing to the theoretical element that follows last element in the vector
    cout << "Output of begin and end\t:\t";
    for (i = myVector.begin(); i != myVector.end(); ++i)
        cout << *i << '\t';

    cout << endl << endl;

    //rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    //rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    cout << "Output of rbegin and rend\t:\t";
    for (ir = myVector.rbegin(); ir != myVector.rend(); ++ir)
        cout << '\t' << *ir;

    //size() – Returns the number of elements in the vector
    //max_size() – Returns the maximum number of elements that the vector can hold
    //capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements
    //empty() – Returns whether the container is empty
    cout << "\nSize : " << myVector.size();
    cout << "\nCapacity : " << myVector.capacity();
    cout << "\nMax_Size : " << myVector.max_size();
    cout<< "\n IS Empty: "<<myVector.empty();

    //reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
    cout << "\nReference operator [g] : myVector[2] = " << myVector[2];
    cout << endl;
    //at(g) – Returns a reference to the element at position ‘g’ in the vector
    cout << "at : myVector.at(4) = " << myVector.at(4);
    cout << endl;
    //front() – Returns a reference to the first element in the vector
    cout << "front() : myVector.front() = " << myVector.front();
    cout << endl;
    //back() – Returns a reference to the last element in the vector
    cout << "back() : myVector.back() = " << myVector.back();
    cout << endl;
    return 0;
}
