class CfgAmmo
{
	//Vehicle Rounds
	class ammo_Missile_CruiseBase;
	class Sh_105mm_APFSDS_T_Green;
	class Sh_105mm_HEAT_MP;
	class B_30mm_MP;
	class B_30mm_APFSDS;	
	
	//Explosives
	class G_40mm_HE;
    class ACE_SatchelCharge_Remote_Ammo_Thrown;
    class ACE_G_CTS9;
	class M_Titan_AT;
	
	//Shotguns
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Pellets_Submunition_Deploy;
	class B_12Gauge_Slug;
	
	//Rifles
	class OPTRE_B_5x23_Caseless;
	class OPTRE_B_762x51_Ball;
	class OPTRE_B_95x40_Ball;
	class OPTRE_B_127x40_Ball;
	
	//Miscelaneous Classes
	class SensorTemplateIR;
	
    // code name LMAO
	class Optre_ammo_Missile_Cruise_01: ammo_Missile_CruiseBase
	{
		cameraViewAvailable = 1;
		model = "OPTRE_Weapons\Aircraft\Shiva_missile_fly.p3d";
		proxyShape = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		flightProfiles[] = {"TopDown"};
		class TopDown
		{
			ascendHeight = 1600;
			descendDistance = 3200;
			minDistance = 800;
			ascendAngle = 20;
		};
	};
    // end codename LMAO
	
    // throwable stuff dont forget the ace funtion numb nuts
    class MEU_c7_remote_ammo_thrown : ACE_SatchelCharge_Remote_Ammo_Thrown
    {
        scope = 1;
        hit = 3000;
		indirectHit = 2500;
		indirectHitRange = 2;
		defaultMagazine = "MEU_c7_remote_throwableMag";
		model = "\OPTRE_Weapons\charges\C7Can.p3d";
        timeToLive = 15;
        fuseDistance = 0;
        explosionTime = 7;
        ExplosionEffects = "DirectionalMineExplosion";
		CraterEffects = "";
		craterShape = "\A3\weapons_f\empty.p3d";
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet","BigIED_Tail_SoundSet","Explosion_Debris_SoundSet"};
		whistleDist = 10;
        initSpeed = 15;
    };
    class MEU_c12_remote_ammo_thrown : ACE_SatchelCharge_Remote_Ammo_Thrown
    {
        scope = 1;
        hit = 6500;
		indirectHit = 6000;
		indirectHitRange = 5;
		defaultMagazine = "MEU_c12_remote_throwableMag";
		model = "\OPTRE_Weapons\charges\c12g.p3d";
        timeToLive = 15;
        fuseDistance = 0;
        explosionTime = 12;
        deflectionSlowDown = 0.1;
        ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet","BigIED_Tail_SoundSet","Explosion_Debris_SoundSet"};
        whistleDist = 10;
        initSpeed = 9;
    };
    class MEU_9bang : ACE_G_CTS9
    {
        explosionTime = 1.5;
        ace_flashbang_Interval = 0.05;
    };
    class MEU_C168_ammo_thrown : ACE_SatchelCharge_Remote_Ammo_Thrown
    {
        scope = 1;
        hit = 9500;
		indirectHit = 9000;
		indirectHitRange = 10;
		defaultMagazine = "MEU_C168_Mag"; 
		model = "\OPTRE_Weapons\charges\m168g.p3d";
        timeToLive = 15;
        fuseDistance = 0;
        explosionTime = 12;
        deflectionSlowDown = 0.1;
        ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet","BigIED_Tail_SoundSet","Explosion_Debris_SoundSet"};
        whistleDist = 10;
        initSpeed = 9;
    };
	class MEU_Fury_ammo_thrown : ACE_SatchelCharge_Remote_Ammo_Thrown
    {
        scope = 1;
        hit = 100000;
		indirectHit = 100000;
		indirectHitRange = 100000;
		defaultMagazine = "MEU_Fury_Mag"; 
		model = "\OPTRE_weapons\backpacks\fury.p3d";
        timeToLive = 15;
        fuseDistance = 0;
        explosionTime = 12;
        deflectionSlowDown = 0.1;
        ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet","BigIED_Tail_SoundSet","Explosion_Debris_SoundSet"};
        whistleDist = 10;
        initSpeed = 9;
    };
	// end throwable explosives
	//throwable sheild
	class MEU_Bubbleshield_Ammo: ACE_SatchelCharge_Remote_Ammo_Thrown
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		defaultMagazine = "MEU_Bubble_Mag";
		model = "first_meu_aux\Data\Misc\Starry Night\bubbleshield.p3d";
		explosive = 0;
		explosionType = "";
		mineModelDisabled = "\OPTRE_FC_Weapons\PlasmaGrenade\plasmagrenade.p3d";
		triggerWhenDestroyed = 0;
		explosionEffects = "";
		CraterEffects = "";
		soundHit1[] = {"",0,0,0};
		multiSoundHit[] = {};
		mineInconspicuousness = 9999;
        timetolive = 15;
		explosionTime = 6;
		effectFlare = "";
		effectsFire = "";
		effectsMissile = "";
		effectsSmoke = "";
		explosionEffectsDir = "";
		explosionForceCoef = "";
		explosionPos = "";
		explosionEffectsRadius = 0;
		explosionSoundEffect = "";
		SoundSetExplosion[] ={""};
		class CamShakeExplode
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
    //end throwable sheild
	// start ammo reballance
	class OPTRE_B_8Gauge_Slug: B_12Gauge_Slug
	{
		caliber	= 8;
		hit = 36;
	};

	class OPTRE_B_5x23_Caseless_FMJ: OPTRE_B_5x23_Caseless
	{
		caliber = 2;
		hit = 14;
		typicalSpeed = 500;
	};

	class OPTRE_B_5x23_Caseless_HV: OPTRE_B_5x23_Caseless
	{
		caliber = 1;
		hit = 12;
		typicalSpeed = 600;
	};

	class OPTRE_B_5x23_Caseless_JHP: OPTRE_B_5x23_Caseless
	{
		caliber = 0.25;
		hit = 16;
		typicalSpeed = 480;
	};

	class OPTRE_B_5x23_Caseless_SS: OPTRE_B_5x23_Caseless
	{
		caliber = 2;
		hit = 18;
		typicalSpeed = 340;
	};
	
	class OPTRE_B_762x51_JHP: OPTRE_B_762x51_Ball
	{
		caliber = 0.4;
		hit = 18;
		typicalSpeed = 860;
	};
	
	class OPTRE_B_95x40_JHP: OPTRE_B_95x40_Ball
	{
		caliber = .75;
		hit = 20;
		typicalSpeed = 1000;
	};
	
	class MEU_B_8Gauge_Pellet: B_12Gauge_Pellets_Submunition
	{
		submunitionAmmo = "MEU_B_8Gauge_Pellet_Submunition";
		thrust = 30;
		triggerTime = 0.001;
	};

	class OPTRE_B_8Gauge_Beanbags: OPTRE_B_8Gauge_Slug
	{
		hit = 0.1;
		typicalspeed = 350;
	};

	class MEU_B_8Gauge_Pellet_Submunition: B_12Gauge_Pellets_Submunition_Deploy
	{
		caliber = 4;
		hit = 12;
	};
	
	class OPTRE_B_8Gauge_Incendiary_Submunition: B_12Gauge_Pellets_Submunition_Deploy
	{
		caliber = 4;
		hit = 16;
		
		deflecting = 0;
		thrust = 75;
		model = "\V_SO_Core\data\Effects\fire_effect";
		timeToLive = 1;
		tracerEndTime = 1;
		tracerStartTime = 0;
		tracerScale = 0.75;
	};
	
	class OPTRE_B_762x51_DMR_AP: OPTRE_B_762x51_Ball
	{
		caliber	= 4;
		hit = 22;
		typicalSpeed = 1150;
	};

	class OPTRE_B_762x51_DMR_FS: OPTRE_B_762x51_Ball
	{
		airFriction = 0;
		caliber = 3;
		hit = 18;
		typicalSpeed = 1200;
		sideairFriction = 0;
	};

	class OPTRE_B_762x51_DMR_JHP: OPTRE_B_762x51_Ball
	{
		caliber = 1;
		hit = 26;
		typicalSpeed = 1050;
	};

	class OPTRE_B_762x51_DMR_SS: OPTRE_B_762x51_Ball
	{
		hit = 26;
		typicalSpeed = 343;
	};

	class MEU_40mm_HE: G_40mm_HE
	{
		hit = 80;
		indirecthit = 60;
		indirecthitrange = 6;
		timeToLive = 30;
        fuseDistance = 6;
	};
	
	class MEU_40mm_HEDP: MEU_40mm_HE
	{
		hit = 180;
		indirectHit = 60;
		indirectHitRange = 4;
		caliber = 4;
		warheadName = "HEAT";
        timeToLive = 30;
        fuseDistance = 4;
	};
	
	class M41_Rocket_HEAT_WireGuided: M_Titan_AT
	{
		model = "OPTRE_weapons\rockets\M41_rocket.p3d";
		effectsMissile = "missile3";
		timeToLive = 30;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512 + 256";
		allowAgainstInfantry = 0;
		hit = 520;
		indirectHit = 40;
		indirectHitRange = 4;
		explosive = 0.8;
		fuseDistance = 20;
		irLock = 0;
		airLock = 2;
		lockType = 0;
		laserLock = 0;
		nvLock = 0;
		cmImmunity = 0.4;
		manualControl = 1;
		missileManualControlCone = 360;
		maxControlRange = 10000;
		weaponLockSystem = "2 + 16";
		simulationStep = 0.002;
		airFriction = 0.145;
		sideAirFriction = 0.3;
		maneuvrability = 24;
		coefGravity = 1;
		missileKeepLockedCone = 360;
		missileLockCone = 270;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 20;
		missileLockMaxSpeed = 270;
		trackOversteer = 0.9;
		trackLead = 0.8;
		initTime = 0.1;
		thrustTime = 10;
		thrust = 100;
		maxSpeed = 270;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 340;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						maxTrackableATL = 4000;
					};
				};
			};
		};
		class ace_missileguidance
		{
			enabled = 1;
			canVanillaLock = 0;
			onFired = "ace_hot_fnc_onFired";
			minDeflection = 0.00025;
			maxDeflection = 0.007;
			incDeflection = 0.0005;
			defaultSeekerType = "SACLOS";
			seekerTypes[] = {"SACLOS"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL","LOBL"};
			seekerAngle = 30;
			seekerAccuracy = 1;
			seekerMinRange = 75;
			seekerMaxRange = 2500;
			seekLastTargetPos = 0;
			correctionDistance = 15;
			offsetFromCrosshair[] = {0,0,0.5};
			defaultAttackProfile = "WIRE";
			attackProfiles[] = {"WIRE"};
		};
	};
	
	class M41_Rocket_HEAT_HeatSeeking: M41_Rocket_HEAT_WireGuided
	{
		hit = 440;
		indirectHit = 40;
		indirectHitRange = 4;
		missileKeepLockedCone = 90;
		missileLockCone = 90;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 10;
		missileLockMaxSpeed = 270;
		trackOversteer = 0.33;
		trackLead = 0.33;
		irLock = 1;
		airLock = 1;
		lockType = 0;
		laserLock = 0;
		nvLock = 0;
		cmImmunity = 0.33;
		manualControl = 0;
		missileManualControlCone = 360;
		maxControlRange = 10000;
		weaponLockSystem = "2 + 16";
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 5e-05;
			maxDeflection = 0.007;
			incDeflection = 5e-05;
			canVanillaLock = 1;
			defaultSeekerType = "Optic";
			seekerTypes[] = {"Optic","Thermal"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL","LOBL"};
			seekerAngle = 90;
			seekerAccuracy = 1;
			seekerMinRange = 1;
			seekerMaxRange = 2500;
			seekLastTargetPos = 1;
			showHintOnCycle = 1;
			defaultAttackProfile = "DIR";
			attackProfiles[] = {"DIR"};
		};
	};
	
	class M41_Rocket_HEAT_Unguided: M41_Rocket_HEAT_WireGuided
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128";
		hit = 600;
		indirectHit = 20;
		indirectHitRange = 2;
		explosive = 1;
		simulation = "shotRocket";
		irLock = 0;
		airLock = 0;
		cmImmunity = 1;
		manualControl = 0;
		weaponLockSystem = 0;
		class ace_missileguidance
		{
			enabled = 0;
		};
	};
	
	class M41_Rocket_HEAP_Unguided: M41_Rocket_HEAT_WireGuided
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128";
		hit = 100;
		indirectHit = 100;
		indirectHitRange = 10;
		explosive = 1;
		simulation = "shotRocket";
		irLock = 0;
		airLock = 0;
		cmImmunity = 1;
		manualControl = 0;
		weaponLockSystem = 0;
		class ace_missileguidance
		{
			enabled = 0;
		};
	};
	
	class M1024_30mm_HEAT: B_30mm_MP
	{
		hit = 100;
		indirectHit = 20;
		indirectHitRange = 4;
		caliber = 5;
		typicalSpeed = 1200;
	};
		
	class M1024_30mm_APFSDS: B_30mm_APFSDS
	{
		hit = 200;
		indirectHit = 8;
		indirectHitRange = 0.2;
		caliber = 10;
		typicalSpeed = 1500;
	};
	
	class 90mm_APBC: Sh_105mm_APFSDS_T_Green
	{
		caliber = 26;
		hit = 600;
		typicalSpeed = 2600;
	};
	
	class 90mm_SAPHE: Sh_105mm_HEAT_MP
	{
		hit = 300;
		indirectHit = 100;
		indirectHitRange = 10;
		caliber = 9;
		explosive = 1.0;
		typicalSpeed = 2000;
	};
	
	class 90mm_HEAT: Sh_105mm_HEAT_MP
	{
		hit = 600;
		indirectHit = 20;
		indirectHitRange = 2;
		caliber = 12;
		explosive = 0.75;
		typicalSpeed = 2000;
	};
};