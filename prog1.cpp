// custom countdown using while

#include <iostream>
using namespace std;

int main () {
    int curr, prev, total, subtotal;
    subtotal = 0;
    total = 0;
    while (true) {
        cin >> curr;
        subtotal += curr;
    	total += curr;
    	if (curr == 0 and prev != 0) {
            cout << "Subtotal " << subtotal <<endl;
    	    subtotal=0;}
    	if (curr == 0 and prev == 0) {
            cout << "Total " << total <<endl;
    		break;
        }
    	prev = curr;
    }
	return 0;
}
sadgsdgdfgsdf
