#include <bits/stdc++.h>
using namespace std;

long long distance_squared(int x, int y){
    return 1LL * x * x + 1LL * y * y;
}
vector<pair<int, int>> sortCoordinates(const vector<pair<int, int>>& coordinates) {
   int n = coordinates.size();
   vector<pair<int, int> > result;
   vector<pair<long long, int> > distances;
   for(int i = 0; i < n; i++){
        distances.push_back({distance_squared(coordinates[i].first, coordinates[i].second), i});
   }
   sort(distances.begin(), distances.end());
   for(int i = 0; i < distances.size(); i++){
      result.push_back(coordinates[distances[i].second]);
   }
   return result;
}

int main() {
  int n, x, y;
  cin >> n;
  vector<pair<int, int> > coordinates;
  for(int i = 0; i < n; i++){
    cin >> x >> y;
    coordinates.push_back({x, y});
  }
  coordinates = sortCoordinates(coordinates);
  for(int i = 0; i < n; i++)
    cout << coordinates[i].first << " " << coordinates[i].second << endl;
  
  return 0;
} 