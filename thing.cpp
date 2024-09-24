#include <iostream>
using namespace std; 
int main()
{
    int weather;
    cout << "What's the weather like? (Enter your input as integers)" << endl;
    cout << "1. Rainy" << endl;
    cout << "2. Hot" << endl;
    cout << "3. Freezing" << endl;
    cin >> weather;
    if (weather == 1) {
        cout << "Use an umbrella" << endl;
    }
    else if (weather == 2) {
        cout << "Wear shorts" << endl;
    }
    else {
        cout << "Wear a snow jacket" << endl;
    }

}
