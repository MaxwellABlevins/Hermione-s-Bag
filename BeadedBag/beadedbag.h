#ifndef __BEADEDBAG_BEADEDBAG_HPP
#define __BEADEDBAG_BEADEDBAG_HPP

#include "item.h"
#include <vector>

class BeadedBag {
private:
	// Create a vector of Items to store the items in the bag.
	std::vector<Item> items;

public:
  // Place your member function declarations here.

  // Here's the declaration for contains, to get you started:
  bool contains(Item maybe_contained_item);
  int size();
  void insert(Item to_insert);
};	

#endif