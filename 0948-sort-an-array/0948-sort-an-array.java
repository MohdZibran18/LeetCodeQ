class Solution {
   public void merge(int[] arr,int low ,int mid, int high){
        int i = low;
        int j= mid+1;
        int k=0;
        int []temp= new int[(high-low)+1];
        while(i <=mid && j<=high){
            if(arr[i]<arr[j]) {
                temp[k++] = arr[i++];
            }else {
                temp[k++] = arr[j++];
            }
        }
        while(j <= high){
            temp[k++] = arr[j++];
        }
        while(i <=mid ){
            temp[k++] = arr[i++];
        }
        // wapas usi array me daal rahe hai
        for(int z=0;z<temp.length;z++){
            arr[low+z]=temp[z];
        }
    }
   public void mergeSort(int []arr,int low,int high){
        if(low<high){
            int mid = (low+high)/2;
            mergeSort(arr,low,mid);
            mergeSort(arr,mid+1,high);
            merge(arr, low ,mid , high);
        }
    }
    public int[] sortArray(int[] nums) {
        mergeSort(nums,0,nums.length-1);
        return nums;
    }
}