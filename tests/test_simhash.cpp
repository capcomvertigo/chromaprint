#include <gtest/gtest.h>
#include "simhash.h"
#include "utils.h"

using namespace Chromaprint;

TEST(SimHash, Empty)
{
    ASSERT_EQ(0, SimHash(std::vector<int32_t>()));
}

TEST(SimHash, Normal)
{
    int32_t data[948] = {-1518991452,-1511651436,-1511579771,-1528353403,-1528469033,-1528501962,-1511724778,-1511543546,-1477991162,-1478183674,-1502310138,-1506504441,-1506482827,-1489541659,-1489619548,-1485437532,-1510078540,-1511127164,-1528353403,-1527829033,-1528469130,-1511720650,-1511741178,-1478185722,-1477139194,-1502300922,-1506504441,-1506499307,-1489640091,-1489607196,-1485437020,-1518991452,-1511061628,-1527826556,-1527828587,-1526896137,-1527907978,-1511720682,-1511741178,-1478185722,-1478187770,-1502310138,-1506504441,-1506482891,-1489541659,-1489619548,-1485437020,-1510078540,-1511061627,-1528352891,-1531105897,-1531090442,-1532692202,-1511741178,-1511740154,-1478187770,-1485523706,-1506504441,-1506482921,-1489640091,-1489607195,-1485437020,-1518991451,-1511061627,-1527824507,-1527829113,-1526896137,-1527383690,-1511737082,-1511740154,-1478187770,-1493912314,-1506504441,-1506495225,-1506417307,-1489607195,-1489619036,-1518991451,-1511127147,-1527834747,-1527828603,-1532155433,-1532106378,-1515914986,-1515935482,-1478185722,-1478187770,-1502301946,-1506508537,-1506482891,-1489541659,-1489623644,-1518991452,-1518991451,-1528363131,-1528352891,-1527435881,-1527486089,-1511659210,-1511675642,-1478185722,-1477139194,-1502301946,-1506504441,-1506483939,-1489639955,-1489605148,-1518985308,-1518989404,-1510535532,-1527302523,-1527437691,-1527419177,-1510609130,-1510675178,-1510691818,-1481262058,-1477143546,-1502309370,-1508577209,-434870827,-434756188,-415879260,-445247580,-437907532,-454621308,-459200571,-459247673,-459215018,-454956282,-168580858,-135021306,-135166714,-428829674,-432999337,-164600619,-147771996,-183358044,-177070172,-168687968,-168622448,-169789756,-174053819,-241111289,-207574778,-207378170,-136135418,-136149758,-144670458,-147803385,-181341379,-466589844,-466472980,-462280212,-453899804,-441249884,-441448828,-405790003,-405773617,-212797746,-210506258,-504190746,-508315418,-508457770,-235866938,1932534159,1930441613,1930568684,1915889644,1936856420,1944259940,1906313541,1906339141,1906371911,1889648454,1894956870,1911729990,1936891142,1936885046,1935705190,1935696999,1935680743,1902128629,1886531045,1886533092,1894909920,1894777456,1894838788,1910546948,1910552069,1927327253,-220026347,-220026091,-220029161,-160267513,-143604977,-181374401,-198158807,-197973207,-194893779,-185460627,-185579027,-168802355,-179281267,2001760911,1980842638,1930589094,1934812326,1911745702,-172897118,1974498438,1978687623,1399857613,1378957149,1383218988,1382169892,1407388961,1373635889,1352671493,1352725255,1356976982,1424160326,1416802119,1429389059,1395821841,1377864993,1382081892,1390470500,1408268276,1374830549,1355952117,1347567523,1364264418,1364197858,1364222290,1408299330,1390540098,1390586946,1407364163,1398967619,1398966083,1366327891,1362141814,1345385062,1882324582,1886579046,1893886055,-253671323,1911604565,1903223300,1932648964,1932612101,1932752501,1903356389,1911744743,1907574951,1940999303,1945118087,1397760903,1381040783,1381118975,1383212135,1399002147,1373637667,1373662227,1356915719,1352711495,1358085959,1374863175,1397931331,1379044675,1379110177,1382085985,1407247719,1373660535,1358067031,1358069223,1347556833,1347438433,1364214641,1366352385,1399894529,1391504977,1391700545,1391635395,1391640515,1383237443,1467056711,1362162199,-265230801,-265261521,-261986001,-186484691,-186529755,-185545355,-168758715,-212802875,-233745785,-216894826,-212703834,-237868894,-242071390,-256685950,1353786498,1374692806,1399859142,1383282022,-697160666,-966649822,-941619166,-941615086,-975116030,-710824190,-1800225022,-1648969982,-1651067646,-1650555343,-1615296992,-1619484128,-1641487776,-567803168,-567737696,-30797152,-163958620,1999438061,1973814334,1889668106,815933450,279062538,279063562,14740507,299955499,291799915,828670569,828691033,807727737,874897979,879190827,342258986,484924714,484825466,484948298,1567079370,1601018826,2145951706,-5664262,-5663814,-22310216,-559238472,-559177048,-567745876,-566746460,-566684960,-567659676,1982738468,2003238959,1973816334,815933450,279062538,279066634,11537482,15785339,7656939,291816427,291799979,828699579,820376507,350614457,342356923,73848250,207871466,207731578,1298381594,1566817034,1609018122,-558911734,-22044406,-559238630,-559250888,-559185304,-555179288,-566697236,-566742300,-567602464,-567660060,-30469916,2003240173,1973816394,884096010,347219978,351419402,342899738,351282218,351285354,882901098,887357658,887361754,878989787,879063387,342356283,342349178,350723578,367507866,350726538,1978121098,1978505866,1978506906,-139619686,-156265767,-156331400,-156323272,-697376216,-701685140,-700702108,-700636320,-164298524,2004091111,1906508926,1889668110,279066634,279062538,279063562,14738491,283157803,291537259,828408683,828670715,828748409,811704953,811837049,811771385,811834792,887197096,887201688,896646792,829660808,825472648,825484952,829612472,829616552,837996968,838001576,835723949,324018879,307241727,309469543,309470247,316677155,333449251,333473795,295762945,10747713,15924929,24280769,17989440,53628240,52446560,65037665,60845411,329317846,27459014,15924418,1232098,1082723,17860387,288403969,1399895553,1390521873,1390586641,1390587185,1382200625,1383236113,1393672709,1360065031,1880159807,1882319406,1886578734,1962072111,1957742695,1955646935,1976623821,1997566671,1913717391,1930568366,1930570918,1909598374,1907493026,1907559554,1907434630,298852742,324022983,307392885,309486629,333708321,299944993,299957265,278983937,279051847,15924935,24276679,51544003,53611859,321998049,325084385,329278693,329315829,280096197,11726293,5436915,1234787,17875747,288403987,1399886339,1390456595,1390586131,1390585873,1382193233,1383237440,1378910720,1362141717,1882255933,1882258989,1886578991,1894967335,1890699367,1957743719,1959818055,1901093583,1930494670,1930561246,1934764198,1945249958,1941129382,1907427463,1911563655,1934631559,303043214,303178479,309469223,325202979,299895843,283130899,278948867,279051525,10681925,32669377,38960961,101866817,36851057,39900257,312517857,396404198,1957799366,1957868998,1414700390,1410436390,1410369830,-718230778,-147801338,-164562170,-165482730,-151591642,-155258841,-557924320,-558349968,-558341184,-566726080,-700956144,1463423520,1463690016,1429610532,1442267191,347210766,351411470,338824970,338890251,338959737,880026729,900998377,632565993,632565977,614731849,878985545,879149881,887535419,1017556778,497336186,497335130,1608825802,1601018762,1596825482,1584103834,-559246918,-559246934,-693456472,-559176792,-555162968,-567745876,-683904340,-717327652,1966482040,1966224680,1978747945,1978682394,1978923018,1965287434,1965091850,891415627,895730937,636731817,565461481,552874969,540029449,540029465,606216747,1692542763,1956785450,1973442874,1974786314,2012518666,-30110902,-30634022,-26242566,-22376022,-5598293,-22367576,-22306136,-25632084,-1103568156,-1103498528,-163679520,-164728736,-161201952,-140459785,-173882170,1977772230,1948412302,1949514127,1966091695,1970283695,1978663147,1974468859,1973428299,888152075,888152331,888301370,1957854762,1957874218,1420872218,1441839626,-680224246,-165376246,-30570726,-26561734,-22367894,-1096121368,-1096117528,-1095195992,-1082596692,-1086823700,-1086651668,-12700948,-147446548,-176944024,-441447365,1706167306,1978805258,1901210698,1896885466,823141546,837812394,833880234,832843930,820256906,811872714,812057370,811992874,283520298,346433834,1420060954,1420077322,1424263434,1441566282,-38959398,-5668262,-22375877,-22375880,-22367704,-26631576,-30907676,-30928160,-30866784,-163901020,1983709421,2011497582,1906707466,816199690,816195594,279063562,278930442,14738475,283148649,291537897,895779561,879030905,879096379,879190555,342254874,476476458,484924458,216520730,1575467082,1567078730,1609408474,-5728294,-5663846,-22310215,-22310216,-559238488,-554065240,-566730068,-566746464,-566619424,-567660508,1982795813,2011628590,1973554190,279062538,279062538,77732874,82838539,82867563,74498409,358924649,367301097,887403513,887469019,887600091,342276058,476485594,476552698,493336922,1567078746,1596438986,2120596954,-17979942,-22301702,-22375687,-22375688,-22367576,-1092050200,-1087839512,-1087835416,-1121316184,-1523698264,-450618135,-436991894,-441382822,1708268618,1699884234,1695687882,1997743322,930152618,670105770,665850043,636498059,628109515,611324171,877818427,886205994,884108074,1957755706,1973725450,2011478282,1998883146,-13856806,-26508390,-22375430,-22375815,-22371736,-559308184,-555163028,-567778716,-29814176,-29748640,-29478812,-143392667,1978729534,1957825550,1962032142,875703370,875768907,875834857,905192681,900989161,632553977,632558027,610534155,610583066,610723626,1021766954,1017572650,2108995866,2142538058,2138344394,2117439114,-29509990,-25513030,-21326918,-4549720,-4545880,-21454168,-25632092,-29859088,-163966240,-163958172,-147972060,-144441305,1973683262,1906707470,1889937418,812001290,807877706,271859067,905188587,833880299,832844011,564408537,820269129,811979097,887534459,883340923,884457082,888446970,888446938,891591050,1998953882,1982315930,1982247322,1986433467,1990628265,1991701160,1995858664,1999905388,1999905324,-182050260,1965175596,1977812268,1973421096,1974469641,1978807563,1968316170,890246922,890250602,894448874,636486890,615776442,614731914,618934474,878989771,879153945,879142697,887533355,900054842,1470413658,1608825418,1583651530,2116914826,-26507366,-18181702,-559246870,-559238807,-559242392,-559357332,-563551708,-567746016,-566312416,-700517536,-684269344,2012664032,1979106499,1979108486,1965476231,1965542277,1965391269,1965319597,1978671277,1703948521,1703948569,609231113,609231627,609362730,619851562,1957828906,1957693754,1958005002,1974769930,2004126538,2116849562,-165050438,-152399430,-156593221,-156585304,-693460312,-689380696,-700947796,-700964124,-163704092,-163700700,-161214427,2007237679,1973816334,1894131722,812001290,270994698,270800235,812922091,821298347,816058539,564425883,551867787,618956683,619093691,1977788075,2012391082,2012260090,1987097434,-165637350,-433871046,-433936598,-433674950,-1486444753,-1514749396,-1246313940,-1245949380,-176397804,-180592108,-148037088,-147967455,-433848286,-404486942,-408664842,-442055546,1979120774,1966501262,1949727119,1949400493,1970300077};
    int32_t hash1 = SimHash(std::vector<int32_t>(data, data + 948));
    ASSERT_EQ(1961926954, hash1);
}

TEST(SimHash, CompareCropped)
{
    int32_t data[948] = {-1518991452,-1511651436,-1511579771,-1528353403,-1528469033,-1528501962,-1511724778,-1511543546,-1477991162,-1478183674,-1502310138,-1506504441,-1506482827,-1489541659,-1489619548,-1485437532,-1510078540,-1511127164,-1528353403,-1527829033,-1528469130,-1511720650,-1511741178,-1478185722,-1477139194,-1502300922,-1506504441,-1506499307,-1489640091,-1489607196,-1485437020,-1518991452,-1511061628,-1527826556,-1527828587,-1526896137,-1527907978,-1511720682,-1511741178,-1478185722,-1478187770,-1502310138,-1506504441,-1506482891,-1489541659,-1489619548,-1485437020,-1510078540,-1511061627,-1528352891,-1531105897,-1531090442,-1532692202,-1511741178,-1511740154,-1478187770,-1485523706,-1506504441,-1506482921,-1489640091,-1489607195,-1485437020,-1518991451,-1511061627,-1527824507,-1527829113,-1526896137,-1527383690,-1511737082,-1511740154,-1478187770,-1493912314,-1506504441,-1506495225,-1506417307,-1489607195,-1489619036,-1518991451,-1511127147,-1527834747,-1527828603,-1532155433,-1532106378,-1515914986,-1515935482,-1478185722,-1478187770,-1502301946,-1506508537,-1506482891,-1489541659,-1489623644,-1518991452,-1518991451,-1528363131,-1528352891,-1527435881,-1527486089,-1511659210,-1511675642,-1478185722,-1477139194,-1502301946,-1506504441,-1506483939,-1489639955,-1489605148,-1518985308,-1518989404,-1510535532,-1527302523,-1527437691,-1527419177,-1510609130,-1510675178,-1510691818,-1481262058,-1477143546,-1502309370,-1508577209,-434870827,-434756188,-415879260,-445247580,-437907532,-454621308,-459200571,-459247673,-459215018,-454956282,-168580858,-135021306,-135166714,-428829674,-432999337,-164600619,-147771996,-183358044,-177070172,-168687968,-168622448,-169789756,-174053819,-241111289,-207574778,-207378170,-136135418,-136149758,-144670458,-147803385,-181341379,-466589844,-466472980,-462280212,-453899804,-441249884,-441448828,-405790003,-405773617,-212797746,-210506258,-504190746,-508315418,-508457770,-235866938,1932534159,1930441613,1930568684,1915889644,1936856420,1944259940,1906313541,1906339141,1906371911,1889648454,1894956870,1911729990,1936891142,1936885046,1935705190,1935696999,1935680743,1902128629,1886531045,1886533092,1894909920,1894777456,1894838788,1910546948,1910552069,1927327253,-220026347,-220026091,-220029161,-160267513,-143604977,-181374401,-198158807,-197973207,-194893779,-185460627,-185579027,-168802355,-179281267,2001760911,1980842638,1930589094,1934812326,1911745702,-172897118,1974498438,1978687623,1399857613,1378957149,1383218988,1382169892,1407388961,1373635889,1352671493,1352725255,1356976982,1424160326,1416802119,1429389059,1395821841,1377864993,1382081892,1390470500,1408268276,1374830549,1355952117,1347567523,1364264418,1364197858,1364222290,1408299330,1390540098,1390586946,1407364163,1398967619,1398966083,1366327891,1362141814,1345385062,1882324582,1886579046,1893886055,-253671323,1911604565,1903223300,1932648964,1932612101,1932752501,1903356389,1911744743,1907574951,1940999303,1945118087,1397760903,1381040783,1381118975,1383212135,1399002147,1373637667,1373662227,1356915719,1352711495,1358085959,1374863175,1397931331,1379044675,1379110177,1382085985,1407247719,1373660535,1358067031,1358069223,1347556833,1347438433,1364214641,1366352385,1399894529,1391504977,1391700545,1391635395,1391640515,1383237443,1467056711,1362162199,-265230801,-265261521,-261986001,-186484691,-186529755,-185545355,-168758715,-212802875,-233745785,-216894826,-212703834,-237868894,-242071390,-256685950,1353786498,1374692806,1399859142,1383282022,-697160666,-966649822,-941619166,-941615086,-975116030,-710824190,-1800225022,-1648969982,-1651067646,-1650555343,-1615296992,-1619484128,-1641487776,-567803168,-567737696,-30797152,-163958620,1999438061,1973814334,1889668106,815933450,279062538,279063562,14740507,299955499,291799915,828670569,828691033,807727737,874897979,879190827,342258986,484924714,484825466,484948298,1567079370,1601018826,2145951706,-5664262,-5663814,-22310216,-559238472,-559177048,-567745876,-566746460,-566684960,-567659676,1982738468,2003238959,1973816334,815933450,279062538,279066634,11537482,15785339,7656939,291816427,291799979,828699579,820376507,350614457,342356923,73848250,207871466,207731578,1298381594,1566817034,1609018122,-558911734,-22044406,-559238630,-559250888,-559185304,-555179288,-566697236,-566742300,-567602464,-567660060,-30469916,2003240173,1973816394,884096010,347219978,351419402,342899738,351282218,351285354,882901098,887357658,887361754,878989787,879063387,342356283,342349178,350723578,367507866,350726538,1978121098,1978505866,1978506906,-139619686,-156265767,-156331400,-156323272,-697376216,-701685140,-700702108,-700636320,-164298524,2004091111,1906508926,1889668110,279066634,279062538,279063562,14738491,283157803,291537259,828408683,828670715,828748409,811704953,811837049,811771385,811834792,887197096,887201688,896646792,829660808,825472648,825484952,829612472,829616552,837996968,838001576,835723949,324018879,307241727,309469543,309470247,316677155,333449251,333473795,295762945,10747713,15924929,24280769,17989440,53628240,52446560,65037665,60845411,329317846,27459014,15924418,1232098,1082723,17860387,288403969,1399895553,1390521873,1390586641,1390587185,1382200625,1383236113,1393672709,1360065031,1880159807,1882319406,1886578734,1962072111,1957742695,1955646935,1976623821,1997566671,1913717391,1930568366,1930570918,1909598374,1907493026,1907559554,1907434630,298852742,324022983,307392885,309486629,333708321,299944993,299957265,278983937,279051847,15924935,24276679,51544003,53611859,321998049,325084385,329278693,329315829,280096197,11726293,5436915,1234787,17875747,288403987,1399886339,1390456595,1390586131,1390585873,1382193233,1383237440,1378910720,1362141717,1882255933,1882258989,1886578991,1894967335,1890699367,1957743719,1959818055,1901093583,1930494670,1930561246,1934764198,1945249958,1941129382,1907427463,1911563655,1934631559,303043214,303178479,309469223,325202979,299895843,283130899,278948867,279051525,10681925,32669377,38960961,101866817,36851057,39900257,312517857,396404198,1957799366,1957868998,1414700390,1410436390,1410369830,-718230778,-147801338,-164562170,-165482730,-151591642,-155258841,-557924320,-558349968,-558341184,-566726080,-700956144,1463423520,1463690016,1429610532,1442267191,347210766,351411470,338824970,338890251,338959737,880026729,900998377,632565993,632565977,614731849,878985545,879149881,887535419,1017556778,497336186,497335130,1608825802,1601018762,1596825482,1584103834,-559246918,-559246934,-693456472,-559176792,-555162968,-567745876,-683904340,-717327652,1966482040,1966224680,1978747945,1978682394,1978923018,1965287434,1965091850,891415627,895730937,636731817,565461481,552874969,540029449,540029465,606216747,1692542763,1956785450,1973442874,1974786314,2012518666,-30110902,-30634022,-26242566,-22376022,-5598293,-22367576,-22306136,-25632084,-1103568156,-1103498528,-163679520,-164728736,-161201952,-140459785,-173882170,1977772230,1948412302,1949514127,1966091695,1970283695,1978663147,1974468859,1973428299,888152075,888152331,888301370,1957854762,1957874218,1420872218,1441839626,-680224246,-165376246,-30570726,-26561734,-22367894,-1096121368,-1096117528,-1095195992,-1082596692,-1086823700,-1086651668,-12700948,-147446548,-176944024,-441447365,1706167306,1978805258,1901210698,1896885466,823141546,837812394,833880234,832843930,820256906,811872714,812057370,811992874,283520298,346433834,1420060954,1420077322,1424263434,1441566282,-38959398,-5668262,-22375877,-22375880,-22367704,-26631576,-30907676,-30928160,-30866784,-163901020,1983709421,2011497582,1906707466,816199690,816195594,279063562,278930442,14738475,283148649,291537897,895779561,879030905,879096379,879190555,342254874,476476458,484924458,216520730,1575467082,1567078730,1609408474,-5728294,-5663846,-22310215,-22310216,-559238488,-554065240,-566730068,-566746464,-566619424,-567660508,1982795813,2011628590,1973554190,279062538,279062538,77732874,82838539,82867563,74498409,358924649,367301097,887403513,887469019,887600091,342276058,476485594,476552698,493336922,1567078746,1596438986,2120596954,-17979942,-22301702,-22375687,-22375688,-22367576,-1092050200,-1087839512,-1087835416,-1121316184,-1523698264,-450618135,-436991894,-441382822,1708268618,1699884234,1695687882,1997743322,930152618,670105770,665850043,636498059,628109515,611324171,877818427,886205994,884108074,1957755706,1973725450,2011478282,1998883146,-13856806,-26508390,-22375430,-22375815,-22371736,-559308184,-555163028,-567778716,-29814176,-29748640,-29478812,-143392667,1978729534,1957825550,1962032142,875703370,875768907,875834857,905192681,900989161,632553977,632558027,610534155,610583066,610723626,1021766954,1017572650,2108995866,2142538058,2138344394,2117439114,-29509990,-25513030,-21326918,-4549720,-4545880,-21454168,-25632092,-29859088,-163966240,-163958172,-147972060,-144441305,1973683262,1906707470,1889937418,812001290,807877706,271859067,905188587,833880299,832844011,564408537,820269129,811979097,887534459,883340923,884457082,888446970,888446938,891591050,1998953882,1982315930,1982247322,1986433467,1990628265,1991701160,1995858664,1999905388,1999905324,-182050260,1965175596,1977812268,1973421096,1974469641,1978807563,1968316170,890246922,890250602,894448874,636486890,615776442,614731914,618934474,878989771,879153945,879142697,887533355,900054842,1470413658,1608825418,1583651530,2116914826,-26507366,-18181702,-559246870,-559238807,-559242392,-559357332,-563551708,-567746016,-566312416,-700517536,-684269344,2012664032,1979106499,1979108486,1965476231,1965542277,1965391269,1965319597,1978671277,1703948521,1703948569,609231113,609231627,609362730,619851562,1957828906,1957693754,1958005002,1974769930,2004126538,2116849562,-165050438,-152399430,-156593221,-156585304,-693460312,-689380696,-700947796,-700964124,-163704092,-163700700,-161214427,2007237679,1973816334,1894131722,812001290,270994698,270800235,812922091,821298347,816058539,564425883,551867787,618956683,619093691,1977788075,2012391082,2012260090,1987097434,-165637350,-433871046,-433936598,-433674950,-1486444753,-1514749396,-1246313940,-1245949380,-176397804,-180592108,-148037088,-147967455,-433848286,-404486942,-408664842,-442055546,1979120774,1966501262,1949727119,1949400493,1970300077};
    int32_t hash1 = SimHash(std::vector<int32_t>(data, data + 948));
    int32_t hash2 = SimHash(std::vector<int32_t>(data + 10, data + 948 - 10));
    int32_t hash3 = SimHash(std::vector<int32_t>(data + 10, data + 948 - 100));
    ASSERT_LE(0, HammingDistance(hash1, hash2));
    ASSERT_LE(1, HammingDistance(hash1, hash3));
}
