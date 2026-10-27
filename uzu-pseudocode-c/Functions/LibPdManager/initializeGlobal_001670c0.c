// Function : initializeGlobal
// Namespace: LibPdManager
// Entry    : 001670c0
// Prototype: bool initializeGlobal(undefined8 param_1, undefined8 param_2, double param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, LibPdManager * this)
// Body     : 001670c0 - 001670e7


/* LibPdManager::initializeGlobal() */

bool __thiscall
LibPdManager::initializeGlobal
          (undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          LibPdManager *this)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = true;
  if (((byte)*this & 1) == 0) {
                    /* try { // try from 001670cd to 001670d1 has its CatchHandler @ 001670e8 */
    uVar1 = libpd_init(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar2 = (int)uVar1 - 1;
    if (0xfffffffd < uVar2) {
      LOCK();
      *this = (LibPdManager)0x1;
      UNLOCK();
    }
    bVar3 = 0xfffffffd < uVar2;
  }
  return bVar3;
}


