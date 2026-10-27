// Function : pd_globallock
// Namespace: 
// Entry    : 005408b0
// Prototype: undefined pd_globallock(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005408b0 - 005408f2


void pd_globallock(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 extraout_RDX;
  undefined1 unaff_BL;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*(int *)(*plVar1 + 0x180) == 0) {
    bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"pd_globallock",
        param_10,extraout_RDX,param_12,param_13,param_14,unaff_BL);
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)sys_rwlock);
  pthread_rwlock_wrlock((pthread_rwlock_t *)sys_rwlock);
  return;
}


