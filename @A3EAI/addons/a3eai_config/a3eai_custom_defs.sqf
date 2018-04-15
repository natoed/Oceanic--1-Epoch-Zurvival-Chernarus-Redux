/*
	A3EAI Custom Spawn Definitions File
	
	Instructions: 
	
		Generate custom spawns and blacklist areas using the included A3EAI Editor Tool (Inside the "Editor Tool" folder of the A3EAI download package).
		
		Instructions on how to use the Editor Tool are located on the A3EAI Wikia page: http://a3eai.wikia.com/wiki/A3EAI_Editor_Tool
		
		In order for A3EAI to load this file on startup, you must set in @A3EAI/A3EAI_config/config.cpp under the "A3EAI Settings" section:
		
			loadCustomFile = 1;

//----------------------------Add your custom spawn and dynamic area blacklist definitions below this line ----------------------------*/
// Rebel Base
/*
["Rebels1",[8223.44,3559.21,0.00147629],30,4,2,true,1800] call A3EAI_createCustomInfantryQueue;
["Rebels2",[8162.73,3563.74,0.00144768],30,4,2,true,1800] call A3EAI_createCustomInfantryQueue;
["Rebels3",[8223.96,3611.98,5.84161],30,4,2,true,1800] call A3EAI_createCustomInfantryQueue;
["Rebels4",[8179.83,3620.5,0.0018692],30,4,2,true,1800] call A3EAI_createCustomInfantryQueue;
["Rebels5",[8214.62,3626.87,0.00172138],50,3,3,true,1800] call A3EAI_createCustomInfantryQueue;
["Rebels6",[8201.82,3533.02,0.00121307],50,3,3,true,1800] call A3EAI_createCustomInfantryQueue;
["Rebels7",[8224.22,3659.45,0.00139236],50,4,3,true,1800] call A3EAI_createCustomInfantryQueue;
["Rebels8",[8204.15,3606.7,3.05672],10,4,3,true,1800] call A3EAI_createCustomInfantryQueue;
*/


// Sugglers Encampment
["group1",[14232.6,14105.6,0.00140381],40,4,2,true,1200] call A3EAI_createCustomInfantryQueue;
["group2",[14193.5,14081.4,0.00126648],40,4,2,true,1200] call A3EAI_createCustomInfantryQueue;
["group3",[14167.2,14120.7,0.046524],40,4,2,true,1200] call A3EAI_createCustomInfantryQueue;
["group4",[14204.4,14142,0.00134277],40,4,2,true,1200] call A3EAI_createCustomInfantryQueue;
["group5",[14177.2,14146.1,0.00131226],100,3,3,true,1200] call A3EAI_createCustomInfantryQueue;
["group6",[14164.9,14084.5,0.00160217],100,3,3,true,1200] call A3EAI_createCustomInfantryQueue;
["group7",[14230.4,14138.4,0.00137329],100,3,3,true,1200] call A3EAI_createCustomInfantryQueue;


// Sugglers unmarked south east island 
["group1_1",[13460.1,3325.1,0.00160217],20,5,3,true,1200] call A3EAI_createCustomInfantryQueue;
["group1_2",[14230.4,14138.4,0.00137329],60,3,3,true,1200] call A3EAI_createCustomInfantryQueue;
/*
//Altar Fortress AI Mission
["Altar1",[8157.42,9021.29,53.0961],100,3,2,false,0] call A3EAI_createCustomInfantryQueue;
["Altar2",[8139.87,9021.96,53.095],100,3,2,false,0] call A3EAI_createCustomInfantryQueue;
["Altar3",[8150.05,9068.71,53.1065],100,3,3,false,0] call A3EAI_createCustomInfantryQueue;
["Altar4",[8100.13,9020.11,53.1065],100,3,3,false,0] call A3EAI_createCustomInfantryQueue;
["Altar5",[8154.42,8966.98,53.1079],100,3,3,false,0] call A3EAI_createCustomInfantryQueue;
["Altar6",[8201.72,9013.72,53.1038],100,3,3,false,0] call A3EAI_createCustomInfantryQueue;
["Altar7",[8187.5,9021.69,57.861],100,3,2,false,0] call A3EAI_createCustomInfantryQueue;
["Altar8",[8140.39,9013.12,56.8693],100,3,2,false,0] call A3EAI_createCustomInfantryQueue;
["AltarVeh1",[8149.20,9112.81,0.00112915],"I_mas_cars_UAZ_M2",150,[1,1],2,false,0] call A3EAI_createCustomVehicleQueue;
["AltarVeh2",[8149.69,8915.81,0.00146484],"I_mas_cars_LR_soft_M2",150,[1,1],3,false,0] call A3EAI_createCustomVehicleQueue;
//["AltarVeh1",[8149.53,9108.17,0.00112915],"I_mas_cars_UAZ_M2",150,[1,1],2,false,0] call A3EAI_createCustomVehicleQueue;
//["AltarVeh2",[8149.11,8921.98,0.00146484],"I_mas_cars_LR_soft_M2",150,[1,1],3,false,0] call A3EAI_createCustomVehicleQueue;

*/

