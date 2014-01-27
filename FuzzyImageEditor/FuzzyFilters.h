#pragma once



static public class FuzzyFilters
{
	

public:
	static enum coupleType
	{
		RedGreen,
		RedBlue,
		GreenBlue
	};

	static System::Drawing::Bitmap^ InverseContrast(System::Drawing::Bitmap ^ Image,bool,bool,bool);
	static System::Drawing::Bitmap^ Contrast(System::Drawing::Bitmap ^ Image,bool,bool,bool);
	static System::Drawing::Bitmap^ EdgeDetection(System::Drawing::Bitmap ^ Image, int sensitivity);
	static System::Drawing::Bitmap^ ZoomIn(System::Drawing::Bitmap ^ Image, int startX, int startY, int endX, int endY);
	static System::Drawing::Bitmap^ NoiseReduction(System::Drawing::Bitmap^ Image, int K, int L);
	static System::Drawing::Bitmap^ NRSubFilter1(System::Drawing::Bitmap^ Image, int bigK);
	static System::Drawing::Bitmap^ NRSubFilter2(System::Drawing::Bitmap ^ Image, int bigL);
	static float BlueWeight(System::Drawing::Bitmap ^ Image, int i, int j, int k, int l, int bigK, float rbP, float gbP);
	static float GreenWeight(System::Drawing::Bitmap ^ Image, int i, int j, int k, int l, int bigK, float rgP, float gbP);
	static float RedWeight(System::Drawing::Bitmap ^ Image, int i, int j, int k, int l, int bigK, float rgP, float rbP);
	static float FindPValue(System::Drawing::Bitmap^ Image, int i, int j, coupleType type, int bigK);
	static float SmallMembershipFunction(float dist, float p);
	static float FindDistance(System::Drawing::Bitmap^ Image, int i, int j, int k, int l, coupleType ctype);

	static System::Drawing::Bitmap^ Sharpening(System::Drawing::Bitmap ^ Image, bool, bool, bool, int);
	
};
