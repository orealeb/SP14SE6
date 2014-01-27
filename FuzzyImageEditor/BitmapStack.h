#pragma once
#ifdef _DEBUG
	using namespace System::IO;
#endif
/** 
 *	BitmapStackNode: These nodes form the stack as a doubly linked list
 *		image: The bitmap image this node holds
 *		next: The next BitmapStackNode above this one (Null if this is the top)
 *		prev: The previous BitmapStackNode below this one (Null if it is the bottom)
 */
public ref class BitmapStackNode
{
private:
public:
	System::Drawing::Bitmap ^ image;
	BitmapStackNode ^ next;
	BitmapStackNode ^ prev;

	BitmapStackNode(System::Drawing::Bitmap ^ Image);
};

/**
 *	BitmapStack: This is a stack modified to preform what we would need for an undo/redo queue.
 *		It has the regular Push and Pop methods but instead of keeping track of the top node 
 *		there is a "current" pointer. This points to the currently used image. 
 *		current: The current 'top' of the stack, though there may be nodes above this node.
 *		FileName: The Filename of the bitmap opened in this stack without the path (giving C:\Images\image.bmp becomes image.bmp)
 */
public ref class BitmapStack
{
private:
	BitmapStackNode ^ current;
public:

	#ifdef _DEBUG
	StreamWriter^ dout;
#endif

	System::String ^ FileName;
	BitmapStack(System::String ^ FileName);

	/* Adds a node above the current node. Ff current is not the top node then the previous nodes above current will be
		garbage collected. */
	void Push(System::Drawing::Bitmap ^ Image);
	/* Removes the node at current from the list and returns the image it held this will garbage collect any nodes above current as well */
	System::Drawing::Bitmap ^ Pop();
	/* Returns the image held at current without changing the stack */
	System::Drawing::Bitmap ^ Peek();
	System::Drawing::Bitmap ^ PeekBackwards();
	/* TraverseUp and TraverseDown: Moves current up or down the stack, 
		effectively redoing or undoing respectively without modifying the stack contents.
		*/
	bool TraverseNext();
	bool TraversePrev();

	/* Checks if current has a node to move to above or below, can be used to tell when an undo or redo button should be available to the user. */
	bool CurrentHasNext();
	bool CurrentHasPrev();

	bool IsEmpty();
};


