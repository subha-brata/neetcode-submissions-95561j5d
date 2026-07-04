class Solution {
    /**
     * @param {number[]} nums
     * @param {number} k
     * @return {number[]}
     */
    topKFrequent(nums, k) {
        const m=new Map();
        let ans =[];
        for(let num of nums){
            if(m.has(num)) m.set(num,m.get(num)+1);
            else m.set(num,0);
        }
        console.log(m);
        const sortedDesc = new Map([...m.entries()].sort((a, b) => b[1] - a[1]));
        for(let[key, val] of sortedDesc){
            ans.push(key);
            if(ans.length === k) break;
        }
        return ans;
    }
}
