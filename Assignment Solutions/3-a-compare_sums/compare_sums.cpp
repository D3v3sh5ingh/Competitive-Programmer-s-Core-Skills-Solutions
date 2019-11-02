using namespace std;
#include <bits/stdc++.h>
double a[100], b[100];
void read_vector(int n){
	double x;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
}
void print_vector(int n){
    for (int i = 0; i < n; ++i){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    for (int i = 0; i < n; ++i){
        cout<<b[i]<<" ";
    }
    cout<<"\n";
}
void print_result(double x,double y,double error){
	if (abs(x-y)<error)
        cout << "SUM(A)=SUM(B)" << "\n";
    else if (x>y+error)
        cout << "SUM(A)>SUM(B)" << "\n";
    else
        cout << "SUM(A)<SUM(B)" << "\n";
}
int main(){
	/*	#ifndef ONLINE_JUDGE
	   	freopen("testInput.txt", "r", stdin);
	    freopen("testOutput.txt", "w", stdout);
		#endif
    */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double sum_a;
    double sum_b;
    int n;
    double error;
    while(cin >> n){
        read_vector(n);
    //  print_vector(n);
        sum_a = accumulate(a,a+n,0.0);
        sum_b = accumulate(b,b+n,0.0);
        error = (double)n/(200000.0);
    //  cout<<setprecision(15)<<sum_a<<" "<<sum_b<<" "<<error<<"\n";
        print_result(sum_a,sum_b,error);
    }
    return 0;
}
