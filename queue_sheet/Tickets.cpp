class Solution {
private:
    bool done = false;
    int counter = 0;
    int indexOfElement;
    int temp;

    void NormalProcess(deque<int>& tickets)
    {
        temp = --(tickets.front());
        tickets.pop_front();
        indexOfElement--;

        counter++;

        if (temp != 0)
        {

            tickets.push_back(temp);

            if (indexOfElement == -1) { indexOfElement = tickets.size() - 1; }
        }
        else if (indexOfElement == -1)
        {
            done = true;
        }
    }
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        indexOfElement = k;
        deque<int> t;
        for (int i = 0;i < tickets.size();i++)
        {
            t.push_back(tickets[i]);
        }
        while (!done)
        {
            NormalProcess(t);
        }
        return counter;
    }
};