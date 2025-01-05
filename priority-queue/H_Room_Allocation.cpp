#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<tuple<int, int, int>> customers;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        customers.push_back({a, b, i});
    }

    sort(customers.begin(), customers.end());

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> room_assignment(n);
    int max_rooms = 0, current_room = 0;

    for (auto &[a, b, idx] : customers)
    {

        if (!pq.empty() && pq.top().first < a)
        {

            room_assignment[idx] = pq.top().second;
            pq.pop();
        }
        else
        {

            current_room++;
            room_assignment[idx] = current_room;
        }

        pq.push({b, room_assignment[idx]});
        max_rooms = max(max_rooms, current_room);
    }

    cout << max_rooms << "\n";
    for (auto room : room_assignment)
    {
        cout << room << " ";
    }
    cout << "\n";

    return 0;
}
