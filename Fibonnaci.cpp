#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    //Krijojme Fibonnacin statik, sipas rregullave te Fibonnacit, ku: 0, 1, 1, 2, 3, 5, 8, etj. duhet te jete outputi//
    int numri1 = 0;
    int numri2 = 1;
    int numri_i_termave = 0;
    int j = 0;

    cout << "Numri i termave: ";
    cin >> numri_i_termave;
    
    if (numri_i_termave <= 2)
    {
        cout << "Numri i termave duhet te jete >=3!"<<endl;
        return 1;
    }
    cout << numri1 << ", " << numri2 << ", ";
    
    for (int i = 3; i <= numri_i_termave; i++)
    {
        j = numri1 + numri2;
        cout << j;

        if (i != numri_i_termave)
        {
            cout << ", ";
            numri1 = numri2;
            numri2 = j;

        }   
    }
    cout << endl;
    

    return 0;

}