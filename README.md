# Palindrome Check (String Reversal Method)

This repository contains a C++ implementation to check if a string is a **palindrome**. A palindrome is a word, phrase, or sequence that reads the same backward as forward (e.g., "racecar").

---

## 🚀 How the Algorithm Works

The program uses the **Reversal and Comparison** strategy:

1.  **Copy:** Create a copy of the original string `s` called `rev`.
2.  **Reverse:** Use the STL `std::reverse()` function to flip the `rev` string entirely.
3.  **Compare:** Compare the original string `s` with the reversed string `rev`.
4.  **Result:** If they are identical, the string is a palindrome; otherwise, it is not.

## 📊 Complexity Analysis

| Metric | Complexity | Description |
| :--- | :--- | :--- |
| **Time Complexity** | $O(n)$ | Reversing the string takes $O(n)$ and comparing two strings also takes $O(n)$, where $n$ is the length of the string. |
| **Space Complexity** | $O(n)$ | We create an additional string `rev` of the same size $n$ to store the reversed version. |

---

## 💻 Code Overview

The logic uses the `<algorithm>` header for efficient reversal:

```cpp
bool isPalindrome(string s) {
    string rev = s; 
    reverse(rev.begin(), rev.end());
    return s == rev; 
}

```

#  📝 Example Output
Input: "racecar"
Output: True 
