#include<iostream>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define l(s) s.length()
#define asort(a) sort(a, a+n)
#define dsort(a) sort(a, a+n, greater<int>())
#define all(x) (x).begin(), (x).end()
#define vasort(v) sort(all(v))
#define vdsort(v) sort(all(v), greater<int>())
#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
#define mp make_pair
#define ff first
#define ss second
#define RESET(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a*(b/gcd(a,b)))
#define sp(x, y) fixed<<setprecision(y)<<x
#define MOD 1000000007
#define nl '\n'
#define fast  ios_base::sync_with_stdio(0); cin.tie(0)

void solve(){
	int n;
	cin>>n;
	
	int arr[n][n];
	
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>arr[i][j];
		
		
	for(int i=0; i<n; i++){
		int l=0, r=n-1;
		while(l<r){
			swap(arr[i][l], arr[i][r]);
			l++;
			r--;
		}
	}
	
	for(int i=0; i<n; i++){
		int l=0, r=n-1;
		while(l<r){
			swap(arr[l][i], arr[r][i]);
			l++;
			r--;
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<" ";
		}
		
		cout<<"\n";
	}
		
}

int main(){

	fast;

	int t;
	cin>>t;
	while(t--){

		solve();	   		   

	}

	return 0;
}
