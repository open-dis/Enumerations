#include <sstream>
#include <cstddef>
#include <disenum/CountryType.h>

namespace DIS {


hashMap<int,CountryType*> CountryType::enumerations;

CountryType CountryType::OTHER(0, "Other","Unknown");
CountryType CountryType::AFGHANISTAN(1, "Afghanistan","AF");
CountryType CountryType::ALBANIA(2, "Albania","AL");
CountryType CountryType::ALGERIA(3, "Algeria","DZ");
CountryType CountryType::AMERICAN_SAMOA_UNITED_STATES(4, "American Samoa (United States)","Unknown");
CountryType CountryType::ANDORRA(5, "Andorra","AD");
CountryType CountryType::ANGOLA(6, "Angola","AO");
CountryType CountryType::ANGUILLA(7, "Anguilla","AI");
CountryType CountryType::ANTARCTICA_INTERNATIONAL(8, "Antarctica (International)","Unknown");
CountryType CountryType::ANTIGUA_AND_BARBUDA(9, "Antigua and Barbuda","AG");
CountryType CountryType::ARGENTINA(10, "Argentina","AR");
CountryType CountryType::ARMENIA(244, "Armenia","AM");
CountryType CountryType::ARUBA(11, "Aruba","AW");
CountryType CountryType::ASHMORE_AND_CARTIER_ISLANDS_AUSTRALIA(12, "Ashmore and Cartier Islands (Australia)","Unknown");
CountryType CountryType::AUSTRALIA(13, "Australia","AU");
CountryType CountryType::AUSTRIA(14, "Austria","AT");
CountryType CountryType::AZERBAIJAN(245, "Azerbaijan","AZ");
CountryType CountryType::BAHAMAS(15, "Bahamas","BS");
CountryType CountryType::BAHRAIN(16, "Bahrain","BH");
CountryType CountryType::BAKER_ISLAND_UNITED_STATES(17, "Baker Island (United States)","Unknown");
CountryType CountryType::BANGLADESH(18, "Bangladesh","BD");
CountryType CountryType::BARBADOS(19, "Barbados","BB");
CountryType CountryType::BASSAS_DA_INDIA_FRANCE(20, "Bassas da India (France)","Unknown");
CountryType CountryType::BELARUS(246, "Belarus","BY");
CountryType CountryType::BELGIUM(21, "Belgium","BE");
CountryType CountryType::BELIZE(22, "Belize","BZ");
CountryType CountryType::BENIN_AKA_DAHOMEY(23, "Benin (aka Dahomey)","Unknown");
CountryType CountryType::BERMUDA_UNITED_KINGDOM(24, "Bermuda (United Kingdom)","Unknown");
CountryType CountryType::BHUTAN(25, "Bhutan","BT");
CountryType CountryType::BOLIVIA(26, "Bolivia","BO");
CountryType CountryType::BOSNIA_AND_HERCEGOVINA(247, "Bosnia and Hercegovina","Unknown");
CountryType CountryType::BOTSWANA(27, "Botswana","BW");
CountryType CountryType::BOUVET_ISLAND_NORWAY(28, "Bouvet Island (Norway)","Unknown");
CountryType CountryType::BRAZIL(29, "Brazil","BR");
CountryType CountryType::BRITISH_INDIAN_OCEAN_TERRITORY_UNITED_KINGDOM(30, "British Indian Ocean Territory (United Kingdom)","Unknown");
CountryType CountryType::BRITISH_VIRGIN_ISLANDS_UNITED_KINGDOM(31, "British Virgin Islands (United Kingdom)","Unknown");
CountryType CountryType::BRUNEI(32, "Brunei","Unknown");
CountryType CountryType::BULGARIA(33, "Bulgaria","BG");
CountryType CountryType::BURKINA_AKA_BURKINA_FASO_OR_UPPER_VOLTA(34, "Burkina (aka Burkina Faso or Upper Volta)","Unknown");
CountryType CountryType::BURMA_MYANMAR(35, "Burma (Myanmar)","Unknown");
CountryType CountryType::BURUNDI(36, "Burundi","BI");
CountryType CountryType::CAMBODIA_AKA_KAMPUCHEA(37, "Cambodia (aka Kampuchea)","Unknown");
CountryType CountryType::CAMEROON(38, "Cameroon","CM");
CountryType CountryType::CANADA(39, "Canada","CA");
CountryType CountryType::CAPE_VERDE_REPUBLIC_OF(40, "Cape Verde, Republic of","Unknown");
CountryType CountryType::CAYMAN_ISLANDS_UNITED_KINGDOM(41, "Cayman Islands (United Kingdom)","Unknown");
CountryType CountryType::CENTRAL_AFRICAN_REPUBLIC(42, "Central African Republic","CF");
CountryType CountryType::CHAD(43, "Chad","TD");
CountryType CountryType::CHILE(44, "Chile","CL");
CountryType CountryType::CHINA_PEOPLES_REPUBLIC_OF(45, "China, People's Republic of","Unknown");
CountryType CountryType::CHRISTMAS_ISLAND_AUSTRALIA(46, "Christmas Island (Australia)","Unknown");
CountryType CountryType::CLIPPERTON_ISLAND_FRANCE(248, "Clipperton Island (France)","Unknown");
CountryType CountryType::COCOS_KEELING_ISLANDS_AUSTRALIA(47, "Cocos (Keeling) Islands (Australia)","Unknown");
CountryType CountryType::COLOMBIA(48, "Colombia","CO");
CountryType CountryType::COMMONWEALTH_OF_INDEPENDENT_STATES(222, "Commonwealth of Independent States","Unknown");
CountryType CountryType::COMOROS(49, "Comoros","KM");
CountryType CountryType::CONGO_REPUBLIC_OF(50, "Congo, Republic of","Unknown");
CountryType CountryType::COOK_ISLANDS_NEW_ZEALAND(51, "Cook Islands (New Zealand)","Unknown");
CountryType CountryType::CORAL_SEA_ISLANDS_AUSTRALIA(52, "Coral Sea Islands (Australia)","Unknown");
CountryType CountryType::COSTA_RICA(53, "Costa Rica","CR");
CountryType CountryType::COTE_DIVOIRE_AKA_IVORY_COAST(107, "(Cote D'Ivoire (aka Ivory Coast)","Unknown");
CountryType CountryType::CROATIA(249, "Croatia","Unknown");
CountryType CountryType::CUBA(54, "Cuba","CU");
CountryType CountryType::CYPRUS(55, "Cyprus","CY");
CountryType CountryType::CZECHOSLOVAKIA_SEPARATING_INTO_CZECH_REPUBLIC_AND_SLOVAK_REPUBLIC(56, "Czechoslovakia (separating into Czech Republic and Slovak Republic)","Unknown");
CountryType CountryType::DAHOMEY_AKA_BENIN(23, "Dahomey (aka Benin)","Unknown");
CountryType CountryType::DENMARK(57, "Denmark","DK");
CountryType CountryType::DJIBOUTI(58, "Djibouti","DJ");
CountryType CountryType::DOMINICA(59, "Dominica","DM");
CountryType CountryType::DOMINICAN_REPUBLIC(60, "Dominican Republic","DO");
CountryType CountryType::ECUADOR(61, "Ecuador","EC");
CountryType CountryType::EGYPT(62, "Egypt","EG");
CountryType CountryType::EL_SALVADOR(63, "El Salvador","SV");
CountryType CountryType::EQUATORIAL_GUINEA(64, "Equatorial Guinea","GQ");
CountryType CountryType::ESTONIA(250, "Estonia","EE");
CountryType CountryType::ETHIOPIA(65, "Ethiopia","ET");
CountryType CountryType::EUROPA_ISLAND_FRANCE(66, "Europa Island (France)","Unknown");
CountryType CountryType::FALKLAND_ISLANDS_AKA_ISLAS_MALVINAS_UNITED_KINGDOM(67, "Falkland Islands (aka Islas Malvinas) (United Kingdom)","Unknown");
CountryType CountryType::FAROE_ISLANDS_DENMARK(68, "Faroe Islands (Denmark)","Unknown");
CountryType CountryType::FIJI(69, "Fiji","FJ");
CountryType CountryType::FINLAND(70, "Finland","FI");
CountryType CountryType::FRANCE(71, "France","FR");
CountryType CountryType::FRENCH_GUIANA_FRANCE(72, "French Guiana (France)","Unknown");
CountryType CountryType::FRENCH_POLYNESIA_FRANCE(73, "French Polynesia (France)","Unknown");
CountryType CountryType::FRENCH_SOUTHERN_AND_ANTARCTIC_ISLANDS_FRANCE(74, "French Southern and Antarctic Islands (France)","Unknown");
CountryType CountryType::GABON(75, "Gabon","GA");
CountryType CountryType::GAMBIA_THE(76, "Gambia, The","Unknown");
CountryType CountryType::GAZA_STRIP_ISRAEL(77, "Gaza Strip (Israel)","Unknown");
CountryType CountryType::GEORGIA(251, "Georgia","GE");
CountryType CountryType::GERMANY(78, "Germany","DE");
CountryType CountryType::GHANA(79, "Ghana","GH");
CountryType CountryType::GIBRALTAR_UNITED_KINGDOM(80, "Gibraltar (United Kingdom)","Unknown");
CountryType CountryType::GLORIOSO_ISLANDS_FRANCE(81, "Glorioso Islands (France)","Unknown");
CountryType CountryType::GREECE(82, "Greece","GR");
CountryType CountryType::GREENLAND_DENMARK(83, "Greenland (Denmark)","Unknown");
CountryType CountryType::GRENADA(84, "Grenada","GD");
CountryType CountryType::GUADALOUPE_FRANCE(85, "Guadaloupe (France)","Unknown");
CountryType CountryType::GUAM_UNITED_STATES(86, "Guam (United States)","Unknown");
CountryType CountryType::GUATEMALA(87, "Guatemala","GT");
CountryType CountryType::GUERNSEY_UNITED_KINGDOM(88, "Guernsey (United Kingdom)","Unknown");
CountryType CountryType::GUINEA(89, "Guinea","GN");
CountryType CountryType::GUINEA_BISSAU(90, "Guinea- Bissau","Unknown");
CountryType CountryType::GUYANA(91, "Guyana","GY");
CountryType CountryType::HAITI(92, "Haiti","HT");
CountryType CountryType::HEARD_ISLAND_AND_MCDONALD_ISLANDS_AUSTRALIA(93, "Heard Island and McDonald Islands (Australia)","Unknown");
CountryType CountryType::HONDURAS(94, "Honduras","HN");
CountryType CountryType::HONG_KONG_UNITED_KINGDOM(95, "Hong Kong (United Kingdom)","Unknown");
CountryType CountryType::HOWLAND_ISLAND_UNITED_STATES(96, "Howland Island (United States)","Unknown");
CountryType CountryType::HUNGARY(97, "Hungary","HU");
CountryType CountryType::ICELAND(98, "Iceland","IS");
CountryType CountryType::INDIA(99, "India","IN");
CountryType CountryType::INDONESIA(100, "Indonesia","ID");
CountryType CountryType::IRAN(101, "Iran","IR");
CountryType CountryType::IRAQ(102, "Iraq","IQ");
CountryType CountryType::IRELAND(104, "Ireland","IE");
CountryType CountryType::ISRAEL(105, "Israel","IL");
CountryType CountryType::ITALY(106, "Italy","IT");
CountryType CountryType::IVORY_COAST_AKA_COTE_DIVOIRE(107, "Ivory Coast (aka Cote D'Ivoire)","Unknown");
CountryType CountryType::JAMAICA(108, "Jamaica","JM");
CountryType CountryType::JAN_MAYEN_NORWAY(109, "Jan Mayen (Norway)","Unknown");
CountryType CountryType::JAPAN(110, "Japan","JP");
CountryType CountryType::JARVIS_ISLAND_UNITED_STATES(111, "Jarvis Island (United States)","Unknown");
CountryType CountryType::JERSEY_UNITED_KINGDOM(112, "Jersey (United Kingdom)","Unknown");
CountryType CountryType::JOHNSTON_ATOLL_UNITED_STATES(113, "Johnston Atoll (United States)","Unknown");
CountryType CountryType::JORDAN(114, "Jordan","JO");
CountryType CountryType::JUAN_DE_NOVA_ISLAND(115, "Juan de Nova Island","Unknown");
CountryType CountryType::KAZAKHSTAN(252, "Kazakhstan","KZ");
CountryType CountryType::KENYA(116, "Kenya","KE");
CountryType CountryType::KINGMAN_REEF_UNITED_STATES(117, "Kingman Reef (United States)","Unknown");
CountryType CountryType::KIRIBATI(118, "Kiribati","KI");
CountryType CountryType::KOREA_DEMOCRATIC_PEOPLES_REPUBLIC_OF_NORTH(119, "Korea, Democratic People's Republic of (North)","Unknown");
CountryType CountryType::KOREA_REPUBLIC_OF_SOUTH(120, "Korea, Republic of (South)","Unknown");
CountryType CountryType::KUWAIT(121, "Kuwait","KW");
CountryType CountryType::KYRGYZSTAN(253, "Kyrgyzstan","KG");
CountryType CountryType::LAOS(122, "Laos","LA");
CountryType CountryType::LATVIA(254, "Latvia","LV");
CountryType CountryType::LEBANON(123, "Lebanon","LB");
CountryType CountryType::LESOTHO(124, "Lesotho","LS");
CountryType CountryType::LIBERIA(125, "Liberia","LR");
CountryType CountryType::LIBYA(126, "Libya","LY");
CountryType CountryType::LIECHTENSTEIN(127, "Liechtenstein","LI");
CountryType CountryType::LITHUANIA(255, "Lithuania","LT");
CountryType CountryType::LUXEMBOURG(128, "Luxembourg","LU");
CountryType CountryType::MACAU_PORTUGAL(130, "Macau (Portugal)","Unknown");
CountryType CountryType::MACEDONIA(256, "Macedonia","MK");
CountryType CountryType::MADAGASCAR(129, "Madagascar","MG");
CountryType CountryType::MALAWI(131, "Malawi","MW");
CountryType CountryType::MALAYSIA(132, "Malaysia","MY");
CountryType CountryType::MALDIVES(133, "Maldives","MV");
CountryType CountryType::MALI(134, "Mali","ML");
CountryType CountryType::MALTA(135, "Malta","MT");
CountryType CountryType::MAN_ISLE_OF_UNITED_KINGDOM(136, "Man, Isle of (United Kingdom)","Unknown");
CountryType CountryType::MARSHALL_ISLANDS(137, "Marshall Islands","MH");
CountryType CountryType::MARTINIQUE_FRANCE(138, "Martinique (France)","Unknown");
CountryType CountryType::MAURITANIA(139, "Mauritania","MR");
CountryType CountryType::MAURITIUS(140, "Mauritius","MU");
CountryType CountryType::MAYOTTE_FRANCE(141, "Mayotte (France)","Unknown");
CountryType CountryType::MEXICO(142, "Mexico","MX");
CountryType CountryType::MICRONESIA_FEDERATIVE_STATES_OF(143, "Micronesia, Federative States of","Unknown");
CountryType CountryType::MIDWAY_ISLANDS_UNITED_STATES(257, "Midway Islands (United States)","Unknown");
CountryType CountryType::MOLDOVA(258, "Moldova","MD");
CountryType CountryType::MONACO(144, "Monaco","MC");
CountryType CountryType::MONGOLIA(145, "Mongolia","MN");
CountryType CountryType::MONTENEGRO(259, "Montenegro","Unknown");
CountryType CountryType::MONTSERRAT_UNITED_KINGDOM(146, "Montserrat (United Kingdom)","Unknown");
CountryType CountryType::MOROCCO(147, "Morocco","MA");
CountryType CountryType::MOZAMBIQUE(148, "Mozambique","MZ");
CountryType CountryType::MYANMAR_AKA_BURMA(35, "Myanmar (aka Burma)","Unknown");
CountryType CountryType::NAMIBIA_SOUTH_WEST_AFRICA(149, "Namibia (South West Africa)","Unknown");
CountryType CountryType::NAURU(150, "Nauru","NR");
CountryType CountryType::NAVASSA_ISLAND_UNITED_STATES(151, "Navassa Island (United States)","Unknown");
CountryType CountryType::NEPAL(152, "Nepal","NP");
CountryType CountryType::NETHERLANDS(153, "Netherlands","NL");
CountryType CountryType::NETHERLANDS_ANTILLES_CURACAO_BONAIRE_SABA_SINT_MAARTEN_SINT_EUSTATIUS(154, "Netherlands Antilles (Curacao, Bonaire, Saba, Sint Maarten Sint Eustatius)","Unknown");
CountryType CountryType::NEW_CALEDONIA_FRANCE(155, "New Caledonia (France)","Unknown");
CountryType CountryType::NEW_ZEALAND(156, "New Zealand","Unknown");
CountryType CountryType::NICARAGUA(157, "Nicaragua","NI");
CountryType CountryType::NIGER(158, "Niger","NE");
CountryType CountryType::NIGERIA(159, "Nigeria","NG");
CountryType CountryType::NIUE_NEW_ZEALAND(160, "Niue (New Zealand)","Unknown");
CountryType CountryType::NORFOLK_ISLAND_AUSTRALIA(161, "Norfolk Island (Australia)","Unknown");
CountryType CountryType::NORTHERN_MARIANA_ISLANDS_UNITED_STATES(162, "Northern Mariana Islands (United States)","Unknown");
CountryType CountryType::NORWAY(163, "Norway","NO");
CountryType CountryType::OMAN(164, "Oman","OM");
CountryType CountryType::PACIFIC_ISLANDS_TRUST_TERRITORY_OF_THE_PALAU(216, "Pacific Islands, Trust Territory of the (Palau)","Unknown");
CountryType CountryType::PAKISTAN(165, "Pakistan","PK");
CountryType CountryType::PALMYRA_ATOLL_UNITED_STATES(166, "Palmyra Atoll (United States)","Unknown");
CountryType CountryType::PANAMA(168, "Panama","PA");
CountryType CountryType::PAPUA_NEW_GUINEA(169, "Papua New Guinea","PG");
CountryType CountryType::PARACEL_ISLANDS_INTERNATIONAL_OCCUPIED_BY_CHINA_ALSO_CLAIMED_BY_TAIWAN_AND_VIETNAM(170, "Paracel Islands (International - Occupied by China, also claimed by Taiwan and Vietnam)","Unknown");
CountryType CountryType::PARAGUAY(171, "Paraguay","PY");
CountryType CountryType::PERU(172, "Peru","PE");
CountryType CountryType::PHILIPPINES(173, "Philippines","PH");
CountryType CountryType::PITCAIRN_ISLANDS_UNITED_KINGDOM(174, "Pitcairn Islands (United Kingdom)","Unknown");
CountryType CountryType::POLAND(175, "Poland","PL");
CountryType CountryType::PORTUGAL(176, "Portugal","PT");
CountryType CountryType::PUERTO_RICO_UNITED_STATES(177, "Puerto Rico (United States)","Unknown");
CountryType CountryType::QATAR(178, "Qatar","QA");
CountryType CountryType::REUNION_FRANCE(179, "Reunion (France)","Unknown");
CountryType CountryType::ROMANIA(180, "Romania","RO");
CountryType CountryType::RUSSIA(260, "Russia","Unknown");
CountryType CountryType::RWANDA(181, "Rwanda","RW");
CountryType CountryType::ST_HELENA_UNITED_KINGDOM(183, "St. Helena (United Kingdom)","Unknown");
CountryType CountryType::ST_LUCIA(184, "St. Lucia","Unknown");
CountryType CountryType::ST_VINCENT_AND_THE_GRENADINES(186, "St. Vincent and the Grenadines","Unknown");
CountryType CountryType::ST_KITTS_AND_NEVIS(182, "St. Kitts and Nevis","Unknown");
CountryType CountryType::ST_PIERRE_AND_MIQUELON_FRANCE(185, "St. Pierre and Miquelon (France)","Unknown");
CountryType CountryType::SAN_MARINO(187, "San Marino","SM");
CountryType CountryType::SAO_TOME_AND_PRINCIPE(188, "Sao Tome and Principe","ST");
CountryType CountryType::SAUDI_ARABIA(189, "Saudi Arabia","SA");
CountryType CountryType::SENEGAL(190, "Senegal","SN");
CountryType CountryType::SERBIA_AND_MONTENEGRO_MONTENEGRO_TO_SEPARATE(261, "Serbia and Montenegro (Montenegro to separate)","Unknown");
CountryType CountryType::SEYCHELLES(191, "Seychelles","SC");
CountryType CountryType::SIERRA_LEONE(192, "Sierra Leone","SL");
CountryType CountryType::SINGAPORE(193, "Singapore","SG");
CountryType CountryType::SLOVENIA(262, "Slovenia","SI");
CountryType CountryType::SOLOMON_ISLANDS(194, "Solomon Islands","SB");
CountryType CountryType::SOMALIA(195, "Somalia","SO");
CountryType CountryType::SOUTH_AFRICA(197, "South Africa","ZA");
CountryType CountryType::SOUTH_GEORGIA_AND_THE_SOUTH_SANDWICH_ISLANDS_UNITED_KINGDOM(196, "South Georgia and the South Sandwich Islands (United Kingdom)","Unknown");
CountryType CountryType::SPAIN(198, "Spain","ES");
CountryType CountryType::SPRATLY_ISLANDS_INTERNATIONAL_PARTS_OCCUPIED_AND_CLAIMED_BY_CHINAMALAYSIA_PHILIPPINES_TAIWAN_VIETNAM(199, "Spratly Islands (International - parts occupied and claimed by China,Malaysia, Philippines, Taiwan, Vietnam)","Unknown");
CountryType CountryType::SRI_LANKA(200, "Sri Lanka","LK");
CountryType CountryType::SUDAN(201, "Sudan","SD");
CountryType CountryType::SURINAME(202, "Suriname","SR");
CountryType CountryType::SVALBARD_NORWAY(203, "Svalbard (Norway)","Unknown");
CountryType CountryType::SWAZILAND(204, "Swaziland","SZ");
CountryType CountryType::SWEDEN(205, "Sweden","SE");
CountryType CountryType::SWITZERLAND(206, "Switzerland","CH");
CountryType CountryType::SYRIA(207, "Syria","SY");
CountryType CountryType::TAIWAN(208, "Taiwan","TW");
CountryType CountryType::TAJIKISTAN(263, "Tajikistan","TJ");
CountryType CountryType::TANZANIA(209, "Tanzania","TZ");
CountryType CountryType::THAILAND(210, "Thailand","TH");
CountryType CountryType::TOGO(211, "Togo","TG");
CountryType CountryType::TOKELAU_NEW_ZEALAND(212, "Tokelau (New Zealand)","Unknown");
CountryType CountryType::TONGA(213, "Tonga","TO");
CountryType CountryType::TRINIDAD_AND_TOBAGO(214, "Trinidad and Tobago","TT");
CountryType CountryType::TROMELIN_ISLAND_FRANCE(215, "Tromelin Island (France)","Unknown");
CountryType CountryType::TUNISIA(217, "Tunisia","TN");
CountryType CountryType::TURKEY(218, "Turkey","TR");
CountryType CountryType::TURKMENISTAN(264, "Turkmenistan","TM");
CountryType CountryType::TURKS_AND_CAICOS_ISLANDS_UNITED_KINGDOM(219, "Turks and Caicos Islands (United Kingdom)","Unknown");
CountryType CountryType::TUVALU(220, "Tuvalu","TV");
CountryType CountryType::UGANDA(221, "Uganda","UG");
CountryType CountryType::UKRAINE(265, "Ukraine","UA");
CountryType CountryType::UNITED_ARAB_EMIRATES(223, "United Arab Emirates","AE");
CountryType CountryType::UNITED_KINGDOM(224, "United Kingdom","UK");
CountryType CountryType::UNITED_STATES(225, "United States","US");
CountryType CountryType::UPPER_VOLTA_AKA_BURKINA_OR_BURKINA_FASO(34, "Upper Volta (aka Burkina or Burkina Faso)","Unknown");
CountryType CountryType::URUGUAY(226, "Uruguay","UY");
CountryType CountryType::UZBEKISTAN(266, "Uzbekistan","UZ");
CountryType CountryType::VANUATU(227, "Vanuatu","VU");
CountryType CountryType::VATICAN_CITY_HOLY_SEE(228, "Vatican City (Holy See)","Unknown");
CountryType CountryType::VENEZUELA(229, "Venezuela","VE");
CountryType CountryType::VIETNAM(230, "Vietnam","Unknown");
CountryType CountryType::VIRGIN_ISLANDS_UNITED_STATES(231, "Virgin Islands (United States)","Unknown");
CountryType CountryType::WAKE_ISLAND_UNITED_STATES(232, "Wake Island (United States)","Unknown");
CountryType CountryType::WALLIS_AND_FUTUNA_FRANCE(233, "Wallis and Futuna (France)","Unknown");
CountryType CountryType::WEST_BANK_ISRAEL(235, "West Bank (Israel)","Unknown");
CountryType CountryType::WESTERN_SAHARA(234, "Western Sahara","EH");
CountryType CountryType::WESTERN_SAMOA(236, "Western Samoa","Unknown");
CountryType CountryType::YEMEN(237, "Yemen","YE");
CountryType CountryType::SERBIA_AND_MONTENEGRO(240, "Serbia and Montenegro","CS");
CountryType CountryType::ZAIRE(241, "Zaire","Unknown");
CountryType CountryType::ZAMBIA(242, "Zambia","ZM");
CountryType CountryType::ZIMBABWE(243, "Zimbabwe","ZW");


CountryType::CountryType(int _value, std::string _description, std::string _internetDomainCode ) :
  Enumeration(_value, _description),
  internetDomainCode(_internetDomainCode) {
  enumerations[value] = this;
};

CountryType* CountryType::findEnumeration(int aVal) {
  CountryType* pEnum;
  enumContainer::iterator enumIter = enumerations.find(aVal);
  if (enumIter == enumerations.end()) pEnum = NULL;
  else pEnum = (*enumIter).second;
  return pEnum;
};

std::string CountryType::getDescriptionForValue(int aVal) {
  CountryType* pEnum = findEnumeration(aVal);
  if (pEnum) return pEnum->description;
  else {
    std::stringstream ss;
    ss <<  "Invalid enumeration: " << aVal;
    return (ss.str());
  }
};

CountryType CountryType::getEnumerationForValue(int aVal) throw(EnumException) {
  CountryType* pEnum = findEnumeration(aVal);
  if (pEnum) return (*pEnum);
  else {
    std::stringstream ss;
    ss << "No enumeration found for value " << aVal << " of enumeration CountryType";
          throw EnumException("CountryType", aVal, ss.str());
  }
};

bool CountryType::enumerationForValueExists(int aVal) {
  CountryType* pEnum = findEnumeration(aVal);
  if (pEnum) return (true);
  else       return (false);
};

CountryType::enumContainer CountryType::getEnumerations() {
  return (enumerations);
};

}  /* namespace DIS */
