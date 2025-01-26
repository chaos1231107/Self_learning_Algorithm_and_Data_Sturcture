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

## Top Down Approach - Memoijation
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

## Triangle of Pascal & Binomial Coefficient(파스칼의 삼각형, 이항계수)

![image](https://github.com/user-attachments/assets/97a34251-1c22-44b8-8cec-6ee0eaa2d28c)
![image](https://github.com/user-attachments/assets/bcf295ce-2321-4010-8053-e3b6bc9563c3)

long long combination(long long n, long long r)
{

    long long table[400][400];
    long long count, countN, countR;
    long long result;
    
    table[0][0] = 1;
    for (count = 1; count <= r; count++)
    {
        table[0][count] = 0;
    }
    
    for (countN=1; countN<=n; countN++)
    {
        for (countR=0; countR<=r; countR++)
        {
            if (countN == countR)
                table[countN][countR] = 1;
            else if(countR == 0)
                table[countN][countR] = 1;
            else
                table[countN][countR] = table[countN-1][countR-1] + table[countN-1][countR];
        }
    }
    return table[n][r];
}

int main()
{

    long long n, r;
    scanf("%lld %lld", &n, &r);
    printf("%lld", combination(n,r));
    return 0;
    
}

## Optimal Problem --> find maximum(=all) number of cases
### Problem of climbing stairs(baekjoon #2579)
![image](https://github.com/user-attachments/assets/d5924b2d-f5da-476f-86aa-66fda13cb541)
![image](https://github.com/user-attachments/assets/7a1ca184-23bc-42c4-937c-56ade464f36a)

using namespace std;

static int stair[301]; </br> 
<br/> static int score[301];

int main()
{

    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> stair[i];
        
    score[1] = stair[1];
    score[2] = stair[1] + stair[2];
    score[3] = max(stair[2] + stair[3], stair[1] + stair[3]);
    
    for (int i = 4; i <= n; i++)
    {
        int case1 = score[i-2] + stair[i];
        int case2 = score[i-3] + stair[i-1] + stair[i];
        score[i] = max(case1, case2);
    }
    
    cout << score[n];
    
    

    return 0;
}



### Binomial Coefficient remainder theorem 
def bino_coef(n, r):

    cache = [[0 for _ in range(r+1)] for _ in range(n+1)]
    MOD = 10007
    for i in range(n+1):
        cache[i][0] = 1 
    for i in range(r+1):
        cache[i][i] = 1 
        
    for i in range(1, n+1):
        for j in range(1, r+1):
            cache[i][j] = ((cache[i-1][j] + cache[i-1][j-1]) % MOD) % MOD
    
    return cache[n][r]
