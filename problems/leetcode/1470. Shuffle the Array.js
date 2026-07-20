var shuffle = function(nums, n) {
    const result = [];
    for(let i = 0, j = n; i < n; i++, j++) {
        result.push(nums[i], nums[j]);
    }
    return result;
};