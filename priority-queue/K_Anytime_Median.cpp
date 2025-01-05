#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void calculateMedians(int n, vector<int> &arr)
{

    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i = 0; i < n; i++)
    {

        if (maxHeap.empty() || arr[i] <= maxHeap.top())
        {
            maxHeap.push(arr[i]);
        }
        else
        {
            minHeap.push(arr[i]);
        }

        if (maxHeap.size() > minHeap.size() + 1)
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        else if (minHeap.size() > maxHeap.size())
        {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }

        cout << maxHeap.top() << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        calculateMedians(n, arr);
    }
    return 0;
}
