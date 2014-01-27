#include "stdafx.h"
#include "BitmapStack.h"

#ifdef _DEBUG
using namespace System::IO;
#endif

#pragma region BitmapStackNode Constructor
BitmapStackNode::BitmapStackNode(System::Drawing::Bitmap ^ Image)
{
	image = Image;
	next = nullptr;
	prev = nullptr;
}
#pragma endregion

#pragma region BitmapStack Constructors and Functions

#pragma region Constructors
/**
*  Constructs a new BitmapStack that holds the image loaded from FileName
*  @param FileName - The file to load the image from
*/
BitmapStack::BitmapStack(System::String ^ FileName)
{
	current = gcnew BitmapStackNode(gcnew System::Drawing::Bitmap(FileName));
	this->FileName = FileName->Substring(FileName->LastIndexOf("\\") + 1);
}

#pragma endregion

/**
*  Pushes a new bitmap image above the current node of the stack, pops any nodes that was above the current node off of the stack in the process.
*  @param Image - The Image to be stored on the top of the stack
*/
void BitmapStack::Push(System::Drawing::Bitmap ^ Image)
{
#ifdef _DEBUG
	dout->WriteLine("BA");
#endif
	BitmapStackNode ^ node = gcnew BitmapStackNode(Image);
	if(current != nullptr)
	{
#ifdef _DEBUG
		dout->WriteLine("BB");
#endif
		current->next = node;
		node->prev = current;
	}
	current = node;
#ifdef _DEBUG
	dout->WriteLine("BC");
#endif
}

/**
*  Pops the current node and any node above it off of the stack.
*  Returns the current node's image popped off the stack.
*/
System::Drawing::Bitmap ^ BitmapStack::Pop()
{
#ifdef _DEBUG
	dout->WriteLine("BD");
#endif
	System::Drawing::Bitmap ^ image = nullptr;

	if(current != nullptr){
#ifdef _DEBUG
		dout->WriteLine("BE");
#endif
		image = Peek();
		if(current->prev != nullptr){
#ifdef _DEBUG
			dout->WriteLine("BF");
#endif
			current->prev->next = nullptr;
		}
		current = current->prev;
	}
#ifdef _DEBUG
	dout->WriteLine("BG");
#endif
	return image;
}

/**
*  Returns the current Bitmap image off of the stack without modifying the stack contents.
*/
System::Drawing::Bitmap ^ BitmapStack::Peek()
{
#ifdef _DEBUG
	dout->WriteLine("BH");
#endif
	if(current != nullptr){
#ifdef _DEBUG
		dout->WriteLine("BI");
#endif
		return current->image;
	}else{
#ifdef _DEBUG
		dout->WriteLine("BJ");
#endif
		return nullptr;
	}
}

/**
*  Returns the image of the node that comes before the current node on the stack without modifying the stack contents.
*	 If there are no nodes previous to the current node, returns nullptr instead.
*/
System::Drawing::Bitmap ^ BitmapStack::PeekBackwards()
{
#ifdef _DEBUG
	dout->WriteLine("BK");
#endif
	if(BitmapStack::CurrentHasPrev()){
#ifdef _DEBUG
		dout->WriteLine("BL");
#endif
		return current->prev->image;
	}else{
#ifdef _DEBUG
		dout->WriteLine("BM");
#endif
		return nullptr;
	}
}

/**
* Returns true if the current node on the stack has an node above it.
*/
bool BitmapStack::CurrentHasNext()
{
#ifdef _DEBUG
	dout->WriteLine("BN");
#endif
	return current->next != nullptr ? true : false;
}

/**
* Returns true if the current node on the stack has an node below it.
*/
bool BitmapStack::CurrentHasPrev()
{
#ifdef _DEBUG
	dout->WriteLine("BO");
#endif
	return current->prev != nullptr ? true : false;
}

/**
* Makes the node above the current node the new current node.
* No change if there is no node above the current node.
*/
bool BitmapStack::TraverseNext()
{
#ifdef _DEBUG
	dout->WriteLine("BP");
#endif
	if(CurrentHasNext())
	{
#ifdef _DEBUG
		dout->WriteLine("BQ");
#endif
		current = current->next;
		return true;
	}
#ifdef _DEBUG
	dout->WriteLine("BR");
#endif
	return false;
}

/**
* Makes the node below the current node the new current node.
* No change if there is no node below the current node.
*/
bool BitmapStack::TraversePrev()
{
#ifdef _DEBUG
	dout->WriteLine("BS");
#endif
	if(CurrentHasPrev())
	{
#ifdef _DEBUG
		dout->WriteLine("BT");
#endif
		current = current->prev;
		return true;
	}
#ifdef _DEBUG
	dout->WriteLine("BU");
#endif
	return false;
}

bool BitmapStack::IsEmpty(){
#ifdef _DEBUG
	dout->WriteLine("BV");
#endif
	return current == nullptr ? true : false;
}

#pragma endregion