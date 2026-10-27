// Function : createInstance
// Namespace: LibPdManager
// Entry    : 00167100
// Prototype: undefined8 * createInstance(undefined8 param_1, undefined8 param_2, double param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, LibPdManager * this, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, char * param_14)
// Body     : 00167100 - 00167187


/* LibPdManager::createInstance() */

undefined8 * __thiscall
LibPdManager::createInstance
          (undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          LibPdManager *this,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          char *param_13,char *param_14)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 *puVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar5;
  
  puVar4 = globalMutex;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)globalMutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  uVar2 = extraout_RDX;
  uVar5 = extraout_XMM0_Qa;
  if ((((byte)*this & 1) == 0) && (((byte)*this & 1) == 0)) {
                    /* try { // try from 00167125 to 00167129 has its CatchHandler @ 00167153 */
    uVar2 = libpd_init(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if (0xfffffffd < (int)uVar2 - 1U) {
      LOCK();
      *this = (LibPdManager)0x1;
      UNLOCK();
      uVar2 = extraout_RDX_00;
      uVar5 = extraout_XMM0_Qa_00;
      goto LAB_00167137;
    }
  }
  else {
LAB_00167137:
                    /* try { // try from 00167137 to 0016713b has its CatchHandler @ 00167162 */
    puVar3 = libpd_new_instance(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar4
                                ,param_10,uVar2,param_12,param_13,param_14);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      UNLOCK();
      goto LAB_00167171;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_00167171:
  pthread_mutex_unlock((pthread_mutex_t *)globalMutex);
  return puVar3;
}


