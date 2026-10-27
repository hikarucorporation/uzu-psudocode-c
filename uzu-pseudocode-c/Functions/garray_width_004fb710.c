// Function : garray_width
// Namespace: 
// Entry    : 004fb710
// Prototype: undefined garray_width(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 004fb710 - 004fb814


void garray_width(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar6;
  undefined4 uVar7;
  
  lVar2 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long *)(*(long *)(param_9 + 0x10) + 0x10));
  if (lVar2 == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,0,"array: no template of type %s",
             **(undefined8 **)(*(long *)(param_9 + 0x10) + 0x10),param_12,param_13,param_14);
    return;
  }
  puVar3 = gensym("linewidth");
  fVar5 = (float)template_getfloat(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3
                                   ,param_4,param_5,param_6,param_7,param_8,lVar2,puVar3,
                                   *(long *)(param_9 + 0x10) + 0x18,1,param_13,param_14);
  uVar7 = 0;
  fVar6 = (float)param_1;
  if ((float)param_1 <= DAT_005d9038) {
    fVar6 = DAT_005d9038;
  }
  if (fVar6 != fVar5) {
    fVar5 = fVar6;
    puVar3 = gensym("linewidth");
    uVar4 = 0;
    template_setfloat((ulong)(uint)fVar6,CONCAT44(uVar7,fVar5),param_3,param_4,param_5,param_6,
                      param_7,param_8,lVar2,puVar3,*(long *)(param_9 + 0x10) + 0x18,0,param_13,
                      param_14);
    uVar1 = glist_isvisible(*(long *)(param_9 + 0x18));
    if (uVar1 != 0) {
      sys_queuegui(param_9,*(long *)(param_9 + 0x18),0x4fa9e0);
      return;
    }
    if ((*(byte *)(param_9 + 0x30) & 8) != 0) {
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar7,fVar5),param_3,
                  param_4,param_5,param_6,param_7,param_8,0x653aa2,"s",
                  **(undefined8 **)(param_9 + 0x28),uVar4,param_13,param_14,param_15);
      return;
    }
  }
  return;
}


