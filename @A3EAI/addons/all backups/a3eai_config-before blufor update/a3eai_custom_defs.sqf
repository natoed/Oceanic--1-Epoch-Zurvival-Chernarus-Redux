/*
	A3EAI Custom Spawn Definitions File
	
	Instructions: 
	
		Generate custom spawns and blacklist areas using the included A3EAI Editor Tool (Inside the "Editor Tool" folder of the A3EAI download package).
		
		Instructions on how to use the Editor Tool are located on the A3EAI Wikia page: http://a3eai.wikia.com/wiki/A3EAI_Editor_Tool
		
		In order for A3EAI to load this file on startup, you must set in @A3EAI/A3EAI_config/config.cpp under the "A3EAI Settings" section:
		
			loadCustomFile = 1;

//----------------------------Add your custom spawn and dynamic area blacklist definitions below this line ----------------------------*/
//	Molos airfield AI Base1
["Remnant_Forces1",[26927.74,24888.482,0],40,6,2,false,0] call A3EAI_createCustomInfantryQueue;
["Remnant_Forces2",[26899.88,24911.83,0],"B_T_LSV_01_armed_F",100,[1,1],3,false,0] call A3EAI_createCustomVehicleQueue;
["Remnant_Forces2",[26995.887,24866.225,0],"I_G_Offroad_01_armed_F",50,[1,1],3,false,0] call A3EAI_createCustomVehicleQueue;
["Remnant_Forces3",[26924.11,24848.32,0],40,6,2,false,0] call A3EAI_createCustomInfantryQueue;
//	South Eastern AI Base2
["aibase2-1",[20646.5,10351.2,0],"O_T_LSV_02_armed_arid_F",100,[1,1],2,false,0] call A3EAI_createCustomVehicleQueue;
["aibase2-2",[20632.4,10344.4,0],75,2,3,false,0] call A3EAI_createCustomInfantryQueue;
["aibase2-3",[20660.8,10356.3,0],30,3,2,false,0] call A3EAI_createCustomInfantryQueue;
["aibase2-4",[20643.5,10322.4,0],50,3,2,false,0] call A3EAI_createCustomInfantryQueue;
["aibase2-5",[20630.1,10323.8,0],20,3,1,false,0] call A3EAI_createCustomInfantryQueue;
//	Western AI Base3
["base3_1",[5446.46,15823,3.17532],20,2,3,false,0] call A3EAI_createCustomInfantryQueue;
["base3_2",[5473.06,15828.9,4.56148],25,3,1,false,0] call A3EAI_createCustomInfantryQueue;
["base3_3",[5472.08,15801.3,4.23775],25,3,1,false,0] call A3EAI_createCustomInfantryQueue;
["base3_4",[5422.26,15814,4.2695],25,3,1,false,0] call A3EAI_createCustomInfantryQueue;
["base3_5",[5449.1,15822.6,0.74617],25,4,1,false,0] call A3EAI_createCustomInfantryQueue;
["base3_6",[5464.48,15793.3,0.00177002],25,2,3,false,0] call A3EAI_createCustomInfantryQueue;
["base3_7",[5430.37,15821.2,0.00151062],25,2,3,false,0] call A3EAI_createCustomInfantryQueue;
["base3_8",[5409.38,15808.5,0.00152588],"B_T_LSV_01_armed_F",75,[1,1],3,false,0] call A3EAI_createCustomVehicleQueue;

