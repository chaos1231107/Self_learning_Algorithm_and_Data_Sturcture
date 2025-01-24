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
