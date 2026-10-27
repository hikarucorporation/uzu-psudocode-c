// Function : iemgui_setdrawfunctions
// Namespace: 
// Entry    : 005762d0
// Prototype: undefined iemgui_setdrawfunctions(long param_1, undefined8 * param_2)
// Body     : 005762d0 - 005762f3


void iemgui_setdrawfunctions(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  uVar2 = param_2[1];
  *(undefined8 *)(lVar1 + 8) = *param_2;
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(undefined8 *)(lVar1 + 0x18) = param_2[2];
  uVar2 = param_2[4];
  *(undefined8 *)(lVar1 + 0x20) = param_2[3];
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  uVar2 = param_2[6];
  *(undefined8 *)(lVar1 + 0x30) = param_2[5];
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  return;
}


