 #include <iostream>
using namespace std;

int main() {
    // Define the number of items
    int notebooks = 15;
    int pens = 20;
    
    // Define the cost per item
    double cost_per_notebook = 2.25;
    double cost_per_pen = 0.75;
    
    // Calculate the total cost
    double total_cost = (notebooks * cost_per_notebook) + (pens * cost_per_pen);
    
    // Output the total cost
    cout << "The total cost of the supplies is Rs. " << total_cost << endl;
    
    return 0;
}