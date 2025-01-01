#include <iostream>
#include <vector>

// typedef std::vector< std::pair<std::string, int> > pairlist_t;
// typedef std::string text_t;

using pairlist_t = std::vector< std::pair<std::string, int> >;
using text_t = std::string;

int main() {

    // typedef = reserved keyword used to create an additional name
    //           (alias)  for another data type.
    //           New identifier for an existing type.
    //           Helps with code readability and reduces typos.
    //           Replaced with 'using' (work better with templates).

    pairlist_t pairlist;
    pairlist.push_back(std::make_pair("Seif", 22));
    pairlist.push_back(std::make_pair("Ahmed", 23));

    text_t text = "Hello, World!";
    std::cout << text << std::endl;

  return 0;
}