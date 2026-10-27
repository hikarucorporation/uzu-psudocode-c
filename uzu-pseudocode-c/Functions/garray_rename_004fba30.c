// Function : garray_rename
// Namespace: 
// Entry    : 004fba30
// Prototype: undefined garray_rename(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 004fba30 - 004fbad8


void garray_rename(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13
                  ,undefined8 param_14,undefined1 param_15)

{
  undefined1 in_AL;
  uint uVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qa;
  
  if ((*(byte *)(param_9 + 6) & 8) != 0) {
    *(byte *)(param_9 + 6) = *(byte *)(param_9 + 6) & 0xf7;
    param_1 = pdgui_vmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x653c2c,
                          "s",*(undefined8 *)param_9[5],param_12,param_13,param_14,in_AL);
    param_11 = extraout_RDX;
  }
  uVar2 = pd_unbind(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    (undefined8 *)param_9[5],param_11,param_12,param_13,param_14);
  param_9[4] = param_10;
  param_9[5] = param_10;
  pd_bind(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
          extraout_RDX_00,param_12,param_13,param_14);
  uVar1 = glist_isvisible(param_9[3]);
  if (uVar1 != 0) {
    sys_queuegui((long)param_9,param_9[3],0x4fa9e0);
    return;
  }
  if ((*(byte *)(param_9 + 6) & 8) == 0) {
    return;
  }
  pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x653aa2,"s",
              *(undefined8 *)param_9[5],param_12,param_13,param_14,param_15);
  return;
}


