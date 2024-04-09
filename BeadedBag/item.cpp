#include <string>
#include "item.h"

Item::Item(const std::string &item_name): m_name(item_name) {}

/*
 * getName
 *
 * Returns just the string of the item's name.
 *
 * input: No input needed
 * output: outputs the string member variable m_name.
 */
std::string Item::getName() {
	return m_name;
}

/*
 * isEqual
 *
 * Tests if the name of the item is equal to the name of another item.
 *
 * input: A different item to compare to.
 * output: Returns true if the names are equal, false otherwise.
 */
bool Item::isEqual(Item other_item) {
	if (m_name == other_item.getName()) {
		return true;
	}

	return false;
}