// Function : canvas_zoom
// Namespace: 
// Entry    : 0050b8f0
// Prototype: undefined canvas_zoom(float param_1, long param_2)
// Body     : 0050b8f0 - 0050ba2d


void canvas_zoom(float param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  code *pcVar5;
  undefined7 extraout_var;
  undefined *in_RCX;
  undefined8 extraout_RDX;
  char *in_RSI;
  char *in_R8;
  undefined *in_R9;
  float extraout_XMM0_Da;
  float fVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_XMM1_Db;
  float in_XMM2_Da;
  undefined4 in_XMM2_Db;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined1 in_stack_00000008;
  
  puVar2 = PTR_canvas_class_00715918;
  fVar8 = (float)*(int *)(param_2 + 0xec);
  if ((fVar8 != param_1) && ((param_1 == DAT_005d9038 || (param_1 == DAT_005d9078)))) {
    for (plVar1 = *(long **)(param_2 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
      plVar4 = pd_checkobject(plVar1);
      if (plVar4 != (long *)0x0) {
        in_RSI = (char *)gensym("zoom");
        pcVar5 = (code *)zgetfn(plVar4,(long)in_RSI);
        if ((pcVar5 != (code *)0x0) &&
           ((in_RCX = (undefined *)*plVar4, in_RCX != *(undefined **)puVar2 ||
            ((*(byte *)((long)plVar4 + 0xe9) & 1) != 0)))) {
          (*pcVar5)(param_1,plVar4);
        }
      }
    }
    *(int *)(param_2 + 0xec) = (int)param_1;
    if ((*(byte *)(param_2 + 0xe8) & 1) != 0) {
      bVar3 = glist_isgraph(param_2);
      fVar6 = extraout_XMM0_Da;
      uVar7 = extraout_XMM0_Db;
      if ((int)CONCAT71(extraout_var,bVar3) == 0) {
        fVar6 = *(float *)(param_2 + 0x5c);
        uVar7 = 0;
        fVar8 = *(float *)(param_2 + 100);
        in_XMM1_Db = 0;
        if (fVar8 < fVar6) {
          fVar6 = fVar6 - fVar8;
          in_XMM1_Db = 0;
          in_XMM2_Da = (float)*(int *)(param_2 + 0xec);
          fVar8 = ((float)(*(int *)(param_2 + 0x74) - *(int *)(param_2 + 0x6c)) * fVar6) /
                  in_XMM2_Da;
          *(float *)(param_2 + 0x5c) = fVar8;
          fVar8 = fVar8 - fVar6;
          *(float *)(param_2 + 100) = fVar8;
        }
      }
      canvas_redraw(CONCAT44(uVar7,fVar6),CONCAT44(in_XMM1_Db,fVar8),CONCAT44(in_XMM2_Db,in_XMM2_Da)
                    ,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,(long *)param_2,in_RSI,
                    extraout_RDX,in_RCX,in_R8,in_R9,in_stack_00000008);
      return;
    }
  }
  return;
}


