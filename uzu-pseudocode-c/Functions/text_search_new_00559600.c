// Function : text_search_new
// Namespace: 
// Entry    : 00559600
// Prototype: long * text_search_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, ulong param_6, int * param_7, long * param_8, char * param_9, undefined8 param_10)
// Body     : 00559600 - 005599e1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * text_search_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,ulong param_6,int *param_7,long *param_8,char *param_9,
                      undefined8 param_10)

{
  float fVar1;
  char *__s1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  undefined8 extraout_RDX;
  ulong uVar14;
  int *piVar15;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar19;
  int iVar21;
  int iVar22;
  undefined1 extraout_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 extraout_XMM0_04 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar20 [16];
  int iVar23;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 uVar24;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  int iVar26;
  int iVar27;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  int iVar28;
  undefined1 auVar25 [16];
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 uVar29;
  undefined1 in_XMM2 [16];
  undefined8 uVar30;
  undefined1 in_XMM3 [16];
  undefined8 uVar31;
  undefined1 in_XMM5 [16];
  undefined8 uVar32;
  undefined1 in_XMM6 [16];
  
  uVar18 = param_6 & 0xffffffff;
  plVar8 = pd_new(param_1,param_2,in_XMM2._0_8_,in_XMM3._0_8_,param_3,in_XMM5._0_8_,in_XMM6._0_8_,
                  param_4,*(long *)PTR_text_search_class_00715908,param_6,param_7,param_8,param_9,
                  param_10);
  plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar9 = outlet_new(extraout_XMM0_Qa,extraout_XMM1_Qa,in_XMM2._0_8_,in_XMM3._0_8_,param_3,
                      in_XMM5._0_8_,in_XMM6._0_8_,param_4,(long)plVar8,*plVar9 + 0xc0,extraout_RDX,
                      param_8,param_9,param_10);
  plVar8[0xc] = (long)plVar9;
  plVar8[6] = 0;
  *(undefined1 (*) [16])(plVar8 + 10) = (undefined1  [16])0x0;
  gpointer_init(plVar8 + 7);
  auVar25._8_8_ = extraout_XMM1_Qb;
  auVar25._0_8_ = extraout_XMM1_Qa_00;
  iVar7 = (int)param_6;
  if (iVar7 == 0) {
    uVar17 = 0;
    bVar2 = false;
  }
  else {
    if (*param_7 == 2) {
      puVar11 = *(undefined8 **)(param_7 + 2);
      iVar6 = strcmp((char *)*puVar11,"-s");
      if (iVar6 == 0) {
        if (((iVar7 < 3) || (param_7[4] != 2)) || (param_7[8] != 2)) {
          pd_error(extraout_XMM0_Qa_00,auVar25._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,param_3,
                   in_XMM5._0_8_,in_XMM6._0_8_,param_4,(long)plVar8,
                   "%s: \'-s\' needs a struct and field name","text search",param_8,param_9,param_10
                  );
          auVar25._8_8_ = extraout_XMM1_Qb_01;
          auVar25._0_8_ = extraout_XMM1_Qa_02;
        }
        else {
          lVar10 = canvas_makebindsym(extraout_XMM0_Qa_00,auVar25._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,
                                      param_3,in_XMM5._0_8_,in_XMM6._0_8_,param_4,
                                      *(undefined8 **)(param_7 + 6));
          auVar25._8_8_ = extraout_XMM1_Qb_00;
          auVar25._0_8_ = extraout_XMM1_Qa_01;
          plVar8[10] = lVar10;
          plVar8[0xb] = *(long *)(param_7 + 10);
          uVar18 = (ulong)(iVar7 - 3);
          param_7 = param_7 + 0xc;
          param_8 = plVar8;
        }
      }
      else {
        plVar8[6] = (long)puVar11;
        uVar18 = (ulong)(iVar7 - 1);
        param_7 = param_7 + 4;
      }
    }
    uVar17 = (uint)uVar18;
    bVar2 = 0 < (int)uVar17;
    if ((int)uVar17 < 1) {
      bVar2 = false;
    }
    else {
      if (uVar17 < 9) {
        lVar12 = 0;
        uVar13 = 0;
      }
      else {
        uVar14 = 8;
        if ((ulong)(uVar17 & 7) != 0) {
          uVar14 = (ulong)(uVar17 & 7);
        }
        lVar12 = uVar18 - uVar14;
        piVar15 = param_7 + 0x1c;
        iVar7 = 0;
        iVar6 = 0;
        iVar21 = 0;
        iVar22 = 0;
        iVar23 = 0;
        iVar26 = 0;
        iVar27 = 0;
        iVar28 = 0;
        lVar10 = lVar12;
        do {
          param_3 = CONCAT44(*piVar15,piVar15[-4]);
          in_XMM3 = ZEXT416((uint)piVar15[-8]);
          uVar13 = (uint)(piVar15[-0x1c] == (int)DAT_0065a040);
          in_XMM5._0_4_ = -uVar13;
          uVar3 = (uint)(piVar15[-0x18] == DAT_0065a040._4_4_);
          in_XMM5._4_4_ = -uVar3;
          uVar4 = (uint)(piVar15[-0x14] == DAT_0065a040._8_4_);
          in_XMM5._8_4_ = -uVar4;
          uVar5 = (uint)(piVar15[-0x10] == DAT_0065a040._12_4_);
          in_XMM5._12_4_ = -uVar5;
          iVar7 = iVar7 + uVar13;
          iVar6 = iVar6 + uVar3;
          iVar21 = iVar21 + uVar4;
          iVar22 = iVar22 + uVar5;
          uVar13 = (uint)(piVar15[-0xc] == (int)DAT_0065a040);
          in_XMM6._0_4_ = -uVar13;
          uVar3 = (uint)(piVar15[-8] == DAT_0065a040._4_4_);
          in_XMM6._4_4_ = -uVar3;
          uVar4 = (uint)(piVar15[-4] == DAT_0065a040._8_4_);
          in_XMM6._8_4_ = -uVar4;
          uVar5 = (uint)(*piVar15 == DAT_0065a040._12_4_);
          in_XMM6._12_4_ = -uVar5;
          iVar23 = iVar23 + uVar13;
          iVar26 = iVar26 + uVar3;
          iVar27 = iVar27 + uVar4;
          iVar28 = iVar28 + uVar5;
          piVar15 = piVar15 + 0x20;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
        iVar6 = iVar28 + iVar22 + iVar26 + iVar6;
        auVar25._0_4_ = iVar6 + iVar27 + iVar21 + iVar23 + iVar7;
        auVar25._4_4_ = iVar6 * 2;
        auVar25._8_4_ = iVar6 + (iVar27 + iVar21) * 2;
        auVar25._12_4_ = iVar6 + (iVar28 + iVar22) * 2;
        in_XMM2 = _DAT_0065a040;
        uVar13 = auVar25._0_4_;
      }
      lVar10 = uVar18 - lVar12;
      param_8 = (long *)(param_7 + lVar12 * 4);
      do {
        uVar13 = uVar13 + ((int)*param_8 == 1);
        param_8 = param_8 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      if (uVar13 != 0) goto LAB_005597fe;
    }
  }
  uVar13 = 1;
LAB_005597fe:
  *(uint *)(plVar8 + 0xd) = uVar13;
  *(undefined8 *)((long)plVar8 + 0x6c) = 0x7fffffff00000000;
  puVar11 = getbytes((ulong)uVar13 << 3);
  uVar32 = in_XMM6._0_8_;
  uVar31 = in_XMM5._0_8_;
  uVar30 = in_XMM3._0_8_;
  uVar29 = in_XMM2._0_8_;
  uVar24 = auVar25._0_8_;
  uVar19 = extraout_XMM0._0_8_;
  plVar8[0xf] = (long)puVar11;
  uVar16 = extraout_RDX_00;
  if (uVar17 == 0) {
    *puVar11 = 0;
    lVar10 = plVar8[10];
  }
  else {
    if (bVar2) {
      iVar7 = -1;
      lVar10 = 0;
      iVar6 = 0;
      auVar20 = extraout_XMM0;
      do {
        while (*(int *)((long)param_7 + lVar10) == 1) {
          fVar1 = *(float *)((long)param_7 + lVar10 + 8);
          if (fVar1 <= DAT_005d9058) {
            fVar1 = DAT_005d9058;
          }
          auVar20 = ZEXT416((uint)fVar1);
          param_8 = (long *)plVar8[0xf];
          uVar16 = 0;
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          *(int *)(param_8 + iVar6) = (int)fVar1;
          *(int *)((long)param_8 + (long)iVar6 * 8 + 4) = iVar7;
          iVar6 = iVar6 + 1;
LAB_0055998c:
          uVar32 = in_XMM6._0_8_;
          uVar31 = in_XMM5._0_8_;
          uVar30 = in_XMM3._0_8_;
          uVar29 = in_XMM2._0_8_;
          uVar24 = auVar25._0_8_;
          uVar19 = auVar20._0_8_;
          iVar7 = -1;
          lVar10 = lVar10 + 0x10;
          if ((ulong)uVar17 * 0x10 == lVar10) goto LAB_0055999b;
        }
        __s1 = (char *)**(undefined8 **)((long)param_7 + lVar10 + 8);
        if (iVar7 < 0) {
          iVar7 = strcmp(__s1,">");
          if (iVar7 == 0) {
            iVar7 = 1;
            uVar16 = extraout_RDX_02;
            auVar20 = extraout_XMM0_00;
          }
          else {
            iVar7 = strcmp(__s1,">=");
            if (iVar7 == 0) {
              iVar7 = 2;
              uVar16 = extraout_RDX_03;
              auVar20 = extraout_XMM0_01;
            }
            else {
              iVar7 = strcmp(__s1,"<");
              if (iVar7 == 0) {
                iVar7 = 3;
                uVar16 = extraout_RDX_04;
                auVar20 = extraout_XMM0_02;
              }
              else {
                iVar7 = strcmp(__s1,"<=");
                if (iVar7 == 0) {
                  iVar7 = 4;
                  uVar16 = extraout_RDX_05;
                  auVar20 = extraout_XMM0_03;
                }
                else {
                  iVar7 = strcmp(__s1,"near");
                  if (iVar7 != 0) {
                    auVar20._0_8_ =
                         pd_error(extraout_XMM0_04._0_8_,auVar25._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,
                                  param_3,in_XMM5._0_8_,in_XMM6._0_8_,param_4,(long)plVar8,
                                  "text search: unknown operation argument: %s",__s1,param_8,param_9
                                  ,param_10);
                    auVar25._8_8_ = extraout_XMM1_Qb_03;
                    auVar25._0_8_ = extraout_XMM1_Qa_04;
                    auVar20._8_8_ = extraout_XMM0_Qb_00;
                    uVar16 = extraout_RDX_07;
                    goto LAB_0055998c;
                  }
                  iVar7 = 5;
                  uVar16 = extraout_RDX_06;
                  auVar20 = extraout_XMM0_04;
                }
              }
            }
          }
        }
        else {
          auVar20._0_8_ =
               pd_error(auVar20._0_8_,auVar25._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,param_3,
                        in_XMM5._0_8_,in_XMM6._0_8_,param_4,(long)plVar8,
                        "text search: extra operation argument ignored: %s",__s1,param_8,param_9,
                        param_10);
          auVar25._8_8_ = extraout_XMM1_Qb_02;
          auVar25._0_8_ = extraout_XMM1_Qa_03;
          auVar20._8_8_ = extraout_XMM0_Qb;
          uVar16 = extraout_RDX_01;
        }
        uVar32 = in_XMM6._0_8_;
        uVar31 = in_XMM5._0_8_;
        uVar30 = in_XMM3._0_8_;
        uVar29 = in_XMM2._0_8_;
        uVar24 = auVar25._0_8_;
        uVar19 = auVar20._0_8_;
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar17 * 0x10 != lVar10);
    }
LAB_0055999b:
    lVar10 = plVar8[10];
  }
  if (lVar10 == 0) {
    symbolinlet_new(uVar19,uVar24,uVar29,uVar30,param_3,uVar31,uVar32,param_4,(long)plVar8,
                    (long)(plVar8 + 6),uVar16,param_8,param_9,param_10);
  }
  else {
    pointerinlet_new(uVar19,uVar24,uVar29,uVar30,param_3,uVar31,uVar32,param_4,(long)plVar8,
                     (long)(plVar8 + 7),uVar16,param_8,param_9,param_10);
  }
  return plVar8;
}


