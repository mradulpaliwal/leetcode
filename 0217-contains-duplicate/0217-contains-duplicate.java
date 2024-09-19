class Solution {
    public boolean containsDuplicate(int[] nums) {
        int n=nums.length;
        HashSet<Integer> set=new HashSet<Integer>();
        for(int i:nums){
            set.add(i);
        }
        int m=set.size();
        if(n==m){
            return false;
        }
        return true;
    }
}