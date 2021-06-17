int main =><=
[
    int a = ask =><=;
    int a_old = a;
    int b = ask =><=;
    int counter = 0;
    bool cond = true;

    loop => cond <=
    [
        a = a / b;
        test => a ? 0 <= cond = false;

        counter = counter + 1;
    ]

    test => counter ? 1 <= counter = a_old;
    show => counter <=;
]