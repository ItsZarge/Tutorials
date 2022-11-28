class CfgPatches
{
	class ZargeTuts_Samples
	{
		requiredAddons[] = { "DZ_Data" };
	};
};

class cfgVehicles
{
	class HouseNoDestruct;
	
	class Land_Object: HouseNoDestruct
	{	
		scope = 2;
		model = "Tutorials\SampleObject\Object.p3d";
		class Doors
		{
			class Doors1
			{
				displayName = "doors 1";
				component = "doors1";
				soundPos = "doors1_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorWoodFrontOpen";
				soundClose = "doorWoodFrontClose";
				soundLocked = "doorWoodFrontRattle";
				soundOpenABit = "doorWoodFrontOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health { damage = 0; };
					class Blood { damage = 0; };
					class Shock { damage = 0; };
				};
				class Melee
				{
					class Health { damage = 0; };
					class Blood { damage = 0; };
					class Shock { damage = 0; };
				};
			};
			class DamageZones
			{	
				class Doors1
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"doors1"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health { damage = 2; };
							class Blood { damage = 0; };
							class Shock { damage = 0; };
						};
						class Melee
						{
							class Health { damage = 2.5; };
							class Blood { damage = 0; };
							class Shock { damage = 0; };
						};
					};
				};
			};
		};
	};
};