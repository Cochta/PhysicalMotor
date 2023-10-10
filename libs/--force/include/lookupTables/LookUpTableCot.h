//
// Created by remla on 02/10/2023.
//
#pragma once

constexpr const std::size_t CotTableSize = 1000;
constexpr const float CotTable[] = {999.9996666666443, 241.56828258222822, 137.37558470612507, 95.97707330539667, 73.75065568120614, 59.88197731471483, 50.40282302440815, 43.513841912005034, 38.28091029866011, 34.17087994400642, 30.857278997550694, 28.129011844613288, 25.84352868165721, 23.901092233261046, 22.22982769091487, 20.77662833566932, 19.50140498661304, 18.373327728353356, 17.368298613715115, 16.467209301805692, 15.654713210689675, 14.918343242199374, 14.247866693300605, 13.634806152822208, 13.072078605234765, 12.553720059884792, 12.074672958267211, 11.630620273311404, 11.217854758969668, 10.833174957727454, 10.473801788111897, 10.13731111236369, 9.82157882306279, 9.524735818558275, 9.245130850167648, 8.981299680989729, 8.731939339835938, 8.495886514565878, 8.272099328643655, 8.059641898589334, 7.857671189513473, 7.665425779403619, 7.482216216431818, 7.307416711860966, 7.140457957595421, 6.980820894660793, 6.828031288901377, 6.68165499448059, 6.5412938055410015, 6.4065818125437985, 6.277182193079826, 6.152784377888933, 6.03310154188635, 5.917868377527032, 5.806839114123238, 5.699785751992433, 5.59649648473359, 5.496774286656809, 5.40043564554279, 5.307309423582241, 5.217235831619859, 5.130065503768239, 5.04565866111757, 4.963884354691368, 4.884619779023622, 4.80774964878909, 4.7331656318313655, 4.660765832724329, 4.590454321689243, 4.522140704287342, 4.455739727828855, 4.39117092089467, 4.328358262765552, 4.267229879903523, 4.207717766937383, 4.14975752987498, 4.093288149503594, 4.038251763150687, 3.9845934631640176, 3.9322611106355883, 3.88120516304089, 3.8313785145955994, 3.782736348248283, 3.7352359983315178, 3.6888368229865796, 3.643500085559825, 3.5991888442431987, 3.555867849297976, 3.513503447260701, 3.472063491584106, 3.431517259214301, 3.391835372649165, 3.3529897270623508, 3.3149534221129096, 3.277700698092786, 3.241206876093624, 3.205448301900773, 3.1704022933464064, 3.1360470908754676, 3.1023618110980062, 3.069326403119516, 3.0369216074573604, 3.0051289173663323, 2.9739305424101623, 2.943309374128229, 2.91324895365825, 2.883733441186139, 2.8547475871038785, 2.826276704765005, 2.7983066447354226, 2.7708237704446543, 2.743814935149475, 2.7172674601281237, 2.6911691140290888, 2.665508093303766, 2.6402730036571946, 2.615452842455605, 2.5910369820336907, 2.5670151538483688, 2.5433774334293777, 2.52011422608034, 2.497216253287007, 2.474674539792191, 2.4524804012995682, 2.4306254327709182, 2.40910149728367, 2.3879007154176937, 2.3670154551422464, 2.3464383221757825, 2.32616215079304, 2.306179995055366, 2.286485120441734, 2.2670709958592425, 2.2479312860131815, 2.229059844117917, 2.210450704930971, 2.192098078093699, 2.173996341762933, 2.1561400365188668, 2.1385238595353044, 2.1211426589991835, 2.1039914287670234, 2.0870653032466477, 2.070359552493177, 2.0538695775088964, 2.0375909057371877, 2.021519186741222, 2.005650188058657, 1.9899797912240125, 1.9745039879508788, 1.959218876466501, 1.944120657991703, 1.9292056333594612, 1.9144701997658071, 1.8999108476470477, 1.8855241576776167, 1.8713067978831504, 1.8572555208636659, 1.84336716112197, 1.8296386324926732, 1.8160669256674236, 1.8026491058121759, 1.7893823102725357, 1.776263746363396, 1.7632906892392803, 1.7504604798419745, 1.7377705229221894, 1.7252182851321656, 1.7128012931862606, 1.7005171320867178, 1.6883634434119257, 1.6763379236646294, 1.6644383226776427, 1.6526624420747547, 1.6410081337845983, 1.6294732986053795, 1.6180558848184394, 1.6067538868487268, 1.5955653439703352, 1.5844883390553481, 1.5735209973643103, 1.562661485376718, 1.551908009659992, 1.5412588157754625, 1.5307121872199638, 1.5202664444016873, 1.5099199436490134, 1.4996710762510836, 1.489518267528936, 1.4794599759360743, 1.4694946921873846, 1.459620938415368, 1.449837267352689, 1.4401422615400905, 1.4305345325587617, 1.4210127202862788, 1.4115754921752828, 1.4022215425540836, 1.3929495919484203, 1.3837583864236302, 1.3746466969465179, 1.365613318766235, 1.356657070813517, 1.3477767951176423, 1.338971356240506, 1.3302396407272277, 1.3215805565727297, 1.3129930327037465, 1.304476018475749, 1.2960284831842819, 1.287649415590237, 1.2793378234585997, 1.2710927331102222, 1.2629131889862013, 1.2547982532244435, 1.2467470052480238, 1.2387585413649573, 1.2308319743790133, 1.2229664332112204, 1.2151610625317197, 1.2074150224016376, 1.199727487924662, 1.192097648908016, 1.1845247095325322, 1.177007888031549, 1.1695464163783482, 1.1621395399818744, 1.1547865173904794, 1.1474866200034455, 1.1402391317900504, 1.1330433490159444, 1.1258985799766186, 1.11880414473775, 1.111759374882218, 1.104763613263593, 1.0978162137659015, 1.0909165410694877, 1.0840639704227841, 1.0772578874198266, 1.0704976877833356, 1.0637827771532105, 1.0571125708802738, 1.050486493825117, 1.0439039801619006, 1.0373644731869625, 1.0308674251321044, 1.0244122969824185, 1.0179985582985254, 1.011625687043102, 1.005293169411577, 0.9990004996668771, 0.9927471799781115, 0.9865327202630862, 0.9803566380345416, 0.9742184582500082, 0.9681177131651878, 0.9620539421907556, 0.956026691752497, 0.9500355151546845, 0.9440799724466092, 0.9381596302921802, 0.932274061842512, 0.9264228466114189, 0.9206055703537374, 0.9148218249464053, 0.9090712082722213, 0.903353324106217, 0.8976677820045703, 0.8920141971959966, 0.8863921904755518, 0.8808013881007847, 0.8752414216901772, 0.869711928123816, 0.8642125494462372, 0.8587429327713852, 0.8533027301896392, 0.8478915986768468, 0.8425092000053205, 0.8371552006567432, 0.8318292717369373, 0.8265310888924506, 0.8212603322289108, 0.8160166862311105, 0.8107998396847728, 0.8056094855999626, 0.8004453211360978, 0.7953070475285251, 0.7901943700166202, 0.7851069977733752, 0.780044643836439, 0.7750070250405723, 0.7699938619514881, 0.7650048788010377, 0.7600398034237171, 0.7550983671944577, 0.7501803049676704, 0.7452853550175187, 0.7404132589793846, 0.7355637617925049, 0.7307366116437473, 0.7259315599125009, 0.7211483611166554, 0.716386772859642, 0.7116465557785143, 0.706927473493041, 0.7022292925557918, 0.6975517824031913, 0.6928947153075168, 0.6882578663298234, 0.6836410132737709, 0.6790439366403337, 0.6744664195833745, 0.6699082478660613, 0.6653692098181081, 0.6608490962938239, 0.6563477006309476, 0.6518648186102551, 0.6474002484159194, 0.6429537905966068, 0.6385252480272958, 0.6341144258717987, 0.629721131545973, 0.6253451746816077, 0.6209863670909689, 0.6166445227319897, 0.6123194576740926, 0.6080109900646286, 0.6037189400959205, 0.5994431299728981, 0.595183383881311, 0.5909395279565083, 0.5867113902527723, 0.5824988007131942, 0.5783015911400804, 0.5741195951658796, 0.5699526482246168, 0.5658005875238264, 0.5616632520169722, 0.5575404823763449, 0.5534321209664269, 0.5493380118177142, 0.5452580006009868, 0.5411919346020175, 0.5371396626967104, 0.533101035326661, 0.5290759044751263, 0.5250641236434018, 0.5210655478275904, 0.5170800334957615, 0.5131074385654874, 0.5091476223817532, 0.5052004456952295, 0.5012657706409022, 0.49734346071705254, 0.4934333807645789, 0.48953539694665466, 0.4856493767287141, 0.4817751888587627, 0.4779127033480005, 0.4740617914517574, 0.47022232565073, 0.46639417963251784, 0.4625772282734489, 0.45877134762069205, 0.4549764148746501, 0.4511923083716255, 0.4474189075667573, 0.4436560930172199, 0.43990374636568247, 0.4361617503240202, 0.4324299886572753, 0.42870834616786113, 0.4249967086800058, 0.4212949630244299, 0.4176029970232542, 0.41392069947513205, 0.41024796014060383, 0.40658466972766744, 0.4029307198775612, 0.39928600315075535, 0.39565041301314813, 0.3920238438224623, 0.3884061908148374, 0.38479735009161614, 0.381197218606319, 0.3776056941518044, 0.3740226753476114, 0.3704480616274798, 0.36688175322704625, 0.3633236511717115, 0.35977365726467614, 0.3562316740751414, 0.3526976049266724, 0.3491713538857197, 0.3456528257502971, 0.34214192603881244, 0.3386385609790482, 0.3351426374972889, 0.33165406320759394, 0.3281727464012104, 0.3246985960361263, 0.3212315217267587, 0.3177714337337765, 0.31431824295405364, 0.31087186091075125, 0.3074321997435253, 0.3039991721988587, 0.30057269162051403, 0.2971526719401059, 0.29373902766778925, 0.2903316738830628, 0.2869305262256842, 0.2835355008866958, 0.2801465145995578, 0.2767634846313877, 0.27338632877430336, 0.2700149653368679, 0.2666493131356346, 0.2632892914867892, 0.25993482019788866, 0.25658581955969384, 0.2532422103380941, 0.24990391376612286, 0.24657085153606145, 0.24324294579162956, 0.2399201191202615, 0.23660229454546527, 0.23328939551926378, 0.22998134591471586, 0.22667807001851617, 0.2233794925236715, 0.22008553852225293, 0.21679613349822127, 0.21351120332032514, 0.21023067423506975, 0.20695447285975468, 0.20368252617557991, 0.20041476152081794, 0.1971511065840511, 0.1938914893974724, 0.1906358383302485, 0.1873840820819439, 0.18413614967600428, 0.1808919704532984, 0.17765147406571685, 0.17441459046982646, 0.17118124992057918, 0.1679513829650741, 0.16472492043637146, 0.16150179344735752, 0.1582819333846587, 0.15506527190260452, 0.1518517409172373, 0.14864127260036847, 0.1454337993736792, 0.14222925390286545, 0.13902756909182523, 0.13582867807688806, 0.13263251422108424, 0.12943901110845435, 0.1262481025383965, 0.12305972252005151, 0.11987380526672402, 0.11669028519033924, 0.11350909689593362, 0.11033017517617925, 0.10715345500594027, 0.10397887153686072, 0.10080636009198271, 0.09763585616039407, 0.09446729539190421, 0.09130061359174785, 0.0881357467153148, 0.08497263086290587, 0.08181120227451308, 0.07865139732462384, 0.07549315251704798, 0.07233640447976669, 0.06918108995980257, 0.06602714581810985, 0.06287450902448391, 0.05972311665248922, 0.05657290587440478, 0.0534238139561863, 0.05027577825244416, 0.04712873620143632, 0.04398262532007529, 0.040837383198948474, 0.03769294749735077, 0.0345492559383288, 0.03140624630373586, 0.028263856429296758, 0.02512202419968166, 0.02198068754358819, 0.018839784428830927, 0.015699252857437437, 0.012559030860750052, 0.009419056494532587, 0.00627926783408112, 0.003139602969338071, 8.720971932033589e-15, -0.0031396029693206294, -0.0062792678340636765, -0.009419056494515143, -0.012559030860732607, -0.01569925285741999, -0.01883978442881348, -0.02198068754357074, -0.025122024199664205, -0.028263856429279307, -0.0314062463037184, -0.03454925593831134, -0.037692947497333304, -0.04083738319893101, -0.04398262532005781, -0.04712873620141884, -0.05027577825242668, -0.05342381395616881, -0.05657290587438728, -0.05972311665247171, -0.0628745090244664, -0.06602714581809233, -0.06918108995978504, -0.07233640447974915, -0.07549315251703044, -0.07865139732460628, -0.08181120227449551, -0.0849726308628883, -0.08813574671529723, -0.09130061359173025, -0.09446729539188661, -0.09763585616037646, -0.1008063600919651, -0.1039788715368431, -0.10715345500592263, -0.11033017517616159, -0.11350909689591596, -0.11669028519032155, -0.11987380526670634, -0.1230597225200338, -0.12624810253837876, -0.1294390111084366, -0.1326325142210665, -0.1358286780768703, -0.13902756909180747, -0.14222925390284763, -0.1454337993736614, -0.14864127260035065, -0.15185174091721948, -0.15506527190258665, -0.1582819333846408, -0.1615017934473396, -0.16472492043635356, -0.16795138296505618, -0.17118124992056125, -0.1744145904698085, -0.17765147406569887, -0.1808919704532804, -0.18413614967598624, -0.18738408208192586, -0.19063583833023043, -0.1938914893974543, -0.19715110658403298, -0.20041476152079982, -0.20368252617556173, -0.2069544728597365, -0.21023067423505154, -0.21351120332030693, -0.21679613349820298, -0.22008553852223464, -0.22337949252365322, -0.22667807001849782, -0.2299813459146975, -0.23328939551924538, -0.23660229454544687, -0.23992011912024305, -0.2432429457916111, -0.24657085153604294, -0.24990391376610435, -0.25324221033807554, -0.25658581955967524, -0.25993482019787006, -0.26328929148677055, -0.26664931313561596, -0.2700149653368492, -0.2733863287742846, -0.2767634846313689, -0.280146514599539, -0.28353550088667695, -0.28693052622566534, -0.2903316738830439, -0.2937390276677703, -0.29715267194008693, -0.30057269162049505, -0.30399917219883965, -0.3074321997435062, -0.31087186091073216, -0.31431824295403454, -0.31777143373375727, -0.3212315217267394, -0.32469859603610696, -0.3281727464011911, -0.33165406320757457, -0.3351426374972696, -0.3386385609790287, -0.34214192603879295, -0.34565282575027756, -0.34917135388570014, -0.3526976049266528, -0.3562316740751218, -0.35977365726465643, -0.36332365117169174, -0.3668817532270265, -0.37044806162745997, -0.37402267534759154, -0.37760569415178447, -0.38119721860629896, -0.3847973500915961, -0.38840619081481736, -0.39202384382244215, -0.395650413013128, -0.3992860031507351, -0.40293071987754087, -0.4065846697276471, -0.4102479601405835, -0.41392069947511156, -0.41760299702323367, -0.42129496302440944, -0.4249967086799852, -0.4287083461678405, -0.43242998865725457, -0.43616175032399945, -0.4399037463656617, -0.44365609301719905, -0.4474189075667363, -0.4511923083716045, -0.45497641487462903, -0.45877134762067123, -0.46257722827342795, -0.4663941796324969, -0.47022232565070904, -0.4740617914517362, -0.4779127033479794, -0.4817751888587415, -0.48564937672869285, -0.48953539694663323, -0.4934333807645575, -0.49734346071703106, -0.5012657706408806, -0.5052004456952078, -0.5091476223817315, -0.5131074385654656, -0.5170800334957396, -0.5210655478275685, -0.5250641236433798, -0.5290759044751043, -0.5331010353266388, -0.5371396626966882, -0.5411919346019952, -0.5452580006009645, -0.5493380118176918, -0.5534321209664045, -0.5575404823763223, -0.5616632520169494, -0.5658005875238037, -0.569952648224594, -0.5741195951658568, -0.5783015911400574, -0.5824988007131711, -0.5867113902527491, -0.5909395279564851, -0.5951833838812876, -0.5994431299728746, -0.603718940095897, -0.6080109900646049, -0.6123194576740688, -0.6166445227319659, -0.620986367090945, -0.6253451746815838, -0.6297211315459489, -0.6341144258717746, -0.6385252480272715, -0.6429537905965823, -0.6474002484158947, -0.6518648186102304, -0.6563477006309227, -0.660849096293799, -0.6653692098180831, -0.6699082478660361, -0.6744664195833494, -0.6790439366403084, -0.6836410132737455, -0.6882578663297979, -0.692894715307491, -0.6975517824031654, -0.7022292925557659, -0.7069274734930149, -0.7116465557784882, -0.7163867728596158, -0.7211483611166289, -0.7259315599124744, -0.7307366116437206, -0.7355637617924782, -0.7404132589793578, -0.7452853550174918, -0.7501803049676433, -0.7550983671944305, -0.7600398034236898, -0.7650048788010102, -0.7699938619514605, -0.7750070250405446, -0.780044643836411, -0.7851069977733472, -0.7901943700165921, -0.7953070475284968, -0.8004453211360694, -0.805609485599934, -0.810799839684744, -0.8160166862310816, -0.8212603322288817, -0.8265310888924213, -0.831829271736908, -0.8371552006567138, -0.842509200005291, -0.8478915986768171, -0.8533027301896092, -0.858742932771355, -0.8642125494462068, -0.8697119281237856, -0.8752414216901465, -0.8808013881007539, -0.886392190475521, -0.8920141971959655, -0.897667782004539, -0.9033533241061855, -0.9090712082721898, -0.9148218249463735, -0.9206055703537054, -0.9264228466113867, -0.9322740618424796, -0.9381596302921476, -0.9440799724465766, -0.9500355151546517, -0.9560266917524639, -0.9620539421907223, -0.9681177131651543, -0.9742184582499746, -0.9803566380345076, -0.986532720263052, -0.9927471799780772, -0.9990004996668425, -1.0052931694115421, -1.011625687043067, -1.01799855829849, -1.024412296982383, -1.0308674251320686, -1.0373644731869265, -1.0439039801618644, -1.0504864938250806, -1.057112570880237, -1.0637827771531734, -1.0704976877832983, -1.0772578874197891, -1.0840639704227464, -1.0909165410694497, -1.0978162137658634, -1.1047636132635545, -1.1117593748821795, -1.1188041447377108, -1.1258985799765793, -1.133043349015905, -1.1402391317900107, -1.1474866200034053, -1.154786517390439, -1.1621395399818337, -1.1695464163783071, -1.1770078880315076, -1.1845247095324904, -1.192097648907974, -1.1997274879246198, -1.207415022401595, -1.2151610625316769, -1.2229664332111774, -1.2308319743789697, -1.2387585413649136, -1.2467470052479797, -1.2547982532243989, -1.2629131889861565, -1.271092733110177, -1.279337823458554, -1.287649415590191, -1.2960284831842355, -1.304476018475702, -1.3129930327036992, -1.3215805565726821, -1.3302396407271797, -1.3389713562404575, -1.3477767951175934, -1.3566570708134678, -1.3656133187661854, -1.3746466969464677, -1.3837583864235798, -1.3929495919483692, -1.402221542554032, -1.411575492175231, -1.4210127202862266, -1.430534532558709, -1.4401422615400374, -1.4498372673526352, -1.4596209384153138, -1.46949469218733, -1.4794599759360187, -1.4895182675288803, -1.4996710762510272, -1.5099199436489565, -1.5202664444016298, -1.5307121872199059, -1.5412588157754041, -1.551908009659933, -1.5626614853766583, -1.57352099736425, -1.5844883390552873, -1.595565343970274, -1.6067538868486648, -1.6180558848183766, -1.629473298605316, -1.6410081337845344, -1.65266244207469, -1.6644383226775774, -1.6763379236645632, -1.688363443411859, -1.7005171320866503, -1.7128012931861927, -1.7252182851320965, -1.7377705229221199, -1.7504604798419041, -1.7632906892392093, -1.776263746363324, -1.7893823102724629, -1.8026491058121021, -1.8160669256673492, -1.8296386324925977, -1.8433671611218934, -1.8572555208635881, -1.8713067978830713, -1.8855241576775366, -1.8999108476469668, -1.9144701997657245, -1.9292056333593777, -1.9441206579916177, -1.959218876466415, -1.9745039879507913, -1.9899797912239237, -2.005650188058566, -2.02151918674113, -2.0375909057370944, -2.053869577508802, -2.0703595524930805, -2.08706530324655, -2.103991428766924, -2.1211426589990823, -2.1385238595352014, -2.156140036518762, -2.1739963417628267, -2.1920980780935913, -2.210450704930861, -2.2290598441178053, -2.247931286013068, -2.267070995859127, -2.286485120441616, -2.3061799950552464, -2.326162150792918, -2.3464383221756586, -2.36701545514212, -2.3879007154175653, -2.4091014972835394, -2.430625432770785, -2.4524804012994323, -2.474674539792053, -2.497216253286866, -2.520114226080197, -2.5433774334292316, -2.56701515384822, -2.591036982033539, -2.6154528424554506, -2.640273003657037, -2.6655080933036053, -2.691169114028925, -2.7172674601279567, -2.7438149351493046, -2.7708237704444802, -2.7983066447352445, -2.826276704764824, -2.8547475871036943, -2.8837334411859503, -2.9132489536580572, -2.9433093741280323, -2.9739305424099607, -3.005128917366127, -3.03692160745715, -3.0693264031193017, -3.1023618110977864, -3.1360470908752434, -3.170402293346177, -3.2054483019005375, -3.2412068760933836, -3.27770069809254, -3.314953422112658, -3.3529897270620936, -3.391835372648901, -3.43151725921403, -3.472063491583829, -3.5135034472604167, -3.5558678492976856, -3.5991888442429003, -3.643500085559519, -3.688836822986266, -3.7352359983311954, -3.7827363482479526, -3.83137851459526, -3.881205163040541, -3.9322611106352303, -3.984593463163651, -4.03825176315031, -4.0932881495032065, -4.149757529874581, -4.207717766936973, -4.267229879903102, -4.328358262765119, -4.391170920894224, -4.455739727828397, -4.522140704286869, -4.590454321688756, -4.660765832723827, -4.733165631830848, -4.8077496487885565, -4.884619779023072, -4.963884354690799, -5.045658661116982, -5.130065503767631, -5.21723583161923, -5.307309423581591, -5.4004356455421165, -5.496774286656112, -5.596496484732866, -5.699785751991682, -5.80683911412246, -5.917868377526223, -6.033101541885509, -6.152784377888058, -6.277182193078915, -6.40658181254285, -6.54129380554001, -6.681654994479557, -6.828031288900298, -6.980820894659665, -7.140457957594241, -7.3074167118597275, -7.48221621643052, -7.6654257794022564, -7.857671189512042, -8.059641898587826, -8.272099328642065, -8.495886514564202, -8.731939339834165, -8.981299680987853, -9.245130850165658, -9.524735818556161, -9.821578823060543, -10.137311112361294, -10.47380178810934, -10.833174957724713, -11.217854758966729, -11.630620273308244, -12.0746729582638, -12.553720059881101, -13.072078605230761, -13.634806152817854, -14.247866693295844, -14.918343242194151, -15.65471321068392, -16.467209301799315, -17.368298613708017, -18.373327728345405, -19.501404986604076, -20.776628335659133, -22.229827690903203, -23.90109223324755, -25.843528681641416, -28.129011844594555, -30.857278997528127, -34.17087994397872, -38.280910298625294, -43.51384191196, -50.40282302434765, -59.88197731462933, -73.7506556810763, -95.9770733051765, -137.37558470567342, -241.56828258082993};
