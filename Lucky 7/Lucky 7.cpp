#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

void one() {
    cout << "Lucky 1" << endl;
    int n1, n2, n3, n4, n5;
    int max, min;

    cout << "Enter 5 numbers with spaces between -  " << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    min = n1;
    if (n2 < min) min = n2;
    if (n3 < min) min = n3;
    if (n4 < min) min = n4;
    if (n5 < min) min = n5;
    cout << "Least is " << min << endl;

    max = n1;
    if (n2 > max) max = n2;
    if (n3 > max) max = n3;
    if (n4 > max) max = n4;
    if (n5 > max) max = n5;
    cout << "Greatest is " << max << endl;

}

void two() {
    cout << endl << "Lucky 2" << endl;
    int a = 7, N = 50;
    int m = N / a;
    int sum = m * (m + 1) / 2;
    int ans = a * sum;

    cout << "Sum of multiples of " << a << " up to " << N << " = " << ans << endl;
}

void three() {
    cout << endl << "Lucky 3" << endl;
    unsigned long long factorial = 1;
    for (int i = 1; i <= 10; i++) {
        factorial *= i;
        cout << factorial << ", ";
    }
    cout << endl;
    cout << "Factorial of 10 = " << factorial << endl;
}

void four() {
    cout << endl << "Lucky 4" << endl;
    char word[20];
    int i, length;
    int flag = 0;

    cout << "Enter a word: "; 
    cin >> word;

    length = strlen(word);
    
    for (i = 0; i < length; i++) {
        if (word[i] != word[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        cout << word << " is not a palindrome" << endl;
    }
    else {
        cout << word << " is a palindrome" << endl;
    }

}

void five() {
    cout << endl << "Lucky 5" << endl;
    int i, n;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << n << " is a prime number" << endl;
    else
        cout << n << " is not a prime number" << endl;
}

float average(float a[]) {
    cout << endl << "Lucky 6" << endl;
    int i;
    float avg, sum = 0;
    for (i = 0; i < 8; ++i) {
        sum += a[i];
    }
    avg = sum / 8;
    return avg;
}
    

void seven() {
    cout << endl << "Lucky 7" << endl;

    int n;
    cout << "Enter a positive integer" << endl;
    cin >> n;

    fstream file;
    string filename;
    filename = "Text.txt";
    file.open(filename.c_str());

    string* strArr = new string[n];
    int index = 0;
    string str;

    while (index < n) {
         file >> str;
         strArr[index] = str;
         index++;
    }
    string largest = strArr[0];
    int i = 1;

    while (i < n) {
        if (strArr[i].size() > largest.size())
            largest = strArr[i];
        i++;
    }
    cout << largest << endl;
}

int main() {
    one();
    two();
    three();
    four();
    five();
    float b, n[] = { 20.6, 30.8, 5.1, 67.2, 23, 2.9, 4, 8 };
    b = average(n);
    std::cout << "Average of numbers = " << b << std::endl;
    seven();
};