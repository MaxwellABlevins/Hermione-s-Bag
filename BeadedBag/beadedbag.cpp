#include <algorithm>
#include "beadedbag.h"
#include "item.h"
#include <vector>



// Implement the BeadedBag::size and BeadedBag::insert member functions here.

/*
 * size
 * 
 * Returns the number of items in the items vector.
 * 
 * input: No input but uses the items vector.
 * output: returns the number of items in the items vector.
 *
 */

int BeadedBag::size() {
	return items.size();
}

/*
 * contains
 * 
 * Checks if any of the items in the array are equal to the item to be inserted.
 * 
 * input: an Item
 * output: returns true if the item is in the items vector, false otherwise.
 *
 */

bool BeadedBag::contains(Item maybe_contained_item) {
	for (Item i : items) {
		if (i.isEqual(maybe_contained_item)) {
			return true;
		}
	}
	return false;
}

/*
 * insert
 *
 * Checks if any of the items in the array are equal to the item to the item to be inserted.
 *
 * input: an Item to be inserted
 * output: Does not return anything, but adds the item to the items vector if it is not already in the vector.
 */
void BeadedBag::insert(Item to_insert) {
	if (!contains(to_insert)) {
		items.push_back(to_insert);
	}
}



