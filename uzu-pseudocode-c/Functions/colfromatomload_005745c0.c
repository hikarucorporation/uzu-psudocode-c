// Function : colfromatomload
// Namespace: 
// Entry    : 005745c0
// Prototype: uint colfromatomload(int * param_1)
// Body     : 005745c0 - 005746e5


uint colfromatomload(int *param_1)

{
  char cVar1;
  uint uVar2;
  ushort **ppuVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  
  if (*param_1 == 2) {
    ppuVar3 = __ctype_b_loc();
    cVar1 = *(char *)**(undefined8 **)(param_1 + 2);
    if (((*(byte *)((long)*ppuVar3 + (long)cVar1 * 2 + 1) & 8) == 0) && (cVar1 != '-')) {
      puVar4 = (undefined8 *)atom_getsymbolarg(0,1,(long)param_1);
      if (*(char *)*puVar4 == '#') {
        lVar5 = strtol((char *)*puVar4 + 1,(char **)0x0,0x10);
        return (uint)lVar5 & 0xffffff;
      }
      return 0;
    }
    lVar5 = strtol((char *)**(undefined8 **)(param_1 + 2),(char **)0x0,10);
    uVar2 = (uint)lVar5;
  }
  else {
    if (*param_1 != 1) {
      return 0;
    }
    fVar9 = (float)atom_getfloat(param_1);
    uVar2 = (uint)fVar9;
  }
  if ((int)uVar2 < 0) {
    uVar2 = ~uVar2;
    uVar2 = ((uVar2 & 0xfc0) << 4 | (uVar2 & 0x3f000) << 6) + (uVar2 & 0x3f) * 4;
  }
  else {
    uVar7 = 0x1d;
    if ((int)uVar2 < 0x1d) {
      uVar7 = uVar2;
    }
    uVar7 = ((uVar2 - uVar7) + 0x1d) / 0x1e;
    iVar8 = uVar2 + uVar7 * -0x1e;
    iVar6 = 0;
    if (0 < iVar8) {
      iVar6 = iVar8;
    }
    iVar6 = (uVar7 * 0x1e - uVar2) + iVar6;
    uVar2 = (uint)(iVar6 != 0);
    uVar2 = *(uint *)(PTR_iemgui_color_hex_007158b0 +
                     (long)(int)(((iVar6 - uVar2) / 0x1e + uVar2) * 0x1e + iVar8) * 4);
  }
  return uVar2;
}


