		//----- General Parameters -----//
//		normalSpeedForwardCoef=0.9;
		turnCoef = 2;
		terrainCoef = 2.0;
//		waterSpeedFactor=0.4;
		simulation="carx";
		dampersBumpCoef = 6.0;

		precision = 15;
		brakeDistance = 8.5;
//		acceleration=15;
//		fireResistance=5;
//
		maxSpeed=100;
		fuelCapacity=94;
		wheelCircumference = 3.399;
		brakeIdleSpeed = 1.78;

//
//		maxFordingDepth=0.9;
//		waterResistance=2;
//		waterDamageEngine = 0.9;
//		waterLeakiness = 250.0;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-5.75,"N",0,"D1",4.3,"D2",2.3,"D3",1.5,"D4",1.0,"D5",0.73};
			TransmissionRatios[] = {"High",6.759};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.1;
		latency = 1.0;
//
//		//----- Clutch and Driveline Parameters -----//
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.4;
		centreBias = 1.3;
		clutchStrength = 55.0;
//		transmissionLosses = 20;
//
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 1.0;
		dampingRateZeroThrottleClutchDisengaged = 0.15;

//		//----- Engine Parameters -----//
		torqueCurve[] = {{ 0.0,0.0 },{ 0.278,0.5 },{ 0.35,0.75 },{ 0.461,1.0 },{ 0.6,0.95 },{ 0.7,0.85 },{ 0.8,0.75 },{ 1.0,0.5 }};
//
		maxOmega = 320;
		enginePower = 289;
		peakTorque = 1950;
		idleRpm = 700;
		redRpm = 3000;
//
//		engineLosses = 30;
		thrustDelay = 0.2;
//		engineBrakeCoef = 0.8;
//
//		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef = 12;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 50;


		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 150;
				MOI = 40;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 30000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				mMaxDroop = 0.1;
				sprungMass = 2425;
				springStrength = 196425;
				springDamperRate = 15520;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 1800;
				frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 300000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 300000;
			};
		};