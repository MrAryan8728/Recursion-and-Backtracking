/*Here I will Discuss concept I learned today.
Key Note : Tree should be in ur mind.
1.Combination sum :
        Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.
        The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
        frequency of at least one of the chosen numbers is different.

    The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
Input: [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Approach : 
Generate all the possible sum of Type 1 as repetition is possible.
So, we will solve like make tree 

void solve(int i,int target,vector<int>& candidates,vector<vector<int>> &ans,vector<int> temp)
{
    if(i == candidates.size())
    {
        if(target == 0)
        {
            ans.push_back(temp);
        }
        return;
    }
    if(candidates[i] <= target)
    {
        temp.push_back(candidates[i]);
        solve(i,target - candidates[i],candidates,ans,temp);  //Ensure same no. will occur more than once.
        temp.pop_back();
    }
    solve(i + 1,target,candidates,ans,temp);  //Else we will move to the next.
}
2.Combination sum 2:
        Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.
        Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.
Input: [2,5,2,1,2], target = 5
Output: [[1,2,2],[5]]
Approach:
first sort the array to get sorted order.
then ,

 void solve(int index,int target,vector<int> &candidates,vector<vector<int>> &ans,vector<int> temp)
{
    if(target == 0)
    {
        ans.push_back(temp);
        return;
    }
    for(int i = index;i < candidates.size();i++)  //Technique 2 for loop of i th i to last.
    {
        if(i > index && candidates[i] == candidates[i -  1]) continue;    //to avoid the same pair like 2,1,1 and 1,2,1.
        if(candidates[i] > target) break;
        temp.push_back(candidates[i]);
        solve(i + 1,target - candidates[i],candidates,ans,temp);
        temp.pop_back();
    }
}*/
//Author : Aryan Tiwari 
//Date:

#include<bits/stdc++.h>
using namespace std;
int main() {

}