// Function : do_file_handle_new
// Namespace: 
// Entry    : 0057d180
// Prototype: long * do_file_handle_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057d180 - 0057d30f


long * do_file_handle_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                         undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7
                         ,undefined8 param_8,long param_9,ulong param_10,int *param_11,
                         undefined8 param_12,char *param_13,undefined8 param_14)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar15;
  undefined1 in_stack_fffffffffffffbd8;
  char local_418 [1000];
  
  uVar12 = SUB84(param_13,0);
  uVar9 = (undefined4)param_12;
  uVar14 = param_10 & 0xffffffff;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,param_14);
  plVar2[7] = (long)(plVar2 + 6);
  *(undefined4 *)(plVar2 + 6) = 0xffffffff;
  lVar3 = canvas_getcurrent(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                           );
  plVar2[10] = lVar3;
  *(undefined4 *)(plVar2 + 9) = uVar12;
  *(undefined4 *)((long)plVar2 + 0x4c) = uVar9;
  plVar4 = outlet_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)plVar2,0,extraout_RDX,param_12,param_13,param_14);
  plVar2[0xb] = (long)plVar4;
  plVar4 = outlet_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)plVar2,0,extraout_RDX_00,param_12,param_13,param_14);
  plVar2[0xc] = (long)plVar4;
  puVar5 = gensym("-m");
  puVar6 = gensym("-q");
  puVar7 = gensym("-v");
  plVar2[8] = 0;
  uVar13 = (uint)param_10;
  do {
    if (uVar13 == 0) {
LAB_0057d2ed:
      *(uint *)((long)plVar2 + 0x4c) = (uint)(0 < *(int *)((long)plVar2 + 0x4c));
      return plVar2;
    }
    uVar13 = (int)uVar14 - 1;
    puVar8 = (undefined8 *)atom_getsymbol(param_11);
    if (puVar8 == puVar6) {
      *(int *)((long)plVar2 + 0x4c) = *(int *)((long)plVar2 + 0x4c) + -1;
    }
    else {
      if (puVar8 != puVar7) {
        if (puVar8 == puVar5) {
          if (uVar13 == 0) {
            pd_error(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     (long)plVar2,"\'-m\' requires an argument",extraout_RDX_01,param_12,param_13,
                     param_14);
            goto LAB_0057d2ed;
          }
          param_11 = param_11 + 4;
          uVar1 = do_parse_creationmode(param_11);
          if (-1 < (int)uVar1) {
            uVar13 = (int)uVar14 - 2;
            *(uint *)(plVar2 + 9) = uVar1;
            goto LAB_0057d235;
          }
          pcVar10 = local_418;
          uVar15 = atom_string(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,param_11,pcVar10,(uint *)0x3e8,param_12,param_13,param_14,
                               in_stack_fffffffffffffbd8);
          pcVar11 = "invalid creation mode \'%s\'";
        }
        else {
          if (uVar13 == 0) {
            plVar2[8] = (long)puVar8;
            goto LAB_0057d2ed;
          }
          pcVar10 = (char *)*puVar8;
          pcVar11 = "unknown flag %s";
          uVar15 = extraout_XMM0_Qa_02;
        }
        pd_error(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,pcVar11
                 ,pcVar10,param_12,param_13,param_14);
        goto LAB_0057d2ed;
      }
      *(int *)((long)plVar2 + 0x4c) = *(int *)((long)plVar2 + 0x4c) + 1;
    }
LAB_0057d235:
    param_11 = param_11 + 4;
    uVar14 = (ulong)uVar13;
  } while( true );
}


