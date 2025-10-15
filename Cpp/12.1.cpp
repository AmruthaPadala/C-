#include <iostream> 
#include <list> 
#include <vector> 
using namespace std; 
int main() { 
    cout << "=== VECTOR OPERATIONS ===" << endl; 
    vector<int> v; // declare a vector 
    // Insertion 
    v.push_back(10); 
    v.push_back(20); 
    v.push_back(30); 
    cout << "Vector elements after insertion: "; 
    for (int x : v) 
    cout << x << " "; 
    // Deletion (remove last element) 
    v.pop_back(); 
    cout << "\nVector after deletion: "; 
    for (int x : v) 
    cout << x << " "; 
    // Access element 
    cout << "\nFirst element: " << v.front(); 
    cout << "\nLast element: " << v.back() << endl; 
 
    cout << "\n=== LIST OPERATIONS ===" << endl; 
    list<int> lst; // declare a list 
    // Insertion 
    lst.push_back(100); 
    lst.push_back(200); 
    lst.push_front(50); // insert at beginning 
    cout << "List elements after insertion: "; 
    for (int x : lst) 
    cout << x << " "; 
    // Deletion 
    lst.pop_front(); // remove first element 
    cout << "\nList after deletion: "; 
    for (int x : lst) 
    cout << x << " "; 
    // Traversal using iterator 
    cout << "\nList traversal using iterator: "; 
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) 
    cout << *it << " "; 
    cout << endl; 
    return 0; 
}
