// Function : midirealtimein_list
// Namespace: 
// Entry    : 00554530
// Prototype: undefined midirealtimein_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12)
// Body     : 00554530 - 0055458c


void midirealtimein_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,undefined8 param_10,int param_11,long param_12)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = atom_getfloatarg(0,param_11,param_12);
  uVar2 = atom_getfloatarg(1,param_11,param_12);
  outlet_float((ulong)uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x38));
  outlet_float((ulong)uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x30));
  return;
}


