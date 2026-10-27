// Function : text_save
// Namespace: 
// Entry    : 0052b220
// Prototype: undefined text_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, double param_15)
// Body     : 0052b220 - 0052b637


void text_save(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long *param_9,int *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
              undefined8 param_14,double param_15)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined *puVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  char acStack_b0 [24];
  undefined1 in_stack_ffffffffffffff68;
  undefined7 in_stack_ffffffffffffff69;
  
  bVar2 = *(byte *)((long)param_9 + 0x2e) & 3;
  if (bVar2 != 3) {
    if (bVar2 == 2) {
      puVar4 = gensym("#X");
      pcVar9 = "msg";
    }
    else {
      if (bVar2 == 1) {
        puVar4 = gensym("saveto");
        lVar5 = zgetfn(param_9,(long)puVar4);
        if ((lVar5 == 0) ||
           ((puVar8 = PTR_canvas_class_00715918, *param_9 == *(long *)PTR_canvas_class_00715918 &&
            ((bVar3 = canvas_isabstraction((long)param_9), (int)CONCAT71(extraout_var,bVar3) != 0 ||
             (bVar3 = canvas_istable((long)param_9), (int)CONCAT71(extraout_var_00,bVar3) != 0))))))
        {
          puVar4 = gensym("#X");
          puVar7 = gensym("obj");
          pcVar9 = (char *)(ulong)(uint)(int)(short)param_9[5];
          uVar11 = (ulong)(uint)(int)*(short *)((long)param_9 + 0x2a);
          uVar12 = binbuf_addv(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,param_10,0x65f012,puVar4,puVar7,pcVar9,uVar11,
                               (double)CONCAT71(in_stack_ffffffffffffff69,in_stack_ffffffffffffff68)
                              );
          uVar13 = binbuf_addbinbuf(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    param_10,(uint *)param_9[2],extraout_RDX_05,(ulong)puVar7,pcVar9
                                    ,uVar11);
          uVar12 = extraout_RDX_06;
          if (*(short *)((long)param_9 + 0x2c) != 0) {
            puVar4 = gensym("f");
            puVar7 = (undefined8 *)(ulong)(uint)(int)*(short *)((long)param_9 + 0x2c);
            uVar13 = binbuf_addv(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7
                                 ,param_8,param_10,0x6559c1,puVar4,puVar7,pcVar9,uVar11,
                                 (double)CONCAT71(in_stack_ffffffffffffff69,
                                                  in_stack_ffffffffffffff68));
            uVar12 = extraout_RDX_07;
          }
          binbuf_addv(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                      0x656033,uVar12,puVar7,pcVar9,uVar11,
                      (double)CONCAT71(in_stack_ffffffffffffff69,in_stack_ffffffffffffff68));
          if (*param_9 != *(long *)PTR_canvas_class_00715918) {
            return;
          }
        }
        else {
          puVar4 = gensym("saveto");
          pcVar6 = (code *)getfn(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_9,puVar4,extraout_RDX,puVar8,param_13,param_14);
          (*pcVar6)(param_9,param_10);
          puVar4 = gensym("#X");
          puVar7 = gensym("restore");
          pcVar9 = (char *)(ulong)(uint)(int)(short)param_9[5];
          uVar11 = (ulong)(uint)(int)*(short *)((long)param_9 + 0x2a);
          uVar12 = binbuf_addv(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,param_10,0x65f012,puVar4,puVar7,pcVar9,uVar11,
                               (double)CONCAT71(in_stack_ffffffffffffff69,in_stack_ffffffffffffff68)
                              );
          uVar12 = binbuf_addbinbuf(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    param_10,(uint *)param_9[2],extraout_RDX_00,(ulong)puVar7,pcVar9
                                    ,uVar11);
          binbuf_addv(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                      0x656033,extraout_RDX_01,puVar7,pcVar9,uVar11,
                      (double)CONCAT71(in_stack_ffffffffffffff69,in_stack_ffffffffffffff68));
          if (*(short *)((long)param_9 + 0x2c) != 0) {
            puVar4 = gensym("#X");
            puVar7 = gensym("f");
            binbuf_addv(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_10,0x653a6f,puVar4,puVar7,
                        (char *)(ulong)(uint)(int)*(short *)((long)param_9 + 0x2c),uVar11,
                        (double)CONCAT71(in_stack_ffffffffffffff69,in_stack_ffffffffffffff68));
          }
          if (*param_9 != *(long *)PTR_canvas_class_00715918) {
            return;
          }
        }
        bVar3 = canvas_isabstraction((long)param_9);
        if ((int)CONCAT71(extraout_var_01,bVar3) == 0) {
          return;
        }
        canvas_statesavers_doit
                  (extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   (long)param_9,(long)param_10);
        return;
      }
      puVar4 = gensym("#X");
      pcVar9 = "text";
    }
    puVar7 = gensym(pcVar9);
    pcVar9 = (char *)(ulong)(uint)(int)(short)param_9[5];
    uVar11 = (ulong)(uint)(int)*(short *)((long)param_9 + 0x2a);
    uVar12 = binbuf_addv(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,param_10,0x65f012,puVar4,puVar7,pcVar9,uVar11,
                         (double)CONCAT71(in_stack_ffffffffffffff69,in_stack_ffffffffffffff68));
    uVar13 = binbuf_addbinbuf(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_10,(uint *)param_9[2],extraout_RDX_02,(ulong)puVar7,pcVar9,
                              uVar11);
    uVar12 = extraout_RDX_03;
    if (*(short *)((long)param_9 + 0x2c) != 0) {
      puVar4 = gensym("f");
      puVar7 = (undefined8 *)(ulong)(uint)(int)*(short *)((long)param_9 + 0x2c);
      uVar13 = binbuf_addv(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,param_10,0x6559c1,puVar4,puVar7,pcVar9,uVar11,
                           (double)CONCAT71(in_stack_ffffffffffffff69,in_stack_ffffffffffffff68));
      uVar12 = extraout_RDX_04;
    }
    binbuf_addv(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,0x656033,
                uVar12,puVar7,pcVar9,uVar11,param_15);
    return;
  }
  pcVar9 = "listbox";
  if ((int)param_9[6] == 1) {
    pcVar9 = "floatatom";
  }
  pcVar10 = "symbolatom";
  if ((int)param_9[6] != 2) {
    pcVar10 = pcVar9;
  }
  puVar4 = gensym(pcVar10);
  cVar1 = **(char **)param_9[10];
  if (cVar1 == '-') {
    strncpy(acStack_b0 + 0x19,*(char **)param_9[10],99);
    pcVar9 = acStack_b0 + 0x18;
LAB_0052b46b:
    gensym(pcVar9);
  }
  else if (cVar1 == '\0') {
    pcVar9 = "-";
    goto LAB_0052b46b;
  }
  pcVar9 = acStack_b0 + 0x18;
  pcVar10 = acStack_b0 + 0x18;
  cVar1 = **(char **)param_9[0xb];
  if (cVar1 == '-') {
    strncpy(acStack_b0 + 0x19,*(char **)param_9[0xb],99);
LAB_0052b4a9:
    gensym(pcVar9);
  }
  else if (cVar1 == '\0') {
    pcVar9 = "-";
    goto LAB_0052b4a9;
  }
  cVar1 = **(char **)param_9[0xc];
  if (cVar1 == '-') {
    strncpy(acStack_b0 + 0x19,*(char **)param_9[0xc],99);
  }
  else {
    if (cVar1 != '\0') goto LAB_0052b4ef;
    pcVar10 = "-";
  }
  gensym(pcVar10);
LAB_0052b4ef:
  puVar7 = gensym("#X");
  binbuf_addv((double)*(float *)(param_9 + 9),(double)*(float *)((long)param_9 + 0x44),
              (double)(*(byte *)(param_9 + 0xf) >> 1 & 3),(double)*(int *)((long)param_9 + 0x74),
              param_5,param_6,param_7,param_8,param_10,0x6559c5,puVar7,puVar4,
              (char *)(ulong)(uint)(int)(short)param_9[5],
              (ulong)(uint)(int)*(short *)((long)param_9 + 0x2a),
              (double)(ulong)(uint)(int)*(short *)((long)param_9 + 0x2c));
  return;
}


