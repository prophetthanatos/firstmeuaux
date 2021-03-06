class ACE_Medical_Treatment
{
    class Morphine;
    
    class Medication
    {
		painReduce = 0;
		hrIncreaseLow[] = {0,0};
		hrIncreaseNormal[] = {0,0};
		hrIncreaseHigh[] = {0,0};
		timeInSystem = 120;
		timeTillMaxEffect = 30;
		maxDose = 4;
		onOverDose = "";
		viscosityChange = 0;
        class MEU_compat_Ibuprofen : Morphine
        {
            painReduce = 0.4;
            hrIncreaseLow[] = {0};
            hrIncreaseNormal[] = {0};
            hrIncreaseHigh[] = {0};
            timeInSystem = 3000;
            timeTillMaxEffect = 60;
            maxDose = 12;
            incompatibleMedication[] = {};
            viscosityChange = -1;
        };
		class ACE_Banana : Morphine
        {
            painReduce = 0.4;
            hrIncreaseLow[] = {-200,-200};
            hrIncreaseNormal[] = {-200,-200};
            hrIncreaseHigh[] = {-200,-200};
            timeInSystem = 60;
            timeTillMaxEffect = 1;
            maxDose = .1;
            incompatibleMedication[] = {};
            viscosityChange = -100;
        };
    };
};