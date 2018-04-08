serverRestart         = "false"; 		// true sends #shutdown command to server after the time specified in ForceRestartTime
forceRestartTime      = 21605; 			// 4 hour restarts

// Time based
	StaticDateTime[] 	= {0,0,0,20,0}; // {0,0,0,8,0} would forces the server to start at 8am each time it is started while allowing the year, month and day to stay real time. Any values left at 0 will result in no change.
	timeDifference 		= 0; 			// Server uses real time this will allow you to offset just the hour.
	timeMultiplier 		= 2; 			// Sets a time multiplier for in-game time. The command range is now capped at 0.1 - 120 to avoid performance problems.
	lootMultiplier 		= 0.5; 			// 1 = max loot bias. This controls how much loot can payout per Epoch loot container.

// Events
	WeatherStaticForecast[] = {}; 		// Default: {75.5,0,{0,0,0},0,{1,1}}; // Clear day; {19,1,{1,1,40},1,{5,5}}; // Cold Foggy Rainy Overcast Windy; Format: {temp <scalar>,rain <scalar>,fog <array>,overcast <scalar>,wind <array>}
	events[] = {
		{
			21605, // SECOND <scalar>,
			"CarnivalSpawner", // EVENT <string>
			0, //INIT <scalar> 1 = run script at startup or 0 normal delay
			2, //PREPOSTFIX <scalar> 1 = (epoch_settings pbo) 2 = (epoch_events pbo) 0 = use full file path
			-1, //RUNNUMTIMES <scalar> -1 infinite
			{}, //execVM payload <array>
			{"VR"} //disallowed worlds <array>
		}, 
		// { 1800, "PaydayEvent", 0, 2},
		// { 1200, "MessageServer", 0, 2},
		{ 2900, "AnimatedCrashSpawner", 0 , 1, -1, {} ,{"VR"}},
		{ 3700, "AirDrop", 0 , 2, -1, {} ,{"VR"}},
		{ 4800, "EarthQuake", 0 , 2, -1, {} ,{"VR"}},
		{ 5700, "Satellite", 0 , 2, -1, {} ,{"VR"}},
	//	{ 900, "ChangeWeather", 1 , 2, -1, {} ,{"VR"}},
		{ 1200, "ContainerSpawner", 0 , 2, -1, {} ,{"VR"}},
		{ 1440, "GardenManager", 0 , 2, -1, {} ,{"VR"}},
		{ 2500, "MoneyDrop", 0 , 2 , -1, {} ,{"VR"}},
		{ 600, "PlantSpawner", 0 , 2 , -1, {} ,{"VR"}} //No comma on last Entry
	};

// Antagonists
	antagonistChancePDeath = 0.00; 		//33% chance when player was killed from a other player (selfkill doesn't count)

// Player Related
	cloneCost = 100; 					// debt incurred on player death
	MaxBankDebitforTrade = -50000;		// If Player has less money on Bank, Crypto from Trade goes directly to Bank instead to Player

// Default Loadout
defaultUniformFemale =		"U_CamoOutback_uniform";
defaultVestFemale =			"V_F41_EPOCH";
defaultUniformMale =		"U_B_survival_uniform";
defaultVestMale =			"V_41_EPOCH";
defaultGoggles =			"";
defaultHeadgear =			"";
defaultBackpack =			"";
defaultprimaryWeapon[] =	{"Rollins_F","","","",{"5Rnd_rollins_mag",5},{},""};																		// {"arifle_MX_pointer_F","","acc_pointer_IR","",{"30Rnd_65x39_caseless_mag",29},{},""};
defaultsecondaryWeapon[] = 	{};																															// {"launch_NLAW_F","","","",{"NLAW_F",1},{},""};
defaulthandgunWeapon[] =	{"ruger_pistol_epoch","","","",{"10rnd_22X44_magazine",10},{},""};															// {"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""};
defaultuniformItems[] =		{{"FAK",1},{"ItemBakedBeans",1},{"ItemBottlePlastic_Clean",1},{"5Rnd_rollins_mag",1,5},{"10rnd_22X44_magazine",1,10}};		// {{"FAK",1},{"30Rnd_65x39_caseless_mag",2,30},{"Chemlight_green",1,1}};
defaultvestItems[] =		{};																															// {{"30Rnd_65x39_caseless_mag",3,30},{"16Rnd_9x21_Mag",2,16},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}};
defaultbackpackItems[] =	{};																															// {{"Medikit",1},{"FAK",10},{{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},1}};
defaultassignedItems[] =	{};																															// {"Rangefinder","","","",{},{},""}
defaultlinkedItems[] =		{"ItemMap","","EpochRadio0","","",""};																						// {"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};

// vehicles - Max vehicle slots is calculated from per vehicle limits below. Warning! Higher the number lower the performance.
	ReservedVehSlots = 50;				// Reserved Vehicle Slots (only needed, if you manually spawn in additional Vehicles - AdminTool / Blackmarket...)
	disableAutoRefuel = "true"; 		// Removes auto refuel from all buildings at server startup.
	VehLockMessages = "true";			// Give players a hint, that the Vehicle is locked / unlocked
	removevehweapons[] = {				// remove these Weapons from spawned Vehicles
		"missiles_DAR","gatling_30mm","gatling_20mm","missiles_DAGR","cannon_30mm_Plane_CAS_02_F","Missile_AA_03_Plane_CAS_02_F","Missile_AGM_01_Plane_CAS_02_F","Rocket_03_HE_Plane_CAS_02_F",
		"Rocket_03_AP_Plane_CAS_02_F","Bomb_03_Plane_CAS_02_F","Bomb_04_Plane_CAS_01_F","Rocket_04_AP_Plane_CAS_01_F","Rocket_04_HE_Plane_CAS_01_F","Missile_AGM_02_Plane_CAS_01_F","Missile_AA_04_Plane_CAS_01_F",
		"Gatling_30mm_Plane_CAS_01_F","GBU12BombLauncher_Plane_Fighter_03_F","missiles_ASRAAM","missiles_SCALPEL","Twin_Cannon_20mm","missiles_Zephyr","rockets_skyfire","gatling_30mm_vtol_02"
	};
	removevehmagazinesturret[] = {		// Remove these Magazines from the given Turret from spawned Vehicles
		{"24Rnd_missiles",{-1}},
		{"200Rnd_40mm_G_belt",{0}}
	};
	disableVehicleTIE = "false";

// BaseBuilding
	StorageSlotsLimit 	= 100000; 		// Max storage slots allowed. Warning! Higher the number lower performance.
	BuildingSlotsLimit 	= 100000; 		// Max building slots allowed. Warning! Higher the number lower performance.
	UseIndestructible 	= "true";		// Enable / Disable Indestructible BaseObjects
	IndestructibleBaseObjects[] = 	{	// Can be Names or Classes
										"Constructions_static_F",
										"Buildable_Storage",
										//"PlotPole_EPOCH",
										"LockBox_EPOCH",
										"Safe_EPOCH"
									};
	ExceptedBaseObjects[] = 		{	// Not Indestructible, also if in a Class of IndestructibleBaseObjects
										"CinderWallGarage_EPOCH",
										"WoodLargeWallDoorL_EPOCH",
										"WoodLargeWallDoor_EPOCH",
										"WoodWall4_EPOCH"
									};
	UseDeSimulateObjects	=	"true";	// Disable Simulation for specifed Base Objects
	DeSimulateObjects[] =	{			// Base Objects to disable Simulation. Can be Names or Classes
								"PlotPole_EPOCH",
								"WoodFoundation_EPOCH","Foundation_EPOCH",
								"WoodQuarterFloor_EPOCH","WoodHalfFloor_EPOCH","WoodFloor_EPOCH",
								"MetalQuarterFloor_EPOCH","MetalHalfFloor_EPOCH","MetalFloor_EPOCH",
								"CinderQuarterFloor_EPOCH","CinderHalfFloor_EPOCH","CinderFloor_EPOCH",
								"WoodLargeWall_EPOCH","WoodLargeWallDoorway_EPOCH","WoodLargeWallCor_EPOCH","WoodWall1_EPOCH","WoodWall2_EPOCH","WoodWallWindow_EPOCH",
								"CinderWallHalf_EPOCH","CinderWall_EPOCH",
								"WoodRamp_EPOCH","WoodStairs_EPOCH","WoodStairs2_EPOCH",
								"SolarGen_EPOCH","SandbagWall_EPOCH","BarbedWire_EPOCH","Sink_EPOCH","BagBunker_EPOCH","WaterPump_EPOCH","Scaffolding_EPOCH","SunShade_EPOCH","WatchTower_EPOCH","SandbagWallLong_EPOCH","TankTrap_EPOCH"
							};
	ExceptedDeSymObjects[] = 	{		// Not Desymulated, also if in a Class of DeSimulateObjects
								};

// Dynamic Simulation System
	enableDynamicSimulationSystem 		= "true";	// enable / disable the complete dynamic simulation system
	//Individual toggles for testing
	vehicleDynamicSimulationSystem 		= "true"; 	// type car, air, boat
	playerDynamicSimulationSystem 		= "true"; 	// clients
	baseDynamicSimulationSystem 		= "true"; 	// plot pole and base pieces
	// Distances and Coef
	isMovingCoefValue 			= 2;
	groupDynSimDistance 		= 500;
	vehicleDynSimDistance 		= 350;
	emptyVehicleDynSimDistance	= 250;
	propDynSimDistance 			= 50;

// Traders
	taxRate = 0.9; 						// controls the price increase for purchases
	starterTraderItems[] = { 			// Starter Items for fresh spawned trader first array is classnames second is quantity.
		{"ItemSodaBurst","meatballs_epoch","MortarBucket","CinderBlocks","VehicleRepair","CircuitParts","ItemCorrugated","PartPlankPack","ItemRock","ItemRope","ItemStick"},
		{5,5,5,5,5,5,5,5,5,5,5}
	};
	NPCSlotsLimit = 6; 					// Max number of traders static or dynamic. Warning! Higher the number lower performance.
	forceStaticTraders = "true"; 		// disables traders moving from work to home
	TraderGodMode = "false";			// If true, Trader can not be killed by Players
	storedVehicleLimit = 15;			// Vehicles more than x stored in ALL Traders will automatically be deleted on Restart. 
	StaticTraderItemPurge[] = {100,15};	// {ItemCount,ReducePercent} - If a static trader have more than x different items, on restart the items will be reduced by y percent
	DynamicTraderRespawnCount = 100;	// If a dynamic Trader have more than x different Items, he will respawn on another Spot (with start Items)
	TraderItemCountPerItem[] = {50,5};	// If the Trader has more than x pieces of an Item, it will be reduced to y pieces (on Restart)
	TraderItemsDeleteInstant[] = {		// List of Items, that will be deleted from Trader instant after sell
		// "ItemVehDoc1",
		// "ItemVehDoc2",
		// "ItemVehDoc3",
		// "ItemVehDoc4"
	};
	TraderItemsDeleteRestart[] = {		// List of Items, that will be deleted from Trader on Restart
		// "ItemLockbox",
		// "ItemSafe",
		"ItemGoldBar10oz"
	};

// Spawntables
	forcedVehicleSpawnTable = ""; 		// leave blank for default. Options: "allowedVehiclesList","allowedVehiclesList_CUP","allowedVehiclesList_MAD","allowedVehiclesList_MADCUP"
	forcedLootSpawnTable = ""; 			// leave blank for default. Options: "CfgLootTable","CfgLootTable_CUP","CfgLootTable_MAD","CfgLootTable_MADCUP"

// Markers
	showEarthQuakes = "true"; 			// show mineral viens caused by earthquakes
	showSatellites = "true"; 			// show crashed Satellites
	showShippingContainers = "true";	// Show location of events based loots (plants, shipping container, Carnival)
	SHOW_TRADERS = "true"; 				// Show locations of traders
	SHOW_JAMMERS = "false"; 			// Shows location of base jammers
	SHOW_BOATLOOT = "true"; 			// Shows the location of shipwreck loot
	DEBUG_VEH = "false"; 				// DEBUG ONLY used to debug spawing of vehicles

// Hive Related
	vehicleLockTime = "1209600"; 			// Controls how many seconds it takes to allow another person/group to unlock vehicle.
	expiresBuilding = "2592000";  		// expiration date in seconds for buildings
	expiresPlayer = "2592000";  		// expiration date in seconds for players
	expiresBank = "7776000";  			// expiration date in seconds for players bank
	expiresVehicle = "604800";  		// expiration date in seconds for vehicles
	expiresAIdata = "604800";  			// expiration date in seconds for NPC Trader inventory
	expiresCommunityStats = "7776000";	// expiration date in seconds for players community stats

// Admin Features
	hiveAdminCmdExec = "false";			// true = enables extra (To Be Released) feature to allow execution of code via hive.
	hiveAdminSavePlayerList = "true"; 	// true = enables saving of playerUID array to hive value PLAYERS:#InstanceID.
	hiveAdminCmdTime = 5; 				// how many seconds between each command queue call.

// DEBUG
	useOldLoadVehicles = "false";
	enableUnitTestOnStart = 1; 			// enable extra debug for database calls. 1 = enabled.
