#include <cstdlib>
#include <iostream>

using namespace std;

const int CAPACITY = 1000;

int main(int argc, char *argv[])
{
    
    int *dArray;
    dArray = new int[CAPACITY];
    
    dArray[0] = 5;
    dArray[1] = 4;
    dArray[2] = 9;
    dArray[3] = 25;
    dArray[4] = 18;
    
    for(int i = 0;i<5;i++){
            cout << dArray[i] << " ";
            }
    
    delete[] dArray;
    cout << dArray[0] << endl;
    
    dArray = NULL;
    
    cout << dArray[0] << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
