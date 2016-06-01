/*!*********************************************************************************************************************
\file         PVRCore\SizedPointer.h
\author       PowerVR by Imagination, Developer Technology Team
\copyright    Copyright (c) Imagination Technologies Limited.
\brief         A pointer with an additional size field.
***********************************************************************************************************************/
#pragma once
namespace pvr {
template <typename TYPE>

/*!**************************************************************************************************************
\brief         A pointer with an additional size field.
****************************************************************************************************************/
class SizedPointer
{
public:
	SizedPointer() : m_pointer(NULL), m_size(0) {}
	SizedPointer(TYPE* pointer, const size_t size) : m_pointer(pointer), m_size(size) {}

	/*!**************************************************************************************************************
	\brief return pointer to the object
	****************************************************************************************************************/
	operator TYPE* (){	return getData();	}

	/*!**************************************************************************************************************
	\brief return const pointer to the object
	****************************************************************************************************************/
	operator const TYPE* () const{	return getData();	}

	/*!**************************************************************************************************************
	\brief return the pointer to the object
	****************************************************************************************************************/
	TYPE* getData(){ return m_pointer; }

	/*!**************************************************************************************************************
	\brief return const pointer to the object
	****************************************************************************************************************/
	const TYPE* getData() const{ return m_pointer;	}
	
	/*!**************************************************************************************************************
	\brief return the size of the object
	****************************************************************************************************************/
	const size_t getSize() const{	return m_size;	}

private:
	TYPE* m_pointer;
	size_t m_size;
};
}