impor
// Cho 2 số nguyên dương a và b. Hãy tìm ước chung lớn nhất của 2 số này.
// Input : 2 số a,b
// Output : Ước chung lớn nhất của 2 số a, b
int UCLN(int a, int b)
{
    while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a; // or return b; a = b
}

// Cho 2 số nguyên dương a và b. Hãy tìm bội chung nhỏ nhất của 2 số này
// Input : 2 số a,b
// Output : Bội chung nhỏ nhất
int BCNN(int a, int b)
{
    int result = UCLN(a, b);
    return a * b / result;
}

int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    int result = UCLN(a, b);
    cout << "UCLN : "<<result;

    cout << "\n";

    result = BCNN(a, b);
    cout << "BCNN : " << result << endl;
       system("pause");
}