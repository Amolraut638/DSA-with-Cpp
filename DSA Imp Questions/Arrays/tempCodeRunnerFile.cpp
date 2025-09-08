int main() {
    Solution solution;

    // Calculate factorial
    int n = 5; // Example input for factorial
    vector<int> factorialResult = solution.factorial(n);

    cout << "Factorial of " << n << " is: ";
    for (int digit : factorialResult) {
        cout << digit;
    }
    cout << endl;

    return 0;
}
