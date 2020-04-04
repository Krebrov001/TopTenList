//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::cout;
using std::endl;

TopTenList::TopTenList()
{
    _list.resize(10);
}

void TopTenList::set_at(int index, const Hyperlink& link)
{
    _list.at(index - 1) = link;
}

Hyperlink TopTenList::get(int index)
{
    return _list.at(index - 1);
}

void TopTenList::display_forward()
{
    size_t number = 1;
    auto it = _list.cbegin();
    auto end = _list.cend();
    for (; it != end; ++it, ++number) {
        cout << number << " : " << it->text << '\t' << it->url << endl;
    }
    cout << endl;
}


void TopTenList::display_backward()
{
    size_t number = _list.size();
    auto it = _list.crbegin();
    auto end = _list.crend();
    for (; it != end; ++it, --number) {
        cout << number << " : " << it->text << '\t' << it->url << endl;
    }
    cout << endl;
}
