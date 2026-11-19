#include<iostream>
#include<new> // For bad_alloc and nothrow
using namespace std;

int main(){
    // 1. Handling allocation failure using try-catch (bad_alloc)
    try{
        // Attempting to allocate an excessively large block of memory
        long long largeSize = 1000000000000LL;
        int *ptr = new int[largeSize];
        delete[] ptr;
    }
    catch(const bad_alloc &e){
        cout<<"Allocation failed with exception: "<<e.what()<<endl;
    }

    // 2. Handling allocation failure using nothrow (returns NULL)
    long long largeSize2 = 1000000000000LL;
    int *ptr2 = new (nothrow) int[largeSize2];

    if(ptr2 == NULL){
        cout<<"Allocation failed using nothrow, ptr is NULL\n";
    }
    else{
        cout<<"Allocation succeeded\n";
        delete[] ptr2;
    }

    return 0;
}
