// Function : garray_color
// Namespace: 
// Entry    : 004fb820
// Prototype: undefined garray_color(ulong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 004fb820 - 004fb90e


void garray_color(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14,undefined1 param_15)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar5;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  lVar2 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long *)(*(long *)(param_9 + 0x10) + 0x10));
  if (lVar2 == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,0,"array: no template of type %s",
             **(undefined8 **)(*(long *)(param_9 + 0x10) + 0x10),param_12,param_13,param_14);
    return;
  }
  puVar3 = gensym("color");
  fVar5 = (float)template_getfloat(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3
                                   ,param_4,param_5,param_6,param_7,param_8,lVar2,puVar3,
                                   *(long *)(param_9 + 0x10) + 0x18,1,param_13,param_14);
  if (fVar5 != (float)param_1) {
    puVar3 = gensym("color");
    uVar4 = 0;
    template_setfloat(param_1 & 0xffffffff,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      lVar2,puVar3,*(long *)(param_9 + 0x10) + 0x18,0,param_13,param_14);
    uVar1 = glist_isvisible(*(long *)(param_9 + 0x18));
    if (uVar1 != 0) {
      sys_queuegui(param_9,*(long *)(param_9 + 0x18),0x4fa9e0);
      return;
    }
    if ((*(byte *)(param_9 + 0x30) & 8) != 0) {
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0x653aa2,"s",**(undefined8 **)(param_9 + 0x28),uVar4,
                  param_13,param_14,param_15);
      return;
    }
  }
  return;
}


