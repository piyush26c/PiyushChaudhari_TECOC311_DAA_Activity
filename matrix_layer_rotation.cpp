/**
 *    author:  Piyush Rajendra Chaudhari
 *    created: 02.04.2020 19:30:32       
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m,n,i,j,k,min,l,t;
    long int r;
    cin >> m >> n >> r;
    long int array[m][n];
    long int witness[2*m+2*(n-2)];
    long int output[2*m+2*(n-2)];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
            cin >> array[i][j];
    }
    if(m<=n)
        min = m/2;
    else
        min = n/2;    
    l=0;
    while(min) {
        k=0;
        for(j=l;j<n-l;j++) {
            witness[k]=array[l][j];
            k++;
        }
        j=n-l-1;
        for(i=l+1;i<m-l-1;i++) {
            witness[k]=array[i][j];
            k++;
        }
        i=m-l-1;
        for(j;j>l;j--) {
            witness[k]=array[i][j];
            k++;
        }
        for(i;i>l;i--) {
            witness[k]=array[i][j];
            k++;
        }
        t=r%k;
        t=k-t;
        for(i=0;i<k;i++)
            output[(i+t)%k]=witness[i];
           k=0;
        for(j=l;j<n-l;j++) {
            array[l][j]=output[k];
            k++;
        }
        j=n-l-1;
        for(i=l+1;i<m-l-1;i++) {
            array[i][j]=output[k];
            k++;
        }
        i=m-l-1;
        for(j;j>l;j--) {
            array[i][j]=output[k];
            k++;
        }
        for(i;i>l;i--) {
            array[i][j]=output[k];
            k++;
        }
        l++;
        min--;
    }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
    return 0;
}
