// Function : my_numbox_loadbang
// Namespace: 
// Entry    : 005a5820
// Prototype: undefined my_numbox_loadbang(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005a5820 - 005a5881


void my_numbox_loadbang(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  if ((param_1 == 0.0) && ((*(byte *)(param_9 + 0x448) & 1) != 0)) {
    sys_queuegui(param_9,*(long *)(param_9 + 0x30),0x5a68b0);
    outlet_float((ulong)*(uint *)(param_9 + 0x4a0),CONCAT44(uVar3,uVar2),param_3,param_4,param_5,
                 param_6,param_7,param_8,*(long **)(param_9 + 0x18));
    if (((*(byte *)(param_9 + 0x440) & 0x80) != 0) &&
       (plVar1 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar1 != (long *)0x0)) {
      pd_float(plVar1);
      return;
    }
  }
  return;
}


