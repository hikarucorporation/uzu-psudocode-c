// Function : plot_vis
// Namespace: 
// Entry    : 00523160
// Prototype: undefined plot_vis(undefined8 param_1, undefined8 param_2, undefined8 param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, long param_11, double param_12, int param_13)
// Body     : 00523160 - 005246c0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void plot_vis(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
             ulong param_6,ulong param_7,undefined8 param_8,long param_9,long param_10,long param_11
             ,double param_12,int param_13)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 extraout_var;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 extraout_RDX_01;
  ulong extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 uVar10;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  int iVar11;
  long *plVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  ulong uVar19;
  undefined1 uVar20;
  ulong uVar21;
  long lVar22;
  void *pvVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulong extraout_XMM0_Qa;
  ulong uVar29;
  ulong uVar30;
  undefined8 extraout_XMM0_Qa_00;
  ulong uVar31;
  undefined8 extraout_XMM0_Qa_01;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  ulong uVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  undefined1 auVar44 [16];
  double local_41f0;
  float local_41dc;
  ulong local_41d8;
  float local_41d0;
  int local_41cc;
  double local_41c8;
  long local_41c0;
  long local_41b8;
  ulong local_41b0;
  float local_41a8;
  float local_41a4;
  char *local_41a0;
  double local_4198;
  ulong local_4190;
  float local_4188;
  float local_4184;
  ulong local_4180;
  double local_4178;
  void *local_4170;
  int local_4164;
  undefined8 local_4160;
  char *local_4158;
  float local_4150;
  float local_414c;
  uint local_4148;
  uint local_4144;
  uint local_4140;
  uint local_413c;
  undefined8 local_4138;
  long local_4130;
  char *local_4128;
  char *local_4120;
  char *local_4118;
  double local_4110;
  long local_4108;
  long local_4100;
  char *local_40f8;
  uint *local_40f0;
  undefined8 *local_40e8;
  undefined4 local_40dc;
  char local_40d8 [80];
  char local_4088 [80];
  float local_4038 [4];
  float local_4028;
  float local_4020;
  
  fVar32 = (float)param_2;
  local_41d8 = CONCAT44(local_41d8._4_4_,(int)param_1);
  local_4128 = local_4088;
  local_4120 = local_40d8;
  local_4118 = "array";
  local_41b8 = param_10;
  local_4164 = param_13;
  uVar3 = plot_readownertemplate
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_11,(long)param_12,&local_40e8,(char *)&local_40f0,&local_4184,&local_4188
                     ,&local_41a4,&local_41dc,&local_4148,&local_414c,&local_4150,&local_40dc,
                     (long *)&local_40f8,&local_4100,&local_4108);
  if ((int)uVar3 != 0) {
    return;
  }
  uVar24 = extraout_XMM0_Qa;
  if (local_4164 != 0) {
    uVar24 = (ulong)(uint)local_414c;
    param_2 = 0;
    if (local_414c == 0.0) {
      return;
    }
  }
  uVar3 = array_getfields(uVar24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_40e8,
                          &local_4130,&local_4138,&local_41cc,local_40f8,local_4100,local_4108,
                          &local_4144,&local_413c,&local_4140);
  if ((int)uVar3 != 0) {
    return;
  }
  local_41a0 = local_40f8;
  local_41c0 = local_4100;
  local_4190 = (ulong)*local_40f0;
  pvVar23 = *(void **)(local_40f0 + 2);
  sprintf(local_4088,"plot%p",(void *)param_11);
  uVar24 = (ulong)local_4144;
  local_4180 = (ulong)local_413c;
  pcVar14 = (char *)(ulong)local_4140;
  local_41b0 = uVar24;
  local_4170 = pvVar23;
  sprintf(local_40d8,"plot%p_array%p_onset%+d%+d%+d",(void *)param_11,pvVar23,local_4140,local_4144,
          local_413c);
  lVar17 = local_41b8;
  if ((*(byte *)(local_41b8 + 0xe9) & 1) != 0) {
    iVar2 = glist_getzoom(local_41b8);
    local_4184 = (float)iVar2 * local_4184;
  }
  uVar16 = local_4190;
  iVar2 = (int)local_4190;
  if (local_4164 == 0) {
    if (((local_4150 != 0.0) && (0 < iVar2)) &&
       (plVar12 = *(long **)(local_4130 + 0x30), plVar12 != (long *)0x0)) {
      local_41d8 = (ulong)local_41cc;
      uVar16 = 0;
      while( true ) {
        if (plVar12 != (long *)0x0) {
          pvVar23 = (void *)(uVar16 * local_41d8 + (long)local_4170);
          do {
            lVar22 = pd_getparentwidget(plVar12);
            if (lVar22 != 0) {
              param_2 = 0;
              (**(code **)(lVar22 + 0x20))(0,plVar12,lVar17,pvVar23,local_4138,0);
            }
            plVar12 = (long *)plVar12[1];
          } while (plVar12 != (long *)0x0);
        }
        uVar16 = uVar16 + 1;
        if (uVar16 == local_4190) break;
        plVar12 = *(long **)(local_4130 + 0x30);
      }
    }
    uVar3 = glist_getcanvas(lVar17);
    pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs",
                uVar3,"delete",local_4088,uVar24,(char)param_11);
    return;
  }
  local_4178 = (double)CONCAT44(local_4178._4_4_,local_4148);
  uVar7 = 1;
  fVar25 = (float)fielddesc_getfloat((ulong)local_4148,param_2,param_3,param_4,param_5,param_6,
                                     param_7,param_8,(char *)(param_9 + 0x38),(long)param_12,
                                     param_11,1,pcVar14,uVar24);
  uVar15 = (uint)fVar25;
  if (local_4178._0_4_ == 0.0) {
    iVar2 = 0;
    uVar16 = (ulong)uVar15;
    if ((int)uVar15 < 0) {
      uVar16 = 0;
    }
    uVar15 = (uint)(uVar16 * 0x51eb851f >> 0x20) & 0xffffffe0;
    iVar11 = (int)(uVar16 / 10);
    uVar9 = (int)uVar16 + iVar11 * -10;
    uVar7 = (ulong)uVar9;
    iVar11 = iVar11 + (int)((uVar16 / 10) / 10) * -10;
    pcVar14 = (char *)0x100;
    if ((int)uVar16 - 900U < 100) {
      uVar15 = 0x100;
    }
    if (0xfe < uVar15) {
      uVar15 = 0xff;
    }
    uVar5 = iVar11 * 0x20;
    if (iVar11 == 9) {
      uVar5 = 0x100;
    }
    if (0xfe < uVar5) {
      uVar5 = 0xff;
    }
    uVar6 = uVar9 * 0x20;
    if (uVar9 == 9) {
      uVar6 = 0x100;
    }
    pcVar8 = (char *)(ulong)uVar6;
    if (0xfe < uVar6) {
      pcVar8 = (char *)0xff;
    }
    uVar16 = local_4190;
    if (0 < (int)local_4190) {
      pcVar18 = (char *)(ulong)(uVar5 << 8 | uVar15 << 0x10 | (uint)pcVar8);
      local_41d0 = local_4188 + (float)local_41d8;
      local_41f0 = (double)local_41d0;
      local_4110 = (double)local_41a4;
      local_4198 = (double)(long)local_41cc;
      local_41a8 = local_41dc;
      local_41c8 = (double)(ulong)((int)local_4190 - 1);
      local_4160 = CONCAT44(local_4160._4_4_,local_4184);
      uVar31 = (ulong)DAT_00652e08;
      uVar21 = 0;
      pcVar13 = local_41a0;
      pvVar23 = local_4170;
      fVar25 = DAT_00652e0c;
      local_4158 = pcVar18;
      do {
        lVar17 = local_41b8;
        if ((int)local_41b0 < 0) {
          uVar30 = CONCAT44((int)((ulong)local_41f0 >> 0x20),(float)local_41f0);
          fVar27 = *(float *)(pcVar13 + 0x10);
          uVar16 = uVar31;
          fVar40 = fVar25;
          if (*(float *)(pcVar13 + 0x14) != fVar27) {
            fVar28 = *(float *)(pcVar13 + 0x18);
            fVar40 = *(float *)(pcVar13 + 0x1c);
            param_6 = (ulong)(uint)(fVar40 - fVar28);
            fVar39 = (((float)local_41f0 - fVar27) * (fVar40 - fVar28)) /
                     (*(float *)(pcVar13 + 0x14) - fVar27) + fVar28;
            fVar26 = fVar28;
            if (fVar40 <= fVar28) {
              fVar26 = fVar40;
            }
            if (fVar26 <= fVar39) {
              fVar26 = fVar39;
            }
            if (fVar28 <= fVar40) {
              fVar28 = fVar40;
            }
            if (fVar26 <= fVar28) {
              fVar28 = fVar26;
            }
            uVar30 = (ulong)(uint)fVar28;
            uVar16 = uVar30;
          }
          uVar38 = 0;
          local_41f0 = local_41f0 + local_4110;
          fVar26 = glist_xtopixels(uVar30,local_41f0,(ulong)(uint)fVar27,uVar16,(ulong)(uint)fVar40,
                                   param_6,param_7,param_8,local_41b8,pcVar14,uVar7,pcVar8,pcVar18,
                                   uVar24);
          uVar16 = CONCAT44((int)((ulong)local_41f0 >> 0x20),(float)local_41f0);
          fVar27 = *(float *)(pcVar13 + 0x10);
          fVar28 = *(float *)(pcVar13 + 0x14);
          if (fVar28 != fVar27) {
            fVar40 = *(float *)(pcVar13 + 0x18);
            uVar38 = 0;
            fVar39 = *(float *)(pcVar13 + 0x1c);
            param_6 = (ulong)(uint)fVar39;
            param_7 = (ulong)(uint)(fVar39 - fVar40);
            fVar33 = (((float)local_41f0 - fVar27) * (fVar39 - fVar40)) / (fVar28 - fVar27) + fVar40
            ;
            fVar28 = fVar40;
            if (fVar39 <= fVar40) {
              fVar28 = fVar39;
            }
            if (fVar28 <= fVar33) {
              fVar28 = fVar33;
            }
            if (fVar40 <= fVar39) {
              fVar40 = fVar39;
            }
            if (fVar28 <= fVar40) {
              fVar40 = fVar28;
            }
            uVar16 = (ulong)(uint)fVar40;
          }
          uVar30 = (ulong)(uint)fVar28;
          uVar15 = (uint)fVar26;
          fVar27 = glist_xtopixels(uVar16,uVar16,uVar30,(ulong)(uint)fVar27,CONCAT44(uVar38,fVar40),
                                   param_6,param_7,param_8,lVar17,pcVar14,extraout_RDX_01,pcVar8,
                                   pcVar18,uVar24);
          uVar9 = (uint)fVar27;
          uVar7 = extraout_RDX_02;
          uVar16 = local_4190;
        }
        else {
          fVar26 = *(float *)((long)pvVar23 + local_41b0) + local_41d0;
          uVar29 = (ulong)(uint)fVar26;
          fVar27 = *(float *)(pcVar13 + 0x10);
          uVar30 = (ulong)(uint)fVar27;
          fVar40 = *(float *)(pcVar13 + 0x14);
          uVar19 = (ulong)(uint)fVar40;
          uVar37 = uVar31;
          fVar28 = fVar25;
          if (fVar40 != fVar27) {
            fVar39 = *(float *)(pcVar13 + 0x18);
            uVar29 = (ulong)(uint)fVar39;
            fVar28 = *(float *)(pcVar13 + 0x1c);
            param_6 = (ulong)(uint)(fVar28 - fVar39);
            fVar27 = ((fVar26 - fVar27) * (fVar28 - fVar39)) / (fVar40 - fVar27) + fVar39;
            uVar19 = uVar29;
            if (fVar28 <= fVar39) {
              uVar19 = (ulong)(uint)fVar28;
            }
            if ((float)uVar19 <= fVar27) {
              uVar19 = (ulong)(uint)fVar27;
            }
            if (fVar39 <= fVar28) {
              uVar29 = (ulong)(uint)fVar28;
            }
            if ((float)uVar19 <= (float)uVar29) {
              uVar29 = uVar19;
            }
            uVar37 = uVar29;
          }
          fVar27 = glist_xtopixels(uVar29,uVar19,uVar30,uVar37,(ulong)(uint)fVar28,param_6,param_7,
                                   param_8,local_41b8,pcVar14,uVar7,pcVar8,pcVar18,uVar24);
          uVar15 = (uint)fVar27;
          uVar9 = uVar15 + 2;
          uVar7 = extraout_RDX_00;
        }
        uVar19 = (ulong)uVar15;
        fVar27 = 0.0;
        uVar38 = 0;
        if (-1 < (int)local_4180) {
          fVar27 = *(float *)((long)pvVar23 + local_4180) + local_41a8;
        }
        dVar34 = (double)fVar27;
        if (dVar34 <= DAT_006553f8) {
          fVar27 = 0.0;
          if (dVar34 < _DAT_00655400) goto LAB_005237f3;
LAB_00523811:
          if (0.0 <= fVar25) {
            fVar25 = 0.0;
          }
          if ((float)uVar31 <= 0.0) {
            uVar31 = 0;
          }
          if (local_41c8 == (double)uVar21) goto LAB_0052382c;
LAB_00523823:
          if (uVar9 != uVar15) goto LAB_0052382c;
        }
        else {
          if (_DAT_00655400 <= dVar34) goto LAB_00523811;
LAB_005237f3:
          if (fVar27 <= fVar25) {
            fVar25 = fVar27;
          }
          if ((float)uVar31 <= fVar27) {
            uVar31 = (ulong)(uint)fVar27;
          }
          if (local_41c8 != (double)uVar21) goto LAB_00523823;
LAB_0052382c:
          uVar16 = uVar31;
          fVar27 = fVar25;
          auVar44 = glist_getcanvas(local_41b8);
          lVar17 = local_41c0;
          fVar40 = *(float *)(local_41c0 + 0x10);
          if (*(float *)(local_41c0 + 0x14) != fVar40) {
            fVar26 = *(float *)(local_41c0 + 0x18);
            fVar28 = *(float *)(local_41c0 + 0x1c);
            uVar16 = (ulong)(uint)fVar28;
            uVar38 = 0;
            fVar27 = fVar28 - fVar26;
            fVar25 = ((fVar25 - fVar40) * fVar27) / (*(float *)(local_41c0 + 0x14) - fVar40) +
                     fVar26;
            param_6 = (ulong)(uint)fVar25;
            fVar39 = fVar26;
            if (fVar28 <= fVar26) {
              fVar39 = fVar28;
            }
            if (fVar39 <= fVar25) {
              fVar39 = fVar25;
            }
            if (fVar26 <= fVar28) {
              fVar26 = fVar28;
            }
            fVar25 = fVar26;
            if (fVar39 <= fVar26) {
              fVar25 = fVar39;
            }
            uVar30 = (ulong)(uint)fVar25;
          }
          fVar28 = glist_ytopixels((ulong)(uint)(fVar25 + fVar32),(ulong)(uint)fVar40,uVar30,uVar16,
                                   CONCAT44(uVar38,fVar27),param_6,param_7,param_8,local_41b8,
                                   pcVar14,auVar44._8_8_,pcVar8,pcVar18,uVar24);
          fVar25 = *(float *)(lVar17 + 0x10);
          uVar7 = (ulong)(uint)fVar25;
          fVar40 = *(float *)(lVar17 + 0x14);
          uVar16 = (ulong)(uint)fVar40;
          if (fVar40 == fVar25) {
            uVar30 = uVar31;
          }
          else {
            fVar26 = *(float *)(lVar17 + 0x18);
            uVar30 = (ulong)(uint)fVar26;
            fVar27 = *(float *)(lVar17 + 0x1c);
            uVar38 = 0;
            fVar39 = fVar27 - fVar26;
            fVar25 = (((float)uVar31 - fVar25) * fVar39) / (fVar40 - fVar25) + fVar26;
            uVar16 = uVar30;
            if (fVar27 <= fVar26) {
              uVar16 = (ulong)(uint)fVar27;
            }
            if ((float)uVar16 <= fVar25) {
              uVar16 = (ulong)(uint)fVar25;
            }
            if (fVar26 <= fVar27) {
              uVar30 = (ulong)(uint)fVar27;
            }
            param_6 = (ulong)(uint)fVar39;
            param_7 = (ulong)(uint)fVar25;
            if ((float)uVar16 <= (float)uVar30) {
              uVar30 = uVar16;
              param_6 = (ulong)(uint)fVar39;
              param_7 = (ulong)(uint)fVar25;
            }
          }
          uVar31 = (ulong)(uint)((float)uVar30 + fVar32);
          local_4178 = (double)(ulong)uVar9;
          glist_ytopixels(uVar31,uVar16,uVar7,uVar31,CONCAT44(uVar38,fVar27),param_6,param_7,param_8
                          ,local_41b8,pcVar14,extraout_RDX_03,pcVar8,pcVar18,uVar24);
          pcVar14 = "crr iiii rk rf rS";
          pcVar8 = "create";
          pcVar18 = "rectangle";
          pdgui_vmess(0,uVar16,uVar7,uVar31,CONCAT44(uVar38,fVar27),param_6,param_7,param_8,0,
                      "crr iiii rk rf rS",auVar44._0_8_,"create","rectangle",uVar19,
                      (char)(int)fVar28);
          uVar16 = local_4190;
          if (1999 < iVar2) break;
          iVar2 = iVar2 + 1;
          uVar31 = (ulong)DAT_00652e08;
          uVar7 = extraout_RDX;
          pcVar13 = local_41a0;
          uVar24 = uVar19;
          fVar25 = DAT_00652e0c;
        }
        uVar21 = uVar21 + 1;
        pvVar23 = (void *)((long)pvVar23 + (long)local_4198);
      } while (uVar16 != uVar21);
    }
    goto LAB_005243ed;
  }
  uVar15 = numbertocolor(uVar15);
  fVar25 = local_4188;
  uVar3 = CONCAT44(extraout_var,uVar15);
  if ((int)local_4140 < 0) {
    local_41d0 = local_4184;
    if ((local_4184 <= 0.0) || (iVar2 < 1)) goto LAB_005243ed;
    local_41f0 = (double)local_4188;
    local_4198 = (double)local_41a4;
    lVar22 = (long)local_41cc;
    local_41c8 = (double)CONCAT44(local_41c8._4_4_,local_41dc + fVar32);
    uVar15 = 0;
    uVar10 = extraout_RDX_04;
    pvVar23 = local_4170;
    pcVar8 = local_41a0;
    iVar2 = -1;
    local_4160 = uVar3;
    do {
      if ((int)local_41b0 < 0) {
        fVar27 = (float)local_41f0;
        local_41f0 = local_41f0 + local_4198;
      }
      else {
        fVar27 = *(float *)((long)pvVar23 + local_41b0) + fVar25;
      }
      dVar34 = (double)(ulong)(uint)fVar27;
      fVar40 = 0.0;
      if (-1 < (int)local_4180) {
        fVar40 = *(float *)((long)pvVar23 + local_4180);
      }
      dVar35 = (double)fVar40;
      if (dVar35 <= DAT_006553f8) {
        fVar40 = 0.0;
      }
      if (_DAT_00655400 <= dVar35) {
        fVar40 = 0.0;
      }
      uVar7 = (ulong)(uint)fVar40;
      fVar28 = *(float *)(pcVar8 + 0x10);
      dVar36 = (double)(ulong)(uint)fVar28;
      fVar26 = *(float *)(pcVar8 + 0x14);
      dVar35 = (double)(ulong)(uint)fVar26;
      if (fVar26 != fVar28) {
        fVar39 = *(float *)(pcVar8 + 0x18);
        dVar34 = (double)(ulong)(uint)fVar39;
        fVar33 = *(float *)(pcVar8 + 0x1c);
        param_5 = (ulong)(uint)fVar33;
        param_6 = (ulong)(uint)(fVar33 - fVar39);
        fVar27 = ((fVar27 - fVar28) * (fVar33 - fVar39)) / (fVar26 - fVar28) + fVar39;
        dVar35 = dVar34;
        if (fVar33 <= fVar39) {
          dVar35 = (double)(ulong)(uint)fVar33;
        }
        if (SUB84(dVar35,0) <= fVar27) {
          dVar35 = (double)(ulong)(uint)fVar27;
        }
        if (fVar39 <= fVar33) {
          dVar34 = (double)(ulong)(uint)fVar33;
        }
        if (SUB84(dVar35,0) <= SUB84(dVar34,0)) {
          dVar34 = dVar35;
        }
        param_4 = (ulong)dVar34;
      }
      uVar31 = local_4180;
      fVar27 = glist_xtopixels((ulong)(uint)(SUB84(dVar34,0) + (float)local_41d8),dVar35,dVar36,
                               param_4,param_5,param_6,param_7,param_8,local_41b8,param_12,uVar10,
                               local_4180,pcVar14,uVar24);
      iVar11 = (int)((double)fVar27 + DAT_005db338);
      if (((int)local_41b0 < 0) && (iVar2 == iVar11)) {
        uVar10 = extraout_RDX_06;
      }
      else {
        local_4038[(long)(int)(uVar15 * 2) * 2] = (float)iVar11;
        fVar27 = *(float *)(local_41c0 + 0x10);
        dVar36 = (double)(ulong)(uint)fVar27;
        fVar28 = *(float *)(local_41c0 + 0x14);
        dVar35 = (double)(ulong)(uint)fVar28;
        uVar38 = 0;
        fVar26 = fVar40;
        if (fVar28 != fVar27) {
          fVar26 = *(float *)(local_41c0 + 0x18);
          fVar39 = *(float *)(local_41c0 + 0x1c);
          param_4 = (ulong)(uint)fVar39;
          fVar33 = fVar39 - fVar26;
          fVar40 = ((fVar40 - fVar27) * fVar33) / (fVar28 - fVar27) + fVar26;
          dVar35 = (double)(ulong)(uint)fVar26;
          if (fVar39 <= fVar26) {
            dVar35 = (double)param_4;
          }
          if (SUB84(dVar35,0) <= fVar40) {
            dVar35 = (double)(ulong)(uint)fVar40;
          }
          if (fVar26 <= fVar39) {
            fVar26 = fVar39;
          }
          param_5 = (ulong)(uint)fVar33;
          if (SUB84(dVar35,0) <= fVar26) {
            fVar26 = SUB84(dVar35,0);
            param_5 = (ulong)(uint)fVar33;
          }
        }
        fVar27 = glist_ytopixels((ulong)(uint)(fVar26 + local_41c8._0_4_),dVar35,dVar36,param_4,
                                 param_5,(ulong)(uint)fVar40,param_7,param_8,local_41b8,param_12,
                                 extraout_RDX_06,uVar31,pcVar14,uVar24);
        param_6 = CONCAT44(uVar38,fVar40);
        local_4038[(long)(int)(uVar15 * 2 | 1) * 2] = fVar27;
        uVar15 = uVar15 + 1;
        uVar10 = extraout_RDX_07;
        pcVar8 = local_41a0;
      }
      lVar17 = local_41b8;
      if ((uVar15 & 0x7ffffc00) != 0) goto LAB_00524623;
      pvVar23 = (void *)((long)pvVar23 + lVar22);
      uVar16 = uVar16 - 1;
      iVar2 = iVar11;
    } while (uVar16 != 0);
    uVar16 = local_4190;
    if (uVar15 == 0) goto LAB_005243ed;
    if (uVar15 == 1) {
      local_4028 = (float)(iVar11 + 10);
      fVar25 = local_41dc + fVar32;
      uVar16 = local_4180;
      uVar7 = fielddesc_cvttocoord(uVar7,local_41c0);
      local_4020 = glist_ytopixels(CONCAT44((int)(uVar7 >> 0x20),(float)uVar7 + fVar25),dVar35,
                                   dVar36,param_4,param_5,param_6,param_7,param_8,lVar17,param_12,
                                   extraout_RDX_08,uVar16,pcVar14,uVar24);
      uVar15 = 2;
    }
LAB_00524623:
    uVar3 = glist_getcanvas(lVar17);
    dVar34 = (double)((ulong)local_4178 & 0xffffffff);
    pdgui_vmess((double)local_41d0,dVar34,dVar36,param_4,param_5,param_6,param_7,param_8,0,
                "crr iiii rf rk ri rS",uVar3,"create","line",0,0);
  }
  else {
    if (iVar2 < 1) {
      fVar25 = 0.0;
      iVar11 = 0;
      uVar16 = 0;
      iVar2 = 0;
      local_4160 = uVar3;
LAB_00524216:
      lVar22 = local_41c0;
      local_41a0 = (char *)CONCAT44(local_41a0._4_4_,(float)(iVar11 + 10));
      local_4038[(long)(iVar2 * 2) * 2] = (float)(iVar11 + 10);
      fVar40 = local_41dc + fVar32;
      dVar36 = (double)(ulong)(uint)fVar40;
      uVar31 = fielddesc_cvttocoord(uVar16,local_41c0);
      local_41c8 = (double)CONCAT44(local_41c8._4_4_,(float)uVar31 + fVar40);
      uVar31 = fielddesc_cvttocoord((ulong)(uint)fVar25,local_4108);
      dVar34 = (double)(ulong)(uint)(local_41c8._0_4_ - (float)uVar31);
      fVar27 = glist_ytopixels(dVar34,dVar34,dVar36,param_4,param_5,param_6,param_7,param_8,lVar17,
                               param_12,extraout_RDX_10,uVar7,pcVar14,uVar24);
      local_4038[(long)(iVar2 * 2 + 1) * 2] = fVar27;
      local_4038[(long)(iVar2 * 2 + 2) * 2] = local_41a0._0_4_;
      uVar16 = fielddesc_cvttocoord(uVar16,lVar22);
      uVar31 = fielddesc_cvttocoord((ulong)(uint)fVar25,local_4108);
      fVar25 = glist_ytopixels(CONCAT44((int)(uVar31 >> 0x20),(float)uVar31 + (float)uVar16 + fVar40
                                       ),dVar34,dVar36,param_4,param_5,param_6,param_7,param_8,
                               lVar17,param_12,extraout_RDX_11,uVar7,pcVar14,uVar24);
      local_4038[(long)(iVar2 * 2 + 3) * 2] = fVar25;
      uVar31 = (ulong)(iVar2 + 2);
    }
    else {
      local_41d0 = local_4188;
      local_41c8 = (double)local_4188;
      local_4158 = (char *)(double)local_41a4;
      local_4198 = (double)(long)local_41cc;
      local_41a8 = local_41dc + fVar32;
      uVar31 = 0;
      pvVar23 = local_4170;
      iVar2 = -1;
      local_4160 = uVar3;
      do {
        if ((int)local_41b0 < 0) {
          fVar27 = (float)local_41c8;
          local_41c8 = local_41c8 + (double)local_4158;
        }
        else {
          fVar27 = *(float *)((long)pvVar23 + local_41b0) + local_41d0;
        }
        dVar35 = (double)(ulong)(uint)fVar27;
        fVar40 = 0.0;
        if (-1 < (int)local_4180) {
          fVar40 = *(float *)((long)pvVar23 + local_4180);
        }
        dVar34 = (double)fVar40;
        if (dVar34 <= DAT_006553f8) {
          fVar40 = 0.0;
        }
        if (_DAT_00655400 <= dVar34) {
          fVar40 = 0.0;
        }
        fVar25 = *(float *)((long)pvVar23 + (long)(ulong)local_4140);
        dVar34 = (double)fVar25;
        if (dVar34 <= DAT_006553f8) {
          fVar25 = 0.0;
        }
        if (_DAT_00655400 <= dVar34) {
          fVar25 = 0.0;
        }
        fVar28 = *(float *)(local_41a0 + 0x10);
        fVar26 = *(float *)(local_41a0 + 0x14);
        dVar34 = (double)(ulong)(uint)fVar26;
        dVar36 = _DAT_00655400;
        fVar39 = fVar40;
        fVar33 = fVar25;
        if (fVar26 != fVar28) {
          fVar42 = *(float *)(local_41a0 + 0x18);
          dVar35 = (double)(ulong)(uint)fVar42;
          fVar39 = *(float *)(local_41a0 + 0x1c);
          fVar33 = fVar39 - fVar42;
          fVar27 = ((fVar27 - fVar28) * fVar33) / (fVar26 - fVar28) + fVar42;
          dVar34 = dVar35;
          if (fVar39 <= fVar42) {
            dVar34 = (double)(ulong)(uint)fVar39;
          }
          if (SUB84(dVar34,0) <= fVar27) {
            dVar34 = (double)(ulong)(uint)fVar27;
          }
          if (fVar42 <= fVar39) {
            dVar35 = (double)(ulong)(uint)fVar39;
          }
          if (SUB84(dVar34,0) <= SUB84(dVar35,0)) {
            dVar35 = dVar34;
          }
          dVar36 = dVar35;
        }
        uVar38 = 0;
        uVar41 = 0;
        fVar27 = glist_xtopixels((ulong)(uint)(SUB84(dVar35,0) + (float)local_41d8),dVar34,
                                 (ulong)(uint)fVar28,dVar36,(ulong)(uint)fVar39,(ulong)(uint)fVar33,
                                 param_7,param_8,lVar17,param_12,uVar31,local_41b0,pcVar14,uVar24);
        iVar11 = (int)((double)fVar27 + DAT_005db338);
        if ((-1 < (int)local_41b0) || (iVar2 != iVar11)) {
          uVar15 = (int)uVar31 * 2;
          local_4038[(long)(int)uVar15 * 2] = (float)iVar11;
          fVar27 = *(float *)(local_41c0 + 0x10);
          fVar33 = fVar40;
          fVar28 = fVar40;
          if (*(float *)(local_41c0 + 0x14) != fVar27) {
            fVar28 = *(float *)(local_41c0 + 0x18);
            fVar26 = *(float *)(local_41c0 + 0x1c);
            uVar38 = 0;
            fVar39 = fVar26 - fVar28;
            fVar33 = ((fVar40 - fVar27) * fVar39) / (*(float *)(local_41c0 + 0x14) - fVar27) +
                     fVar28;
            fVar27 = fVar28;
            if (fVar26 <= fVar28) {
              fVar27 = fVar26;
            }
            if (fVar27 <= fVar33) {
              fVar27 = fVar33;
            }
            if (fVar28 <= fVar26) {
              fVar28 = fVar26;
            }
            if (fVar27 <= fVar28) {
              fVar28 = fVar27;
            }
          }
          fVar27 = *(float *)(local_4108 + 0x10);
          fVar26 = *(float *)(local_4108 + 0x14);
          dVar35 = (double)(ulong)(uint)fVar26;
          uVar43 = 0;
          dVar34 = (double)(ulong)(uint)fVar25;
          fVar42 = fVar25;
          if (fVar26 != fVar27) {
            fVar1 = *(float *)(local_4108 + 0x18);
            fVar39 = *(float *)(local_4108 + 0x1c);
            uVar38 = 0;
            fVar33 = fVar39 - fVar1;
            fVar42 = ((fVar25 - fVar27) * fVar33) / (fVar26 - fVar27) + fVar1;
            fVar26 = fVar1;
            if (fVar39 <= fVar1) {
              fVar26 = fVar39;
            }
            if (fVar26 <= fVar42) {
              fVar26 = fVar42;
            }
            dVar35 = (double)(ulong)(uint)fVar26;
            if (fVar1 <= fVar39) {
              fVar1 = fVar39;
            }
            dVar34 = (double)(ulong)(uint)fVar1;
            if (fVar26 <= fVar1) {
              dVar34 = dVar35;
            }
          }
          uVar41 = 0;
          fVar27 = glist_ytopixels((ulong)(uint)((fVar28 + local_41a8) - SUB84(dVar34,0)),dVar34,
                                   dVar35,(ulong)(uint)fVar27,CONCAT44(uVar38,fVar39),
                                   (ulong)(uint)fVar33,(ulong)(uint)fVar42,param_8,lVar17,param_12,
                                   extraout_RDX_05,local_41b0,pcVar14,uVar24);
          param_7 = CONCAT44(uVar43,fVar42);
          local_4038[(long)(int)(uVar15 | 1) * 2] = fVar27;
          uVar31 = (ulong)((int)uVar31 + 1);
        }
        param_6 = CONCAT44(uVar41,fVar33);
        param_5 = CONCAT44(uVar38,fVar39);
        dVar36 = DAT_006553f8;
        param_4 = (ulong)_DAT_00655400;
        if ((uVar31 & 0x7ffffc00) != 0) goto LAB_005242fe;
        pvVar23 = (void *)((long)pvVar23 + (long)local_4198);
        uVar16 = uVar16 - 1;
        iVar2 = iVar11;
      } while (uVar16 != 0);
      if (0 < (int)local_4190) {
        local_4158 = (char *)(double)local_41a4;
        local_41a8 = local_41dc + fVar32;
        uVar16 = local_4190 + 1;
        pvVar23 = (void *)((local_4190 - 1) * (long)local_41cc + (long)local_4170);
        param_12 = (double)-(long)local_41cc;
        iVar2 = -1;
        local_4198 = param_12;
        do {
          if ((int)local_41b0 < 0) {
            local_41c8 = local_41c8 - (double)local_4158;
            dVar35 = (double)CONCAT44((int)((ulong)local_41c8 >> 0x20),(float)local_41c8);
          }
          else {
            dVar35 = (double)(ulong)(uint)(*(float *)((long)pvVar23 + local_41b0) + local_41d0);
          }
          fVar40 = 0.0;
          if (-1 < (int)local_4180) {
            fVar40 = *(float *)((long)pvVar23 + local_4180);
          }
          dVar34 = (double)fVar40;
          if (dVar34 <= DAT_006553f8) {
            fVar40 = 0.0;
          }
          if (_DAT_00655400 <= dVar34) {
            fVar40 = 0.0;
          }
          fVar25 = *(float *)((long)pvVar23 + (long)(int)local_4140);
          dVar34 = (double)fVar25;
          if (dVar34 <= DAT_006553f8) {
            fVar25 = 0.0;
          }
          if (_DAT_00655400 <= dVar34) {
            fVar25 = 0.0;
          }
          fVar27 = *(float *)(local_41a0 + 0x10);
          fVar28 = *(float *)(local_41a0 + 0x14);
          dVar34 = (double)(ulong)(uint)fVar28;
          dVar36 = _DAT_00655400;
          fVar39 = fVar40;
          fVar33 = fVar25;
          if (fVar28 != fVar27) {
            fVar26 = *(float *)(local_41a0 + 0x18);
            dVar36 = (double)(ulong)(uint)fVar26;
            fVar39 = *(float *)(local_41a0 + 0x1c);
            fVar33 = fVar39 - fVar26;
            fVar28 = ((SUB84(dVar35,0) - fVar27) * fVar33) / (fVar28 - fVar27) + fVar26;
            dVar34 = dVar36;
            if (fVar39 <= fVar26) {
              dVar34 = (double)(ulong)(uint)fVar39;
            }
            if (SUB84(dVar34,0) <= fVar28) {
              dVar34 = (double)(ulong)(uint)fVar28;
            }
            if (fVar26 <= fVar39) {
              dVar36 = (double)(ulong)(uint)fVar39;
            }
            dVar35 = dVar36;
            if (SUB84(dVar34,0) <= SUB84(dVar36,0)) {
              dVar35 = dVar34;
            }
            dVar36 = dVar35;
          }
          uVar41 = 0;
          uVar38 = 0;
          fVar27 = glist_xtopixels(CONCAT44((int)((ulong)dVar35 >> 0x20),
                                            SUB84(dVar35,0) + (float)local_41d8),dVar34,
                                   (ulong)(uint)fVar27,dVar36,(ulong)(uint)fVar39,
                                   (ulong)(uint)fVar33,param_7,param_8,lVar17,param_12,uVar31,
                                   local_41b0,pcVar14,uVar24);
          iVar11 = (int)((double)fVar27 + DAT_005db338);
          if ((-1 < (int)local_41b0) || (iVar2 != iVar11)) {
            uVar15 = (int)uVar31 * 2;
            local_4038[(long)(int)uVar15 * 2] = (float)iVar11;
            fVar27 = *(float *)(local_41c0 + 0x10);
            fVar28 = fVar40;
            if (*(float *)(local_41c0 + 0x14) != fVar27) {
              fVar28 = *(float *)(local_41c0 + 0x18);
              fVar26 = *(float *)(local_41c0 + 0x1c);
              uVar38 = 0;
              fVar39 = fVar26 - fVar28;
              uVar41 = 0;
              fVar33 = ((fVar40 - fVar27) * fVar39) / (*(float *)(local_41c0 + 0x14) - fVar27) +
                       fVar28;
              fVar27 = fVar28;
              if (fVar26 <= fVar28) {
                fVar27 = fVar26;
              }
              if (fVar27 <= fVar33) {
                fVar27 = fVar33;
              }
              if (fVar28 <= fVar26) {
                fVar28 = fVar26;
              }
              if (fVar27 <= fVar28) {
                fVar28 = fVar27;
              }
            }
            fVar27 = *(float *)(local_4108 + 0x10);
            fVar26 = *(float *)(local_4108 + 0x14);
            dVar35 = (double)(ulong)(uint)fVar26;
            uVar43 = 0;
            dVar34 = (double)(ulong)(uint)fVar25;
            fVar42 = fVar25;
            if (fVar26 != fVar27) {
              fVar1 = *(float *)(local_4108 + 0x18);
              fVar39 = *(float *)(local_4108 + 0x1c);
              uVar38 = 0;
              uVar41 = 0;
              fVar33 = fVar39 - fVar1;
              fVar42 = ((fVar25 - fVar27) * fVar33) / (fVar26 - fVar27) + fVar1;
              fVar26 = fVar1;
              if (fVar39 <= fVar1) {
                fVar26 = fVar39;
              }
              if (fVar26 <= fVar42) {
                fVar26 = fVar42;
              }
              dVar35 = (double)(ulong)(uint)fVar26;
              if (fVar1 <= fVar39) {
                fVar1 = fVar39;
              }
              dVar34 = (double)(ulong)(uint)fVar1;
              if (fVar26 <= fVar1) {
                dVar34 = dVar35;
              }
            }
            fVar27 = glist_ytopixels((ulong)(uint)(fVar28 + local_41a8 + SUB84(dVar34,0)),dVar34,
                                     dVar35,(ulong)(uint)fVar27,CONCAT44(uVar38,fVar39),
                                     CONCAT44(uVar41,fVar33),(ulong)(uint)fVar42,param_8,lVar17,
                                     param_12,extraout_RDX_09,local_41b0,pcVar14,uVar24);
            param_7 = CONCAT44(uVar43,fVar42);
            local_4038[(long)(int)(uVar15 | 1) * 2] = fVar27;
            uVar31 = (ulong)((int)uVar31 + 1);
          }
          param_6 = CONCAT44(uVar41,fVar33);
          param_5 = CONCAT44(uVar38,fVar39);
          dVar36 = DAT_006553f8;
          param_4 = (ulong)_DAT_00655400;
          if ((uVar31 & 0x7ffffc00) != 0) goto LAB_005242fe;
          uVar16 = uVar16 - 1;
          pvVar23 = (void *)((long)pvVar23 + (long)local_4198);
          iVar2 = iVar11;
        } while (1 < uVar16);
      }
      param_6 = CONCAT44(uVar41,fVar33);
      param_5 = CONCAT44(uVar38,fVar39);
      uVar16 = (ulong)(uint)fVar40;
      iVar2 = (int)uVar31;
      dVar34 = (double)(ulong)(uint)fVar25;
      uVar7 = local_41b0;
      dVar36 = DAT_006553f8;
      param_4 = (ulong)_DAT_00655400;
      if (iVar2 < 4) goto LAB_00524216;
    }
LAB_005242fe:
    uVar15 = (uint)uVar31;
    uVar3 = glist_getcanvas(lVar17);
    uVar20 = 1;
    if ((*(byte *)(lVar17 + 0xe9) & 1) != 0) {
      uVar38 = glist_getzoom(lVar17);
      uVar20 = (undefined1)uVar38;
    }
    pdgui_vmess((ulong)local_4178 & 0xffffffff,dVar34,dVar36,param_4,param_5,param_6,param_7,param_8
                ,0,"crr ri rk rk ri rS",uVar3,"create","polygon","-width",uVar20);
  }
  uVar3 = glist_getcanvas(lVar17);
  pdgui_vmess(extraout_XMM0_Qa_01,dVar34,dVar36,param_4,param_5,param_6,param_7,param_8,0,"crs w",
              uVar3,"coords",local_40d8,(ulong)(uVar15 * 2),(char)local_4038);
  uVar16 = local_4190;
LAB_005243ed:
  lVar17 = local_41b8;
  if ((local_4150 != 0.0) && (0 < (int)uVar16)) {
    local_41f0 = (double)local_4188;
    local_4198 = (double)(float)local_41d8;
    local_4178 = (double)local_41a4;
    fVar25 = local_4188 + (float)local_41d8;
    lVar22 = (long)local_41cc;
    local_41a0 = (char *)(local_41b0 + (long)local_4170);
    local_41c8 = (double)(local_4180 + (long)local_4170);
    uVar24 = 0;
    do {
      if ((int)local_41b0 < 0) {
        fVar27 = (float)(local_41f0 + local_4198);
        local_41f0 = local_41f0 + local_4178;
        if (-1 < (int)local_4180) goto LAB_005244f1;
LAB_00524547:
        fVar40 = 0.0;
      }
      else {
        fVar27 = *(float *)((long)local_41a0 + uVar24 * lVar22) + fVar25;
        if ((int)local_4180 < 0) goto LAB_00524547;
LAB_005244f1:
        fVar40 = *(float *)((long)local_41c8 + uVar24 * lVar22);
      }
      fVar28 = *(float *)(local_41c0 + 0x10);
      if (*(float *)(local_41c0 + 0x14) != fVar28) {
        fVar26 = *(float *)(local_41c0 + 0x18);
        fVar39 = *(float *)(local_41c0 + 0x1c);
        fVar40 = ((fVar40 - fVar28) * (fVar39 - fVar26)) / (*(float *)(local_41c0 + 0x14) - fVar28)
                 + fVar26;
        fVar28 = fVar26;
        if (fVar39 <= fVar26) {
          fVar28 = fVar39;
        }
        if (fVar28 <= fVar40) {
          fVar28 = fVar40;
        }
        if (fVar26 <= fVar39) {
          fVar26 = fVar39;
        }
        fVar40 = fVar26;
        if (fVar28 <= fVar26) {
          fVar40 = fVar28;
        }
      }
      local_41d8 = CONCAT44(local_41d8._4_4_,fVar40);
      plVar12 = *(long **)(local_4130 + 0x30);
      if (plVar12 != (long *)0x0) {
        local_41d8 = CONCAT44(local_41d8._4_4_,fVar40 + fVar32 + local_41dc);
        pvVar23 = (void *)(uVar24 * lVar22 + (long)local_4170);
        do {
          lVar4 = pd_getparentwidget(plVar12);
          if (lVar4 != 0) {
            (**(code **)(lVar4 + 0x20))
                      (fVar27,local_41d8 & 0xffffffff,plVar12,lVar17,pvVar23,local_4138,local_4164);
          }
          plVar12 = (long *)plVar12[1];
        } while (plVar12 != (long *)0x0);
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != local_4190);
  }
  return;
}


