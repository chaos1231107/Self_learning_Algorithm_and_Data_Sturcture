## Dynammic Programming(동적계획법)
### <fibonacci Sequence>
![image](https://github.com/user-attachments/assets/90a77f3f-f322-4c21-94b2-b6a7b4fa6c74)

## #include <iostream>

using namespace std;

int fib(int x)

{

    if (x <= 1) return x;
    return fib(x-1) + fib(x-2);
    
}

int main()

{

    int x;
    cin >> x;
    cout << fib(x) << endl;

    return 0;
}
