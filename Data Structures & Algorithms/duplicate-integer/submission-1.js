class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        var s = new Set();
        for(var num of nums){
            console.log(num);
            if(s.has(num)) return true;
            s.add(num);
        }
        return false;
    }
}
