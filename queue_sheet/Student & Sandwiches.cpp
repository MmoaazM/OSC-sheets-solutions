class Solution {
    deque<int>dq;
    queue<int>qu;
    short cnt = 0; /// this is used to detect if operation ended and start to enter infinite loop

    void MoveFrontToBack()
    {
        int temp;
        temp = dq.front();
        dq.pop_front();
        dq.push_back(temp);

        cnt++;
    }

public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        for (int& element : students) dq.push_back(element);
        for (int& element : sandwiches) qu.push(element);

        while (cnt < dq.size() && !dq.empty() && !qu.empty())
        {
            if (dq.front() == qu.front())
            {
                dq.pop_front(); qu.pop();

                cnt = 0;
            }
            else
            {
                MoveFrontToBack(); ///User_defined function to make front go to back
            }
        }
        if (dq.empty())
        {
            return 0;
        }
        else if (sandwiches.empty())
        {
            return dq.size();
        }
        else
        {
            return cnt;
        }

    }
};