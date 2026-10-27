// Function : text_define_sort
// Namespace: 
// Entry    : 00557590
// Prototype: undefined text_define_sort(long param_1, int * param_2, uint param_3, int * param_4, char * param_5, undefined8 param_6)
// Body     : 00557590 - 00557ae5


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void text_define_sort(long param_1,int *param_2,uint param_3,int *param_4,char *param_5,
                     undefined8 param_6)

{
  char *__s1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *__base;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  code *pcVar13;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  ulong uVar14;
  uint uVar15;
  size_t sVar16;
  ulong uVar17;
  size_t __nmemb;
  bool bVar18;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar19;
  int iVar21;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  int iVar25;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  int iVar26;
  undefined1 in_XMM1 [16];
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  int iVar27;
  undefined8 extraout_XMM1_Qb_02;
  undefined1 in_XMM2 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined8 in_XMM5_Qa;
  undefined1 in_XMM6 [16];
  undefined1 in_XMM7 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 in_stack_ffffffffffffffa8;
  undefined8 local_38;
  
  piVar11 = param_4;
  uVar5 = binbuf_getnatom(*(undefined4 **)(param_1 + 0x30));
  puVar7 = (uint *)binbuf_getvec(*(long *)(param_1 + 0x30));
  local_38 = 1;
  uVar19 = extraout_XMM0_Qa;
  if (param_3 == 0) {
    bVar4 = false;
    uVar20 = extraout_RDX;
  }
  else {
    bVar4 = false;
    do {
      if ((*param_4 != 2) || (__s1 = (char *)**(undefined8 **)(param_4 + 2), *__s1 != '-')) {
        uVar19 = post(uVar19,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5_Qa,
                      in_XMM6._0_8_,in_XMM7._0_8_,
                      "warning: text define sort ignoring extra argument: ");
        auVar30 = postatom(uVar19,extraout_XMM1_Qa_01,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                           in_XMM5_Qa,in_XMM6._0_8_,in_XMM7._0_8_,param_3,param_4,extraout_RDX_05,
                           piVar11,param_5,param_6);
        uVar19 = endpost(auVar30._0_8_,auVar30._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                         in_XMM5_Qa,in_XMM6._0_8_,in_XMM7._0_8_);
        in_XMM1._8_8_ = extraout_XMM1_Qb_00;
        in_XMM1._0_8_ = extraout_XMM1_Qa_02;
        uVar20 = extraout_RDX_06;
        param_2 = param_4;
        break;
      }
      param_2 = (int *)&DAT_0065a2ba;
      iVar6 = strcmp(__s1,"-u");
      if (iVar6 == 0) {
        bVar4 = true;
        uVar20 = extraout_RDX_00;
        uVar19 = extraout_XMM0_Qa_00;
      }
      else {
        param_2 = (int *)&DAT_00652b44;
        iVar6 = strcmp(__s1,"-r");
        if (iVar6 == 0) {
          local_38 = CONCAT44(local_38._4_4_,0xffffffff);
          uVar20 = extraout_RDX_01;
          uVar19 = extraout_XMM0_Qa_01;
        }
        else {
          param_2 = (int *)&DAT_006598e4;
          iVar6 = strcmp(__s1,"-k");
          if (((iVar6 == 0) && (1 < (int)param_3)) && (param_4[4] == 1)) {
            iVar6 = (int)(float)param_4[6];
            param_4 = param_4 + 4;
            piVar11 = (int *)0x0;
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            local_38 = CONCAT44(iVar6,(undefined4)local_38);
            param_3 = param_3 - 1;
            uVar20 = extraout_RDX_02;
            uVar19 = extraout_XMM0_Qa_02;
          }
          else {
            uVar19 = pd_error(extraout_XMM0_Qa_02,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,
                              in_XMM4._0_8_,in_XMM5_Qa,in_XMM6._0_8_,in_XMM7._0_8_,param_1,
                              "text define sort: unknown flag ...",extraout_RDX_02,piVar11,param_5,
                              param_6);
            param_2 = param_4;
            auVar30 = postatom(uVar19,extraout_XMM1_Qa,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                               in_XMM5_Qa,in_XMM6._0_8_,in_XMM7._0_8_,param_3,param_4,
                               extraout_RDX_03,piVar11,param_5,param_6);
            uVar19 = endpost(auVar30._0_8_,auVar30._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                             in_XMM5_Qa,in_XMM6._0_8_,in_XMM7._0_8_);
            in_XMM1._8_8_ = extraout_XMM1_Qb;
            in_XMM1._0_8_ = extraout_XMM1_Qa_00;
            uVar20 = extraout_RDX_04;
          }
        }
      }
      param_4 = param_4 + 4;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  if (uVar5 != 0) {
    if ((puVar7[(long)(int)uVar5 * 4 + -4] & 0xfffffffe) != 4) {
      binbuf_addsemi(uVar19,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5_Qa,
                     in_XMM6._0_8_,in_XMM7._0_8_,*(int **)(param_1 + 0x30),param_2,uVar20,
                     (ulong)(puVar7[(long)(int)uVar5 * 4 + -4] & 0xfffffffe),param_5,param_6);
      in_XMM1._8_8_ = extraout_XMM1_Qb_01;
      in_XMM1._0_8_ = extraout_XMM1_Qa_03;
      puVar7 = (uint *)binbuf_getvec(*(long *)(param_1 + 0x30));
      uVar5 = binbuf_getnatom(*(undefined4 **)(param_1 + 0x30));
    }
    if ((int)uVar5 < 1) {
      __base = getbytes(0);
      __nmemb = 0;
      uVar15 = 0;
    }
    else {
      uVar14 = (ulong)uVar5;
      if (uVar5 < 9) {
        lVar8 = 0;
        uVar15 = 0;
      }
      else {
        uVar12 = 8;
        if ((ulong)(uVar5 & 7) != 0) {
          uVar12 = (ulong)(uVar5 & 7);
        }
        lVar8 = uVar14 - uVar12;
        puVar9 = puVar7 + 0x1c;
        iVar6 = 0;
        iVar21 = 0;
        iVar22 = 0;
        iVar23 = 0;
        iVar24 = 0;
        iVar25 = 0;
        iVar26 = 0;
        iVar27 = 0;
        lVar10 = lVar8;
        do {
          auVar30._12_4_ = puVar9[-0x10];
          auVar30._8_4_ = puVar9[-0x14];
          auVar30._4_4_ = puVar9[-0x18];
          auVar30._0_4_ = puVar9[-0x1c];
          in_XMM5_Qa = CONCAT44(*puVar9,puVar9[-4]);
          in_XMM4 = ZEXT416(puVar9[-8]);
          auVar28._4_4_ = puVar9[-8];
          auVar28._0_4_ = puVar9[-0xc];
          auVar28._8_8_ = in_XMM5_Qa;
          auVar30 = auVar30 & _DAT_0065a030;
          auVar28 = auVar28 & _DAT_0065a030;
          uVar15 = (uint)(auVar30._0_4_ == (int)DAT_00652d80);
          in_XMM6._0_4_ = -uVar15;
          uVar1 = (uint)(auVar30._4_4_ == DAT_00652d80._4_4_);
          in_XMM6._4_4_ = -uVar1;
          uVar2 = (uint)(auVar30._8_4_ == DAT_00652d80._8_4_);
          in_XMM6._8_4_ = -uVar2;
          uVar3 = (uint)(auVar30._12_4_ == DAT_00652d80._12_4_);
          in_XMM6._12_4_ = -uVar3;
          iVar6 = iVar6 + uVar15;
          iVar21 = iVar21 + uVar1;
          iVar22 = iVar22 + uVar2;
          iVar23 = iVar23 + uVar3;
          uVar15 = (uint)(auVar28._0_4_ == (int)DAT_00652d80);
          in_XMM7._0_4_ = -uVar15;
          uVar1 = (uint)(auVar28._4_4_ == DAT_00652d80._4_4_);
          in_XMM7._4_4_ = -uVar1;
          uVar2 = (uint)(auVar28._8_4_ == DAT_00652d80._8_4_);
          in_XMM7._8_4_ = -uVar2;
          uVar3 = (uint)(auVar28._12_4_ == DAT_00652d80._12_4_);
          in_XMM7._12_4_ = -uVar3;
          iVar24 = iVar24 + uVar15;
          iVar25 = iVar25 + uVar1;
          iVar26 = iVar26 + uVar2;
          iVar27 = iVar27 + uVar3;
          puVar9 = puVar9 + 0x20;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
        iVar21 = iVar27 + iVar23 + iVar25 + iVar21;
        in_XMM1._0_4_ = iVar21 + iVar26 + iVar22 + iVar24 + iVar6;
        in_XMM1._4_4_ = iVar21 * 2;
        in_XMM1._8_4_ = iVar21 + (iVar26 + iVar22) * 2;
        in_XMM1._12_4_ = iVar21 + (iVar27 + iVar23) * 2;
        in_XMM2 = _DAT_0065a030;
        in_XMM3 = _DAT_00652d80;
        uVar15 = in_XMM1._0_4_;
      }
      uVar12 = uVar14 - lVar8;
      puVar9 = puVar7 + lVar8 * 4;
      do {
        bVar18 = (*puVar9 & 0xfffffffe) == 4;
        uVar17 = (ulong)bVar18;
        uVar15 = uVar15 + bVar18;
        puVar9 = puVar9 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      __nmemb = (size_t)uVar15;
      __base = getbytes(__nmemb * 8);
      if (0 < (int)uVar5) {
        bVar18 = true;
        iVar6 = 0;
        uVar19 = extraout_RDX_07;
        uVar20 = extraout_XMM0_Qa_03;
        do {
          if (bVar18) {
            if ((int)uVar15 <= iVar6) {
              uVar20 = bug(uVar20,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5_Qa
                           ,in_XMM6._0_8_,in_XMM7._0_8_,"text_define_sort",uVar17,uVar19,uVar12,
                           param_5,param_6,in_stack_ffffffffffffffa8);
              in_XMM1._8_8_ = extraout_XMM1_Qb_02;
              in_XMM1._0_8_ = extraout_XMM1_Qa_04;
              uVar19 = extraout_RDX_08;
            }
            lVar10 = (long)iVar6;
            iVar6 = iVar6 + 1;
            __base[lVar10] = puVar7;
          }
          uVar12 = (ulong)(*puVar7 & 0xfffffffe);
          bVar18 = (*puVar7 & 0xfffffffe) == 4;
          puVar7 = puVar7 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    lVar10 = __tls_get_addr(&PTR_007153d8);
    *(undefined8 **)(lVar10 + 0x110) = &local_38;
    pcVar13 = stupid_sortcompare;
    uVar19 = extraout_XMM1_Qa_05;
    qsort(__base,__nmemb,8,stupid_sortcompare);
    piVar11 = binbuf_new();
    auVar29._8_8_ = uVar19;
    auVar29._0_8_ = extraout_XMM0_Qa_04;
    if (uVar15 != 0) {
      if (bVar4) {
        sVar16 = 0;
        do {
          uVar19 = auVar29._8_8_;
          uVar14 = auVar29._0_8_;
          if (sVar16 == 0) {
            puVar7 = (uint *)*__base;
LAB_00557954:
            iVar6 = 0;
            if ((*puVar7 & 0xfffffffe) != 4) {
              iVar6 = 0;
              puVar9 = puVar7;
              do {
                puVar9 = puVar9 + 4;
                iVar6 = iVar6 + 1;
              } while ((*puVar9 & 0xfffffffe) != 4);
              pcVar13 = (code *)0x4;
            }
            auVar29 = binbuf_add(uVar14,uVar19,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5_Qa,
                                 in_XMM6._0_8_,in_XMM7._0_8_,piVar11,iVar6 + 1,(undefined8 *)puVar7,
                                 pcVar13,param_5,param_6);
          }
          else {
            pcVar13 = (code *)__base[(int)sVar16 - 1];
            puVar7 = (uint *)__base[sVar16];
            uVar5 = *(uint *)pcVar13;
            if ((uVar5 & 0xfffffffe) == 4) {
              if (uVar5 != *puVar7) goto LAB_00557954;
            }
            else {
              lVar10 = 0;
              do {
                if (uVar5 != *(uint *)((long)puVar7 + lVar10)) goto LAB_00557954;
                if (uVar5 == 2) {
                  if (*(long *)(pcVar13 + lVar10 + 8) != *(long *)((long)puVar7 + lVar10 + 8))
                  goto LAB_00557954;
                }
                else if ((uVar5 == 1) &&
                        (uVar14 = (ulong)(uint)*(float *)(pcVar13 + lVar10 + 8),
                        *(float *)(pcVar13 + lVar10 + 8) != *(float *)((long)puVar7 + lVar10 + 8)))
                goto LAB_00557954;
                auVar29._8_8_ = uVar19;
                auVar29._0_8_ = uVar14;
                uVar5 = *(uint *)(pcVar13 + lVar10 + 0x10);
                lVar10 = lVar10 + 0x10;
              } while ((uVar5 & 0xfffffffe) != 4);
              if (uVar5 != *(uint *)(lVar10 + (long)puVar7)) goto LAB_00557954;
            }
          }
          sVar16 = sVar16 + 1;
        } while (sVar16 != __nmemb);
      }
      else {
        sVar16 = 0;
        do {
          puVar7 = (uint *)__base[sVar16];
          iVar6 = 0;
          if ((*puVar7 & 0xfffffffe) != 4) {
            iVar6 = 0;
            puVar9 = puVar7;
            do {
              puVar9 = puVar9 + 4;
              iVar6 = iVar6 + 1;
            } while ((*puVar9 & 0xfffffffe) != 4);
            pcVar13 = (code *)0x4;
          }
          auVar29 = binbuf_add(auVar29._0_8_,auVar29._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_
                               ,in_XMM5_Qa,in_XMM6._0_8_,in_XMM7._0_8_,piVar11,iVar6 + 1,
                               (undefined8 *)puVar7,pcVar13,param_5,param_6);
          sVar16 = sVar16 + 1;
        } while (sVar16 != __nmemb);
      }
    }
    binbuf_free(*(void **)(param_1 + 0x30));
    *(int **)(param_1 + 0x30) = piVar11;
    *(int **)(*(long *)(param_1 + 0x68) + 0x28) = piVar11;
    auVar30 = freebytes(__base);
    if (*(long *)(param_1 + 0x40) != 0) {
      pdgui_vmess(auVar30._0_8_,auVar30._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5_Qa,
                  in_XMM6._0_8_,in_XMM7._0_8_,0x65a110,"^",param_1,pcVar13,param_5,param_6,
                  in_stack_ffffffffffffffa8);
      uVar19 = extraout_XMM1_Qa_06;
      uVar5 = binbuf_getnatom(*(undefined4 **)(param_1 + 0x30));
      uVar20 = binbuf_getvec(*(long *)(param_1 + 0x30));
      auVar30 = pdgui_vmess(extraout_XMM0_Qa_05,uVar19,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                            in_XMM5_Qa,in_XMM6._0_8_,in_XMM7._0_8_,0x65a126,"^A",param_1,
                            (ulong)uVar5,uVar20,param_6,in_stack_ffffffffffffffa8);
      pdgui_vmess(auVar30._0_8_,auVar30._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5_Qa,
                  in_XMM6._0_8_,in_XMM7._0_8_,0x65a145,"^i",param_1,0,uVar20,param_6,
                  in_stack_ffffffffffffffa8);
    }
  }
  return;
}


