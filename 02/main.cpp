#include <iostream>

int func()
{
    int a = 7;
    return a;
}


int main()
{
    int num = 42;
    int* pNum = &num;
    int*& rpNum = pNum;

    std::cout << num << std::endl;
    
    *rpNum = 999;
    std::cout << num << std::endl;

    // int& con = func();  // 컴파일 오류
    const int& con = func();  // const T& 로 r-value 참조 가능
    std::cout << con << std::endl;

    // int& arr[2] = {num, con};  // 레퍼런스의 배열은 불가능
    // 레퍼런스는 메모리에 존재할 수도 있고, 존재하지 않을 수도 있는데,
    // 배열 접근하려면 메모리에 반드시 존재해야 한다.

    int arr[3][2] =
    {
        {1,2},
        {3,4},
        {5,6}
    };
    // 배열의 레퍼런스는 가능
    // 단, 포인터와 다르게 배열의 크기를 명시해야 한다.
    int (&rArr)[3][2] = arr;
    std::cout << rArr[0][0] << std::endl;
    

    return 0;
}