#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    int N;

    cin >> n1 >> n2;
    cin >> N;

    // Print the first two initial values
    cout << n1 << " " << n2 << " ";

    // Generate and print the rest of the sequence
    for (int i = 2; i < N; i++) {
        int next = n1 + n2;
        cout << next << " ";
        n1 = n2;
        n2 = next;
    }

    cout << endl;

    return 0;
}
