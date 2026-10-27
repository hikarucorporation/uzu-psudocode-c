// Function : slider_orientation
// Namespace: 
// Entry    : 005ab700
// Prototype: undefined slider_orientation(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005ab700 - 005ab74b


void slider_orientation(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9)

{
  ulong *puVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = (int)(float)param_1;
  if (*(uint *)(param_9 + 0x4bc) != (uint)(iVar2 != 0)) {
    puVar1 = (ulong *)(param_9 + 0x40);
    *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
    sVar3 = 3;
    if (iVar2 != 0) {
      sVar3 = -3;
    }
    *(short *)(param_9 + 0x28) = *(short *)(param_9 + 0x28) + sVar3;
    *(ushort *)(param_9 + 0x2a) = (ushort)(iVar2 != 0) * 4 + *(short *)(param_9 + 0x2a) + -2;
  }
  *(uint *)(param_9 + 0x4bc) = (uint)(iVar2 != 0);
  iemgui_size(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_9);
  return;
}


