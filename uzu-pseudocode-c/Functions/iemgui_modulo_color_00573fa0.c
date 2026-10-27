// Function : iemgui_modulo_color
// Namespace: 
// Entry    : 00573fa0
// Prototype: int iemgui_modulo_color(int param_1)
// Body     : 00573fa0 - 00573ff5


int iemgui_modulo_color(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x1d;
  if (param_1 < 0x1d) {
    iVar4 = param_1;
  }
  uVar2 = ((param_1 - iVar4) + 0x1dU) / 0x1e;
  iVar3 = param_1 + uVar2 * -0x1e;
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  iVar4 = (iVar4 + uVar2 * 0x1e) - param_1;
  uVar1 = (uint)(iVar4 != 0);
  return ((iVar4 - uVar1) / 0x1e + uVar1) * 0x1e + param_1 + uVar2 * -0x1e;
}


