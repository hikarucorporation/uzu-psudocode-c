// Function : garray_properties
// Namespace: 
// Entry    : 004fa030
// Prototype: undefined garray_properties(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 004fa030 - 004fa0e9


void garray_properties(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,undefined8 param_11,int *param_12,
                      char *param_13,undefined8 param_14)

{
  uint *puVar1;
  long extraout_RAX;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 extraout_RDX;
  byte bVar5;
  int iVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar7;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar8;
  
  puVar1 = (uint *)garray_getarray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,param_10,param_11,param_12,param_13,param_14);
  template_findbyname(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,*(long *)(*(long *)(param_9 + 0x10) + 0x10));
  puVar2 = gensym("style");
  puVar4 = (undefined8 *)0x1;
  fVar7 = (float)template_getfloat(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3
                                   ,param_4,param_5,param_6,param_7,param_8,extraout_RAX,puVar2,
                                   *(long *)(param_9 + 0x10) + 0x18,1,param_13,param_14);
  if (puVar1 != (uint *)0x0) {
    iVar6 = (int)fVar7;
    uVar8 = pdgui_stub_deleteforkey
                      (CONCAT44(extraout_XMM0_Db_01,fVar7),param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8,param_9,puVar2,extraout_RDX,puVar4,param_13,param_14);
    bVar3 = (char)iVar6 * '\x02';
    if (iVar6 == 1) {
      bVar3 = 0;
    }
    bVar5 = 2;
    if (iVar6 != 0) {
      bVar5 = bVar3;
    }
    pdgui_stub_vnew(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    "pdtk_array_dialog",(char *)param_9,"siii",
                    (char *)**(undefined8 **)(param_9 + 0x20),(ulong)*puVar1,
                    bVar5 | (byte)(*(uint *)(param_9 + 0x30) >> 1) & 1);
  }
  return;
}


