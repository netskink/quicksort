quicksort
=========
Quicksort implemenation in C.  This code handles duplicates in stream.

Basically quicksort works by picking three pointers.

1. Left index and moves from beginning to end.
2. Right index and moves from end to beginning.
3. Partition index which picks a value somewhere in middle.  After one interval of the sort
all values less than the value at this index are to left of this position and all values greater
than the value at this index are to the right.

The the routine recoursevly calls this same routine for the sub array to the left of the partiton
and to the right of this partition variable.

Swaps continue until L==R.  Once L==R, the two subarrays are called.

The left subarray is from start of original array with length R+1. This means the array ends at point just before
L and R since they are equal.
The right subarry is from L until with len equal to original length - value of L. In other words, it starts where first
one ends and goes to this position until end.
