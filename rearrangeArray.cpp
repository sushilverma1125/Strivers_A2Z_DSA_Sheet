
/* Problem Statement: 
You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should return the array of nums such that the the array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

Example 1:

Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4]
Explanation:
The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions.  

Example 2:

Input: nums = [-1,1]
Output: [1,-1]
Explanation:
1 is the only positive integer and -1 the only negative integer in nums.
So nums is rearranged to [1,-1].
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int> &nums)
{
//                                                         Optimal approach 
  int n = nums.size();
  int posIdx = 0, negIdx = 1;
  vector<int> ans(n, 0);

  for (int i = 0; i < n; i++)
  {
    if (nums[i] > 0)
    {
      ans[posIdx] = nums[i];
      posIdx += 2;
    }
    else
    {
      ans[negIdx] = nums[i];
      negIdx += 2;
    }
  }

  return ans;

//                                                               BRUTE FORCE
  int n = nums.size();
  vector<int> pos;
  vector<int> neg;

  for (int i = 0; i < n; i++)
  {
    if (nums[i] > 0)
      pos.push_back(nums[i]);
    else
      neg.push_back(nums[i]);
  }

  for (int i = 0; i < n / 2; i++)
  {
    nums[2 * i] = pos[i];     // positive indexes to store only +ve elemnts
    nums[2 * i + 1] = neg[i]; // negative indexes to store only -ve elements
  }
  return nums;
}

int main()
{

  // Array Initialisation.

  vector<int> A = {3, 1, -2, -5, 2, -4};

  vector<int> ans = alternateNumbers(A);

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}