class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    longestConsecutive(nums) {
        let s= new Set();
        let ans=0;
        for(let num of nums) s.add(num);
        for(let i of s){ 
            let count=0;   
            while(s.has(i++)){ 
                count++;
                // console.log(count); 
                ans = Math.max(ans,count);
            }
        } 
        return ans;
    }
}
