#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<pair<int, int>> buckets(2*n);
	for (int i = 0; i < n; i++) {
		int bucket,t1,t2;
		cin >> t1 >> t2 >> bucket;
		buckets[2*i] = {t1, bucket};
		buckets[2*i+1] = {t2, (-1)*bucket};
	}
	sort(buckets.begin(), buckets.end());
	int maxbucket = 0;
	int currentbucket = 0;
	for (pair<int,int> time : buckets) {
		currentbucket += time.second;
		maxbucket = max(maxbucket, currentbucket);
	}
	cout << maxbucket;
	return 0;
}
