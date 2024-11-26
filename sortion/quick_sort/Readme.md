## Simple sheme about quick sort 

![image](https://github.com/user-attachments/assets/e141c2fa-85a8-4fba-b6f3-b9b9de86ae95)

## Assential Steps for quicksort

### 1. Devide array
    int pl = left;
    int pr = right;
    int center = a[(pl+pr)/2];
### 2. Sort Devided array and swap values
      do
    {
        while (a[pl] < center) pl++;
        while (center < a[pr]) pr--;
        
        if (pl <= pr)
        {
            swap(int, a[pl], a[pr]);
            pl++;
            pr--;
        }
        
    }while (pl <= pr);
    
    if (pl < right) quick(a, pl, right);
    if (left < pr) quick(a, left, pr);

