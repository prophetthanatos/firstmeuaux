class CfgMagazines
{
    //Mortarvitaville
    class 8Rnd_82mm_Mo_shells;
	class 8Rnd_82mm_Mo_Smoke_white;
	class 8Rnd_82mm_Mo_Flare_white;
	class 8Rnd_82mm_Mo_guided;
	class 8Rnd_82mm_Mo_LG;
	
	//Throwables
	class OPTRE_M9_Frag;
    class ACE_CTS9;
    class M168_Remote_Mag;
	
	//Magazines
	class CA_Magazine;
	class VehicleMagazine;
	class 1Rnd_HE_Grenade_shell;
	class OPTRE_6Rnd_8Gauge_Slug;
	class 2Rnd_12Gauge_Pellets;
	class 150Rnd_762x51_Box;
	class OPTRE_60Rnd_5x23mm_Mag;
	class OPTRE_60Rnd_762x51_Mag;
	class OPTRE_60Rnd_762x51_Mag_AP;
	class OPTRE_60Rnd_762x51_Mag_JHP;
	class OPTRE_32Rnd_762x51_Mag_AP;
	class OPTRE_32Rnd_762x51_Mag_JHP;
	class OPTRE_32Rnd_762x51_Mag_SS;
	class OPTRE_15Rnd_762x51_Mag;
	class OPTRE_15Rnd_762x51_Mag_AP;
	class OPTRE_15Rnd_762x51_Mag_JHP;
	class OPTRE_15Rnd_762x51_Mag_FS;
	class OPTRE_15Rnd_762x51_Mag_SS;
	class OPTRE_36Rnd_95x40_Mag_JHP;
	class OPTRE_36Rnd_95x40_Mag_HPSAP;
	class OPTRE_36Rnd_95x40_Mag_SAPHE;
	class 40Rnd_105mm_APFSDS_T_Green;
	class RPG32_HE_F;
    
    class OPTRE_100Rnd_762x51_Box: OPTRE_60Rnd_762x51_Mag
	{
		ace_isbelt = 1;
		tracersEvery = 4;
		lastRoundsTracer = 5;
	};
	
	class OPTRE_100Rnd_762x51_Box_AP: OPTRE_100Rnd_762x51_Box
	{
		author = "1st MEU Oneill";
		
		ammo = "OPTRE_B_762x51_AP";
		displayname = "100Rnd 7.62x51mm AP Belt";
		displaynameshort = "100Rnd 7.62x51mm AP Belt";
		descriptionShort = "100 Round Belt<br>7.62x51mm<br>Armor Piercing";
	};
	
	class OPTRE_100Rnd_762x51_Box_JHP: OPTRE_100Rnd_762x51_Box
	{
		author = "1st MEU Oneill";
		
		ammo = "OPTRE_B_762x51_JHP";
		displayname = "100Rnd 7.62x51mm JHP Belt";
		displaynameshort = "100Rnd 7.62x51mm JHP Belt";
		descriptionShort = "100 Round Belt<br>7.62x51mm<br>Jacketed Hollow-Point";
	};
	
	class OPTRE_100Rnd_762x51_Box_Tracer: OPTRE_100Rnd_762x51_Box
	{
		ace_isbelt = 1;
		tracersEvery = 1;
		lastRoundsTracer = 5;
		
		displayname = "100Rnd 7.62x51mm Belt (Tracers)";
		displaynameshort = "100Rnd 7.62x51mm JHP Belt (Tracers)";
		descriptionShort = "100 Round Belt<br>7.62x51mm<br>Jacketed Hollow-Point<br>Tracers";
	};
	
	class OPTRE_100Rnd_762x51_Box_APT: OPTRE_100Rnd_762x51_Box_Tracer
	{
		author = "1st MEU Oneill";
		
		ammo = "OPTRE_B_762x51_AP";
		displayname = "100Rnd 7.62x51mm AP Belt (Tracers)";
		displaynameshort = "100Rnd 7.62x51mm AP Belt (Tracers)";
		descriptionShort = "100 Round Belt<br>7.62x51mm<br>Armor Piercing<br>Tracers";
	};
	
	class OPTRE_100Rnd_762x51_Box_JHPT: OPTRE_100Rnd_762x51_Box_Tracer
	{
		author = "1st MEU Oneill";
		
		ammo = "OPTRE_B_762x51_JHPT";
		displayname = "100Rnd 7.62x51mm JHP Belt (Tracers)";
		displaynameshort = "100Rnd 7.62x51mm JHP Belt (Tracers)";
		descriptionShort = "100 Round Belt<br>7.62x51mm<br>Jacketed Hollow-Point<br>Tracers";
	};
	
	class OPTRE_100Rnd_762x51_Box_Tracer_Yellow: OPTRE_100Rnd_762x51_Box_Tracer
	{
		ace_isbelt = 1;
		tracersEvery = 1;
		lastRoundsTracer = 5;
		
		displayname = "100Rnd 7.62x51mm Belt (Tracers-Yellow)";
		displaynameshort = "100Rnd 7.62x51mm JHP Belt (Tracers-Yellow)";
		descriptionShort = "100 Round Belt<br>7.62x51mm<br>Jacketed Hollow-Point<br>Tracers-Yellow";
	};
	
	class OPTRE_400Rnd_762x51_Box: OPTRE_100Rnd_762x51_Box
	{
		count = 400;
		mass = 120;
		
		ace_isbelt = 1;
		tracersEvery = 4;
		lastRoundsTracer = 5;
		
		displayname = "400Rnd 7.62x51mm Belt";
		displaynameshort = "400Rnd 7.62x51mm Belt";
		descriptionShort = "400 Round Belt<br>7.62x51mm";
	};
	
	class OPTRE_400Rnd_762x51_Box_AP: OPTRE_400Rnd_762x51_Box
	{
		author = "1st MEU Oneill";
		
		ammo = "OPTRE_B_762x51_AP";
		displayname = "400Rnd 7.62x51mm AP Belt";
		displaynameshort = "400Rnd 7.62x51mm AP Belt";
		descriptionShort = "400 Round Belt<br>7.62x51mm<br>Armor Piercing";
	};
	
	class OPTRE_400Rnd_762x51_Box_JHP: OPTRE_400Rnd_762x51_Box
	{
		author = "1st MEU Oneill";
		
		ammo = "OPTRE_B_762x51_JHP";
		displayname = "400Rnd 7.62x51mm JHP Belt";
		displaynameshort = "400Rnd 7.62x51mm JHP Belt";
		descriptionShort = "400 Round Belt<br>7.62x51mm<br>Jacketed Hollow-Point";
	};
	
	class OPTRE_400Rnd_762x51_Box_Tracer: OPTRE_400Rnd_762x51_Box
	{
		ace_isbelt = 1;
		tracersEvery = 1;
		lastRoundsTracer = 5;
		
		displayname = "400Rnd 7.62x51mm Belt (Tracers)";
		displaynameshort = "400Rnd 7.62x51mm Belt (Tracers)";
		descriptionShort = "400 Round Belt<br>7.62x51mm<br>Tracers";
	};
	
	class OPTRE_400Rnd_762x51_Box_APT: OPTRE_400Rnd_762x51_Box_Tracer
	{
		author = "1st MEU Oneill";
		
		ammo = "OPTRE_B_762x51_AP";
		displayname = "400Rnd 7.62x51mm AP Belt (Tracers)";
		displaynameshort = "400Rnd 7.62x51mm AP Belt (Tracers)";
		descriptionShort = "400 Round Belt<br>7.62x51mm<br>Armor Piercing<br>Tracers";
	};
	
	class OPTRE_400Rnd_762x51_Box_JHPT: OPTRE_400Rnd_762x51_Box_Tracer
	{
		author = "1st MEU Oneill";
		
		ammo = "OPTRE_B_762x51_JHPT";
		displayname = "400Rnd 7.62x51mm JHP Belt (Tracers)";
		displaynameshort = "400Rnd 7.62x51mm JHP Belt (Tracers)";
		descriptionShort = "400 Round Belt<br>7.62x51mm<br>Jacketed Hollow-Point<br>Tracers";
	};
	
    class OPTRE_100Rnd_95x40_Box: 150Rnd_762x51_Box
	{
		ace_isbelt = 1;
		tracersEvery = 4;
		lastRoundsTracer = 5;
	};
	
	class OPTRE_100Rnd_95x40_Box_Tracer: OPTRE_100Rnd_95x40_Box
	{
		ace_isbelt = 1;
		tracersEvery = 1;
		lastRoundsTracer = 5;
	};
	
	class OPTRE_100Rnd_95x40_Box_Tracer_Yellow: OPTRE_100Rnd_95x40_Box_Tracer
	{
		ace_isbelt = 1;
		tracersEvery = 1;
		lastRoundsTracer = 5;
	};
	
	class OPTRE_100Rnd_95x40_Box_JHP: OPTRE_100Rnd_95x40_Box
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		ace_isbelt = 1;
		tracersEvery = 4;
		lastRoundsTracer = 5;
		
		ammo = "OPTRE_B_95x40_JHP";
		displayname = "100Rnd 9.5x40mm JHP Box Magazine";
		displaynameshort = "9.5x60mm JHP";
		descriptionShort = "100 Box Round Magazine<br>9.5x40mm<br>Jacketed Hollow-Point";
		initspeed = 1200;
	};

	class OPTRE_100Rnd_95x40_Box_JHPT: OPTRE_100Rnd_95x40_Box_JHP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		ace_isbelt = 1;
		tracersEvery = 1;
		lastRoundsTracer = 5;
		
		ammo = "OPTRE_B_95x40_JHP";
		displayname = "100Rnd 9.5x40mm JHP Box Magazine (Tracer)";
		displaynameshort = "9.5x60mm JHP Tracer";
		descriptionShort = "100 Box Round Magazine<br>9.5x40mm<br>Jacketed Hollow-Point<br>Tracers";
	};

	class OPTRE_100Rnd_95x40_Box_HPSAP: OPTRE_100Rnd_95x40_Box
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		ace_isbelt = 1;
		tracersEvery = 4;
		lastRoundsTracer = 5;
		
		ammo = "OPTRE_B_95x40_HPSAP";
		displayname = "100Rnd 9.5x40mm HP-SAP Box Magazine";
		displaynameshort = "9.5x60mm HP-SAP";
		descriptionShort = "100 Box Round Magazine<br>9.5x40mm<br>High-Powered Semi-Armor-Piercing";
		initspeed = 1200;
	};

	class OPTRE_100Rnd_95x40_Box_HPSAPT: OPTRE_100Rnd_95x40_Box_HPSAP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		ace_isbelt = 1;
		tracersEvery = 1;
		lastRoundsTracer = 5;
		
		ammo = "OPTRE_B_95x40_JHP";
		displayname = "100Rnd 9.5x40mm HP-SAP Box Magazine (Tracer)";
		displaynameshort = "9.5x60mm HP-SAP Tracer";
		descriptionShort = "100 Box Round Magazine<br>9.5x40mm<br>High-Powered Semi-Armor-Piercingbr>Tracers";
	};

	class OPTRE_100Rnd_95x40_Box_SAPHE: OPTRE_100Rnd_95x40_Box
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		ace_isbelt = 1;
		tracersEvery = 4;
		lastRoundsTracer = 5;
		
		ammo = "OPTRE_B_95x40_SAPHE";
		displayname = "100Rnd 9.5x40mm SAP-HE Box Magazine";
		displaynameshort = "9.5x60mm SAP-HE";
		descriptionShort = "100 Round Magazine<br>9.5x40mm<br>Semi-Armor-Piercing High-Explosive";
		initspeed = 720;
	};

	class OPTRE_100Rnd_95x40_Box_SAPHET: OPTRE_100Rnd_95x40_Box_SAPHE
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		ace_isbelt = 1;
		tracersEvery = 1;
		lastRoundsTracer = 5;
		
		ammo = "OPTRE_B_95x40_SAPHE";
		displayname = "100Rnd 9.5x40mm SAP-HE Box Magazine (Tracer)";
		displaynameshort = "9.5x60mm SAP-HE Tracer";
		descriptionShort = "100 Round Box Magazine<br>9.5x40mm<br>Semi-Armor-Piercing High-Explosive<br>Tracers";
	};

	class OPTRE_100Rnd_95x40_Box_SS: OPTRE_100Rnd_95x40_Box
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		ace_isbelt = 1;
		tracersEvery = 4;
		lastRoundsTracer = 5;
		
		ammo = "OPTRE_B_95x40_SS";
		displayname = "100Rnd 9.5x40mm SS Box Magazine";
		displaynameshort = "9.5x60mm SS";
		descriptionShort = "100 Round Box Magazine<br>9.5x40mm<br>Sub-Sonic";
		initspeed = 340;
	};

	class OPTRE_200Rnd_95x40_Box: OPTRE_100Rnd_95x40_Box
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		ace_isbelt = 1;
		tracersEvery = 4;
		lastRoundsTracer = 5;
		
		count = 200;
		displayname = "200Rnd 9.5x40mm Box Magazine";
		descriptionShort = "200 Round Box Magazine<br>9.5x40mm";
		mass = 70.5;
		initspeed = 1100;
	};

	class OPTRE_200Rnd_95x40_Box_JHP: OPTRE_200Rnd_95x40_Box
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		ace_isbelt = 1;
		tracersEvery = 4;
		lastRoundsTracer = 5;
		
		ammo = "OPTRE_B_95x40_JHP";
		displayname = "200Rnd 9.5x40mm JHP Box Magazine";
		displaynameshort = "9.5x60mm JHP";
		descriptionShort = "200 Round Box Magazine<br>9.5x40mm<br>Jacketed Hollow-Point";
		initspeed = 1100;
	};

	class OPTRE_200Rnd_95x40_Box_JHPT: OPTRE_200Rnd_95x40_Box_JHP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		ace_isbelt = 1;
		tracersEvery = 1;
		lastRoundsTracer = 5;
		
		ammo = "OPTRE_B_95x40_JHP";
		displayname = "200Rnd 9.5x40mm JHP Box Magazine (Tracer)";
		displaynameshort = "9.5x60mm JHP Tracer";
		descriptionShort = "200 Round Box Magazine<br>9.5x40mm<br>Jacketed Hollow-Point<br>Tracers";

	};

	class OPTRE_200Rnd_95x40_Box_HPSAP: OPTRE_200Rnd_95x40_Box
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		ace_isbelt = 1;
		tracersEvery = 4;
		lastRoundsTracer = 5;
		
		ammo = "OPTRE_B_95x40_HPSAP";
		displayname = "200Rnd 9.5x40mm HP-SAP Box Magazine";
		displaynameshort = "9.5x60mm HP-SAP";
		descriptionShort = "200 Round Box Magazine<br>9.5x40mm<br>High-Powered Semi-Armor-Piercing";
		initspeed = 1200;
	};

	class OPTRE_200Rnd_95x40_Box_HPSAPT: OPTRE_200Rnd_95x40_Box_HPSAP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		ace_isbelt = 1;
		tracersEvery = 1;
		lastRoundsTracer = 5;
		
		ammo = "OPTRE_B_95x40_JHP";
		displayname = "200Rnd 9.5x40mm HP-SAP Box Magazine (Tracer)";
		displaynameshort = "9.5x60mm HP-SAP Tracer";
		descriptionShort = "200 Round Box Magazine<br>9.5x40mm<br>High-Powered Semi-Armor-Piercingbr>Tracers";
	};

	class OPTRE_200Rnd_95x40_Box_SAPHE: OPTRE_200Rnd_95x40_Box
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		ace_isbelt = 1;
		tracersEvery = 4;
		lastRoundsTracer = 5;
		
		ammo = "OPTRE_B_95x40_SAPHE";
		displayname = "200Rnd 9.5x40mm SAP-HE Box Magazine";
		displaynameshort = "9.5x60mm SAP-HE";
		descriptionShort = "200 Round Box Magazine<br>9.5x40mm<br>Semi-Armor-Piercing High-Explosive";
		initspeed = 720;
	};

	class OPTRE_200Rnd_95x40_Box_SAPHET: OPTRE_200Rnd_95x40_Box_SAPHE
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		ace_isbelt = 1;
		tracersEvery = 1;
		lastRoundsTracer = 5;
		
		ammo = "OPTRE_B_95x40_SAPHE";
		displayname = "200Rnd 9.5x40mm SAP-HE Box Magazine (Tracer)";
		displaynameshort = "9.5x60mm SAP-HE Tracer";
		descriptionShort = "200 Round Box Magazine<br>9.5x40mm<br>Semi-Armor-Piercing High-Explosive<br>Tracers";
	};

	class OPTRE_200Rnd_95x40_Box_SS: OPTRE_200Rnd_95x40_Box
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		ace_isbelt = 1;
		tracersEvery = 4;
		lastRoundsTracer = 5;
		
		ammo = "OPTRE_B_95x40_SS";
		displayname = "200Rnd 9.5x40mm SS Box Magazine";
		displaynameshort = "9.5x60mm SS";
		descriptionShort = "200 Round Box Magazine<br>9.5x40mm<br>Sub-Sonic";
		initspeed = 340;
	};
	
	class OPTRE_200Rnd_95x40_Box_Tracer: OPTRE_200Rnd_95x40_Box
	{
		ace_isbelt = 1;
		tracersEvery = 1;
		lastRoundsTracer = 5;
	};
	
	class OPTRE_200Rnd_95x40_Box_Tracer_Yellow: OPTRE_200Rnd_95x40_Box_Tracer
	{
		ace_isbelt = 1;
		tracersEvery = 1;
		lastRoundsTracer = 5;
	};
   
    class OPTRE_100Rnd_127x99_M250HMG: OPTRE_100Rnd_762x51_Box
	{
		dlc = "OPTRE";
        author = "[1stMEU] Oneill";
        ace_isbelt = 1;
		model = "\OPTRE_Weapons\MG\magazine_1.p3d";
		displayname = "100Rnd 12.7x99mm Box Magazine";
		displaynameshort = "12.7x99mm";
		ammo = "B_127x99_Ball";
		count = 100;
		initspeed = 900;
		picture = "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort = "100 Round Box Magazine<br>12.7x99mm";
		mass = 80;
		tracersEvery = 4;
		lastRoundsTracer = 5;
	};
	
	class OPTRE_100Rnd_127x99_HE_M250HMG: OPTRE_100Rnd_762x51_Box
	{
		dlc = "OPTRE";
        author = "[1stMEU] Oneill";
        ace_isbelt = 1;
		model = "\OPTRE_Weapons\MG\magazine_1.p3d";
		displayname = "100Rnd 12.7x99mm HE Box Magazine";
		displaynameshort = "12.7x99mm HE";
		ammo = "OPTRE_B_127x99_HE";
		count = 100;
		initspeed = 900;
		picture = "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort = "100 Round Box Magazine<br>12.7x99mm";
		mass = 80;
		tracersEvery = 4;
		lastRoundsTracer = 5;
	};
	
	class OPTRE_100Rnd_127x99_TRACER_M250HMG: OPTRE_100Rnd_762x51_Box
	{
		dlc = "OPTRE";
        author = "[1stMEU] Oneill";
        ace_isbelt = 1;
		model = "\OPTRE_Weapons\MG\magazine_1.p3d";
		displayname = "100Rnd 12.7x99mm Tracer Box Magazine";
		displaynameshort = "12.7x99mm";
		ammo = "B_127x99_Ball";
		count = 100;
		initspeed = 900;
		picture = "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort = "100 Round Box Magazine<br>12.7x99mm";
		mass = 80;
		tracersEvery = 1;
		lastRoundsTracer = 5;
	};
	
	class OPTRE_100Rnd_127x99_TRACER_HE_M250HMG: OPTRE_100Rnd_762x51_Box
	{
		dlc = "OPTRE";
        author = "[1stMEU] Oneill";
        ace_isbelt = 1;
		model = "\OPTRE_Weapons\MG\magazine_1.p3d";
		displayname = "100Rnd 12.7x99mm Tracer HE Box Magazine";
		displaynameshort = "12.7x99mm HE";
		ammo = "OPTRE_B_127x99_HE";
		count = 100;
		initspeed = 900;
		picture = "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort = "100 Round Box Magazine<br>12.7x99mm";
		mass = 80;
		tracersEvery = 1;
		lastRoundsTracer = 5;
	};
	
	class OPTRE_400Rnd_127x99_M250HMG: OPTRE_100Rnd_127x99_M250HMG
	{
		displayname = "400Rnd 12.7x99mm Box Magazine";
		count = 400;
		mass = 400;
	};
	
	class OPTRE_400Rnd_127x99_HE_M250HMG: OPTRE_100Rnd_127x99_HE_M250HMG
	{
		displayname = "400Rnd 12.7x99mm HE Box Magazine";
		count = 400;
		mass = 400;
	};
	
	class OPTRE_6Rnd_8Gauge_Pellet: 2Rnd_12Gauge_Pellets
	{
		scope = 2;
		scopeArsenal = 2;
		count = 6;
		ammo = "MEU_B_8Gauge_Pellet";
		displayname = "6Rnd 8 Gauge Pellets";
		displayNameShort = "8 Gauge Pellets";
		descriptionShort = "6 Rounds<br>8 Gauge test<br>Pellets";
		// Overwriting of the OPTRE classes back to the inherited...
		initSpeed = 500;
		model = "\OPTRE_Weapons\Shotgun\Shell_mag_S";
		picture = "\a3\weapons_F\data\ui\m_12gauge_ca";
	};
	
	class OPTRE_12Rnd_8Gauge_Pellet: OPTRE_6Rnd_8Gauge_Pellet
	{
        scope = 2;
		scopeArsenal = 2;
		count = 12;
		mass = 20;
		displayname = "12Rnd 8 Gauge Pellets";
		descriptionShort = "12 Rounds<br>8 Gauge test<br>Pellets";
	};
	
	class OPTRE_6Rnd_8Gauge_Beanbag: OPTRE_6Rnd_8Gauge_Slug
	{
		scope = 2;
		scopeArsenal = 2;
		count = 6;
		ammo = "OPTRE_B_8Gauge_Beanbags";
		displayname = "6Rnd 8 Gauge Beanbags";
		displayNameShort = "8 Gauge Beanbags";
		descriptionShort = "6 Rounds<br>8 Gauge test<br>Beanbags";
	};
	class OPTRE_12Rnd_8Gauge_Beanbag: OPTRE_6Rnd_8Gauge_Beanbag
	{
        scope = 2;
		scopeArsenal = 2;
		count = 12;
		mass = 20;
		displayname = "12Rnd 8 Gauge Beanbags";
		descriptionShort = "12 Rounds<br>8 Gauge test<br>Beanbags";
	};
	
	class ACE_1Rnd_82mm_Mo_HE: 8Rnd_82mm_Mo_shells 
	{
		mass = 35;
	};
	
	class ACE_1Rnd_82mm_Mo_Smoke: 8Rnd_82mm_Mo_Smoke_white 
	{
		mass = 35;
	};
	
	class ACE_1Rnd_82mm_Mo_Illum: 8Rnd_82mm_Mo_Flare_white 
	{
		mass = 35;
	};
	
	class ACE_1Rnd_82mm_Mo_HE_Guided: 8Rnd_82mm_Mo_guided 
	{
		mass = 35;
	};
	
	class ACE_1Rnd_82mm_Mo_HE_LaserGuided: 8Rnd_82mm_Mo_LG 
	{
		mass = 35;
	};
		
	class OPTRE_15Rnd_DMR_762x51_Mag_AP: OPTRE_15Rnd_762x51_Mag
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		initspeed = 1150;
		ammo = "OPTRE_B_762x51_DMR_AP";
		displayname = "15Rnd 7.62x51mm DMR AP Magazine";
		displaynameshort = "7.62x51mm AP";
		descriptionShort = "15 Round Magazine<br>7.62x51mm<br>Armor-Piercing";
	};

	class OPTRE_15Rnd_DMR_762x51_Mag_APT: OPTRE_15Rnd_DMR_762x51_Mag_AP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_762x51_DMR_AP";
		displayname = "15Rnd 7.62x51mm DMR AP Magazine (Tracer)";
		displaynameshort = "7.62x51mm AP Tracer";
		descriptionShort = "15 Round Magazine<br>7.62x51mm<br>Armor-Piercing<br>Tracers";
	};

	class OPTRE_15Rnd_DMR_762x51_Mag_JHP: OPTRE_15Rnd_762x51_Mag
	{
		dlc	= "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		initspeed = 1050;
		ammo = "OPTRE_B_762x51_DMR_JHP";
		displayname = "15Rnd 7.62x51mm DMR JHP Magazine";
		displaynameshort = "7.62x51mm JHP";
		descriptionShort = "15 Round Magazine<br>7.62x51mm<br>Jacketed Hollow-Point";
	};

	class OPTRE_15Rnd_DMR_762x51_Mag_JHPT: OPTRE_15Rnd_DMR_762x51_Mag_JHP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_762x51_DMR_JHP";
		displayname = "15Rnd 7.62x51mm DMR JHP Magazine (Tracer)";
		displaynameshort = "7.62x51mm JHP Tracer";
		descriptionShort = "15 Round Magazine<br>7.62x51mm<br>Jacketed Hollow-Point<br>Tracers";
	};

	class OPTRE_15Rnd_DMR_762x51_Mag_SS: OPTRE_15Rnd_762x51_Mag
	{
		dlc	= "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		initspeed = 340;
		ammo = "OPTRE_B_762x51_DMR_SS";
		displayname = "15Rnd 7.62x51mm DMR SS Magazine";
		displaynameshort = "7.62x51mm SS";
		descriptionShort = "15 Round Magazine<br>7.62x51mm<br>Subsonic";
	};

	class OPTRE_15Rnd_DMR_762x51_Mag_SST: OPTRE_15Rnd_DMR_762x51_Mag_SS
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_762x51_DMR_SS";
		displayname = "15Rnd 7.62x51mm DMR SS Magazine (Tracer)";
		displaynameshort = "7.62x51mm SS Tracer";
		descriptionShort = "15 Round Magazine<br>7.62x51mm<br>Subsonic<br>Tracers";
	};

	class OPTRE_15Rnd_DMR_762x51_Mag_FS: OPTRE_15Rnd_762x51_Mag
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		initspeed = 1200;
		ammo = "OPTRE_B_762x51_DMR_FS";
		displayname = "15Rnd 7.62x51mm DMR FS Magazine";
		displaynameshort = "7.62x51mm FS";
		descriptionShort = "15 Round Magazine<br>7.62x51mm<br>Fin-Stabalized";
	};

	class OPTRE_15Rnd_DMR_762x51_Mag_FST: OPTRE_15Rnd_DMR_762x51_Mag_FS
	{
		dlc	= "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_762x51_DMR_FS";
		displayname = "15Rnd 7.62x51mm DMR FS Magazine (Tracer)";
		displaynameshort = "7.62x51mm FS Tracer";
		descriptionShort = "15 Round Magazine<br>7.62x51mm<br>Fin-Stabalized<br>Tracers";
	};
	
	class OPTRE_15Rnd_762x51_Mag_APT: OPTRE_15Rnd_762x51_Mag_AP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_762x51_AP";
		displayname = "15Rnd 7.62x51mm AP Magazine (Tracer)";
		displaynameshort = "7.62x51mm AP Tracer";
		descriptionShort = "15 Round Magazine<br>7.62x51mm<br>Armor-Piercing<br>Tracers";
	};

	class OPTRE_15Rnd_762x51_Mag_JHPT: OPTRE_15Rnd_762x51_Mag_JHP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_762x51_JHP";
		displayname = "15Rnd 7.62x51mm JHP Magazine (Tracer)";
		displaynameshort = "7.62x51mm JHP Tracer";
		descriptionShort = "15 Round Magazine<br>7.62x51mm<br>Jacketed Hollow-Point<br>Tracers";
	};

	class OPTRE_15Rnd_762x51_Mag_SST: OPTRE_15Rnd_762x51_Mag_SS
	{
		dlc	= "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_762x51_SS";
		displayname = "15Rnd 7.62x51mm SS Magazine (Tracer)";
		displaynameshort = "7.62x51mm SS Tracer";
		descriptionShort = "15 Round Magazine<br>7.62x51mm<br>Subsonic<br>Tracers";
	};

	class OPTRE_15Rnd_762x51_Mag_FST: OPTRE_15Rnd_762x51_Mag_FS
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_762x51_FS";
		displayname = "15Rnd 7.62x51mm FS Magazine (Tracer)";
		displaynameshort = "7.62x51mm FS Tracer";
		descriptionShort = "15 Round Magazine<br>7.62x51mm<br>Fin-Stabalized<br>Tracers";
	};
	
	class 1Rnd_HE_MEU_shell:1Rnd_HE_Grenade_shell
	{
		author = "1stMEUKestrelOneill";
		displayName = "M301 1 Rnd 40mm HE Shell";
		displayNameShort = "1Rnd 40mm HE";
		descriptionShort = "40mm High Explosive Rifle Grenade";
		initSpeed = 100;
		ammo = "MEU_40mm_HE";
		fuseDistance = 3;
		mass = 6;
	};
		
	class 3Rnd_HE_MEU_shell:1Rnd_HE_MEU_shell
	{
		author = "1stMEUKestrelOneill";
		displayname = "M301 3 Rnd 40mm HE Shell";
		displayNameShort = "3Rnd 40mm HE";
		count = 3;
		mass = 18;
	};
	
	class 1Rnd_HEDP_MEU_shell:1Rnd_HE_MEU_shell
	{
		author = "1stMEUKestrelOneill";
		displayName = "M301 1 Rnd 40mm HEDP Shell";
		displayNameShort = "1Rnd 40mm HEDP";
		descriptionShort = "40mm Dual-Purpose Rifle Grenade";
		initspeed = 100;
		ammo = "MEU_40mm_HEDP";
		mass = 18;
	};
	
	class 40Rnd_HEDP_Belt:1Rnd_HEDP_MEU_shell
	{
		author = "1st MEU  Oneill";
		displayName = "40 Rnd 40mm HEDP Belt";
		displayNameShort = "40Rnd 40mm HEDP";
		descriptionShort = "40mm Dual-Purpose Grenade Belt";
		initspeed = 250;
		ammo = "MEU_40mm_HEDP";
		mass = 100;
		count = 40;
		tracersEvery = 4;
		lastRoundsTracer = 5;
	};
	
    class MEU_c7_remote_throwable_Mag : OPTRE_M9_Frag
    {
        author = "1st MEU Mark";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[1st MEU] Throwable C7";
		ammo = "MEU_c7_remote_ammo_thrown";
		model = "\OPTRE_Weapons\charges\C7Can.p3d";
		picture = "\OPTRE_weapons\charges\icons\c7.paa";
		mass = 8;
        descriptionShort = "An explosive and a detonator stuck together with gum";
		displayNameShort = "C7";
        initSpeed = 15;
    };
	
    class MEU_c12_remote_throwable_Mag : OPTRE_M9_Frag
    {
        author = "1st MEU Mark";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[1st MEU] Throwable C12";
		ammo = "MEU_c12_remote_ammo_thrown";
		model = "\OPTRE_Weapons\charges\c12G.p3d";
		picture = "\OPTRE_weapons\charges\icons\c12.paa";
		mass = 12;
        descriptionShort = "An explosive wand a detonator stuck together with gum";
		displayNameShort = "C12";
        initSpeed = 9;
    };
		
    class MEU_9bang_Mag : ACE_CTS9
    {
        author = "1st MEU Mark";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[1st MEU] Praetorian 9 Bang";
        descriptionShort = "ODSTs shouldn't play with grenades";
		displayNameShort = "P9B";
    };
	
    class MEU_C168_Mag : OPTRE_M9_Frag
    {
        author = "1st MEU Mark";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[1st MEU] Throwable M168";
		ammo = "MEU_C168_ammo_thrown";
		model = "\OPTRE_Weapons\charges\c12G.p3d";
		picture = "\OPTRE_weapons\charges\icons\m168.paa";
		mass = 40;
        descriptionShort = "An explosive and a detonator stuck together with gum";
		displayNameShort = "M168";
        initSpeed = 9;
    };
	
	class MEU_Fury_Mag : OPTRE_M9_Frag
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[1st MEU] Throwable Fury Tactical Nuclear Weapon";
		ammo = "MEU_Fury_ammo_thrown";
		model = "\OPTRE_weapons\backpacks\fury.p3d";
		picture = "\OPTRE_weapons\backpacks\icons\icon_b_fury_nuke_ca.paa";
		mass = 380;
        descriptionShort = "Fury Tactical Nuclear Weapon";
		displayNameShort = "Fury";
        initSpeed = 8;
    };
    
    class MEU_Bubble_Mag : OPTRE_M9_Frag
    {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1st MEU] Throwable Bubble Shield";
		displayNameShort = "Throwable Bubble Shield";
		descriptionShort = "Throwable Bubble Shield";
		descriptionUse = "Use: Throw Shield";
		type = "2* 256";
		allowedSlots[] = {901,701};
		ammo = "MEU_Bubbleshield_Ammo";
		model = "first_meu_aux\Data\Misc\Starry Night\bubbleshield.p3d";
		mass = 15;
		count = 1;
		sound[] = {"A3\sounds_f\dummysound",0.000316228,1,10};
        initSpeed = 12;
    };
	
	class OPTRE_60Rnd_5x23mm_Mag_FMJ: OPTRE_60Rnd_5x23mm_Mag
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		ammo = "OPTRE_B_5x23_Caseless_FMJ";
		displayname = "60Rnd 5x23mm FMJ Magazine";
		displaynameshort = "5x23mm FMJ";
		descriptionShort = "60 Round Magazine<br>5x23mm<br>Full Metal Jacket";
		initspeed = 500;
	};
	
	class OPTRE_60Rnd_5x23mm_Mag_FMJT: OPTRE_60Rnd_5x23mm_Mag_FMJ
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_5x23_Caseless_FMJ";
		displayname = "60Rnd 5x23mm FMJ Magazine (Tracer)";
		displaynameshort = "5x23mm FMJ Tracer";
		descriptionShort = "60 Round Magazine<br>5x23mm<br>Full Metal Jacket<br>Tracers";
	};

	class OPTRE_60Rnd_5x23mm_Mag_HV: OPTRE_60Rnd_5x23mm_Mag
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		ammo = "OPTRE_B_5x23_Caseless_HV";
		displayname = "60Rnd 5x23mm HV Magazine";
		displaynameshort = "5x23mm HV";
		descriptionShort = "60 Round Magazine<br>5x23mm<br>High-Velocity";
		initspeed = 600;
	};

	class OPTRE_60Rnd_5x23mm_Mag_HVT: OPTRE_60Rnd_5x23mm_Mag_HV
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_5x23_Caseless_HV";
		displayname = "60Rnd 5x23mm HV Magazine (Tracer)";
		displaynameshort = "5x23mm HV Tracer";
		descriptionShort = "60 Round Magazine<br>5x23mm<br>High-Velocity<br>Tracers";
	};

	class OPTRE_60Rnd_5x23mm_Mag_JHP: OPTRE_60Rnd_5x23mm_Mag
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		ammo = "OPTRE_B_5x23_Caseless_JHP";
		displayname = "60Rnd 5x23mm JHP Magazine";
		displaynameshort = "5x23mm JHP";
		descriptionShort = "60 Round Magazine<br>5x23mm<br>Jacketed Hollow-Point";
		initspeed = 480;
	};
	
	class OPTRE_60Rnd_5x23mm_Mag_JHPT: OPTRE_60Rnd_5x23mm_Mag_JHP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_5x23_Caseless_JHP";
		displayname = "60Rnd 5x23mm JHP Magazine (Tracer)";
		displaynameshort = "5x23mm JHP Tracer";
		descriptionShort = "60 Round Magazine<br>5x23mm<br>Jacketed Hollow-Point<br>Tracers";
	};

	class OPTRE_60Rnd_5x23mm_Mag_SS: OPTRE_60Rnd_5x23mm_Mag
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope						= 2;
		scopeArsenal				= 2;
		
		ammo = "OPTRE_B_5x23_Caseless_SS";
		displayname = "60Rnd 5x23mm SS Magazine";
		displaynameshort = "5x23mm SS";
		descriptionShort = "60 Round Magazine<br>5x23mm<br>Sub-sonic";
		initspeed = 340;
	};

	class OPTRE_60Rnd_5x23mm_Mag_SST: OPTRE_60Rnd_5x23mm_Mag_SS
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_5x23_Caseless_SS";
		displayname = "60Rnd 5x23mm SS Magazine (Tracer)";
		displaynameshort = "5x23mm SS Tracer";
		descriptionShort = "60 Round Magazine<br>5x23mm<br>Sub-sonic<br>Tracers";
	};
	
	class OPTRE_60Rnd_5x23mm_Mag_NARQ: OPTRE_60Rnd_5x23mm_Mag
	{
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		scope = 2;
		scopeArsenal = 2;
		
		initspeed = 900;
		ammo = "OPTRE_B_127x40_NARQ";
		displayname = "60Rnd 5x23mm NARQ Magazine";
		displaynameshort = "5x23mm NARQ";
		descriptionShort = "60 Round Magazine<br>5x23mm<br>Tranquilizer";
	};
	
	class OPTRE_60Rnd_5x23mm_Mag_NARQT: OPTRE_60Rnd_5x23mm_Mag_NARQ
	{
		tracersEvery = 1;
		displayname = "60Rnd 5x23mm NARQ Magazine (Tracer)";
		displaynameshort = "5x23mm NARQ Tracer";
		descriptionShort = "60 Round Magazine<br>5x23mm Tracer<br>Tranquilizer";
	};
	
	class OPTRE_36Rnd_95x40_Mag_JHPT: OPTRE_36Rnd_95x40_Mag_JHP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_95x40_JHP";
		displayname = "36Rnd 9.5x40mm JHP Magazine (Tracer)";
		displaynameshort = "9.5x60mm JHP Tracer";
		descriptionShort = "36 Round Magazine<br>9.5x40mm<br>Jacketed Hollow-Point<br>Tracers";
	};

	class OPTRE_36Rnd_95x40_Mag_HPSAPT: OPTRE_36Rnd_95x40_Mag_HPSAP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_95x40_JHP";
		displayname = "36Rnd 9.5x40mm HP-SAP Magazine (Tracer)";
		displaynameshort = "9.5x60mm HP-SAP Tracer";
		descriptionShort = "36 Round Magazine<br>9.5x40mm<br>High-Powered Semi-Armor-Piercingbr>Tracers";
	};

	class OPTRE_36Rnd_95x40_Mag_SAPHET: OPTRE_36Rnd_95x40_Mag_SAPHE
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_95x40_SAPHE";
		displayname = "36Rnd 9.5x40mm SAP-HE Magazine (Tracer)";
		displaynameshort = "9.5x60mm SAP-HE Tracer";
		descriptionShort = "36 Round Magazine<br>9.5x40mm<br>Semi-Armor-Piercing High-Explosive<br>Tracers";
	};
	
	class OPTRE_60Rnd_762x51_Mag_APT: OPTRE_60Rnd_762x51_Mag_AP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_762x51_AP";
		displayname = "60Rnd 7.62x51mm AP Magazine (Tracer)";
		displaynameshort = "7.62x51mm AP Tracer";
		descriptionShort = "60 Round Magazine<br>7.62x51mm<br>Armor-Piercing<br>Tracers";
	};

	class OPTRE_60Rnd_762x51_Mag_JHPT: OPTRE_60Rnd_762x51_Mag_JHP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_762x51_JHP";
		displayname = "60Rnd 7.62x51mm JHP Magazine (Tracer)";
		displaynameshort = "7.62x51mm JHP Tracer";
		descriptionShort = "60 Round Magazine<br>7.62x51mm<br>Jacketed Hollow-Point<br>Tracers";
	};

	class OPTRE_32Rnd_762x51_Mag_APT: OPTRE_32Rnd_762x51_Mag_AP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_762x51_AP";
		displayname = "32Rnd 7.62x51mm AP Magazine (Tracer)";
		displaynameshort = "7.62x51mm AP Tracer";
		descriptionShort = "32 Round Magazine<br>7.62x51mm<br>Armor-Piercing<br>Tracers";
	};

	class OPTRE_32Rnd_762x51_Mag_JHPT: OPTRE_32Rnd_762x51_Mag_JHP
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_762x51_JHP";
		displayname = "32Rnd 7.62x51mm JHP Magazine (Tracer)";
		displaynameshort = "7.62x51mm JHP Tracer";
		descriptionShort = "32 Round Magazine<br>7.62x51mm<br>Jacketed Hollow-Point<br>Tracers";
	};

	class OPTRE_32Rnd_762x51_Mag_SST: OPTRE_32Rnd_762x51_Mag_SS
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		tracersEvery = 1;
		
		ammo = "OPTRE_B_762x51_SS";
		displayname = "32Rnd 7.62x51mm SS Magazine (Tracer)";
		displaynameshort = "7.62x51mm SS Tracer";
		descriptionShort = "32 Round Magazine<br>7.62x51mm<br>Subsonic<br>Tracers";
	};
	
	class 80Rnd_30mm_HEAT: VehicleMagazine
	{
		author = "1st MEU Oneill";
		scope = 2;
		displayName = "80Rnd 30mm HEAT Belt ";
		displayNameShort = "30mm HEAT";
		ammo = "M1024_30mm_HEAT";
		count = 80;
		initSpeed = 1200;
		maxLeadSpeed = 83.3333;
		nameSound = "cannon";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {1.0,6};
	};
	
	class 60Rnd_30mm_APFSDS: VehicleMagazine
	{
		author = "1st MEU Oneill";
		scope = 2;
		displayName = "80Rnd 30mm APFSDS Belt ";
		displayNameShort = "30mm APFSDS";
		ammo = "M1024_30mm_APFSDS";
		count = 60;
		initSpeed = 1400;
		maxLeadSpeed = 83.3333;
		nameSound = "cannon";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {1.0,6};
	};
	
	class 30Rnd_90mm_SAPHE: 40Rnd_105mm_APFSDS_T_Green
	{
		ammo = "90mm_SAPHE";
		count = 30;
		displayname = "90mm SAPHE";
		displaynameshort = "SAPHE";
		initspeed = 2000;
		lastroundstracer = 0;
		scope = 2;
		tracersevery = 1;
	};
	
	class 30Rnd_90mm_HEAT: 30Rnd_90mm_SAPHE
	{
		ammo = "90mm_HEAT";
		count = 30;
		displayname = "90mm HEAT";
		displaynameshort = "HEAT";
	};
	
	class 60Rnd_90mm_APBC: 30Rnd_90mm_SAPHE
	{
		ammo = "90mm_APBC";
		count = 60;
		displayname = "90mm APBC";
		displaynameshort = "APBC";
	};
	
	class M41_Twin_HEAT_WireGuided: RPG32_HE_F
	{
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayname = "M19 HEAT (Wire-Guided) Twin Rockets";
		displaynameshort = "HEAT (Wire-Guided)";
		descriptionshort = "High Explosive Anti Tank<br/>SACLOS";
		ammo = "M41_Rocket_HEAT_WireGuided";
		picture = "\OPTRE_weapons\rockets\icons\rocket.paa";
		model = "\OPTRE_Weapons\Rockets\M41_tube.p3d";
		count = 2;
		mass = 100;
		initSpeed = 150;
		allowedSlots[] = {901,701};
		maxLeadSpeed = 270;
	};
	
	class M41_Twin_HEAT_HeatSeeking: M41_Twin_HEAT_WireGuided
	{
		displayname = "M19 HEAT (Heat-Seeking) Twin Rockets";
		displaynameshort = "HEAT (Heat-seeking)";
		descriptionshort = "High Explosive Anti Tank<br/>Heat-Seeking";
		ammo = "M41_Rocket_HEAT_HeatSeeking";
	};
	
	class M41_Twin_HEAT: M41_Twin_HEAT_WireGuided
	{
		dlc = "OPTRE";
		descriptionshort = "High Explosive Anti Tank<br/>Un-guided";
		displayname = "M19 HEAT (Un-guided) Twin Rockets";
		displaynameshort = "High Explosive Anti Tank";
		ammo = "M41_Rocket_HEAT_Unguided";
	};
	
	class M41_Twin_HEAP: M41_Twin_HEAT_WireGuided
	{
		dlc = "OPTRE";
		descriptionshort = "High Explosive Anti Personnel<br/>Un-guided";
		displayname = "M19 HEAP (Un-guided) Twin Rockets";
		displaynameshort = "High Explosive Anti Personnel";
		ammo = "M41_Rocket_HEAP_Unguided";
	};
};