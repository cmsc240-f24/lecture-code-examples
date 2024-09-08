#include <memory>
using namespace std;

int main() 
{
    // Create a new unique pointer to manage a pointer to a double.
    unique_ptr<double> smartPointer(new double(3.141));

    // Return a pointer to pointed-to object.
    double* pointer = smartPointer.get(); 

    // Return the value of pointed-to object.
    double value = *smartPointer; 

    // Access a field or function of a pointed-to object
    unique_ptr<pair<int, string>> pairPointer(new pair<int, string>(1, "Heap Pair"));
    pairPointer->first = 2;
    pairPointer->second = "Update Pair String";

    // Deallocate current pointed-to object and store new pointer.
    smartPointer.reset(new double(2.818));
    
    // Release responsibility of the managed pointer.
    pointer = smartPointer.release(); 
    
    return 0;
}





