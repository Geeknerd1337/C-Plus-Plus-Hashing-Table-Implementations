
#include "IntChainHash.h"

void DisplayIntChainHash() {
    std::cout << "Hello World!\n";

    int arr[] = { 23,45,10,15,33, 16 };
    string str[] = { "Bob", "Betty", "Joshua Wilson", "Joe", "Billy" };
    //Standard way of getting length of an array in c++
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "Integer Chain Hash Table -------\n";

    IntChainHash integerChainHash(7);

    for (int i = 0; i < len; i++) {
        integerChainHash.InsertItem(arr[i]);
    }

    integerChainHash.DeleteItem(45);

    integerChainHash.DisplayHash();

    cout << "BUCKET OF INDEX 23: " << integerChainHash.HashSearch(23) << endl;
    cout << "BUCKET OF INDEX 16: " << integerChainHash.HashSearch(16) << endl;
    cout << "BUCKET OF INDEX 2: " << integerChainHash.HashSearch(2) << endl;
    cout << "---------------------------------\n";
}

int main()
{
    DisplayIntChainHash();


}



