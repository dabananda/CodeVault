#include <bits/stdc++.h>
#define ll long long int

using namespace std;

class comp {
 public:
  bool operator()(pair<ll, ll> a, pair<ll, ll> b) {
    return a.second > b.second;
  }
};

void dijkstra(ll src, vector<pair<ll, ll>> v[], ll dis[], ll path[]) {
  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, comp> pq;
  pq.push({src, 0});
  dis[src] = 0;
  while (!pq.empty()) {
    pair<ll, ll> p = pq.top();
    pq.pop();
    ll parent = p.first;
    ll parentCost = p.second;
    for (pair<ll, ll> x : v[parent]) {
      ll child = x.first;
      ll childCost = x.second;
      if (parentCost + childCost < dis[child]) {
        dis[child] = parentCost + childCost;
        pq.push({child, dis[child]});
        path[child] = parent;
      }
    }
  }
}

int main() {
  ll n, e;
  cin >> n >> e;
  vector<pair<ll, ll>> v[n + 1];
  while (e--) {
    ll a, b, w;
    cin >> a >> b >> w;
    v[a].push_back({b, w});
    v[b].push_back({a, w});
  }
  ll dis[n + 1];
  fill(dis, dis + n + 1, 1e18);
  ll path[n + 1];
  fill(path, path + n + 1, -1);
  dijkstra(1, v, dis, path);
  if (dis[n] == 1e18) {
    cout << -1 << endl;
  } else {
    vector<ll> ans;
    ll x = n;
    while (x != -1) {
      ans.push_back(x);
      x = path[x];
    }
    reverse(ans.begin(), ans.end());
    for (ll x : ans) {
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}