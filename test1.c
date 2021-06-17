int soma => int a : int b <=
[ 
    ret a + b;
]

int main =><=
[
    int r = soma => ask =><= : ask =><= <=;

    test => r # 10 <=
    [
        show => r <=;
        show => "Not equal to 10" <=;
    ]

    redo show => "Equal to 10" <=;
]