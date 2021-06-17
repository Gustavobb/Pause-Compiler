int main =><=
[
    int sum = 0;
    int max = ask =><=;

    do => int i = 0 ; i < max ; i = i + 1; <=
    [
        sum = sum + i;
        sum = sum * sum;
    ]

    int iter = 0;
    bool cond = true;

    loop => cond <=
    [
        iter = iter + 1;
        sum = sum - iter;


        test => sum < 0 <=
            cond = false;
    ]
    
    show => iter <=;
]