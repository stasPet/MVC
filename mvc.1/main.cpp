#include "boost/property_tree/xml_parser.hpp"
#include "boost/property_tree/ptree.hpp"

#include <istream>

int main()
{
  using namespace boost::property_tree;

  ptree pTree;
  std::ifstream	iFStream{ R"(menuTree.xml)" };

  xml_parser::read_xml( iFStream, pTree );
}