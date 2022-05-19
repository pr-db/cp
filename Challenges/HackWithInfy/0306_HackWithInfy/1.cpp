#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll countSetBits(ll n)
{
	ll count = 0;
	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return count;
}
ll countBits(ll number)
{
	return (ll)log2(number) + 1;
}
void decToBinary(ll n)
{
	// array to store binary number
	ll binaryNum[32];

	// counter for binary array
	ll i = 0;
	while (n > 0)
	{

		// storing remainder in binary array
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	// printing binary array in reverse order
	for (ll j = i - 1; j >= 0; j--)
		cout << binaryNum[j];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,k;
	cin >> n >>k;
	vector<ll> a(n);
	for (ll i = 0; i < n;i++)
		cin >> a[i];
	ll ans = a[0];
	// cout << countSetBits(16);
	for (ll i = 0; i < n;i++)
	{
		cout <<a[i]<<","<< countSetBits(a[i]) << "  ";
	}
	cout << "\n";
	for (ll i = 1; i < n; i++)
	{
		ans |= a[i];
		cout << a[i] << "," << ans << " ";
	}

		cout << ans;
	//decToBinary(219);
	//int n;
	return 0;
}
