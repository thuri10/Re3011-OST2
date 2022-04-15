#include <iostream>

template <typename T>
T myMax(T x, T y ){
    return (x > y)? x: y;
}

int main(){
    std::cout << myMax<int>(5, 9)<<std::endl;
    std::cout <<myMax<long>(4, 7)<<std::endl;

}