//===---------------------------------------------------------------------===//
//	Copyright 2018 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cheerp/client.h>

void webMain()
{
	//Test JS Map
	client::Map* map = new client::Map;

	map->set<int,int>(42, 42);
	map->set<client::String*, int>(new client::String("fortytwo"), 42);
	assertEqual(map->get<int,int>(42), 42, "JS Map::get 1/2");
	assertEqual(map->get<client::String*,int>(new client::String("fortytwo")), 42, "JS Map::get 2/2");
	
	assertEqual(map->get_size(), 2, "JS Map::get_size() 1/2");
	map->set<int,double>(42, 42.0);
	assertEqual(map->get_size(), 2, "JS Map::get_size() 2/2");
	

	assertEqual(map->has<int>(42), true, "JS Map::has 1/2");
	assertEqual(map->has<client::String*>(new client::String("fortytwo-hundreds")), false, "JS Map::has 2/2");

	assertEqual(map->delete_<int>(43), false, "JS Map::get_delete_ 1/2");
	assertEqual(map->delete_<int>(42), true, "JS Map::get_delete_ 2/2");
	map->clear();
	assertEqual(map->get_size(), 0, "JS Map::clear 1/1");

	//Test JS TMap
	client::TMap<int, int>* tmap = new client::TMap<int,int>;

	tmap->set(42, 42);
	tmap->set(45, 74);
	assertEqual(tmap->get(42), 42, "JS TMap::get 1/2");
	assertEqual(tmap->get(45), 74, "JS TMap::get 2/2");
	
	assertEqual(tmap->get_size(), 2, "JS TMap::get_size() 1/2");
	tmap->set(45, -42);
	assertEqual(tmap->get_size(), 2, "JS TMap::get_size() 2/2");
	

	assertEqual(tmap->has(42), true, "JS TMap::has 1/2");
	assertEqual(tmap->has(43), false, "JS TMap::has 2/2");

	assertEqual(tmap->delete_(445), false, "JS TMap::get_delete_ 1/2");
	assertEqual(tmap->delete_(42), true, "JS TMap::get_delete_ 2/2");

	tmap->set(1,1);
	tmap->set(100213, 0);
	tmap->set(123123, 23);
	static int sum;
	sum = 0;
	tmap->forEach(cheerp::Callback([](int a, int b){
				sum += a;
				}));
	assertEqual(sum, 1 + 0 + 23 - 42, "JS Tmap::forEach 1/1");
	
	tmap->clear();
	assertEqual(tmap->get_size(), 0, "JS TMap::clear 1/1");
}
