#ifndef PAGE
#define PAGE
#include "headers/JsonConvertable.h"
#include <string>
#include <iostream>
#include "JData.h"
#include "JLocation.h"
#include <vector>
#include <map>

class Page : public JsonConvertable
{
  public:
	Page();
	virtual void fromJson(JSONEntity *e);
	virtual std::string toJson();

	std::vector<Data> datas;
	std::map<std::string,Location> locations;

	std::string date;
	std::string type;
	std::string id;
	std::string piff_version;
	std::string url;

};

#endif
