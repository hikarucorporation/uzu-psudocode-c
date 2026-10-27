// Function : destroyInstance
// Namespace: LibPdManager
// Entry    : 001671a0
// Prototype: undefined destroyInstance(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, LibPdManager * this, undefined1 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 001671a0 - 001671f6


/* LibPdManager::destroyInstance(_pdinstance*) */

void __thiscall
LibPdManager::destroyInstance
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          LibPdManager *this,undefined1 *param_10,undefined8 param_11,undefined8 param_12,
          char *param_13,undefined8 param_14)

{
  int iVar1;
  undefined8 extraout_RDX;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  if (param_10 == (undefined1 *)0x0) {
    return;
  }
  puVar2 = param_10;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)globalMutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
                    /* try { // try from 001671bf to 001671ce has its CatchHandler @ 001671f7 */
  uVar3 = libpd_set_instance(param_10);
  libpd_free_instance(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,puVar2,
                      extraout_RDX,param_12,param_13,param_14);
  LOCK();
  *(int *)(this + 4) = *(int *)(this + 4) + -1;
  UNLOCK();
  pthread_mutex_unlock((pthread_mutex_t *)globalMutex);
  return;
}


