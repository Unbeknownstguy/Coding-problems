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

	string str;
	cin>>str;
	
	int n = l(str);
	
	if(n<7)
		cout<<"NO\n";
	else{
		
		int c=0;
		bool flag = true;
		
		for(int i=0; i<n-1; i++){
			
			if((str[i] == '0' && str[i+1] == '0') || (str[i] == '1' && str[i+1] == '1'))
				c++;
			else
				c=0;
				
			if(c==6){
				flag = false;
				break;
			}
				
		}
		
		flag ? cout<<"NO\n" : cout<<"YES\n";
		
	}

	return 0;
}
