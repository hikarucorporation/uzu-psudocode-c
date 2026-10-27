// Function : gverb_new
// Namespace: 
// Entry    : 0056bc80
// Prototype: long * gverb_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 0056bc80 - 0056c9e0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * gverb_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,ulong param_10,int *param_11,undefined8 *param_12,char *param_13,
                undefined8 param_14)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  float *pfVar6;
  void *pvVar7;
  uint *puVar8;
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
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 extraout_RDX_14;
  undefined8 extraout_RDX_15;
  undefined8 extraout_RDX_16;
  undefined8 extraout_RDX_17;
  undefined8 extraout_RDX_18;
  undefined8 extraout_RDX_19;
  undefined8 extraout_RDX_20;
  undefined8 extraout_RDX_21;
  undefined8 extraout_RDX_22;
  undefined8 extraout_RDX_23;
  undefined8 extraout_RDX_24;
  undefined8 extraout_RDX_25;
  undefined8 extraout_RDX_26;
  undefined8 extraout_RDX_27;
  undefined8 extraout_RDX_28;
  undefined8 extraout_RDX_29;
  undefined8 extraout_RDX_30;
  undefined8 extraout_RDX_31;
  undefined8 extraout_RDX_32;
  undefined8 extraout_RDX_33;
  undefined8 extraout_RDX_34;
  undefined8 extraout_RDX_35;
  undefined8 extraout_RDX_36;
  undefined8 uVar9;
  int iVar10;
  char *pcVar11;
  ulong uVar12;
  float fVar13;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float extraout_XMM0_Da_13;
  float extraout_XMM0_Da_14;
  float extraout_XMM0_Da_15;
  float extraout_XMM0_Da_16;
  float extraout_XMM0_Da_17;
  float extraout_XMM0_Da_18;
  float extraout_XMM0_Da_19;
  float extraout_XMM0_Da_20;
  float fVar14;
  uint uVar15;
  float extraout_XMM0_Da_21;
  float extraout_XMM0_Da_22;
  float fVar16;
  float extraout_XMM0_Da_23;
  float extraout_XMM0_Da_24;
  float extraout_XMM0_Da_25;
  float extraout_XMM0_Da_26;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  undefined4 extraout_XMM0_Db_13;
  undefined4 extraout_XMM0_Db_14;
  undefined4 extraout_XMM0_Db_15;
  undefined4 extraout_XMM0_Db_16;
  undefined4 extraout_XMM0_Db_17;
  undefined4 extraout_XMM0_Db_18;
  undefined4 extraout_XMM0_Db_19;
  undefined4 extraout_XMM0_Db_20;
  undefined4 extraout_XMM0_Db_21;
  undefined4 extraout_XMM0_Db_22;
  undefined4 extraout_XMM0_Db_23;
  undefined4 extraout_XMM0_Db_24;
  undefined4 extraout_XMM0_Db_25;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined4 uVar27;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_58;
  
  plVar4 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_gverb_class_00715a20,param_10,param_11,param_12,param_13,param_14);
  fVar14 = DAT_005d9044;
  fVar25 = DAT_005d94c0;
  if ((short)param_10 < 1) {
    local_58 = DAT_00653f04;
    local_6c = DAT_0065b140;
    local_78 = DAT_005d9038;
    local_74 = DAT_005d9044;
    local_7c = DAT_0065b200;
    local_80 = DAT_0065b200;
    local_84 = DAT_005d9044;
    local_70 = DAT_005d9044;
  }
  else {
    uVar12 = param_10 & 0xffff;
    uVar21 = 0;
    uVar24 = 0;
    dVar23 = (double)(ulong)(uint)DAT_005d9044;
    local_6c = DAT_0065b140;
    local_58 = DAT_00653f04;
    local_84 = DAT_005d9044;
    local_78 = DAT_005d9038;
    local_80 = DAT_0065b200;
    local_7c = DAT_0065b200;
    local_74 = DAT_005d9044;
    local_70 = DAT_005d9044;
    uVar9 = extraout_RDX;
    fVar20 = DAT_0065b200;
    fVar16 = DAT_005d9038;
    do {
      if ((*param_11 != 2) || (iVar10 = (int)uVar12, iVar10 == 1)) {
LAB_0056c16b:
        dVar17 = (double)CONCAT44(uVar21,fVar20);
        uVar21 = 0;
        pcVar11 = "[giga.rev~]: improper args";
        goto LAB_0056c9c3;
      }
      puVar5 = (undefined8 *)atom_getsymbolarg(0,iVar10,(long)param_11);
      fVar13 = (float)param_11[6];
      pcVar11 = (char *)*puVar5;
      iVar3 = strcmp(pcVar11,"-maxsize");
      if (iVar3 == 0) {
        if (DAT_005d9048 <= fVar13) {
          fVar13 = DAT_005d9048;
        }
        local_58 = fVar13;
        if (fVar13 <= DAT_005d9068) {
          local_58 = DAT_005d9068;
        }
        uVar9 = extraout_RDX_00;
LAB_0056bfb0:
      }
      else {
        iVar3 = strcmp(pcVar11,"-spread");
        if (iVar3 == 0) {
          if (DAT_005d9038 <= fVar13) {
            fVar13 = DAT_005d9038;
          }
          if (fVar13 <= DAT_005d9058) {
            fVar13 = DAT_005d9058;
          }
          local_84 = fVar13 * DAT_005d94c4;
          uVar9 = extraout_RDX_01;
          goto LAB_0056bfb0;
        }
        iVar3 = strcmp(pcVar11,"-size");
        if (iVar3 == 0) {
          uVar21 = 0;
          fVar20 = fVar13;
          if (fVar13 <= DAT_005d9068) {
            fVar20 = DAT_005d9068;
          }
          if (local_58 <= fVar20) {
            local_58 = fVar20;
          }
          uVar9 = extraout_RDX_02;
          fVar25 = fVar20;
          goto LAB_0056bfb0;
        }
        iVar3 = strcmp(pcVar11,"-bw");
        if (iVar3 != 0) {
          iVar3 = strcmp(pcVar11,"-decay");
          if (iVar3 == 0) {
            if (DAT_0065b204 <= fVar13) {
              fVar13 = DAT_0065b204;
            }
            local_6c = fVar13;
            if (fVar13 <= DAT_005d908c) {
              local_6c = DAT_005d908c;
            }
            uVar9 = extraout_RDX_04;
          }
          else {
            iVar3 = strcmp(pcVar11,"-damp");
            if (iVar3 == 0) {
              if (DAT_005d9038 <= fVar13) {
                fVar13 = DAT_005d9038;
              }
              local_70 = fVar13;
              if (fVar13 <= DAT_005d9058) {
                local_70 = DAT_005d9058;
              }
              uVar9 = extraout_RDX_05;
            }
            else {
              iVar3 = strcmp(pcVar11,"-dry");
              if (iVar3 == 0) {
                if (DAT_005d9038 <= fVar13) {
                  fVar13 = DAT_005d9038;
                }
                local_74 = fVar13;
                if (fVar13 <= DAT_005d9058) {
                  local_74 = DAT_005d9058;
                }
                uVar9 = extraout_RDX_06;
              }
              else {
                iVar3 = strcmp(pcVar11,"-early");
                if (iVar3 == 0) {
                  if (DAT_005d9038 <= fVar13) {
                    fVar13 = DAT_005d9038;
                  }
                  local_7c = fVar13;
                  if (fVar13 <= DAT_005d9058) {
                    local_7c = DAT_005d9058;
                  }
                  uVar9 = extraout_RDX_07;
                }
                else {
                  iVar3 = strcmp(pcVar11,"-late");
                  if (iVar3 != 0) {
                    iVar3 = strcmp(pcVar11,"-wet");
                    uVar9 = extraout_RDX_09;
                    if (iVar3 != 0) goto LAB_0056c16b;
                    uVar21 = 0;
                    if (DAT_005d9038 <= fVar13) {
                      fVar13 = DAT_005d9038;
                    }
                    fVar20 = fVar13;
                    if (fVar13 <= DAT_005d9058) {
                      fVar20 = DAT_005d9058;
                    }
                    local_78 = fVar20;
                    goto LAB_0056bfb6;
                  }
                  if (DAT_005d9038 <= fVar13) {
                    fVar13 = DAT_005d9038;
                  }
                  local_80 = fVar13;
                  if (fVar13 <= DAT_005d9058) {
                    local_80 = DAT_005d9058;
                  }
                  uVar9 = extraout_RDX_08;
                }
              }
            }
          }
          goto LAB_0056bfb0;
        }
        if (DAT_005d9038 <= fVar13) {
          fVar13 = DAT_005d9038;
        }
        uVar9 = extraout_RDX_03;
        fVar14 = fVar13;
        if (fVar13 <= DAT_005d9058) {
          fVar14 = DAT_005d9058;
        }
      }
LAB_0056bfb6:
      param_11 = param_11 + 8;
      uVar12 = (ulong)(iVar10 - 2);
    } while (2 < iVar10);
  }
  sys_getsr();
  *(int *)(plVar4 + 6) = (int)extraout_XMM0_Da;
  *(float *)(plVar4 + 0x12) = local_70;
  uVar27 = 0;
  *(float *)(plVar4 + 9) = local_58;
  fVar20 = local_58;
  if (fVar25 <= local_58) {
    fVar20 = fVar25;
  }
  fVar25 = (float)(-(uint)(fVar25 < DAT_005d9068) & (uint)DAT_005d9068 |
                  ~-(uint)(fVar25 < DAT_005d9068) & (uint)fVar20);
  *(float *)((long)plVar4 + 0x4c) = fVar25;
  *(float *)(plVar4 + 10) = local_6c;
  *(float *)(plVar4 + 7) = local_74;
  *(float *)((long)plVar4 + 0x44) = local_78;
  *(float *)(plVar4 + 8) = local_7c;
  dVar23 = DAT_0065b290;
  local_58 = local_58 * (float)(int)extraout_XMM0_Da;
  uVar22 = (undefined4)((ulong)((double)local_58 * DAT_0065b290) >> 0x20);
  fVar20 = (float)((double)local_58 * DAT_0065b290);
  uVar24 = 0;
  *(float *)((long)plVar4 + 0x3c) = local_80;
  *(float *)((long)plVar4 + 0x54) = fVar20;
  fVar25 = fVar25 * (float)(int)extraout_XMM0_Da;
  auVar26 = ZEXT416((uint)fVar25);
  *(float *)(plVar4 + 0xb) = (float)((double)fVar25 * dVar23);
  puVar5 = gensym("signal");
  outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da_00),CONCAT44(uVar22,fVar20),dVar23,
             CONCAT44(uVar24,local_80),auVar26._0_8_,CONCAT44(uVar27,local_58),param_7,param_8,
             (long)plVar4,(long)puVar5,extraout_RDX_10,param_12,param_13,param_14);
  puVar5 = gensym("signal");
  outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_01),CONCAT44(uVar22,fVar20),dVar23,
             CONCAT44(uVar24,local_80),auVar26._0_8_,CONCAT44(uVar27,local_58),param_7,param_8,
             (long)plVar4,(long)puVar5,extraout_RDX_11,param_12,param_13,param_14);
  *(float *)((long)plVar4 + 0x34) = fVar14;
  pfVar6 = getbytes(8);
  if (pfVar6 == (float *)0x0) {
    pfVar6 = (float *)0x0;
  }
  else {
    *pfVar6 = DAT_005d9038 - fVar14;
    pfVar6[1] = 0.0;
  }
  plVar4[0xc] = (long)pfVar6;
  pvVar7 = getbytes(0x20);
  param_5 = auVar26._0_8_;
  plVar4[0xe] = (long)pvVar7;
  uVar9 = extraout_RDX_12;
  fVar14 = extraout_XMM0_Da_02;
  uVar21 = extraout_XMM0_Db_01;
  dVar17 = (double)CONCAT44(uVar22,fVar20);
  if (pvVar7 == (void *)0x0) goto LAB_0056c9bc;
  fVar25 = *(float *)((long)plVar4 + 0x54);
  puVar8 = getbytes(0x10);
  uVar9 = extraout_RDX_13;
  fVar14 = extraout_XMM0_Da_03;
  uVar21 = extraout_XMM0_Db_02;
  if (puVar8 == (uint *)0x0) {
LAB_0056c1ec:
    puVar8 = (uint *)0x0;
  }
  else {
    uVar15 = (int)fVar25 + 1000;
    *puVar8 = uVar15;
    puVar8[1] = 0;
    pvVar7 = getbytes((long)(int)uVar15 << 2);
    *(void **)(puVar8 + 2) = pvVar7;
    uVar9 = extraout_RDX_14;
    fVar14 = extraout_XMM0_Da_04;
    uVar21 = extraout_XMM0_Db_03;
    if (pvVar7 == (void *)0x0) goto LAB_0056c1ec;
    if (-1000 < (int)fVar25) {
      memset(pvVar7,0,(ulong)uVar15 << 2);
      uVar9 = extraout_RDX_15;
      fVar14 = extraout_XMM0_Da_05;
      uVar21 = extraout_XMM0_Db_04;
    }
  }
  param_5 = auVar26._0_8_;
  *(uint **)plVar4[0xe] = puVar8;
  dVar17 = (double)CONCAT44(uVar22,fVar20);
  if (*(long *)plVar4[0xe] == 0) goto LAB_0056c9bc;
  fVar25 = *(float *)((long)plVar4 + 0x54);
  puVar8 = getbytes(0x10);
  uVar9 = extraout_RDX_16;
  fVar14 = extraout_XMM0_Da_06;
  uVar21 = extraout_XMM0_Db_05;
  if (puVar8 == (uint *)0x0) {
LAB_0056c25b:
    puVar8 = (uint *)0x0;
  }
  else {
    uVar15 = (int)fVar25 + 1000;
    *puVar8 = uVar15;
    puVar8[1] = 0;
    pvVar7 = getbytes((long)(int)uVar15 << 2);
    *(void **)(puVar8 + 2) = pvVar7;
    uVar9 = extraout_RDX_17;
    fVar14 = extraout_XMM0_Da_07;
    uVar21 = extraout_XMM0_Db_06;
    if (pvVar7 == (void *)0x0) goto LAB_0056c25b;
    if (-1000 < (int)fVar25) {
      memset(pvVar7,0,(ulong)uVar15 << 2);
      uVar9 = extraout_RDX_18;
      fVar14 = extraout_XMM0_Da_08;
      uVar21 = extraout_XMM0_Db_07;
    }
  }
  param_5 = auVar26._0_8_;
  *(uint **)(plVar4[0xe] + 8) = puVar8;
  dVar17 = (double)CONCAT44(uVar22,fVar20);
  if (*(long *)(plVar4[0xe] + 8) == 0) goto LAB_0056c9bc;
  fVar25 = *(float *)((long)plVar4 + 0x54);
  puVar8 = getbytes(0x10);
  uVar9 = extraout_RDX_19;
  fVar14 = extraout_XMM0_Da_09;
  uVar21 = extraout_XMM0_Db_08;
  if (puVar8 == (uint *)0x0) {
LAB_0056c2cc:
    puVar8 = (uint *)0x0;
  }
  else {
    uVar15 = (int)fVar25 + 1000;
    *puVar8 = uVar15;
    puVar8[1] = 0;
    pvVar7 = getbytes((long)(int)uVar15 << 2);
    *(void **)(puVar8 + 2) = pvVar7;
    uVar9 = extraout_RDX_20;
    fVar14 = extraout_XMM0_Da_10;
    uVar21 = extraout_XMM0_Db_09;
    if (pvVar7 == (void *)0x0) goto LAB_0056c2cc;
    if (-1000 < (int)fVar25) {
      memset(pvVar7,0,(ulong)uVar15 << 2);
      uVar9 = extraout_RDX_21;
      fVar14 = extraout_XMM0_Da_11;
      uVar21 = extraout_XMM0_Db_10;
    }
  }
  param_5 = auVar26._0_8_;
  *(uint **)(plVar4[0xe] + 0x10) = puVar8;
  dVar17 = (double)CONCAT44(uVar22,fVar20);
  if (*(long *)(plVar4[0xe] + 0x10) == 0) goto LAB_0056c9bc;
  fVar25 = *(float *)((long)plVar4 + 0x54);
  puVar8 = getbytes(0x10);
  uVar9 = extraout_RDX_22;
  fVar14 = extraout_XMM0_Da_12;
  uVar21 = extraout_XMM0_Db_11;
  if (puVar8 == (uint *)0x0) {
LAB_0056c33d:
    puVar8 = (uint *)0x0;
  }
  else {
    uVar15 = (int)fVar25 + 1000;
    *puVar8 = uVar15;
    puVar8[1] = 0;
    pvVar7 = getbytes((long)(int)uVar15 << 2);
    *(void **)(puVar8 + 2) = pvVar7;
    uVar9 = extraout_RDX_23;
    fVar14 = extraout_XMM0_Da_13;
    uVar21 = extraout_XMM0_Db_12;
    if (pvVar7 == (void *)0x0) goto LAB_0056c33d;
    if (-1000 < (int)fVar25) {
      memset(pvVar7,0,(ulong)uVar15 << 2);
      uVar9 = extraout_RDX_24;
      fVar14 = extraout_XMM0_Da_14;
      uVar21 = extraout_XMM0_Db_13;
    }
  }
  param_5 = auVar26._0_8_;
  *(uint **)(plVar4[0xe] + 0x18) = puVar8;
  dVar17 = (double)CONCAT44(uVar22,fVar20);
  if (*(long *)(plVar4[0xe] + 0x18) != 0) {
    pvVar7 = getbytes(0x10);
    plVar4[0x10] = (long)pvVar7;
    pvVar7 = getbytes(0x10);
    param_5 = auVar26._0_8_;
    plVar4[0x11] = (long)pvVar7;
    uVar9 = extraout_RDX_25;
    fVar14 = extraout_XMM0_Da_15;
    uVar21 = extraout_XMM0_Db_14;
    dVar17 = (double)CONCAT44(uVar22,fVar20);
    if ((plVar4[0x10] != 0) && (dVar17 = (double)CONCAT44(uVar22,fVar20), pvVar7 != (void *)0x0)) {
      pvVar7 = getbytes(0x20);
      param_5 = auVar26._0_8_;
      plVar4[0xd] = (long)pvVar7;
      uVar9 = extraout_RDX_26;
      fVar14 = extraout_XMM0_Da_16;
      uVar21 = extraout_XMM0_Db_15;
      dVar17 = (double)CONCAT44(uVar22,fVar20);
      if (pvVar7 != (void *)0x0) {
        fVar14 = *(float *)(plVar4 + 0x12);
        pfVar6 = getbytes(8);
        param_5 = auVar26._0_8_;
        if (pfVar6 == (float *)0x0) {
          pfVar6 = (float *)0x0;
          fVar14 = extraout_XMM0_Da_17;
          uVar21 = extraout_XMM0_Db_16;
        }
        else {
          uVar21 = 0;
          *pfVar6 = fVar14;
          pfVar6[1] = 0.0;
        }
        param_12 = (undefined8 *)plVar4[0xd];
        *param_12 = pfVar6;
        uVar9 = extraout_RDX_27;
        dVar17 = (double)CONCAT44(uVar22,fVar20);
        if (*(long *)plVar4[0xd] != 0) {
          fVar14 = *(float *)(plVar4 + 0x12);
          pfVar6 = getbytes(8);
          param_5 = auVar26._0_8_;
          if (pfVar6 == (float *)0x0) {
            pfVar6 = (float *)0x0;
            fVar14 = extraout_XMM0_Da_18;
            uVar21 = extraout_XMM0_Db_17;
          }
          else {
            uVar21 = 0;
            *pfVar6 = fVar14;
            pfVar6[1] = 0.0;
          }
          param_12 = (undefined8 *)plVar4[0xd];
          param_12[1] = pfVar6;
          uVar9 = extraout_RDX_28;
          dVar17 = (double)CONCAT44(uVar22,fVar20);
          if (*(long *)(plVar4[0xd] + 8) != 0) {
            fVar14 = *(float *)(plVar4 + 0x12);
            pfVar6 = getbytes(8);
            param_5 = auVar26._0_8_;
            if (pfVar6 == (float *)0x0) {
              pfVar6 = (float *)0x0;
              fVar14 = extraout_XMM0_Da_19;
              uVar21 = extraout_XMM0_Db_18;
            }
            else {
              uVar21 = 0;
              *pfVar6 = fVar14;
              pfVar6[1] = 0.0;
            }
            param_12 = (undefined8 *)plVar4[0xd];
            param_12[2] = pfVar6;
            uVar9 = extraout_RDX_29;
            dVar17 = (double)CONCAT44(uVar22,fVar20);
            if (*(long *)(plVar4[0xd] + 0x10) != 0) {
              fVar14 = *(float *)(plVar4 + 0x12);
              pfVar6 = getbytes(8);
              param_5 = auVar26._0_8_;
              if (pfVar6 == (float *)0x0) {
                pfVar6 = (float *)0x0;
                fVar14 = extraout_XMM0_Da_20;
                uVar21 = extraout_XMM0_Db_19;
              }
              else {
                uVar21 = 0;
                *pfVar6 = fVar14;
                pfVar6[1] = 0.0;
              }
              param_12 = (undefined8 *)plVar4[0xd];
              param_12[3] = pfVar6;
              uVar9 = extraout_RDX_30;
              dVar17 = (double)CONCAT44(uVar22,fVar20);
              if (*(long *)(plVar4[0xd] + 0x18) != 0) {
                dVar17 = (double)(int)((float)(int)plVar4[6] * *(float *)(plVar4 + 10));
                dVar18 = exp2(DAT_0065b298 / dVar17);
                plVar4[0x1a] = (long)dVar18;
                puVar8 = (uint *)plVar4[0x10];
                piVar1 = (int *)plVar4[0x11];
                fVar14 = (float)dVar18;
                *piVar1 = (int)*(float *)(plVar4 + 0xb);
                uVar15 = __powisf2();
                *puVar8 = uVar15 ^ _DAT_006524b0;
                piVar1[1] = (int)((double)*(float *)(plVar4 + 0xb) * _DAT_0065b2a0);
                uVar15 = __powisf2(fVar14);
                puVar8[1] = uVar15 ^ _DAT_006524b0;
                piVar1[2] = (int)((double)*(float *)(plVar4 + 0xb) * _DAT_0065b2a8);
                uVar15 = __powisf2(fVar14);
                puVar8[2] = uVar15 ^ _DAT_006524b0;
                piVar1[3] = (int)((double)*(float *)(plVar4 + 0xb) * _DAT_0065b2b0);
                uVar15 = __powisf2(fVar14);
                puVar8[3] = uVar15 ^ _DAT_006524b0;
                pvVar7 = getbytes(0x10);
                plVar4[0x17] = (long)pvVar7;
                pvVar7 = getbytes(0x10);
                plVar4[0x18] = (long)pvVar7;
                pvVar7 = getbytes(0x10);
                param_5 = auVar26._0_8_;
                plVar4[0x19] = (long)pvVar7;
                uVar9 = extraout_RDX_31;
                fVar14 = extraout_XMM0_Da_21;
                uVar21 = extraout_XMM0_Db_20;
                if (((plVar4[0x17] != 0) && (plVar4[0x18] != 0)) && (pvVar7 != (void *)0x0)) {
                  iVar10 = *(int *)(plVar4[0x11] + 0xc);
                  pvVar7 = getbytes(0x20);
                  param_5 = auVar26._0_8_;
                  plVar4[0x13] = (long)pvVar7;
                  uVar9 = extraout_RDX_32;
                  fVar14 = extraout_XMM0_Da_22;
                  uVar21 = extraout_XMM0_Db_21;
                  if (pvVar7 != (void *)0x0) {
                    fVar20 = DAT_0065b208 * (float)iVar10;
                    uVar22 = 0;
                    fVar14 = DAT_0065b20c * local_84;
                    fVar16 = DAT_0065b210 * local_84;
                    fVar25 = (float)iVar10 * DAT_0065b214;
                    dVar23 = (double)(ulong)(uint)fVar25;
                    uVar15 = (uint)fVar25;
                    fVar25 = local_84;
                    puVar8 = diffuser_make(DAT_0065b218,uVar15);
                    *(uint **)plVar4[0x13] = puVar8;
                    puVar8 = diffuser_make(DAT_0065b218,(int)((float)((int)fVar14 + 0x9f) * fVar20))
                    ;
                    *(uint **)(plVar4[0x13] + 8) = puVar8;
                    puVar8 = diffuser_make(DAT_0065b21c,
                                           (int)((float)(((int)fVar16 - (int)fVar14) + 0x232) *
                                                fVar20));
                    *(uint **)(plVar4[0x13] + 0x10) = puVar8;
                    puVar8 = diffuser_make(DAT_0065b21c,(int)((float)(0x19a - (int)fVar16) * fVar20)
                                          );
                    param_5 = auVar26._0_8_;
                    param_12 = (undefined8 *)plVar4[0x13];
                    param_12[3] = puVar8;
                    plVar2 = (long *)plVar4[0x13];
                    uVar9 = extraout_RDX_33;
                    fVar14 = extraout_XMM0_Da_23;
                    uVar21 = extraout_XMM0_Db_22;
                    dVar17 = (double)CONCAT44(uVar22,fVar25);
                    if (((*plVar2 != 0) &&
                        (dVar17 = (double)CONCAT44(uVar22,fVar25), plVar2[1] != 0)) &&
                       ((dVar17 = (double)CONCAT44(uVar22,fVar25), plVar2[2] != 0 &&
                        (dVar17 = (double)CONCAT44(uVar22,fVar25), plVar2[3] != 0)))) {
                      pvVar7 = getbytes(0x20);
                      param_5 = auVar26._0_8_;
                      plVar4[0x14] = (long)pvVar7;
                      uVar9 = extraout_RDX_34;
                      fVar14 = extraout_XMM0_Da_24;
                      uVar21 = extraout_XMM0_Db_23;
                      dVar17 = (double)CONCAT44(uVar22,fVar25);
                      if (pvVar7 != (void *)0x0) {
                        uVar22 = 0;
                        fVar14 = DAT_0065b220 * local_84;
                        local_84 = local_84 * _DAT_0065b224;
                        iVar10 = (int)local_84;
                        puVar8 = diffuser_make(DAT_0065b218,uVar15);
                        *(uint **)plVar4[0x14] = puVar8;
                        puVar8 = diffuser_make(DAT_0065b218,
                                               (int)((float)((int)fVar14 + 0x9f) * fVar20));
                        *(uint **)(plVar4[0x14] + 8) = puVar8;
                        puVar8 = diffuser_make(DAT_0065b21c,
                                               (int)((float)((iVar10 - (int)fVar14) + 0x232) *
                                                    fVar20));
                        *(uint **)(plVar4[0x14] + 0x10) = puVar8;
                        puVar8 = diffuser_make(DAT_0065b21c,(int)((float)(0x19a - iVar10) * fVar20))
                        ;
                        param_5 = auVar26._0_8_;
                        param_12 = (undefined8 *)plVar4[0x14];
                        param_12[3] = puVar8;
                        plVar2 = (long *)plVar4[0x14];
                        uVar9 = extraout_RDX_35;
                        fVar14 = extraout_XMM0_Da_25;
                        uVar21 = extraout_XMM0_Db_24;
                        dVar17 = (double)CONCAT44(uVar22,local_84);
                        if (((*plVar2 != 0) &&
                            (dVar17 = (double)CONCAT44(uVar22,local_84), plVar2[1] != 0)) &&
                           ((dVar17 = (double)CONCAT44(uVar22,local_84), plVar2[2] != 0 &&
                            (dVar17 = (double)CONCAT44(uVar22,local_84), plVar2[3] != 0)))) {
                          puVar8 = fixeddelay_make(44000);
                          plVar4[0xf] = (long)puVar8;
                          pvVar7 = getbytes(0x10);
                          plVar4[0x15] = (long)pvVar7;
                          pfVar6 = getbytes(0x10);
                          param_5 = auVar26._0_8_;
                          plVar4[0x16] = (long)pfVar6;
                          dVar18 = DAT_006544b0;
                          uVar9 = extraout_RDX_36;
                          fVar14 = extraout_XMM0_Da_26;
                          uVar21 = extraout_XMM0_Db_25;
                          dVar17 = (double)CONCAT44(uVar22,local_84);
                          if (((plVar4[0xf] != 0) &&
                              (piVar1 = (int *)plVar4[0x15],
                              dVar17 = (double)CONCAT44(uVar22,local_84), piVar1 != (int *)0x0)) &&
                             (dVar17 = (double)CONCAT44(uVar22,local_84), pfVar6 != (float *)0x0)) {
                            dVar23 = (double)*(float *)(plVar4 + 0xb);
                            iVar10 = (int)(DAT_0065b2c0 * dVar23 + DAT_006544b0);
                            dVar17 = dVar23 * _DAT_0065b2c8;
                            *piVar1 = (int)(DAT_0065b2b8 * dVar23 + DAT_006544b0);
                            iVar3 = (int)(dVar17 + dVar18);
                            piVar1[1] = iVar10;
                            piVar1[2] = iVar3;
                            piVar1[3] = 5;
                            dVar23 = (double)plVar4[0x1a];
                            dVar17 = (double)__powidf2();
                            dVar18 = (double)__powidf2(SUB84(dVar23,0),iVar10);
                            dVar19 = (double)__powidf2(SUB84(dVar23,0),iVar3);
                            *pfVar6 = (float)dVar17;
                            pfVar6[1] = (float)dVar18;
                            pfVar6[2] = (float)dVar19;
                            pfVar6[3] = (float)(dVar23 * dVar23 * dVar23 * dVar23 * dVar23);
                            return plVar4;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0056c9bc:
  param_6 = CONCAT44(uVar27,local_58);
  pcVar11 = "[giga.rev~]: out of memory";
  fVar16 = local_80;
LAB_0056c9c3:
  pd_error(CONCAT44(uVar21,fVar14),dVar17,dVar23,CONCAT44(uVar24,fVar16),param_5,param_6,param_7,
           param_8,(long)plVar4,pcVar11,uVar9,param_12,param_13,param_14);
  return (long *)0x0;
}


