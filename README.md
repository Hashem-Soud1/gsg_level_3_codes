

# Activity Schedules Assignment

**Name:** Hashem Erainat   ||   **ID:**  hashemarenat111@gmail.com


## Problem Statement

Given `n` days (1 ≤ n ≤ 10), list all valid activity schedules using **Swimming, Running, Football**,  
with the rule that **no two consecutive days can have the same activity**.

## Example Run (n = 2)

Possible schedules:
```

Swimming Running
Swimming Football
Running Swimming
Running Football
Football Swimming
Football Running

```

### Expected Count Formula
---
- Let n = number of days.
- For each day: we have 3 choices, except we cannot repeat the previous day's activity.
- Count formula:  
  **COUNT(n) = 3 × 2^(n-1)**



### Examples
```
- n = 1 → COUNT = 3 × 2^0 = 3  
- n = 2 → COUNT = 3 × 2^1 = 6  
- n = 3 → COUNT = 3 × 2^2 = 12  
```
