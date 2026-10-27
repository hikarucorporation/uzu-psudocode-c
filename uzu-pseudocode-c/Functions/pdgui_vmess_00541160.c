// Function : pdgui_vmess
// Namespace: 
// Entry    : 00541160
// Prototype: undefined pdgui_vmess(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00541160 - 00541252


void pdgui_vmess(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,char *param_10,undefined8 param_11,undefined8 param_12,
                undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  char in_AL;
  byte bVar1;
  undefined7 extraout_var;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar2;
  uint local_f8 [2];
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_e0 [4];
  undefined *local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  if (in_AL != '\0') {
    local_98 = param_1;
    local_88 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_48 = param_6;
    local_38 = param_7;
    local_28 = param_8;
  }
  local_b8 = param_11;
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  bVar1 = sys_havetkproc();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    if (param_10 == (char *)0x0) {
      if (param_9 != 0) {
        sys_vgui(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"%s;\n");
        return;
      }
    }
    else {
      local_e8 = local_c8;
      local_f0 = &param_15;
      local_f8[0] = 0x10;
      local_f8[1] = 0x30;
      uVar2 = pdgui_vamess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           param_9,param_10,local_f8);
      local_e0[0] = 0x72;
      local_e0[1] = 1;
      local_d0 = &DAT_00652b71;
      addmess(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_e0);
    }
  }
  return;
}


