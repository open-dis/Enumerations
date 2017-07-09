#include <sstream>
#include <cstddef>
#include <disenum/es_appear_sensoremitter.h>

namespace DIS {

namespace es_appear_sensoremitter {

  bitmask& bitmask::operator=(const unsigned int& i) {
    (*this) = *( reinterpret_cast<bitmask *> (const_cast<unsigned int*>(&i))) ;
	  return (*this);
  }

  bitmask::bitmask(const unsigned int& i) {
    (*this) = i ;
  }

  bitmask::bitmask() {
    (*this) = (unsigned int) 0;
  }

  unsigned int bitmask::getValue(){
    unsigned int val = *( reinterpret_cast<unsigned int *> (this));
    return val;
  }

  void bitmask::setValue(const unsigned int& i){
	  (*this) = i;
  }

	/*
	 **  PaintScheme implementation **
	 */

	hashMap<int,PaintScheme*> PaintScheme::enumerations;
	short PaintScheme::startBit = 0;
	short PaintScheme::endBit   = 0;

 PaintScheme PaintScheme::UNIFORM_COLOR(0, "Uniform color");
 PaintScheme PaintScheme::CAMOUFLAGE(1, "Camouflage");


	PaintScheme::PaintScheme(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	PaintScheme* PaintScheme::findEnumeration(int aVal) {
	  PaintScheme* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string PaintScheme::getDescriptionForValue(int aVal) {
	  PaintScheme* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	PaintScheme PaintScheme::getEnumerationForValue(int aVal) throw(EnumException) {
	  PaintScheme* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration PaintScheme";
		throw EnumException("PaintScheme", aVal, ss.str());
	  }
	};

	bool PaintScheme::enumerationForValueExists(int aVal) {
	  PaintScheme* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	PaintScheme::enumContainer PaintScheme::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  Mobility implementation **
	 */

	hashMap<int,Mobility*> Mobility::enumerations;
	short Mobility::startBit = 1;
	short Mobility::endBit   = 1;

 Mobility Mobility::NO_MOBILITY_KILL(0, "No mobility kill");
 Mobility Mobility::MOBILITY_KILL(1, "Mobility kill");


	Mobility::Mobility(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	Mobility* Mobility::findEnumeration(int aVal) {
	  Mobility* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string Mobility::getDescriptionForValue(int aVal) {
	  Mobility* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	Mobility Mobility::getEnumerationForValue(int aVal) throw(EnumException) {
	  Mobility* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration Mobility";
		throw EnumException("Mobility", aVal, ss.str());
	  }
	};

	bool Mobility::enumerationForValueExists(int aVal) {
	  Mobility* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	Mobility::enumContainer Mobility::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  Mission implementation **
	 */

	hashMap<int,Mission*> Mission::enumerations;
	short Mission::startBit = 2;
	short Mission::endBit   = 2;

 Mission Mission::NO_MISSION_KILL(0, "No mission kill");
 Mission Mission::MISSION_KILL(1, "Mission kill");


	Mission::Mission(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	Mission* Mission::findEnumeration(int aVal) {
	  Mission* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string Mission::getDescriptionForValue(int aVal) {
	  Mission* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	Mission Mission::getEnumerationForValue(int aVal) throw(EnumException) {
	  Mission* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration Mission";
		throw EnumException("Mission", aVal, ss.str());
	  }
	};

	bool Mission::enumerationForValueExists(int aVal) {
	  Mission* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	Mission::enumContainer Mission::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  Damage implementation **
	 */

	hashMap<int,Damage*> Damage::enumerations;
	short Damage::startBit = 3;
	short Damage::endBit   = 4;

 Damage Damage::NO_DAMAGE(0, "No damage");
 Damage Damage::SLIGHT_DAMAGE(1, "Slight damage");
 Damage Damage::MODERATE_DAMAGE(2, "Moderate damage");
 Damage Damage::DESTROYED(3, "Destroyed");


	Damage::Damage(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	Damage* Damage::findEnumeration(int aVal) {
	  Damage* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string Damage::getDescriptionForValue(int aVal) {
	  Damage* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	Damage Damage::getEnumerationForValue(int aVal) throw(EnumException) {
	  Damage* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration Damage";
		throw EnumException("Damage", aVal, ss.str());
	  }
	};

	bool Damage::enumerationForValueExists(int aVal) {
	  Damage* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	Damage::enumContainer Damage::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  Smoke implementation **
	 */

	hashMap<int,Smoke*> Smoke::enumerations;
	short Smoke::startBit = 5;
	short Smoke::endBit   = 6;

 Smoke Smoke::NOT_SMOKING(0, "Not smoking");
 Smoke Smoke::SMOKE_PLUME_RISING_FROM_THE_ENTITY(1, "Smoke plume rising from the entity");
 Smoke Smoke::ENTITY_IS_EMITTING_ENGINE_SMOKE(2, "Entity is emitting engine smoke");
 Smoke Smoke::ENTITY_IS_EMITTING_ENGINE_SMOKE_AND_SMOKE_PLUME_IS_RISING_FROM_THE_ENTITY(3, "Entity is emitting engine smoke, and smoke plume is rising from the entity");


	Smoke::Smoke(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	Smoke* Smoke::findEnumeration(int aVal) {
	  Smoke* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string Smoke::getDescriptionForValue(int aVal) {
	  Smoke* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	Smoke Smoke::getEnumerationForValue(int aVal) throw(EnumException) {
	  Smoke* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration Smoke";
		throw EnumException("Smoke", aVal, ss.str());
	  }
	};

	bool Smoke::enumerationForValueExists(int aVal) {
	  Smoke* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	Smoke::enumContainer Smoke::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  TrailingEffects implementation **
	 */

	hashMap<int,TrailingEffects*> TrailingEffects::enumerations;
	short TrailingEffects::startBit = 7;
	short TrailingEffects::endBit   = 8;

 TrailingEffects TrailingEffects::NONE(0, "None");
 TrailingEffects TrailingEffects::SMALL(1, "Small");
 TrailingEffects TrailingEffects::MEDIUM(2, "Medium");
 TrailingEffects TrailingEffects::LARGE(3, "Large");


	TrailingEffects::TrailingEffects(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	TrailingEffects* TrailingEffects::findEnumeration(int aVal) {
	  TrailingEffects* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string TrailingEffects::getDescriptionForValue(int aVal) {
	  TrailingEffects* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	TrailingEffects TrailingEffects::getEnumerationForValue(int aVal) throw(EnumException) {
	  TrailingEffects* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration TrailingEffects";
		throw EnumException("TrailingEffects", aVal, ss.str());
	  }
	};

	bool TrailingEffects::enumerationForValueExists(int aVal) {
	  TrailingEffects* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	TrailingEffects::enumContainer TrailingEffects::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  Lights implementation **
	 */

	hashMap<int,Lights*> Lights::enumerations;
	short Lights::startBit = 12;
	short Lights::endBit   = 12;

 Lights Lights::OFF(0, "Off");
 Lights Lights::ON(1, "On");


	Lights::Lights(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	Lights* Lights::findEnumeration(int aVal) {
	  Lights* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string Lights::getDescriptionForValue(int aVal) {
	  Lights* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	Lights Lights::getEnumerationForValue(int aVal) throw(EnumException) {
	  Lights* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration Lights";
		throw EnumException("Lights", aVal, ss.str());
	  }
	};

	bool Lights::enumerationForValueExists(int aVal) {
	  Lights* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	Lights::enumContainer Lights::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  Flaming implementation **
	 */

	hashMap<int,Flaming*> Flaming::enumerations;
	short Flaming::startBit = 15;
	short Flaming::endBit   = 15;

 Flaming Flaming::NONE(0, "None");
 Flaming Flaming::FLAMES_PRESENT(1, "Flames present");


	Flaming::Flaming(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	Flaming* Flaming::findEnumeration(int aVal) {
	  Flaming* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string Flaming::getDescriptionForValue(int aVal) {
	  Flaming* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	Flaming Flaming::getEnumerationForValue(int aVal) throw(EnumException) {
	  Flaming* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration Flaming";
		throw EnumException("Flaming", aVal, ss.str());
	  }
	};

	bool Flaming::enumerationForValueExists(int aVal) {
	  Flaming* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	Flaming::enumContainer Flaming::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  Antenna implementation **
	 */

	hashMap<int,Antenna*> Antenna::enumerations;
	short Antenna::startBit = 16;
	short Antenna::endBit   = 16;

 Antenna Antenna::NOT_RAISED(0, "Not raised");
 Antenna Antenna::RAISED(1, "Raised");


	Antenna::Antenna(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	Antenna* Antenna::findEnumeration(int aVal) {
	  Antenna* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string Antenna::getDescriptionForValue(int aVal) {
	  Antenna* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	Antenna Antenna::getEnumerationForValue(int aVal) throw(EnumException) {
	  Antenna* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration Antenna";
		throw EnumException("Antenna", aVal, ss.str());
	  }
	};

	bool Antenna::enumerationForValueExists(int aVal) {
	  Antenna* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	Antenna::enumContainer Antenna::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  CamouflageType implementation **
	 */

	hashMap<int,CamouflageType*> CamouflageType::enumerations;
	short CamouflageType::startBit = 17;
	short CamouflageType::endBit   = 18;

 CamouflageType CamouflageType::DESERT_CAMOUFLAGE(0, "Desert camouflage");
 CamouflageType CamouflageType::WINTER_CAMOUFLAGE(1, "Winter camouflage");
 CamouflageType CamouflageType::FOREST_CAMOUFLAGE(2, "Forest camouflage");


	CamouflageType::CamouflageType(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	CamouflageType* CamouflageType::findEnumeration(int aVal) {
	  CamouflageType* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string CamouflageType::getDescriptionForValue(int aVal) {
	  CamouflageType* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	CamouflageType CamouflageType::getEnumerationForValue(int aVal) throw(EnumException) {
	  CamouflageType* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration CamouflageType";
		throw EnumException("CamouflageType", aVal, ss.str());
	  }
	};

	bool CamouflageType::enumerationForValueExists(int aVal) {
	  CamouflageType* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	CamouflageType::enumContainer CamouflageType::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  Concealed implementation **
	 */

	hashMap<int,Concealed*> Concealed::enumerations;
	short Concealed::startBit = 19;
	short Concealed::endBit   = 19;

 Concealed Concealed::NOT_CONCEALED(0, "Not concealed");
 Concealed Concealed::ENTITY_IN_A_PREPARED_CONCEALED_POSITION_WITH_NETTING_ETC(1, "Entity in a prepared concealed position (with netting, etc.)");


	Concealed::Concealed(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	Concealed* Concealed::findEnumeration(int aVal) {
	  Concealed* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string Concealed::getDescriptionForValue(int aVal) {
	  Concealed* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	Concealed Concealed::getEnumerationForValue(int aVal) throw(EnumException) {
	  Concealed* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration Concealed";
		throw EnumException("Concealed", aVal, ss.str());
	  }
	};

	bool Concealed::enumerationForValueExists(int aVal) {
	  Concealed* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	Concealed::enumContainer Concealed::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  FrozenStatus implementation **
	 */

	hashMap<int,FrozenStatus*> FrozenStatus::enumerations;
	short FrozenStatus::startBit = 21;
	short FrozenStatus::endBit   = 21;

 FrozenStatus FrozenStatus::NOT_FROZEN(0, "Not frozen");
 FrozenStatus FrozenStatus::FROZEN_FROZEN_ENTITIES_SHOULD_NOT_BE_DEAD_RECKONED_IE_THEY_SHOULD_BE_DISPLAYED_AS_FIXED_AT_THE_CURRENT_LOCATION_EVEN_IF_NONZERO_VELOCITY_ACCELERATION_OR_ROTATION_DATA_IS_RECEIVED_FROM_THE_FROZEN_ENTITY(1, "Frozen (Frozen entities should not be dead-reckoned, i.e. they should be displayed as fixed at the current location even if nonzero velocity, acceleration or rotation data is received from the frozen entity)");


	FrozenStatus::FrozenStatus(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	FrozenStatus* FrozenStatus::findEnumeration(int aVal) {
	  FrozenStatus* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string FrozenStatus::getDescriptionForValue(int aVal) {
	  FrozenStatus* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	FrozenStatus FrozenStatus::getEnumerationForValue(int aVal) throw(EnumException) {
	  FrozenStatus* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration FrozenStatus";
		throw EnumException("FrozenStatus", aVal, ss.str());
	  }
	};

	bool FrozenStatus::enumerationForValueExists(int aVal) {
	  FrozenStatus* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	FrozenStatus::enumContainer FrozenStatus::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  Power_plantStatus implementation **
	 */

	hashMap<int,Power_plantStatus*> Power_plantStatus::enumerations;
	short Power_plantStatus::startBit = 22;
	short Power_plantStatus::endBit   = 22;

 Power_plantStatus Power_plantStatus::POWER_PLANT_OFF(0, "Power plant off");
 Power_plantStatus Power_plantStatus::POWER_PLANT_ON(1, "Power plant on");


	Power_plantStatus::Power_plantStatus(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	Power_plantStatus* Power_plantStatus::findEnumeration(int aVal) {
	  Power_plantStatus* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string Power_plantStatus::getDescriptionForValue(int aVal) {
	  Power_plantStatus* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	Power_plantStatus Power_plantStatus::getEnumerationForValue(int aVal) throw(EnumException) {
	  Power_plantStatus* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration Power_plantStatus";
		throw EnumException("Power_plantStatus", aVal, ss.str());
	  }
	};

	bool Power_plantStatus::enumerationForValueExists(int aVal) {
	  Power_plantStatus* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	Power_plantStatus::enumContainer Power_plantStatus::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  State implementation **
	 */

	hashMap<int,State*> State::enumerations;
	short State::startBit = 23;
	short State::endBit   = 23;

 State State::ACTIVE(0, "Active");
 State State::DEACTIVATED(1, "Deactivated");


	State::State(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	State* State::findEnumeration(int aVal) {
	  State* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string State::getDescriptionForValue(int aVal) {
	  State* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	State State::getEnumerationForValue(int aVal) throw(EnumException) {
	  State* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration State";
		throw EnumException("State", aVal, ss.str());
	  }
	};

	bool State::enumerationForValueExists(int aVal) {
	  State* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	State::enumContainer State::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  Tent implementation **
	 */

	hashMap<int,Tent*> Tent::enumerations;
	short Tent::startBit = 24;
	short Tent::endBit   = 24;

 Tent Tent::NOT_EXTENDED(0, "Not extended");
 Tent Tent::EXTENDED(1, "Extended");


	Tent::Tent(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	Tent* Tent::findEnumeration(int aVal) {
	  Tent* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string Tent::getDescriptionForValue(int aVal) {
	  Tent* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	Tent Tent::getEnumerationForValue(int aVal) throw(EnumException) {
	  Tent* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration Tent";
		throw EnumException("Tent", aVal, ss.str());
	  }
	};

	bool Tent::enumerationForValueExists(int aVal) {
	  Tent* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	Tent::enumContainer Tent::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  BlackoutLights implementation **
	 */

	hashMap<int,BlackoutLights*> BlackoutLights::enumerations;
	short BlackoutLights::startBit = 26;
	short BlackoutLights::endBit   = 26;

 BlackoutLights BlackoutLights::OFF(0, "Off");
 BlackoutLights BlackoutLights::ON(1, "On");


	BlackoutLights::BlackoutLights(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	BlackoutLights* BlackoutLights::findEnumeration(int aVal) {
	  BlackoutLights* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string BlackoutLights::getDescriptionForValue(int aVal) {
	  BlackoutLights* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	BlackoutLights BlackoutLights::getEnumerationForValue(int aVal) throw(EnumException) {
	  BlackoutLights* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration BlackoutLights";
		throw EnumException("BlackoutLights", aVal, ss.str());
	  }
	};

	bool BlackoutLights::enumerationForValueExists(int aVal) {
	  BlackoutLights* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	BlackoutLights::enumContainer BlackoutLights::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  InteriorLights implementation **
	 */

	hashMap<int,InteriorLights*> InteriorLights::enumerations;
	short InteriorLights::startBit = 29;
	short InteriorLights::endBit   = 29;

 InteriorLights InteriorLights::OFF(0, "Off");
 InteriorLights InteriorLights::ON(1, "On");


	InteriorLights::InteriorLights(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	InteriorLights* InteriorLights::findEnumeration(int aVal) {
	  InteriorLights* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string InteriorLights::getDescriptionForValue(int aVal) {
	  InteriorLights* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	InteriorLights InteriorLights::getEnumerationForValue(int aVal) throw(EnumException) {
	  InteriorLights* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration InteriorLights";
		throw EnumException("InteriorLights", aVal, ss.str());
	  }
	};

	bool InteriorLights::enumerationForValueExists(int aVal) {
	  InteriorLights* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	InteriorLights::enumContainer InteriorLights::getEnumerations() {
	  return (enumerations);
	};





}; /* namespace es_appear_sensoremitter */

} /* namespace DIS */
