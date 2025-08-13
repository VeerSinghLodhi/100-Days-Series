

## 🔹 Logic to Find Second Largest Number

1. **Initialize two variables:**
   - `largest` = smallest possible value (`-∞`)
   - `secondLargest` = smallest possible value (`-∞`)

2. **Traverse the array:**
   - For each element `num` in the array:
     - If `num` > `largest`:
       - Set `secondLargest = largest`
       - Set `largest = num`
     - Else if (`num` > `secondLargest` and `num` != `largest`):
       - Set `secondLargest = num`

3. **After the loop:**
   - `secondLargest` will contain the second largest unique number.
   - If `secondLargest` is still `-∞`, it means there was no valid second largest (all elements same or only one element).

No need for Bubble Sort here. 🚀

Bubble Sort (or any sorting) would be slower — it takes O(n²) time, while our logic only needs O(n) time because:

We just scan the array once.

We update largest and secondLargest during that scan.

So direct traversal is better and faster than sorting for this problem. 🔥

