class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        
          int expectedSum = (n * (n + 1)) / 2;

    // Calculate the sum of elements in the vector
    int actualSum = 0;
    for (int i = 0; i < array.size(); i++) {
        actualSum += array[i];
    }

    // Calculate the missing number
    int missingNumber = expectedSum - actualSum;

    return missingNumber;


    }
};
