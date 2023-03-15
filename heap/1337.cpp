#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        priority_queue<pair<int, int>>pq;
        vector <int> v;
        
        for(int i = 0; i < mat.size(); i++){
            int cnt = 0;
            for(int j = 0; j < mat[i].size(); j++){
                if(mat[i][j] == 1){
                    cnt++;
                }
                
            }
            pq.push(make_pair(cnt, i));
        }
        
        while(!pq.empty()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        reverse(v.begin(), v.end());
        vector <int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(v[i]);
        }
        return ans;
    }
};













class node{
 public:
    int index;
    int data;
    
    node(int data , int row)
    {
        this->data = data;
        this->index = row;
    }
};

// Since we uses the custom priority queue that's why we have to make our custom comparison code
class compare{
public:
    bool operator()(node* a , node* b)
    {
        if(a->data > b->data)
        {
            return true;
        }
        
        if(a->data == b->data && a->index > b->index)
        {
            return true;
        }
        
        return false;
    }
};

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& nums, int k) {
	
	// Priority queue that stores the corresponding sum of the rows
        priority_queue<node* , vector<node* > , compare> minHeap;
        
        vector<int> helper;
		
		// Inserting the sum in the array 
		// Tip: We can also insert the sum in the min heap in this for loop
		// but that part will increase the time complexity to O(row*col*log(col))
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int sum = 0;
            for(int j = 0 ; j < nums[i].size() ; j++)
            {
                sum += nums[i][j];
            }
            helper.push_back(sum);
        }
        
		// Inserting all sum values in the min-heap with their corresponding indexes
        for(int i = 0 ; i < helper.size() ; i++)
        {
            node* temp = new node(helper[i] , i);
            minHeap.push(temp);
        }
        
        vector<int> ans;
        int i = 0;
		
		// Inserting the indexes in the ans array.
        while(minHeap.size() > 0 && i < k)
        {
            auto temp = minHeap.top();
            minHeap.pop();
            
            ans.push_back(temp->index);
            i++;
        }
        
        return ans;
    }
};

// Hope this solution would help you...then please upvote me  :)