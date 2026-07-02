class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
        var m = new Map();
        for(var i in nums){
            i = parseInt(i);
            if(m.has(target-nums[i])){
                return [m.get(target-nums[i]), i];
            }
            m.set(nums[i], i);
        }
        return [];
    }
}
