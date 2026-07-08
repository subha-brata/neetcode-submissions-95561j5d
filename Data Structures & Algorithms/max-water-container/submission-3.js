class Solution {
    /**
     * @param {number[]} heights
     * @return {number}
     */
    maxArea(heights) {
        let l=0, r= heights.length-1;
        let area=0;
        while(l<r){
            let res = Math.min(heights[r],heights[l])*(r-l);
            area= Math.max(area,res);
            if(heights[l] <= heights[r]) l++;
            else r--;
        }
        return area;
    }
}
