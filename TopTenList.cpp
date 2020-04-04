//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
  _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
  _list[index-1] = link;
}

Hyperlink TopTenList::get(int index)
{
  return _list.at(index-1);
}

void TopTenList::display_forward() {
  for (int idx=0; idx < _list.size(); idx++) {
    std::cout << "Name <" << _list[idx].text << "> URL <";
    std::cout << _list[idx].url << ">" << std::endl;
  }
}

void TopTenList::display_backward() {
  for (int idx=_list.size()-1; idx >= 0; idx--) {
    std::cout << "Name <" << _list[idx].text << "> URL <";
    std::cout << _list[idx].url << ">" << std::endl;
  }
}
