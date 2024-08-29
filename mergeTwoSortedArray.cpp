#include <bits/stdc++.h>
#include <iostream>
#include <vector>
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    /*
---------------------------------------------Method 1: using STL
    vector<int> ans;

    // Merge vectors 'a' and 'b' into 'ans'
    ans.insert(ans.end(), a.begin(), a.end());
    ans.insert(ans.end(), b.begin(), b.end());

    // Sort 'ans'
    sort(ans.begin(), ans.end());

    // Remove duplicates from 'ans'
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    return ans;

---------------------------------------------Method 2: using ordered set
    int n1 = a.size();
    int n2 = b.size();

    set<int> st;

    for(int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }

    for(int i = 0; i < n2; i++) {
        st.insert(b[i]);
    }

    vector <int> temp;

    for(auto it: st) {
        temp.push_back(it);
    }

    // vector<int> temp;
    //     temp.insert(temp.end(), st.begin(), st.end());
        
    // vector<int> temp(st.begin(), st.end());

    return temp;

---------------------------------------------Method 3: optimal approach
    */
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArray;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (unionArray.size() == 0 || unionArray.back() != a[i])
            {
                unionArray.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unionArray.size() == 0 || unionArray.back() != b[j])
            {
                unionArray.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (unionArray.size() == 0 || unionArray.back() != a[i])
        {
            unionArray.push_back(a[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (unionArray.size() == 0 || unionArray.back() != b[j])
        {
            unionArray.push_back(b[j]);
        }
        j++;
    }

    return unionArray;
}

int main()
{
    // Example input vectors
    vector<int> a = {1, 2, 2, 3, 4, 5};
    vector<int> b = {2, 3, 4, 4, 5, 6, 7};

    // Call the sortedArray function
    vector<int> result = sortedArray(a, b);

    // Output the result
    cout << "Union of arrays a and b: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}