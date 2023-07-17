#include "boost/property_tree/xml_parser.hpp"
#include "boost/property_tree/ptree.hpp"

#include <fstream>

using namespace boost::property_tree;

struct MyTree
{
  std::string value;
  std::vector< void * > nodes;

  void parseXML( const ptree & pTree )
  {
    std::string v;
    pTree.get_value(v);

    for ( auto & r : pTree )
    {
      auto t{ r };
    }
  }
};

int main()
{
  ptree pTree;
  std::ifstream	iFStream{ R"(menuTree.xml)" };

  xml_parser::read_xml( iFStream, pTree );
  
  MyTree myTree;
  myTree.parseXML( pTree );
}