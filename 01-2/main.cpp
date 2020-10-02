#include "header1.hpp"
#include "header2.hpp"

// 헤더에서 함수 하나만 사용
using header1::foo;

// 무명 네임스페이스, 이 파일에서만 사용 가능
// #include 해도 다른 파일에선 사용 불가!
// C언어의 전역 static 과 동일한 효과.
namespace
{
    int onlyInThisFileFunc() { }

    int onlyInThisFileVar = 0;
}

int main()
{
    foo();
    header2::foo();

    return 0;
}