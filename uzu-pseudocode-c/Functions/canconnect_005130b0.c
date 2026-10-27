// Function : canconnect
// Namespace: 
// Entry    : 005130b0
// Prototype: bool canconnect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long * param_10, int param_11, long * param_12, int param_13)
// Body     : 005130b0 - 0051318a


bool canconnect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,long *param_10,int param_11,long *param_12,int param_13)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  long lStack_a8;
  long *local_a0;
  int local_94;
  long *local_90;
  int local_74;
  
  if ((((param_12 != param_10) && (param_10 != (long *)0x0)) && (param_12 != (long *)0x0)) &&
     (iVar2 = obj_ninlets(param_12), param_13 < iVar2)) {
    iVar2 = obj_noutlets((long)param_10);
    if (param_11 < iVar2) {
      uVar4 = linetraverser_start(&lStack_a8,param_9);
      do {
        puVar3 = linetraverser_next(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    &lStack_a8);
        if (puVar3 == (undefined8 *)0x0) {
          bVar1 = obj_issignaloutlet((long)param_10,param_11);
          if ((int)CONCAT71(extraout_var,bVar1) == 0) {
            return true;
          }
          bVar1 = obj_issignalinlet(param_12,param_13);
          return (int)CONCAT71(extraout_var_00,bVar1) != 0;
        }
        uVar4 = extraout_XMM0_Qa;
      } while (((local_a0 != param_10) || (local_94 != param_11)) ||
              ((local_90 != param_12 || (local_74 != param_13))));
    }
  }
  return false;
}


