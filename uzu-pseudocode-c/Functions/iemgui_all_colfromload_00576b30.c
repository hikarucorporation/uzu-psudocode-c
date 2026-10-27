// Function : iemgui_all_colfromload
// Namespace: 
// Entry    : 00576b30
// Prototype: undefined iemgui_all_colfromload(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, uint * param_10)
// Body     : 00576b30 - 00576d54


void iemgui_all_colfromload
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,uint *param_10)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (iemgui_all_colfromload_warned == '\0') {
    post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "warning: external GUI object uses obsolete Pd function %s()");
    iemgui_all_colfromload_warned = '\x01';
  }
  uVar1 = *param_10;
  if ((int)uVar1 < 0) {
    uVar1 = ~uVar1;
    *param_10 = uVar1;
    *(uint *)(param_9 + 0x450) =
         ((uVar1 & 0xfc0) << 4 | (uVar1 & 0x3f000) << 6) + (uVar1 & 0x3f) * 4;
    uVar1 = param_10[1];
  }
  else {
    uVar3 = 0x1d;
    if ((int)uVar1 < 0x1d) {
      uVar3 = uVar1;
    }
    uVar3 = ((uVar1 - uVar3) + 0x1d) / 0x1e;
    iVar4 = uVar1 + uVar3 * -0x1e;
    iVar2 = 0;
    if (0 < iVar4) {
      iVar2 = iVar4;
    }
    iVar2 = (uVar3 * 0x1e - uVar1) + iVar2;
    uVar1 = (uint)(iVar2 != 0);
    uVar1 = ((iVar2 - uVar1) / 0x1e + uVar1) * 0x1e + iVar4;
    *param_10 = uVar1;
    *(undefined4 *)(param_9 + 0x450) =
         *(undefined4 *)(PTR_iemgui_color_hex_007158b0 + (long)(int)uVar1 * 4);
    uVar1 = param_10[1];
  }
  if ((int)uVar1 < 0) {
    uVar1 = ~uVar1;
    param_10[1] = uVar1;
    *(uint *)(param_9 + 0x44c) =
         ((uVar1 & 0xfc0) << 4 | (uVar1 & 0x3f000) << 6) + (uVar1 & 0x3f) * 4;
    uVar1 = param_10[2];
  }
  else {
    uVar3 = 0x1d;
    if ((int)uVar1 < 0x1d) {
      uVar3 = uVar1;
    }
    uVar3 = ((uVar1 - uVar3) + 0x1d) / 0x1e;
    iVar4 = uVar1 + uVar3 * -0x1e;
    iVar2 = 0;
    if (0 < iVar4) {
      iVar2 = iVar4;
    }
    iVar2 = (uVar3 * 0x1e - uVar1) + iVar2;
    uVar1 = (uint)(iVar2 != 0);
    uVar1 = ((iVar2 - uVar1) / 0x1e + uVar1) * 0x1e + iVar4;
    param_10[1] = uVar1;
    *(undefined4 *)(param_9 + 0x44c) =
         *(undefined4 *)(PTR_iemgui_color_hex_007158b0 + (long)(int)uVar1 * 4);
    uVar1 = param_10[2];
  }
  if ((int)uVar1 < 0) {
    uVar1 = ~uVar1;
    param_10[2] = uVar1;
    iVar2 = ((uVar1 & 0xfc0) << 4 | (uVar1 & 0x3f000) << 6) + (uVar1 & 0x3f) * 4;
  }
  else {
    uVar3 = 0x1d;
    if ((int)uVar1 < 0x1d) {
      uVar3 = uVar1;
    }
    uVar3 = ((uVar1 - uVar3) + 0x1d) / 0x1e;
    iVar4 = uVar1 + uVar3 * -0x1e;
    iVar2 = 0;
    if (0 < iVar4) {
      iVar2 = iVar4;
    }
    iVar2 = (uVar3 * 0x1e - uVar1) + iVar2;
    uVar1 = (uint)(iVar2 != 0);
    uVar1 = ((iVar2 - uVar1) / 0x1e + uVar1) * 0x1e + iVar4;
    param_10[2] = uVar1;
    iVar2 = *(int *)(PTR_iemgui_color_hex_007158b0 + (long)(int)uVar1 * 4);
  }
  *(int *)(param_9 + 0x454) = iVar2;
  return;
}


