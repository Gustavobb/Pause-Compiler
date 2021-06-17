int pow => int num : int pow_num <=
[
    test => pow_num ? 0 <=
        ret 1;
    
    test => pow_num ? 1 <=
        ret num;
    
    ret num * pow => num : pow_num - 1 <=;
]

int main =><=
[
    show => "Pow program" <=;
    show => pow => ask =><= : ask =><= <= <=;
]