#include<iostream>
int main(){


    short sh = 1; // -32768 - 32767
    unsigned short un_s = 2; // 0 - 65536
    long lng = 4; // -2.147.483.648 - 2.147.483.648
    unsigned long un_lng = 8; // 0 - 4.294.967.295
    long long longy = 5842;
    unsigned long long un_longy = 83257923;
    int in = 9; // -2.147.483.648 - 2.147.483.648
    unsigned int un_in = 2; // 0 - 4.294.967.295
    float flo = 9; // -3,4*10**(-38) - 3,4*10**(-38)
    double doubl = 45; // -3,4*10**(-4932) - 3,4*10**(4932)

    //используем float из-за возможного ввода дробных чисел
    float square, height;
    //используем double из-за возможного использования макс знач float
    double base;

    std::cout<<"Write square of triangle: ";
    std::cin>>square;
    std::cout<<"Write height of triangle: ";
    std::cin>>height;

    base = 2*square/height;

    std::cout<<"\nBase of triangle => "<<base;
}