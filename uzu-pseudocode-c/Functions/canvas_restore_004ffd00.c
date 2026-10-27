// Function : canvas_restore
// Namespace: 
// Entry    : 004ffd00
// Prototype: undefined canvas_restore(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, char * param_10, undefined8 param_11, char * param_12, char * param_13, undefined * param_14)
// Body     : 004ffd00 - 004ffe54


void canvas_restore(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,char *param_10,undefined8 param_11,char *param_12,char *param_13,
                   undefined *param_14)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar6;
  undefined8 extraout_RDX_03;
  undefined8 unaff_RBX;
  long lVar7;
  char *pcVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar9;
  
  iVar5 = (int)param_11;
  pcVar4 = param_12;
  if ((3 < iVar5) && (*(int *)(param_12 + 0x30) == 2)) {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar7 = *(long *)PTR_canvas_class_00715918;
    plVar2 = pd_findbyclass(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                            param_5,param_6,param_7,param_8,*plVar2 + 0x120,lVar7);
    uVar9 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    if (plVar2 == (long *)0x0) {
      uVar9 = bug(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,"canvas_getenv",lVar7,extraout_RDX,pcVar4,param_13,
                  param_14,(char)unaff_RBX);
      lVar1 = lRam00000000000000e0;
      uVar6 = extraout_RDX_00;
    }
    else {
      lVar1 = plVar2[0x1c];
      uVar6 = extraout_RDX;
    }
    while (lVar1 == 0) {
      plVar2 = (long *)plVar2[9];
      if (plVar2 == (long *)0x0) {
        uVar9 = bug(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "t_canvasenvironment",lVar7,uVar6,pcVar4,param_13,param_14,(char)unaff_RBX);
        uVar6 = extraout_RDX_03;
      }
      lVar1 = plVar2[0x1c];
    }
    pcVar4 = (char *)0x1;
    param_10 = (char *)binbuf_realizedollsym
                                 (uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  *(undefined8 **)(param_12 + 0x38),*(int *)(lVar1 + 8),
                                  *(long *)(lVar1 + 0x10),1,param_13,param_14);
    canvas_rename(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,param_9,(undefined8 *)param_10,(char *)0x0,pcVar4,param_13
                  ,param_14);
    param_11 = extraout_RDX_01;
  }
  canvas_pop((ulong)(uint)(float)(*(ushort *)(param_9 + 0x1d) >> 4 & 1),param_2,param_3,param_4,
             param_5,param_6,param_7,param_8,param_9,param_10,param_11,pcVar4,param_13,param_14);
  puVar3 = gensym("#X");
  plVar2 = (long *)puVar3[1];
  if (plVar2 == (long *)0x0) {
    pcVar8 = "canvas_restore: out of context";
  }
  else {
    if (*plVar2 == *(long *)PTR_canvas_class_00715918) {
      param_9[9] = (long)plVar2;
      canvas_objfor(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,plVar2,param_9,iVar5,(long)param_12,param_13,
                    param_14);
      return;
    }
    pcVar8 = "canvas_restore: wasn\'t a canvas";
    pcVar4 = PTR_canvas_class_00715918;
  }
  pd_error(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,param_6
           ,param_7,param_8,0,pcVar8,extraout_RDX_02,pcVar4,param_13,param_14);
  return;
}


