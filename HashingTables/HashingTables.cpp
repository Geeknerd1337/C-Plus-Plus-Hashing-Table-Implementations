
#include "IntChainHash.h"

int main()
{
    std::cout << "Hello World!\n";

    int arr[] = { 23,45,10,15,23 };
    string str[] = { "Bob", "Betty", "Joshua Wilson", "Joe", "Billy" };
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "Integer Chain Hash Table -------\n";

    IntChainHash integerChainHash(7);

    for (int i = 0; i < len; i++) {
        integerChainHash.InsertItem(arr[i]);
    }

    integerChainHash.DeleteItem(45);

    integerChainHash.DisplayHash();


}

