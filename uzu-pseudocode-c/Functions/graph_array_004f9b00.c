// Function : graph_array
// Namespace: 
// Entry    : 004f9b00
// Prototype: long * graph_array(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 * param_10, undefined8 * param_11, undefined8 param_12, undefined8 * * param_13, ulong param_14)
// Body     : 004f9b00 - 004f9e91


long * graph_array(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                  undefined8 *param_10,undefined8 *param_11,undefined8 param_12,
                  undefined8 **param_13,ulong param_14)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long extraout_RAX;
  undefined8 *puVar7;
  undefined8 uVar8;
  long extraout_RAX_00;
  long extraout_RAX_01;
  long extraout_RAX_02;
  void *pvVar9;
  int iVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  long lVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar18;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  float fVar19;
  int local_58;
  int local_54;
  uint *local_50;
  undefined8 *local_48;
  long local_40;
  undefined8 *local_38;
  
  fVar19 = (float)param_2;
  puVar4 = gensym("#A");
  uVar15 = (uint)fVar19;
  uVar3 = uVar15 >> 1 & 3;
  piVar11 = (int *)0x0;
  if (uVar3 != 1) {
    piVar11 = (int *)(ulong)uVar3;
  }
  uVar17 = 1;
  if (uVar3 != 0) {
    uVar17 = (uint)piVar11;
  }
  plVar5 = (long *)__tls_get_addr();
  if ((undefined8 *)(*plVar5 + 0x78) == param_11) {
    puVar6 = gensym("pd-float-array");
    uVar18 = template_findbyname(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                                 param_4,param_5,param_6,param_7,param_8,(long)puVar6);
    if (extraout_RAX == 0) {
      uVar8 = *puVar6;
      pcVar14 = "array: couldn\'t find template %s";
    }
    else {
      puVar7 = gensym("z");
      piVar11 = &local_58;
      param_13 = &local_48;
      uVar8 = template_find_field(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                                  param_4,param_5,param_6,param_7,param_8,extraout_RAX,(long)puVar7,
                                  &local_54,piVar11,(char *)param_13,param_14);
      uVar18 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
      if ((int)uVar8 == 0) {
        uVar8 = *puVar6;
        pcVar14 = "array: template %s has no \'z\' field";
      }
      else if (local_58 == 3) {
        uVar18 = template_findbyname(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,
                                     param_3,param_4,param_5,param_6,param_7,param_8,(long)local_48)
        ;
        if (extraout_RAX_00 != 0) {
          local_40 = extraout_RAX;
          local_38 = puVar4;
          uVar18 = template_findbyname(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,
                                       param_8,(long)puVar6);
          if (extraout_RAX_01 == 0) {
            plVar5 = (long *)0x0;
          }
          else {
            plVar5 = pd_new(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            *(long *)PTR_garray_class_00715780,puVar7,extraout_RDX,piVar11,
                            (char *)param_13,param_14);
            puVar4 = scalar_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,
                                param_4,param_5,param_6,param_7,param_8,(long)param_9,puVar6,
                                extraout_RDX_00,piVar11,(char *)param_13,param_14);
            plVar5[2] = (long)puVar4;
            plVar5[4] = (long)param_10;
            puVar4 = canvas_realizedollar
                               (CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,
                                param_4,param_5,param_6,param_7,param_8,(long)param_9,param_10,
                                extraout_RDX_01,piVar11,(char *)param_13,param_14);
            plVar5[5] = (long)puVar4;
            uVar18 = pd_bind(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,
                             param_4,param_5,param_6,param_7,param_8,plVar5,(long)puVar4,
                             extraout_RDX_02,piVar11,(char *)param_13,param_14);
            uVar12 = (ulong)(byte)((byte)((uVar15 & 8) >> 1) | (char)uVar15 * '\x02' & 2U |
                                  *(byte *)(plVar5 + 6) & 0xd0) | 0x20;
            *(char *)(plVar5 + 6) = (char)uVar12;
            uVar18 = glist_add(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,plVar5,extraout_RDX_03,uVar12,(char *)param_13,param_14);
            plVar5[3] = (long)param_9;
          }
          *(byte *)(plVar5 + 6) = *(byte *)(plVar5 + 6) & 0xef | (char)(uVar15 & 8) * '\x02';
          uVar3 = 100;
          if (0 < (int)param_1) {
            uVar3 = (int)param_1;
          }
          puVar2 = *(uint **)(plVar5[2] + 0x18 + (long)local_54 * 8);
          uVar18 = template_findbyname(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,
                                       param_8,*(long *)(puVar2 + 4));
          uVar15 = 1;
          if (uVar3 != 0) {
            uVar15 = uVar3;
          }
          uVar1 = *puVar2;
          iVar10 = *(int *)(extraout_RAX_02 + 0x18) * 8;
          pvVar9 = resizebytes(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               *(void **)(puVar2 + 2),(long)(int)(iVar10 * uVar1),
                               (long)(int)(iVar10 * uVar15));
          if (pvVar9 != (void *)0x0) {
            *(void **)(puVar2 + 2) = pvVar9;
            *puVar2 = uVar15;
            local_50 = puVar2;
            if (((int)uVar1 < (int)uVar15) && (uVar15 != uVar1)) {
              lVar13 = (long)pvVar9 + (long)(int)(iVar10 * uVar1);
              iVar16 = uVar1 - uVar15;
              do {
                word_init(lVar13,extraout_RAX_02,puVar2 + 8);
                lVar13 = lVar13 + iVar10;
                iVar16 = iVar16 + 1;
              } while (iVar16 != 0);
            }
            iVar10 = *(int *)PTR_glist_valid_007157f8;
            *(uint *)PTR_glist_valid_007157f8 = iVar10 + 1U;
            local_50[6] = iVar10 + 1U;
          }
          puVar4 = gensym("style");
          lVar13 = local_40;
          template_setfloat(CONCAT44(extraout_XMM0_Db_06,(float)uVar17),param_2,param_3,param_4,
                            param_5,param_6,param_7,param_8,local_40,puVar4,plVar5[2] + 0x18,1,
                            (char *)param_13,param_14);
          puVar4 = gensym("linewidth");
          template_setfloat((ulong)(uint)(float)(byte)((uVar17 == 0) + 1),param_2,param_3,param_4,
                            param_5,param_6,param_7,param_8,lVar13,puVar4,plVar5[2] + 0x18,1,
                            (char *)param_13,param_14);
          puVar4 = gensym("v");
          piVar11 = (int *)0x1;
          uVar18 = template_setfloat((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,
                                     param_7,param_8,lVar13,puVar4,plVar5[2] + 0x18,1,
                                     (char *)param_13,param_14);
          local_38[1] = 0;
          uVar18 = pd_bind(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5,
                           (long)local_38,extraout_RDX_04,piVar11,(char *)param_13,param_14);
          uVar18 = garray_fittograph(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                     (long)plVar5,(ulong)uVar3,(ulong)uVar17,piVar11,
                                     (char *)param_13,param_14);
          canvas_update_dsp(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return plVar5;
        }
        uVar8 = *local_48;
        pcVar14 = "array: no template of type %s";
      }
      else {
        uVar8 = *puVar6;
        pcVar14 = "array: template %s, \'z\' field is not an array";
        uVar18 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
      }
    }
  }
  else {
    uVar8 = *param_11;
    pcVar14 = "array %s: only \'float\' type understood";
    uVar18 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  }
  pd_error(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar14,uVar8,piVar11,
           (char *)param_13,param_14);
  return (long *)0x0;
}


