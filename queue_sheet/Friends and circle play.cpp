class Solution {
    deque<int>Friends;

    int DeletedIndex;
    int CurrentIndex = -1;

public:
    int findTheWinner(int n, int k) {

        for (int i = 1;i <= n;i++)
        {
            Friends.push_back(i);
        }
        while (Friends.size() > 1)
        {
            DeletedIndex = (CurrentIndex + k) % Friends.size();
            CurrentIndex = DeletedIndex - 1;

            Friends[DeletedIndex] = 0;
            sort(Friends.begin(), Friends.end());
            Friends.pop_front();
        }
        return Friends.front();

    }
};