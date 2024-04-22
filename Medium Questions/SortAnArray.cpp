// This contains multiple sorting alogorithms, this was made in order
// to assist in studying for an upcomming examination in my Data Structures
// course. 

// A similar project can be found on my github (found within profile). Within
// that project data structures are covered as well. 

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      ShellSort(nums);
      return nums;
    }

private:
  // O(N^2) Algorithms ----------------------------------
  void BubbleSort(vector<int>& vec){ 
    // Puts sorted elements at the back of the arr
    int s = vec.size();
    for(int i = 0; i < s; i++){
      for(int j = 0; j < s - 1 - i; j++){
        if(vec[j] > vec[j + 1]){
          std::swap(vec[j], vec[j + 1]);
        } 
      }
    }
  }

  // Insertion Sort -- O(N^2) -- Due To Nested For Loop
  void InsertionSort(vector<int>& vec){
    for(int p = 1; p < vec.size(); p++){ 
      int comparable = std::move(vec[p]);

      int j;

      // compare n element to all predecessors 
      // to see if less - to find insertion spot
      for(j = p; j > 0 && comparable < vec[j - 1]; j--){
        vec[j] = std::move(vec[j - 1]);
      }
      // swap when greater is found
      vec[j] = std::move(comparable);
    }
  } 
  //   Worst Case - Reverse Sorted List (O(N^2))
  //   Best Case - Single Swap (O(N))

  void ShellSort(vector<int>& vec){
    // Take the half of the curr list
    for(int gap = vec.size() / 2; gap > 0; gap/=2){ 

      // Iterate over elements above the gap
      for(int i = gap; i < vec.size(); i++){

        // Create a comparable of the current element
        int comparable = std::move(vec[i]);
        int j = i;

        // swap elements less than above the gap 
        for(; j >= gap && comparable < vec[j - gap]; j-=gap){
            vec[j] = std::move(vec[j - gap]);
        }
        // If less than comparable then swap 
        vec[j] = comparable; 
      }
    }
  }


  // O(N Log N) Algorithms ----------------------------------
  void MergeSort(vector<int>& vec){
        vector<int> temp(vec.size());
        MergeSortHelper(vec, temp, 0, vec.size() - 1);
    }

    void MergeSortHelper(vector<int>& vec, vector<int>& temp, int left, int right){
        if(left < right){
            int mid = left + (right - left) / 2;
            MergeSortHelper(vec, temp, left, mid);
            MergeSortHelper(vec, temp, mid + 1, right);
            Merge(vec, temp, left, mid, right);
        }
    }

    void Merge(vector<int>& vec, vector<int>& temp, int left, int mid, int right){
        int i = left;       // Index for left subarray
        int j = mid + 1;    // Index for right subarray
        int k = left;       // Index for temp array

        // Merge the two subarrays into temp array
        while (i <= mid && j <= right) {
            if (vec[i] <= vec[j]) {
                temp[k++] = vec[i++];
            } else {
                temp[k++] = vec[j++];
            }
        }

        // Copy the remaining elements of left subarray, if any
        while (i <= mid) {
            temp[k++] = vec[i++];
        }

        // Copy the remaining elements of right subarray, if any
        while (j <= right) {
            temp[k++] = vec[j++];
        }

        // Copy back the merged elements from temp to original array
        for (int p = left; p <= right; p++) {
            vec[p] = temp[p];
        }
    }
};
