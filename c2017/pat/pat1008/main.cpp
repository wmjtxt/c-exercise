#include <iostream>

using namespace std;

void rev(int a[],int x, int y){
    int i;
    for(i = x; i < (x+y+1)/2; i++){
      int temp = a[i];
      a[i] = a[x+y-i];
      a[x+y-i] = temp;
    }
}

int main()
{
    int n, m;
    int i;
    int a[100];
    while(cin >> n >> m){
        if(m > n) m = m % n;//这个点耗了我20多分钟
        if(n >= 1 && n <= 100){
          for(i = 0; i < n; i++)
            cin >> a[i];
          rev(a,0,n-m-1);
          rev(a,n-m,n-1);
          rev(a,0,n-1);
          for(i = 0; i < n-1; i++)
            cout << a[i] <<" ";
          cout << a[n-1];
       }
    }
    return 0;
}
