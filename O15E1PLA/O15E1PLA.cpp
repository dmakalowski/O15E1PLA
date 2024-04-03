// O15E1PLA.cpp : This is a solution for XV IT Olympiad task: Plakatowanie.
// It mainly works on a principle that we need a new poster every time there is a building higher than its neighbour or if the builing is the lowest since start.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n = 0, lenDump = 0, height = 0, result = 0, heightIndex = 0;
    vector<int> heightsHeap(250000, 0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> lenDump;
        cin >> height;
        while ((heightIndex > 0) && (height < heightsHeap[heightIndex - 1]))
        {
            heightIndex--;
        }
        if ((heightIndex == 0) || (height > heightsHeap[heightIndex - 1]))
        {
            result++;
            heightsHeap[heightIndex] = height;
            heightIndex++;
        }
    }
    cout << result;
}