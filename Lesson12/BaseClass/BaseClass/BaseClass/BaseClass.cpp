//Базовый класс решает проблему алмаза смерти. это когда при наследовании от одногог и тогож ерод классса у дочерных создаются отдельные родительские классы

#include <iostream>

class father
{

};

class son :virtual public father
{

};

class daugther :virtual public father
{

};

