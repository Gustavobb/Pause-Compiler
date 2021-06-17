int recursive => int sum : int iter : int max <=
[ 
    test => sum > max <=
        ret iter;

    ret recursive => sum * 2 : iter + 1 : max <=;
]

int main =><=
[
    int r = recursive => ask =><= : 0 : ask =><= <=;
    show => r <=;
]