// Function : garray_style
// Namespace: 
// Entry    : 004fb580
// Prototype: undefined garray_style(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, ulong param_14, undefined1 param_15)
// Body     : 004fb580 - 004fb704


void garray_style(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                 ulong param_14,undefined1 param_15)

{
  long lVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar7;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  
  lVar1 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long *)(*(long *)(param_9 + 0x10) + 0x10));
  if (lVar1 == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,0,"array: no template of type %s",
             **(undefined8 **)(*(long *)(param_9 + 0x10) + 0x10),param_12,param_13,param_14);
    return;
  }
  uVar6 = (uint)(float)param_1;
  puVar2 = gensym("style");
  piVar4 = (int *)0x1;
  fVar7 = (float)template_getfloat(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3
                                   ,param_4,param_5,param_6,param_7,param_8,lVar1,puVar2,
                                   *(long *)(param_9 + 0x10) + 0x18,1,param_13,param_14);
  if (uVar6 != (int)fVar7) {
    puVar3 = (uint *)garray_getarray(CONCAT44(extraout_XMM0_Db_01,fVar7),param_2,param_3,param_4,
                                     param_5,param_6,param_7,param_8,param_9,puVar2,extraout_RDX,
                                     piVar4,param_13,param_14);
    if (puVar3 == (uint *)0x0) {
      pd_error(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,"can\'t find array\n",extraout_RDX_00,piVar4,param_13
               ,param_14);
      return;
    }
    if ((uVar6 == 0) || ((int)fVar7 == 0)) {
      garray_fittograph(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,param_9,(ulong)*puVar3,(ulong)uVar6,piVar4,
                        param_13,param_14);
    }
    puVar2 = gensym("style");
    template_setfloat((ulong)(uint)(float)(int)uVar6,param_2,param_3,param_4,param_5,param_6,param_7
                      ,param_8,lVar1,puVar2,*(long *)(param_9 + 0x10) + 0x18,0,param_13,param_14);
    puVar2 = gensym("linewidth");
    uVar5 = 1;
    template_setfloat((ulong)(uint)(float)(byte)((uVar6 == 0) + 1),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,lVar1,puVar2,*(long *)(param_9 + 0x10) + 0x18,1,
                      param_13,param_14);
    uVar6 = glist_isvisible(*(long *)(param_9 + 0x18));
    if (uVar6 != 0) {
      sys_queuegui(param_9,*(long *)(param_9 + 0x18),0x4fa9e0);
      return;
    }
    if ((*(byte *)(param_9 + 0x30) & 8) != 0) {
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0x653aa2,"s",**(undefined8 **)(param_9 + 0x28),uVar5,
                  param_13,param_14,param_15);
      return;
    }
  }
  return;
}


