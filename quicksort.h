/*
 * qucksort is simple really.  It uses three pointers to adjust an array.
 * The first pointer is the piviot pointer. It points to a location in the array
 * where values are sorted relative to this point.
 * 
 * Some algos pick the middle of the array, some pick the ends, some pick a random spot.
 * For this implementaiton, I pick the middle.
 * 
 * Once the middle (pivot) is picked, all values less than (or equal) to the pivot value
 * are placed to the left and all values greater are picked to the right.  This is using
 * the assumption that the desired sorted array increases in value with the smallets value
 * at the left and increasing in value as the elements are looked at.
 *
 * The result of this step is that although the values to the left and right are not
 * in their final places, the pivot is.  Also, the values in either side to the pivot
 * while not in their ideal final position, they are at least in the proper side. 
 *
 * The next step is to simply apply this procedure to both of the smaller arrays on either
 * side of the pivot point.
 *
 * This procedure also has the feature of being an in place sort.  No additional storage 
 * is necessary for moving of values if the moves are done using two additional pointers.
 * One pointer is used for the left side and one pointer is used for the right side.
 * The pointers start at the boundary to eithr side and moved to find values which need 
 * to be swapped to the other side.  Then you can use a single temporary variable to swap
 * them or the xor or +- tricks to swap them without a temporary variable.  This implementation
 * will use the xor method to swap two variables without the use of a temporary variable.
 *
 * Here is an more detailed explanation of the swap procedure.
 * use this as an array
 * index:	0	1	2	3	4
 * vals: 	9	1	3	0	5
 * desired:	0	1	3	5	9
 *
 * For simplicity the pivit is chosed to be index 2 and the value index 2 is 3 which is 
 * in the proper position in the final array. 
 * In this case, we will choose to use a L and R index to point to the values in the left
 * side of the piviot sub array and R to point to the ones on right.  Also, for simplicity
 * we will chose to advance both pointers positively. ie. index L and R will move forward.
 * some implementations move L forward from start of sub array towards piviot and R backwards
 * from the end of the array towards the piviot by decrementing the index.
 *
 * Set Index_Pivot = len/2
 * Set Index_L = 0
 * Set Inex_R = Index_Pivot + 1
 *
 * Look for Left side value is less than piviot. If vals[L] > vals[P] then it needs to be moved to right side.
 * If not advance L until a value is found.  Stop when L=P.
 * Look for Right side value which is less than or equal to piviot.
 * If L is found, but R is not or vice versa, swap found value with pivot.
 */


int selfCheck(int *buff,int *ans,int len);
int myquicksort(int *pArray, int iLen);



