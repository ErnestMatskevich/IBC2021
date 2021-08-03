#include <iostream>

int get_fib_n(int n){
    if(n <= 1){
        return n;
    }
    return get_fib_n(n - 1) + get_fib_n(n - 2);
}

int main() {
   int n;
   std::cin >> n;
   if(n<0){
       std::cout << "Wrong" << std::endl; return 0;
   }

   std::cout << get_fib_n(n) << std::endl;
}
