/*********************************************************************
	Rhapsody	: 7.0 
	Login		: ekeller
	Component	: CMP_ULIB_BaseDefinitions 
	Configuration 	: VxWorks
	Model Element	: CMutexSemaphore
//!	Generated Date	: Wed, 4, Apr 2007  
	File Path	: CMP_ULIB_BaseDefinitions/VxWorks/CMutexSemaphore.h
*********************************************************************/


#ifndef CMutexSemaphore_H 

#define CMutexSemaphore_H 

// debug
//#include <iostream>
//! debug

#include <oxf/oxf.h>
#include "PSS_BaseDefinitions.h"
#include "CBase.h"
#include <semLib.h>

//## package PKG_Design::PSS_BaseDefinitions 

//----------------------------------------------------------------------------
// CMutexSemaphore.h                                                                  
//----------------------------------------------------------------------------


// Controls a VxWorks public semaphore used for mutual exclusion between processes.
// 
// Two types of semaphores are internally used.
// 1) VxWorks Binary Semaphore: When the semaphore must be locked after creation.
// 2) VxWorks Mutex Semaphore: When the semaphore must be unlocked after creation.
// 
// NOTE: The Rhapsody framework supports no binary semaphores and public objects. This class can be exchanged in the future by a framework class when these features are supported.
//## class CMutexSemaphore 
class CMutexSemaphore : public CBase {


////    Constructors and destructors    ////
public :
    
    // Constructor
    //## operation CMutexSemaphore() 
    CMutexSemaphore();
    
    // Destructor
    //## operation ~CMutexSemaphore() 
    virtual ~CMutexSemaphore();


////    Operations    ////
public :
    
    // Close semaphore.
    //## operation close() 
    void close();
    
    // Create new semaphore.
    //## operation create(RhpString,RhpBoolean) 
    TErrorStatus create(const RhpString& aName, RhpBoolean aLockedAfterCreation = false);
    
    // Class initialization.
    //## operation init() 
    TErrorStatus init();
    
    // Semaphore request.
    //## operation lock() 
    inline void lock();
    
    // Semaphore release.
    //## operation unlock() 
    inline void unlock();

private :
    
    // Create new binary semaphore.
    //## operation createBinary(RhpString) 
    TErrorStatus createBinary(const RhpString& aName);
    
    // Create new mutex semaphore.
    //## operation createMutex(RhpString) 
    TErrorStatus createMutex(const RhpString& aName);


////    Attributes    ////
protected :
    
    // ID of the semaphore.
    SEM_ID mID;		//## attribute mID 
    
    // Semaphore name.
    RhpString mName;		//## attribute mName 
    

};
//---------------------------------------------------------------------------- 
// inline operations for CMutexSemaphore
//---------------------------------------------------------------------------- 

inline void CMutexSemaphore::lock() {
    //#[ operation lock() 
	//std::cout << "semtake: ORIGINAL" << std::endl;
    STATUS s = semTake(mID, WAIT_FOREVER);
    if (s != OK) 
    {
    	logError("ERROR: semTake");
    }                         
    
    //#]
}

inline void CMutexSemaphore::unlock() {
    //#[ operation unlock() 
    STATUS s = semGive(mID);
    if (s != OK) 
    {
    	logError("ERROR: semGive");
    }
    //#]
}



#endif  
/*********************************************************************
	File Path	: CMP_ULIB_BaseDefinitions/VxWorks/CMutexSemaphore.h
*********************************************************************/

