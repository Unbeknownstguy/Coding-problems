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

int main(){

	fast;

	int arr[6][6];
	
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			cin>>arr[i][j];
		}
	}
	
	int j=2;
	
	int maxi = -63;
	for(int i=0; i<4; i++){
		
		for(int j=2; j<6; j++){
			
			int k=j-2, hourglass=0;;
			
			while(k<=j){
				hourglass += arr[i][k] + arr[i+2][k];
				k++;
			}
			hourglass += arr[i+1][j-1];
			maxi = max(maxi, hourglass);
			
		}
		
	}
	
	cout<<maxi<<nl;
	

	return 0;
}
