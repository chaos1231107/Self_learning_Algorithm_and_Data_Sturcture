## Dynammic Programming(동적계획법)
### fibonacci Sequence(피보나치 수열)
![image](https://github.com/user-attachments/assets/90a77f3f-f322-4c21-94b2-b6a7b4fa6c74)

using namespace std;

int fibo(int x)

{

    if (x <= 1) return x;
    return fibo(x-1) + fibo(x-2);
    
}

int main()

{

    int x;
    cin >> x;
    cout << fibo(x) << endl;

    return 0;
}
## 기하급수적으로 반복됨 --> 비효율적인 재귀함수 호출 형성
![image](https://github.com/user-attachments/assets/bf827920-d348-4cb6-8ca9-206e51a745ff)
## fibo(4)
 ### ├── fibo(3)
 ### │    ├── fibo(2)
 ### │    │    ├── fibo(1) -> 1
 ### │    │    └── fibo(0) -> 0
 ### │    ├── fibo(1) -> 1
 ### ├── fibo(2)
 ### │    ├── fibo(1) -> 1
 ### │    └── fibo(0) -> 0

## Dynammic Programming --> Memoijation
using namespace std;

//int arr[10001];
vector<int> dp;

int fibo (int x)
{

    if (x <= 1)
    {
        dp[x] = x;
        return dp[x];
    }
    if (dp[x] != -1) return dp[x];
    
    dp[x] = fibo(x-1) + fibo(x-2);
    return dp[x];
}
int main()
{

    int x;
    cin >> x;
    dp.resize(x+1, -1);
    cout << fibo(x);

    return 0;
}
