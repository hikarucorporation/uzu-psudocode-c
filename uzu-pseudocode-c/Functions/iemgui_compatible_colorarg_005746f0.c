// Function : iemgui_compatible_colorarg
// Namespace: 
// Entry    : 005746f0
// Prototype: uint iemgui_compatible_colorarg(uint param_1, int param_2, long param_3)
// Body     : 005746f0 - 005747c2


uint iemgui_compatible_colorarg(uint param_1,int param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  
  uVar6 = 0;
  if ((-1 < (int)param_1) && ((int)param_1 < param_2)) {
    iVar1 = *(int *)(param_3 + (ulong)param_1 * 0x10);
    if (iVar1 == 2) {
      puVar2 = (undefined8 *)atom_getsymbolarg(param_1,param_2,param_3);
      if (*(char *)*puVar2 == '#') {
        lVar3 = strtol((char *)*puVar2 + 1,(char **)0x0,0x10);
        return (uint)lVar3 & 0xffffff;
      }
    }
    else if (iVar1 == 1) {
      fVar7 = (float)atom_getfloatarg(param_1,param_2,param_3);
      uVar6 = (uint)fVar7;
      if ((int)uVar6 < 0) {
        return ~uVar6 & 0xffffff;
      }
      uVar4 = 0x1d;
      if ((int)uVar6 < 0x1d) {
        uVar4 = uVar6;
      }
      uVar4 = ((uVar6 - uVar4) + 0x1d) / 0x1e;
      iVar5 = uVar6 + uVar4 * -0x1e;
      iVar1 = 0;
      if (0 < iVar5) {
        iVar1 = iVar5;
      }
      iVar1 = (uVar4 * 0x1e - uVar6) + iVar1;
      uVar6 = (uint)(iVar1 != 0);
      uVar6 = *(uint *)(PTR_iemgui_color_hex_007158b0 +
                       (long)(int)(((iVar1 - uVar6) / 0x1e + uVar6) * 0x1e + iVar5) * 4);
    }
  }
  return uVar6;
}


