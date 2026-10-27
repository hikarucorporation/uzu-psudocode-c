// Function : pd_findbyclass
// Namespace: 
// Entry    : 0053aac0
// Prototype: long * pd_findbyclass(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 0053aac0 - 0053ab46


long * pd_findbyclass(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,long param_10)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  plVar3 = *(long **)(param_9 + 8);
  if (plVar3 != (long *)0x0) {
    if (*plVar3 == param_10) {
      return plVar3;
    }
    if ((*plVar3 == bindlist_class) &&
       (puVar4 = (undefined8 *)plVar3[1], puVar4 != (undefined8 *)0x0)) {
      bVar2 = false;
      plVar3 = (long *)0x0;
      do {
        plVar1 = (long *)*puVar4;
        if (((*plVar1 == param_10) && (bVar5 = plVar3 != (long *)0x0, plVar3 = plVar1, bVar5)) &&
           (!bVar2)) {
          param_1 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         "warning: %s: multiply defined");
          plVar3 = (long *)*puVar4;
          bVar2 = true;
        }
        puVar4 = (undefined8 *)puVar4[1];
      } while (puVar4 != (undefined8 *)0x0);
      return plVar3;
    }
  }
  return (long *)0x0;
}


