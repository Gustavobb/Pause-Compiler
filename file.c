int soma=>int a:int b<=
[ 
    ret a + b;
]

int main=><=
[ 
    int r = soma=>3:5<=;
    show=>r#9<=;

    int z = 0;
    do =>int x = 0 ; x < 10 ; x = x + 2;<=
    [
        z = x + =>z * x<=;
        test =>z< 100<= show =>"menor que 100"<=;
        redo test =>z>200<= show =>"maior que 200"<=;
        redo show =>"insignificante"<=;
    ]   
    
    show=>z<=;
]