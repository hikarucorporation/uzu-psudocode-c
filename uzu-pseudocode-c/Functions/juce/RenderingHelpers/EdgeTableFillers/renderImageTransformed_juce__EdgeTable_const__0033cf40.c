// Function : renderImageTransformed<juce::EdgeTable_const>
// Namespace: juce:RenderingHelpers:EdgeTableFillers
// Entry    : 0033cf40
// Prototype: void renderImageTransformed<juce::EdgeTable_const>(undefined8 * param_1, long * param_2, long * param_3, int param_4, float * param_5, int param_6, char param_7)
// Body     : 0033cf40 - 0034637a


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::RenderingHelpers::EdgeTableFillers::renderImageTransformed<juce::EdgeTable
   const>(juce::EdgeTable const&, juce::Image::BitmapData const&, juce::Image::BitmapData const&,
   int, juce::AffineTransform const&, juce::Graphics::ResamplingQuality, bool) */

void __cdecl
juce::RenderingHelpers::EdgeTableFillers::renderImageTransformed<juce::EdgeTable_const>
          (undefined8 *param_1,long *param_2,long *param_3,int param_4,float *param_5,int param_6,
          char param_7)

{
  undefined4 uVar1;
  short sVar2;
  char cVar4;
  byte bVar3;
  undefined1 auVar5 [13];
  uint3 uVar6;
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  uint5 uVar9;
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  uint5 uVar13;
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  undefined1 auVar16 [13];
  uint5 uVar17;
  undefined1 auVar18 [13];
  ulong uVar19;
  uint5 uVar20;
  undefined1 auVar21 [13];
  undefined1 auVar22 [15];
  undefined1 auVar23 [13];
  undefined1 auVar24 [13];
  undefined1 auVar25 [13];
  short sVar26;
  long *plVar27;
  byte bVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  long lVar36;
  byte *pbVar37;
  undefined8 *puVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  int iVar46;
  char cVar47;
  uint uVar48;
  ulong uVar49;
  uint uVar50;
  uint *puVar51;
  byte *pbVar52;
  uint *puVar53;
  long lVar54;
  uint *puVar55;
  long lVar56;
  uint *puVar57;
  uint uVar58;
  bool bVar59;
  undefined1 uVar61;
  float fVar60;
  float fVar62;
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  double dVar69;
  double dVar70;
  float fVar71;
  undefined1 auVar72 [16];
  uint local_140 [2];
  ulong local_138;
  long *local_130;
  uint *local_128;
  undefined8 *local_120;
  uint *local_118;
  uint *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  int local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  float local_c8;
  int local_c4;
  long *local_c0;
  long *local_b8;
  uint local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  long local_98;
  uint *local_90;
  ulong local_88;
  uint *local_78;
  uint *local_70;
  long local_68;
  long local_60;
  uint local_58;
  int local_54;
  uint *local_50;
  long local_48;
  uint *local_40;
  long local_38;
  
  local_120 = param_1;
  local_c0 = param_2;
  local_b8 = param_3;
  local_ac = param_6;
  if ((int)param_2[2] != 1) {
    if ((int)param_2[2] == 2) {
      if ((int)param_3[2] != 1) {
        if ((int)param_3[2] != 2) {
          if (param_7 == '\0') {
            fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
            dVar70 = (double)fVar71;
            dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                                      _DAT_005d91b0 & SUB84(dVar70,0));
            if (dVar69 == DAT_005d94e0) {
              if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_00344557;
LAB_0033de39:
              dVar70 = _DAT_005d9000 / dVar70;
              fVar67 = (float)((double)param_5[4] * dVar70);
              fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
              fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
              fVar71 = (float)((double)*param_5 * dVar70);
              local_108 = CONCAT44(fVar62,fVar67);
              uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                           fVar62 * param_5[5]);
              local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 -
                                  param_5[5] * fVar71,fVar71);
            }
            else {
              if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033de39;
LAB_00344557:
              local_f8 = *(undefined8 *)(param_5 + 4);
              local_108 = *(undefined8 *)param_5;
              uStack_100 = *(undefined8 *)(param_5 + 2);
            }
            local_c8 = 0.0;
            if (param_6 != 0) {
              local_c8 = DAT_005d9044;
            }
            local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
            local_b0 = param_4 + 1;
            local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
            local_a4 = (int)param_3[4] - 1;
            local_88 = 0x800;
            local_90 = malloc(0x800);
            if (0 < *(int *)((long)local_120 + 0x1c)) {
              puVar53 = (uint *)*local_120;
              iVar39 = 0;
              puVar38 = local_120;
              do {
                lVar36 = (long)*(int *)((long)puVar38 + 0x24);
                uVar31 = *puVar53;
                if (1 < (int)uVar31) {
                  puVar55 = puVar53 + 1;
                  uVar48 = puVar53[1];
                  local_78 = (uint *)CONCAT44(local_78._4_4_,iVar39);
                  lVar56 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
                  local_a0 = (int)lVar56;
                  local_98 = *(int *)((long)local_c0 + 0x14) * lVar56 + *local_c0;
                  uVar58 = 0;
                  local_70 = puVar53;
                  local_68 = lVar36;
                  do {
                    uVar34 = puVar55[2];
                    plVar27 = (long *)(ulong)uVar34;
                    uVar30 = uVar34 + 0xff;
                    if (-1 < (int)uVar34) {
                      uVar30 = uVar34;
                    }
                    uVar45 = puVar55[1];
                    iVar43 = (int)uVar30 >> 8;
                    uVar30 = uVar48 + 0xff;
                    if (-1 < (int)uVar48) {
                      uVar30 = uVar48;
                    }
                    iVar39 = (int)uVar30 >> 8;
                    uVar50 = iVar43 - iVar39;
                    uVar30 = uVar31;
                    if (uVar50 == 0) {
                      uVar58 = (uVar34 - uVar48) * uVar45 + uVar58;
                      uVar48 = uVar34;
                    }
                    else {
                      iVar29 = (0x100 - (uVar48 & 0xff)) * uVar45;
                      uVar34 = iVar29 + uVar58;
                      uVar48 = iVar29 + uVar58 + 0xff;
                      if (-1 < (int)uVar34) {
                        uVar48 = uVar34;
                      }
                      local_138 = CONCAT44(local_138._4_4_,uVar45);
                      if (0xff < (int)uVar34) {
                        local_130 = plVar27;
                        if (uVar34 < 0xff00) {
                          TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false>::
                          generate<juce::PixelAlpha>
                                    ((TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false> *
                                     )&local_108,(undefined1 *)local_140,iVar39,1);
                          lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                          uVar48 = ((local_140[0] & 0xff) << 0x10 | local_140[0] & 0xff) *
                                   (((int)uVar48 >> 8 & 0xffU) * local_b0 >> 8);
                        }
                        else {
                          TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false>::
                          generate<juce::PixelAlpha>
                                    ((TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false> *
                                     )&local_108,(undefined1 *)local_140,iVar39,1);
                          lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                          uVar48 = ((local_140[0] & 0xff) << 0x10 | local_140[0] & 0xff) * local_b0;
                        }
                        uVar58 = uVar48 >> 8 & 0xff00ff;
                        iVar29 = 0x100 - (uVar48 >> 0x18);
                        uVar48 = ((*(uint *)(local_98 + lVar36) & 0xff00ff) * iVar29 >> 8 & 0xff00ff
                                 ) + uVar58;
                        uVar58 = ((*(uint *)(local_98 + lVar36) >> 8 & 0xff00ff) * iVar29 >> 8 &
                                 0xff00ff) + uVar58;
                        *(uint *)(local_98 + lVar36) =
                             ((0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff) << 8 |
                             (0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff;
                        plVar27 = local_130;
                        uVar45 = (uint)local_138;
                      }
                      if (0 < (int)uVar45) {
                        iVar29 = (int)((long)iVar39 + 1);
                        uVar48 = iVar43 - iVar29;
                        if (uVar48 != 0 && iVar29 <= iVar43) {
                          local_118 = (uint *)CONCAT44(local_118._4_4_,iVar43);
                          local_130 = plVar27;
                          local_128 = (uint *)(ulong)uVar31;
                          local_110 = puVar55;
                          if ((int)local_88 < (int)uVar48) {
                            local_88 = (ulong)uVar48;
                            free(local_90);
                            local_90 = malloc((ulong)uVar48);
                          }
                          puVar53 = local_90;
                          uVar31 = (uint)local_138 & 0xff;
                          TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false>::
                          generate<juce::PixelAlpha>
                                    ((TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false> *
                                     )&local_108,(undefined1 *)local_90,iVar29,uVar48);
                          lVar36 = (long)(int)local_c0[3];
                          puVar51 = (uint *)(((long)iVar39 + 1) * lVar36 + local_98);
                          iVar29 = uVar31 * local_b0;
                          uVar30 = (uint)local_128;
                          puVar55 = local_110;
                          plVar27 = local_130;
                          iVar43 = (int)local_118;
                          if (iVar29 < 0xfe00) {
                            uVar31 = (int)local_118 - iVar39;
                            do {
                              uVar48 = *puVar53;
                              puVar53 = (uint *)((long)puVar53 + 1);
                              uVar58 = ((uint)(byte)uVar48 << 0x10 | (uint)(byte)uVar48) *
                                       (iVar29 >> 8);
                              uVar48 = uVar58 >> 8 & 0xff00ff;
                              iVar39 = 0x100 - (uVar58 >> 0x18);
                              uVar58 = ((*puVar51 & 0xff00ff) * iVar39 >> 8 & 0xff00ff) + uVar48;
                              uVar48 = ((*puVar51 >> 8 & 0xff00ff) * iVar39 >> 8 & 0xff00ff) +
                                       uVar48;
                              *puVar51 = ((0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff) <<
                                         8 | (0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff;
                              puVar51 = (uint *)((long)puVar51 + lVar36);
                              uVar31 = uVar31 - 1;
                            } while (1 < uVar31);
                          }
                          else {
                            do {
                              bVar28 = (byte)*puVar53;
                              puVar53 = (uint *)((long)puVar53 + 1);
                              uVar31 = (uint)bVar28 << 0x10 | (uint)bVar28;
                              uVar48 = ((*puVar51 & 0xff00ff) * (0x100 - (uint)bVar28) >> 8 &
                                       0xff00ff) + uVar31;
                              uVar31 = ((*puVar51 >> 8 & 0xff00ff) * (0x100 - (uint)bVar28) >> 8 &
                                       0xff00ff) + uVar31;
                              *puVar51 = ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) <<
                                         8 | (0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff;
                              puVar51 = (uint *)((long)puVar51 + lVar36);
                              uVar50 = uVar50 - 1;
                            } while (1 < uVar50);
                          }
                        }
                      }
                      uVar48 = (uint)plVar27;
                      uVar58 = (uVar48 & 0xff) * (uint)local_138;
                    }
                    lVar36 = local_68;
                    puVar53 = local_70;
                    uVar31 = uVar30 - 1;
                    puVar55 = puVar55 + 2;
                  } while (2 < (int)uVar30);
                  uVar31 = uVar58 + 0xff;
                  if (-1 < (int)uVar58) {
                    uVar31 = uVar58;
                  }
                  iVar39 = (int)local_78;
                  puVar38 = local_120;
                  if (0xff < (int)uVar58) {
                    if (uVar58 < 0xff00) {
                      TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false>::
                      generate<juce::PixelAlpha>
                                ((TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false> *)
                                 &local_108,(undefined1 *)local_140,iVar43,1);
                      iVar29 = (int)local_c0[3];
                      uVar31 = ((local_140[0] & 0xff) << 0x10 | local_140[0] & 0xff) *
                               (((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8);
                    }
                    else {
                      TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false>::
                      generate<juce::PixelAlpha>
                                ((TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false> *)
                                 &local_108,(undefined1 *)local_140,iVar43,1);
                      iVar29 = (int)local_c0[3];
                      uVar31 = ((local_140[0] & 0xff) << 0x10 | local_140[0] & 0xff) * local_b0;
                    }
                    uVar48 = uVar31 >> 8 & 0xff00ff;
                    iVar35 = 0x100 - (uVar31 >> 0x18);
                    uVar31 = *(uint *)(local_98 + (long)iVar29 * (long)iVar43);
                    uVar58 = ((uVar31 & 0xff00ff) * iVar35 >> 8 & 0xff00ff) + uVar48;
                    uVar48 = ((uVar31 >> 8 & 0xff00ff) * iVar35 >> 8 & 0xff00ff) + uVar48;
                    *(uint *)(local_98 + (long)iVar29 * (long)iVar43) =
                         ((0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff) << 8 |
                         (0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff;
                    puVar38 = local_120;
                  }
                }
                puVar53 = puVar53 + lVar36;
                iVar39 = iVar39 + 1;
              } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
            }
            goto LAB_00346361;
          }
          fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
          dVar70 = (double)fVar71;
          dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                                    _DAT_005d91b0 & SUB84(dVar70,0));
          if (dVar69 == DAT_005d94e0) {
            if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_0033ff17;
LAB_0033d489:
            dVar70 = _DAT_005d9000 / dVar70;
            fVar67 = (float)((double)param_5[4] * dVar70);
            fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
            fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
            fVar71 = (float)((double)*param_5 * dVar70);
            local_108 = CONCAT44(fVar62,fVar67);
            uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                         fVar62 * param_5[5]);
            local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 -
                                param_5[5] * fVar71,fVar71);
          }
          else {
            if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033d489;
LAB_0033ff17:
            local_f8 = *(undefined8 *)(param_5 + 4);
            local_108 = *(undefined8 *)param_5;
            uStack_100 = *(undefined8 *)(param_5 + 2);
          }
          local_c8 = 0.0;
          if (param_6 != 0) {
            local_c8 = DAT_005d9044;
          }
          local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
          local_b0 = param_4 + 1;
          local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
          local_a4 = (int)param_3[4] - 1;
          local_88 = 0x800;
          local_90 = malloc(0x800);
          if (0 < *(int *)((long)local_120 + 0x1c)) {
            puVar53 = (uint *)*local_120;
            uVar31 = 0;
            puVar38 = local_120;
            fVar71 = _DAT_005dd2d0;
            fVar62 = _UNK_005dd2d4;
            fVar64 = DAT_005d9038;
            fVar67 = DAT_005de53c;
            do {
              uVar48 = *puVar53;
              lVar36 = (long)*(int *)((long)puVar38 + 0x24);
              if (1 < (int)uVar48) {
                puVar55 = puVar53 + 1;
                uVar58 = puVar53[1];
                lVar36 = (long)(int)uVar31 + (long)*(int *)((long)puVar38 + 0x14);
                local_a0 = (int)lVar36;
                local_98 = *(int *)((long)local_c0 + 0x14) * lVar36 + *local_c0;
                uVar34 = 0;
                local_60 = (long)*(int *)((long)puVar38 + 0x24);
                local_58 = uVar31;
                local_50 = puVar53;
                do {
                  plVar27 = (long *)(ulong)uVar48;
                  uVar31 = puVar55[2];
                  puVar53 = (uint *)(ulong)uVar31;
                  uVar30 = uVar31 + 0xff;
                  if (-1 < (int)uVar31) {
                    uVar30 = uVar31;
                  }
                  uVar45 = puVar55[1];
                  iVar39 = (int)uVar30 >> 8;
                  uVar30 = uVar58 + 0xff;
                  if (-1 < (int)uVar58) {
                    uVar30 = uVar58;
                  }
                  iVar43 = (int)uVar30 >> 8;
                  iVar29 = iVar39 - iVar43;
                  if (iVar29 == 0) {
                    uVar34 = (uVar31 - uVar58) * uVar45 + uVar34;
                    uVar30 = uVar48;
                    uVar58 = uVar31;
                  }
                  else {
                    iVar35 = (0x100 - (uVar58 & 0xff)) * uVar45;
                    uVar48 = iVar35 + uVar34;
                    uVar31 = iVar35 + uVar34 + 0xff;
                    if (-1 < (int)uVar48) {
                      uVar31 = uVar48;
                    }
                    local_138 = CONCAT44(local_138._4_4_,uVar45);
                    if (0xff < (int)uVar48) {
                      local_110 = (uint *)CONCAT44(local_110._4_4_,iVar39);
                      local_70 = (uint *)CONCAT44(local_70._4_4_,iVar43);
                      fVar60 = (float)iVar43 + local_c8;
                      fVar68 = local_108._4_4_ * ((float)local_a0 + local_c8);
                      fVar65 = ((float)local_a0 + local_c8) * (float)local_f8;
                      uVar34 = (uint)(((float)local_108 * fVar60 + fVar68 + (float)uStack_100) *
                                     fVar67);
                      iVar44 = (int)(((float)local_108 * (fVar60 + fVar64) + fVar68 +
                                     (float)uStack_100) * fVar67);
                      uStack_ec = 1;
                      uVar58 = local_c4 + uVar34;
                      local_e0 = 1;
                      uStack_e8 = ~uVar34 + iVar44;
                      uVar30 = (uint)((fVar60 * uStack_100._4_4_ + fVar65 + local_f8._4_4_) * fVar67
                                     );
                      iVar35 = (int)(((fVar60 + fVar64) * uStack_100._4_4_ + fVar65 + local_f8._4_4_
                                     ) * fVar67);
                      local_d8 = 1;
                      uVar34 = local_c4 + uVar30;
                      local_cc = 1;
                      local_d4 = ~uVar30 + iVar35;
                      lVar36 = (long)*(int *)((long)local_b8 + 0x14);
                      lVar56 = (long)(int)local_b8[3];
                      uStack_f0 = iVar44 + local_c4;
                      local_dc = local_c4 + iVar35;
                      local_78 = (uint *)CONCAT44(local_78._4_4_,uVar58);
                      iVar35 = (int)(CONCAT44((int)uVar58 >> 0x1f,(int)uVar58 >> 8) %
                                    (long)(int)*(uint *)((long)local_b8 + 0x1c));
                      local_68 = CONCAT44(local_68._4_4_,uVar34);
                      uVar50 = (iVar35 >> 0x1f & *(uint *)((long)local_b8 + 0x1c)) + iVar35;
                      iVar35 = (int)(CONCAT44((int)uVar34 >> 0x1f,(int)uVar34 >> 8) %
                                    (long)(int)*(uint *)(local_b8 + 4));
                      uVar30 = (iVar35 >> 0x1f & *(uint *)(local_b8 + 4)) + iVar35;
                      pbVar37 = (byte *)((int)uVar50 * lVar56 + (int)uVar30 * lVar36 + *local_b8);
                      local_e4 = 0;
                      local_d0 = 0;
                      if (uVar48 < 0xff00) {
                        if (local_a4 <= uVar30 || (local_a8 <= uVar50 || local_ac == 0)) {
                          bVar28 = *pbVar37;
                        }
                        else {
                          iVar35 = 0x100 - (uVar58 & 0xff);
                          bVar28 = (byte)(((uint)pbVar37[lVar56] * (uVar58 & 0xff) +
                                          (uint)*pbVar37 * iVar35) * (0x100 - (uVar34 & 0xff)) +
                                          ((uint)pbVar37[lVar36] * iVar35 +
                                          (uint)pbVar37[lVar36 + lVar56] * (uVar58 & 0xff)) *
                                          (uVar34 & 0xff) + 0x8000 >> 0x10);
                        }
                        lVar36 = (long)iVar43 * (long)(int)local_c0[3];
                        uVar31 = ((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8;
                      }
                      else {
                        if (local_a4 <= uVar30 || (local_a8 <= uVar50 || local_ac == 0)) {
                          bVar28 = *pbVar37;
                        }
                        else {
                          iVar35 = 0x100 - (uVar58 & 0xff);
                          bVar28 = (byte)(((uint)pbVar37[lVar56] * (uVar58 & 0xff) +
                                          (uint)*pbVar37 * iVar35) * (0x100 - (uVar34 & 0xff)) +
                                          ((uint)pbVar37[lVar36] * iVar35 +
                                          (uint)pbVar37[lVar36 + lVar56] * (uVar58 & 0xff)) *
                                          (uVar34 & 0xff) + 0x8000 >> 0x10);
                        }
                        lVar36 = (long)iVar43 * (long)(int)local_c0[3];
                        uVar31 = local_b0;
                      }
                      uVar31 = ((uint)bVar28 << 0x10 | (uint)bVar28) * uVar31;
                      uVar48 = uVar31 >> 8 & 0xff00ff;
                      iVar35 = 0x100 - (uVar31 >> 0x18);
                      uVar31 = *(uint *)(lVar36 + local_98);
                      uVar58 = ((uVar31 & 0xff00ff) * iVar35 >> 8 & 0xff00ff) + uVar48;
                      uVar48 = ((uVar31 >> 8 & 0xff00ff) * iVar35 >> 8 & 0xff00ff) + uVar48;
                      *(uint *)(lVar36 + local_98) =
                           ((0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff) << 8 |
                           (0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff;
                      local_130 = plVar27;
                      local_128 = puVar55;
                      local_118 = puVar53;
                    }
                    if (0 < (int)uVar45) {
                      iVar35 = (int)((long)iVar43 + 1);
                      uVar31 = iVar39 - iVar35;
                      if (uVar31 != 0 && iVar35 <= iVar39) {
                        local_110 = (uint *)CONCAT44(local_110._4_4_,iVar39);
                        local_70 = (uint *)CONCAT44(local_70._4_4_,iVar43);
                        if ((int)local_88 < (int)uVar31) {
                          local_130 = plVar27;
                          local_128 = puVar55;
                          local_118 = puVar53;
                          local_88 = (ulong)uVar31;
                          free(local_90);
                          local_90 = malloc((ulong)uVar31);
                          fVar71 = _DAT_005dd2d0;
                          fVar62 = _UNK_005dd2d4;
                          fVar64 = DAT_005d9038;
                          fVar67 = DAT_005de53c;
                        }
                        else {
                          local_130 = plVar27;
                          local_128 = puVar55;
                          local_118 = puVar53;
                        }
                        fVar65 = (float)iVar35 + local_c8;
                        fVar68 = local_108._4_4_ * ((float)local_a0 + local_c8);
                        fVar60 = ((float)local_a0 + local_c8) * (float)local_f8;
                        iVar39 = (int)(((float)uStack_100 + (float)local_108 * fVar65 + fVar68) *
                                      fVar62);
                        lVar36 = (long)((int)(((float)uStack_100 +
                                              (float)local_108 * ((float)(int)uVar31 + fVar65) +
                                              fVar68) * fVar71) - iVar39);
                        uVar42 = lVar36 / (long)(int)uVar31;
                        uVar49 = lVar36 % (long)(int)uVar31;
                        local_e0 = (uint)uVar49;
                        uVar49 = uVar49 & 0xffffffff;
                        uStack_e8 = (uint)uVar42;
                        uVar42 = uVar42 & 0xffffffff;
                        if ((int)local_e0 < 1) {
                          local_e0 = local_e0 + uVar31;
                          uVar49 = (ulong)local_e0;
                          uStack_e8 = uStack_e8 - 1;
                          uVar42 = (ulong)uStack_e8;
                        }
                        iVar35 = (int)((local_f8._4_4_ + uStack_100._4_4_ * fVar65 + fVar60) *
                                      fVar62);
                        local_cc = (int)((local_f8._4_4_ +
                                         uStack_100._4_4_ * ((float)(int)uVar31 + fVar65) + fVar60)
                                        * fVar71) - iVar35;
                        local_d4 = local_cc / (int)uVar31;
                        local_cc = local_cc % (int)uVar31;
                        local_dc = iVar35 + local_c4;
                        if (local_cc < 1) {
                          local_cc = local_cc + uVar31;
                          local_d4 = local_d4 + -1;
                        }
                        local_78 = (uint *)CONCAT44(local_78._4_4_,(uint)(byte)local_138);
                        local_e4 = (int)uVar49 - uVar31;
                        local_d0 = local_cc - uVar31;
                        puVar53 = local_90;
                        uVar48 = uVar31;
                        uVar58 = local_c4 + iVar39;
                        while( true ) {
                          uVar34 = local_dc;
                          uStack_f0 = (int)uVar42 + uVar58;
                          bVar59 = SCARRY4(local_e4,(int)uVar49);
                          local_e4 = local_e4 + (int)uVar49;
                          if (local_e4 != 0 && bVar59 == local_e4 < 0) {
                            local_e4 = local_e4 - uVar31;
                            uStack_f0 = uStack_f0 + 1;
                          }
                          local_dc = local_d4 + local_dc;
                          bVar59 = SCARRY4(local_d0,local_cc);
                          local_d0 = local_d0 + local_cc;
                          if (local_d0 != 0 && bVar59 == local_d0 < 0) {
                            local_d0 = local_d0 - uVar31;
                            local_dc = local_dc + 1;
                          }
                          iVar39 = (int)(CONCAT44((int)uVar58 >> 0x1f,(int)uVar58 >> 8) %
                                        (long)(int)*(uint *)((long)local_b8 + 0x1c));
                          uVar45 = (iVar39 >> 0x1f & *(uint *)((long)local_b8 + 0x1c)) + iVar39;
                          iVar39 = (int)(CONCAT44((int)uVar34 >> 0x1f,(int)uVar34 >> 8) %
                                        (long)(int)*(uint *)(local_b8 + 4));
                          uVar30 = (iVar39 >> 0x1f & *(uint *)(local_b8 + 4)) + iVar39;
                          lVar36 = (long)*(int *)((long)local_b8 + 0x14);
                          lVar56 = (long)(int)local_b8[3];
                          pbVar37 = (byte *)((int)uVar45 * lVar56 + (int)uVar30 * lVar36 + *local_b8
                                            );
                          if (((local_ac == 0) || (local_a8 <= uVar45)) || (local_a4 <= uVar30)) {
                            *(byte *)puVar53 = *pbVar37;
                          }
                          else {
                            uVar58 = uVar58 & 0xff;
                            *(byte *)puVar53 =
                                 (byte)((pbVar37[lVar56] * uVar58 +
                                        (uint)*pbVar37 * (0x100 - uVar58)) *
                                        (0x100 - (uVar34 & 0xff)) +
                                        ((uint)pbVar37[lVar36] * (0x100 - uVar58) +
                                        pbVar37[lVar36 + lVar56] * uVar58) * (uVar34 & 0xff) +
                                        0x8000 >> 0x10);
                          }
                          if ((int)uVar48 < 2) break;
                          uVar48 = uVar48 - 1;
                          puVar53 = (uint *)((long)puVar53 + 1);
                          uVar42 = (ulong)uStack_e8;
                          uVar49 = (ulong)local_e0;
                          uVar58 = uStack_f0;
                        }
                        lVar36 = (long)(int)local_c0[3];
                        puVar57 = (uint *)(((long)iVar43 + 1) * lVar36 + local_98);
                        iVar43 = (byte)local_138 * local_b0;
                        puVar51 = local_90;
                        puVar53 = local_118;
                        puVar55 = local_128;
                        plVar27 = local_130;
                        iVar39 = (uint)local_110;
                        uStack_ec = uVar31;
                        local_d8 = uVar31;
                        if (iVar43 < 0xfe00) {
                          iVar29 = (uint)local_110 - (int)local_70;
                          do {
                            uVar31 = *puVar51;
                            puVar51 = (uint *)((long)puVar51 + 1);
                            uVar48 = ((uint)(byte)uVar31 << 0x10 | (uint)(byte)uVar31) *
                                     (iVar43 >> 8);
                            uVar31 = uVar48 >> 8 & 0xff00ff;
                            iVar35 = 0x100 - (uVar48 >> 0x18);
                            uVar48 = ((*puVar57 & 0xff00ff) * iVar35 >> 8 & 0xff00ff) + uVar31;
                            uVar31 = ((*puVar57 >> 8 & 0xff00ff) * iVar35 >> 8 & 0xff00ff) + uVar31;
                            *puVar57 = ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) << 8
                                       | (0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff;
                            puVar57 = (uint *)((long)puVar57 + lVar36);
                            iVar29 = iVar29 + -1;
                          } while (1 < iVar29);
                        }
                        else {
                          do {
                            bVar28 = (byte)*puVar51;
                            uVar31 = (uint)bVar28 << 0x10 | (uint)bVar28;
                            uVar48 = ((*puVar57 & 0xff00ff) * (0x100 - (uint)bVar28) >> 8 & 0xff00ff
                                     ) + uVar31;
                            uVar31 = ((*puVar57 >> 8 & 0xff00ff) * (0x100 - (uint)bVar28) >> 8 &
                                     0xff00ff) + uVar31;
                            *puVar57 = ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) << 8
                                       | (0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff;
                            puVar57 = (uint *)((long)puVar57 + lVar36);
                            iVar29 = iVar29 + -1;
                            puVar51 = (uint *)((long)puVar51 + 1);
                          } while (1 < iVar29);
                        }
                      }
                    }
                    uVar30 = (uint)plVar27;
                    uVar58 = (uint)puVar53;
                    uVar34 = (uVar58 & 0xff) * (uint)local_138;
                  }
                  puVar53 = local_50;
                  uVar31 = local_58;
                  lVar36 = local_60;
                  uVar48 = uVar30 - 1;
                  puVar55 = puVar55 + 2;
                } while (2 < (int)uVar30);
                uVar48 = uVar34 + 0xff;
                if (-1 < (int)uVar34) {
                  uVar48 = uVar34;
                }
                puVar38 = local_120;
                if (0xff < (int)uVar34) {
                  if (uVar34 < 0xff00) {
                    TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,true>::
                    generate<juce::PixelAlpha>((float *)&local_108,(byte *)local_140,iVar39);
                    iVar43 = (int)local_c0[3];
                    uVar48 = ((local_140[0] & 0xff) << 0x10 | local_140[0] & 0xff) *
                             (((int)uVar48 >> 8 & 0xffU) * local_b0 >> 8);
                    lVar36 = local_60;
                  }
                  else {
                    TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,true>::
                    generate<juce::PixelAlpha>((float *)&local_108,(byte *)local_140,iVar39);
                    iVar43 = (int)local_c0[3];
                    uVar48 = ((local_140[0] & 0xff) << 0x10 | local_140[0] & 0xff) * local_b0;
                  }
                  uVar58 = uVar48 >> 8 & 0xff00ff;
                  iVar29 = 0x100 - (uVar48 >> 0x18);
                  uVar48 = *(uint *)(local_98 + (long)iVar43 * (long)iVar39);
                  uVar34 = ((uVar48 & 0xff00ff) * iVar29 >> 8 & 0xff00ff) + uVar58;
                  uVar58 = ((uVar48 >> 8 & 0xff00ff) * iVar29 >> 8 & 0xff00ff) + uVar58;
                  *(uint *)(local_98 + (long)iVar43 * (long)iVar39) =
                       ((0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff) << 8 |
                       (0x100 - (uVar34 >> 8 & 0x10001) | uVar34) & 0xff00ff;
                  puVar38 = local_120;
                  fVar71 = _DAT_005dd2d0;
                  fVar62 = _UNK_005dd2d4;
                  fVar64 = DAT_005d9038;
                  fVar67 = DAT_005de53c;
                }
              }
              puVar53 = puVar53 + lVar36;
              uVar31 = uVar31 + 1;
            } while ((int)uVar31 < *(int *)((long)puVar38 + 0x1c));
          }
          goto LAB_00346361;
        }
        if (param_7 == '\0') {
          fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
          dVar70 = (double)fVar71;
          dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                                    _DAT_005d91b0 & SUB84(dVar70,0));
          if (dVar69 == DAT_005d94e0) {
            if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_00342d5f;
LAB_0033d9f9:
            dVar70 = _DAT_005d9000 / dVar70;
            fVar67 = (float)((double)param_5[4] * dVar70);
            fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
            fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
            fVar71 = (float)((double)*param_5 * dVar70);
            local_108 = CONCAT44(fVar62,fVar67);
            uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                         fVar62 * param_5[5]);
            local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 -
                                param_5[5] * fVar71,fVar71);
          }
          else {
            if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033d9f9;
LAB_00342d5f:
            local_f8 = *(undefined8 *)(param_5 + 4);
            local_108 = *(undefined8 *)param_5;
            uStack_100 = *(undefined8 *)(param_5 + 2);
          }
          local_c8 = 0.0;
          if (param_6 != 0) {
            local_c8 = DAT_005d9044;
          }
          local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
          local_b0 = param_4 + 1;
          local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
          local_a4 = (int)param_3[4] - 1;
          local_88 = 0x800;
          local_90 = malloc(0x2000);
          if (0 < *(int *)((long)local_120 + 0x1c)) {
            puVar53 = (uint *)*local_120;
            iVar39 = 0;
            puVar38 = local_120;
            do {
              puVar55 = (uint *)(long)*(int *)((long)puVar38 + 0x24);
              if (1 < (int)*puVar53) {
                local_110 = (uint *)CONCAT44(local_110._4_4_,iVar39);
                lVar36 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
                local_a0 = (int)lVar36;
                local_98 = *(int *)((long)local_c0 + 0x14) * lVar36 + *local_c0;
                uVar58 = *puVar53 + 1;
                puVar51 = puVar53 + 3;
                uVar48 = 0;
                uVar31 = puVar53[1];
                local_128 = puVar53;
                local_118 = puVar55;
                do {
                  uVar34 = *puVar51;
                  uVar30 = uVar34 + 0xff;
                  if (-1 < (int)uVar34) {
                    uVar30 = uVar34;
                  }
                  uVar45 = puVar51[-1];
                  iVar43 = (int)uVar30 >> 8;
                  uVar30 = uVar31 + 0xff;
                  if (-1 < (int)uVar31) {
                    uVar30 = uVar31;
                  }
                  iVar39 = (int)uVar30 >> 8;
                  if (iVar43 == iVar39) {
                    uVar48 = (uVar34 - uVar31) * uVar45 + uVar48;
                  }
                  else {
                    iVar29 = (0x100 - (uVar31 & 0xff)) * uVar45;
                    uVar30 = iVar29 + uVar48;
                    uVar31 = iVar29 + uVar48 + 0xff;
                    if (-1 < (int)uVar30) {
                      uVar31 = uVar30;
                    }
                    if (0xff < (int)uVar30) {
                      local_138 = (ulong)iVar39;
                      if (uVar30 < 0xff00) {
                        local_130 = (long *)CONCAT44(local_130._4_4_,uVar45);
                        TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false>::
                        generate<juce::PixelARGB>
                                  ((TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false> *)
                                   &local_108,local_140,iVar39,1);
                        lVar36 = (long)(int)local_c0[3] * local_138;
                        uVar48 = ((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8;
                        uVar30 = (local_140[0] >> 8 & 0xff00ff) * uVar48;
                        iVar29 = 0x100 - (uVar30 >> 0x18);
                        uVar31 = *(uint *)(local_98 + lVar36);
                        uVar48 = ((uVar31 & 0xff00ff) * iVar29 >> 8 & 0xff00ff) +
                                 ((local_140[0] & 0xff00ff) * uVar48 >> 8 & 0xff00ff);
                        uVar31 = ((uVar31 >> 8 & 0xff00ff) * iVar29 >> 8 & 0xff00ff) +
                                 (uVar30 >> 8 & 0xff00ff);
                        *(uint *)(local_98 + lVar36) =
                             ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) << 8 |
                             (0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff;
                        uVar45 = (uint)local_130;
                      }
                      else {
                        TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false>::
                        generate<juce::PixelARGB>
                                  ((TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false> *)
                                   &local_108,local_140,iVar39,1);
                        lVar36 = (long)(int)local_c0[3] * local_138;
                        uVar48 = (local_140[0] >> 8 & 0xff00ff) * local_b0;
                        iVar29 = 0x100 - (uVar48 >> 0x18);
                        uVar31 = *(uint *)(local_98 + lVar36);
                        uVar30 = ((uVar31 & 0xff00ff) * iVar29 >> 8 & 0xff00ff) +
                                 ((local_140[0] & 0xff00ff) * local_b0 >> 8 & 0xff00ff);
                        uVar31 = ((uVar31 >> 8 & 0xff00ff) * iVar29 >> 8 & 0xff00ff) +
                                 (uVar48 >> 8 & 0xff00ff);
                        *(uint *)(local_98 + lVar36) =
                             ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) << 8 |
                             (0x100 - (uVar30 >> 8 & 0x10001) | uVar30) & 0xff00ff;
                      }
                    }
                    if (0 < (int)uVar45) {
                      iVar39 = iVar39 + 1;
                      if (iVar43 - iVar39 != 0 && iVar39 <= iVar43) {
                        TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false>::
                        handleEdgeTableLine((TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false>
                                             *)&local_108,iVar39,iVar43 - iVar39,uVar45 & 0xff);
                      }
                    }
                    uVar48 = (uVar34 & 0xff) * uVar45;
                  }
                  puVar55 = local_118;
                  puVar53 = local_128;
                  uVar58 = uVar58 - 1;
                  puVar51 = puVar51 + 2;
                  uVar31 = uVar34;
                } while (2 < uVar58);
                uVar31 = uVar48 + 0xff;
                if (-1 < (int)uVar48) {
                  uVar31 = uVar48;
                }
                iVar39 = (uint)local_110;
                puVar38 = local_120;
                if (0xff < (int)uVar48) {
                  if (uVar48 < 0xff00) {
                    TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false>::
                    generate<juce::PixelARGB>
                              ((TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false> *)
                               &local_108,local_140,iVar43,1);
                    lVar36 = (long)(int)local_c0[3] * (long)iVar43;
                    uVar58 = ((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8;
                    uVar48 = (local_140[0] >> 8 & 0xff00ff) * uVar58;
                    iVar43 = 0x100 - (uVar48 >> 0x18);
                    uVar31 = *(uint *)(local_98 + lVar36);
                    uVar58 = ((uVar31 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                             ((local_140[0] & 0xff00ff) * uVar58 >> 8 & 0xff00ff);
                    uVar31 = ((uVar31 >> 8 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                             (uVar48 >> 8 & 0xff00ff);
                    *(uint *)(local_98 + lVar36) =
                         ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) << 8 |
                         (0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff;
                  }
                  else {
                    TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false>::
                    generate<juce::PixelARGB>
                              ((TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false> *)
                               &local_108,local_140,iVar43,1);
                    lVar36 = (long)(int)local_c0[3] * (long)iVar43;
                    uVar48 = (local_140[0] >> 8 & 0xff00ff) * local_b0;
                    iVar43 = 0x100 - (uVar48 >> 0x18);
                    uVar31 = *(uint *)(local_98 + lVar36);
                    uVar58 = ((uVar31 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                             ((local_140[0] & 0xff00ff) * local_b0 >> 8 & 0xff00ff);
                    uVar31 = ((uVar31 >> 8 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                             (uVar48 >> 8 & 0xff00ff);
                    *(uint *)(local_98 + lVar36) =
                         ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) << 8 |
                         (0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff;
                  }
                  puVar38 = local_120;
                }
              }
              puVar53 = puVar53 + (long)puVar55;
              iVar39 = iVar39 + 1;
            } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
          }
          goto LAB_00346361;
        }
        fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
        dVar70 = (double)fVar71;
        dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                                  _DAT_005d91b0 & SUB84(dVar70,0));
        if (dVar69 == DAT_005d94e0) {
          if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_0033e32b;
LAB_0033cfff:
          dVar70 = _DAT_005d9000 / dVar70;
          fVar67 = (float)((double)param_5[4] * dVar70);
          fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
          fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
          fVar71 = (float)((double)*param_5 * dVar70);
          local_108 = CONCAT44(fVar62,fVar67);
          uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                       fVar62 * param_5[5]);
          local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 -
                              param_5[5] * fVar71,fVar71);
        }
        else {
          if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033cfff;
LAB_0033e32b:
          local_f8 = *(undefined8 *)(param_5 + 4);
          local_108 = *(undefined8 *)param_5;
          uStack_100 = *(undefined8 *)(param_5 + 2);
        }
        local_c8 = 0.0;
        if (param_6 != 0) {
          local_c8 = DAT_005d9044;
        }
        local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
        local_b0 = param_4 + 1;
        local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
        local_a4 = (int)param_3[4] - 1;
        local_88 = 0x800;
        local_90 = malloc(0x2000);
        if (0 < *(int *)((long)local_120 + 0x1c)) {
          puVar53 = (uint *)*local_120;
          iVar39 = 0;
          puVar38 = local_120;
          do {
            puVar55 = (uint *)(long)*(int *)((long)puVar38 + 0x24);
            if (1 < (int)*puVar53) {
              local_110 = (uint *)CONCAT44(local_110._4_4_,iVar39);
              lVar36 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
              local_a0 = (int)lVar36;
              local_98 = *(int *)((long)local_c0 + 0x14) * lVar36 + *local_c0;
              uVar58 = *puVar53 + 1;
              puVar51 = puVar53 + 3;
              uVar48 = 0;
              uVar31 = puVar53[1];
              local_128 = puVar53;
              local_118 = puVar55;
              do {
                uVar34 = *puVar51;
                uVar30 = uVar34 + 0xff;
                if (-1 < (int)uVar34) {
                  uVar30 = uVar34;
                }
                uVar45 = puVar51[-1];
                iVar43 = (int)uVar30 >> 8;
                uVar30 = uVar31 + 0xff;
                if (-1 < (int)uVar31) {
                  uVar30 = uVar31;
                }
                iVar39 = (int)uVar30 >> 8;
                if (iVar43 == iVar39) {
                  uVar48 = (uVar34 - uVar31) * uVar45 + uVar48;
                }
                else {
                  iVar29 = (0x100 - (uVar31 & 0xff)) * uVar45;
                  uVar30 = iVar29 + uVar48;
                  uVar31 = iVar29 + uVar48 + 0xff;
                  if (-1 < (int)uVar30) {
                    uVar31 = uVar30;
                  }
                  if (0xff < (int)uVar30) {
                    local_138 = (ulong)iVar39;
                    if (uVar30 < 0xff00) {
                      local_130 = (long *)CONCAT44(local_130._4_4_,uVar45);
                      TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true>::
                      generate<juce::PixelARGB>
                                ((TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true> *)
                                 &local_108,local_140,iVar39,1);
                      lVar36 = (long)(int)local_c0[3] * local_138;
                      uVar48 = ((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8;
                      uVar30 = (local_140[0] >> 8 & 0xff00ff) * uVar48;
                      iVar29 = 0x100 - (uVar30 >> 0x18);
                      uVar31 = *(uint *)(local_98 + lVar36);
                      uVar48 = ((uVar31 & 0xff00ff) * iVar29 >> 8 & 0xff00ff) +
                               ((local_140[0] & 0xff00ff) * uVar48 >> 8 & 0xff00ff);
                      uVar31 = ((uVar31 >> 8 & 0xff00ff) * iVar29 >> 8 & 0xff00ff) +
                               (uVar30 >> 8 & 0xff00ff);
                      *(uint *)(local_98 + lVar36) =
                           ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) << 8 |
                           (0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff;
                      uVar45 = (uint)local_130;
                    }
                    else {
                      TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true>::
                      generate<juce::PixelARGB>
                                ((TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true> *)
                                 &local_108,local_140,iVar39,1);
                      lVar36 = (long)(int)local_c0[3] * local_138;
                      uVar48 = (local_140[0] >> 8 & 0xff00ff) * local_b0;
                      iVar29 = 0x100 - (uVar48 >> 0x18);
                      uVar31 = *(uint *)(local_98 + lVar36);
                      uVar30 = ((uVar31 & 0xff00ff) * iVar29 >> 8 & 0xff00ff) +
                               ((local_140[0] & 0xff00ff) * local_b0 >> 8 & 0xff00ff);
                      uVar31 = ((uVar31 >> 8 & 0xff00ff) * iVar29 >> 8 & 0xff00ff) +
                               (uVar48 >> 8 & 0xff00ff);
                      *(uint *)(local_98 + lVar36) =
                           ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) << 8 |
                           (0x100 - (uVar30 >> 8 & 0x10001) | uVar30) & 0xff00ff;
                    }
                  }
                  if (0 < (int)uVar45) {
                    iVar39 = iVar39 + 1;
                    if (iVar43 - iVar39 != 0 && iVar39 <= iVar43) {
                      TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true>::
                      handleEdgeTableLine((TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true>
                                           *)&local_108,iVar39,iVar43 - iVar39,uVar45 & 0xff);
                    }
                  }
                  uVar48 = (uVar34 & 0xff) * uVar45;
                }
                puVar55 = local_118;
                puVar53 = local_128;
                uVar58 = uVar58 - 1;
                puVar51 = puVar51 + 2;
                uVar31 = uVar34;
              } while (2 < uVar58);
              uVar31 = uVar48 + 0xff;
              if (-1 < (int)uVar48) {
                uVar31 = uVar48;
              }
              iVar39 = (uint)local_110;
              puVar38 = local_120;
              if (0xff < (int)uVar48) {
                if (uVar48 < 0xff00) {
                  TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true>::
                  generate<juce::PixelARGB>
                            ((TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true> *)
                             &local_108,local_140,iVar43,1);
                  lVar36 = (long)(int)local_c0[3] * (long)iVar43;
                  uVar58 = ((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8;
                  uVar48 = (local_140[0] >> 8 & 0xff00ff) * uVar58;
                  iVar43 = 0x100 - (uVar48 >> 0x18);
                  uVar31 = *(uint *)(local_98 + lVar36);
                  uVar58 = ((uVar31 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                           ((local_140[0] & 0xff00ff) * uVar58 >> 8 & 0xff00ff);
                  uVar31 = ((uVar31 >> 8 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                           (uVar48 >> 8 & 0xff00ff);
                  *(uint *)(local_98 + lVar36) =
                       ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) << 8 |
                       (0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff;
                }
                else {
                  TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true>::
                  generate<juce::PixelARGB>
                            ((TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true> *)
                             &local_108,local_140,iVar43,1);
                  lVar36 = (long)(int)local_c0[3] * (long)iVar43;
                  uVar48 = (local_140[0] >> 8 & 0xff00ff) * local_b0;
                  iVar43 = 0x100 - (uVar48 >> 0x18);
                  uVar31 = *(uint *)(local_98 + lVar36);
                  uVar58 = ((uVar31 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                           ((local_140[0] & 0xff00ff) * local_b0 >> 8 & 0xff00ff);
                  uVar31 = ((uVar31 >> 8 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                           (uVar48 >> 8 & 0xff00ff);
                  *(uint *)(local_98 + lVar36) =
                       ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) << 8 |
                       (0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff;
                }
                puVar38 = local_120;
              }
            }
            puVar53 = puVar53 + (long)puVar55;
            iVar39 = iVar39 + 1;
          } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
        }
        goto LAB_00346361;
      }
      if (param_7 == '\0') {
        fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
        dVar70 = (double)fVar71;
        dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                                  _DAT_005d91b0 & SUB84(dVar70,0));
        if (dVar69 == DAT_005d94e0) {
          if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_00343dab;
LAB_0033dd29:
          dVar70 = _DAT_005d9000 / dVar70;
          fVar67 = (float)((double)param_5[4] * dVar70);
          fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
          fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
          fVar71 = (float)((double)*param_5 * dVar70);
          local_108 = CONCAT44(fVar62,fVar67);
          uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                       fVar62 * param_5[5]);
          local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 -
                              param_5[5] * fVar71,fVar71);
        }
        else {
          if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033dd29;
LAB_00343dab:
          local_f8 = *(undefined8 *)(param_5 + 4);
          local_108 = *(undefined8 *)param_5;
          uStack_100 = *(undefined8 *)(param_5 + 2);
        }
        local_c8 = 0.0;
        if (param_6 != 0) {
          local_c8 = DAT_005d9044;
        }
        local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
        local_b0 = param_4 + 1;
        local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
        local_a4 = (int)param_3[4] - 1;
        local_88 = 0x800;
        local_90 = malloc(0x1800);
        if (0 < *(int *)((long)local_120 + 0x1c)) {
          puVar53 = (uint *)*local_120;
          iVar39 = 0;
          puVar38 = local_120;
          do {
            lVar36 = (long)*(int *)((long)puVar38 + 0x24);
            uVar31 = *puVar53;
            if (1 < (int)uVar31) {
              puVar55 = puVar53 + 1;
              uVar48 = puVar53[1];
              local_78 = (uint *)CONCAT44(local_78._4_4_,iVar39);
              lVar56 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
              local_a0 = (int)lVar56;
              local_98 = *(int *)((long)local_c0 + 0x14) * lVar56 + *local_c0;
              uVar58 = 0;
              local_70 = puVar53;
              local_68 = lVar36;
              do {
                uVar34 = puVar55[2];
                plVar27 = (long *)(ulong)uVar34;
                uVar30 = uVar34 + 0xff;
                if (-1 < (int)uVar34) {
                  uVar30 = uVar34;
                }
                uVar45 = puVar55[1];
                iVar43 = (int)uVar30 >> 8;
                uVar30 = uVar48 + 0xff;
                if (-1 < (int)uVar48) {
                  uVar30 = uVar48;
                }
                iVar39 = (int)uVar30 >> 8;
                uVar50 = iVar43 - iVar39;
                uVar30 = uVar31;
                if (uVar50 == 0) {
                  uVar58 = (uVar34 - uVar48) * uVar45 + uVar58;
                  uVar48 = uVar34;
                }
                else {
                  iVar29 = (0x100 - (uVar48 & 0xff)) * uVar45;
                  uVar34 = iVar29 + uVar58;
                  uVar48 = iVar29 + uVar58 + 0xff;
                  if (-1 < (int)uVar34) {
                    uVar48 = uVar34;
                  }
                  local_138 = CONCAT44(local_138._4_4_,uVar45);
                  local_130 = plVar27;
                  if (0xff < (int)uVar34) {
                    local_128 = (uint *)CONCAT44(local_128._4_4_,iVar43);
                    if (uVar34 < 0xff00) {
                      TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false>::
                      generate<juce::PixelRGB>
                                ((TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false> *)
                                 &local_108,(long)local_140,iVar39,1);
                      lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                      uVar34 = ((int)uVar48 >> 8 & 0xffU) * local_b0 >> 8;
                      uVar58 = (local_140[0] >> 8 & 0xff | 0xff0000) * uVar34;
                      iVar43 = 0x100 - (uVar58 >> 0x18);
                      uVar48 = *(uint *)(local_98 + lVar36);
                      uVar34 = ((uVar48 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                               (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) *
                                uVar34 >> 8 & 0xff00ff);
                      uVar48 = ((uVar48 >> 8 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                               (uVar58 >> 8 & 0xff00ff);
                      *(uint *)(local_98 + lVar36) =
                           ((0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff) << 8 |
                           (0x100 - (uVar34 >> 8 & 0x10001) | uVar34) & 0xff00ff;
                    }
                    else {
                      TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false>::
                      generate<juce::PixelRGB>
                                ((TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false> *)
                                 &local_108,(long)local_140,iVar39,1);
                      lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                      uVar58 = (local_140[0] >> 8 & 0xff | 0xff0000) * local_b0;
                      iVar43 = 0x100 - (uVar58 >> 0x18);
                      uVar48 = *(uint *)(local_98 + lVar36);
                      uVar34 = ((uVar48 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                               (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) *
                                local_b0 >> 8 & 0xff00ff);
                      uVar48 = ((uVar48 >> 8 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                               (uVar58 >> 8 & 0xff00ff);
                      *(uint *)(local_98 + lVar36) =
                           ((0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff) << 8 |
                           (0x100 - (uVar34 >> 8 & 0x10001) | uVar34) & 0xff00ff;
                    }
                    uVar45 = (uint)local_138;
                    iVar43 = (int)local_128;
                  }
                  if (0 < (int)uVar45) {
                    iVar29 = (int)((long)iVar39 + 1);
                    uVar48 = iVar43 - iVar29;
                    if (uVar48 != 0 && iVar29 <= iVar43) {
                      local_128 = (uint *)CONCAT44(local_128._4_4_,iVar43);
                      local_118 = puVar55;
                      local_110 = (uint *)(ulong)uVar31;
                      if ((int)local_88 < (int)uVar48) {
                        local_88 = (ulong)uVar48;
                        free(local_90);
                        local_90 = malloc((ulong)uVar48 * 3);
                      }
                      puVar53 = local_90;
                      uVar31 = (uint)local_138 & 0xff;
                      TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false>::
                      generate<juce::PixelRGB>
                                ((TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false> *)
                                 &local_108,(long)local_90,iVar29,uVar48);
                      lVar36 = (long)(int)local_c0[3];
                      puVar51 = (uint *)(((long)iVar39 + 1) * lVar36 + local_98);
                      iVar29 = uVar31 * local_b0;
                      uVar30 = (uint)local_110;
                      puVar55 = local_118;
                      iVar43 = (int)local_128;
                      if (iVar29 < 0xfe00) {
                        iVar29 = iVar29 >> 8;
                        uVar31 = (int)local_128 - iVar39;
                        do {
                          uVar48 = (*(byte *)((long)puVar53 + 1) | 0xff0000) * iVar29;
                          iVar39 = 0x100 - (uVar48 >> 0x18);
                          uVar58 = ((*puVar51 & 0xff00ff) * iVar39 >> 8 & 0xff00ff) +
                                   (((uint)*(byte *)((long)puVar53 + 2) << 0x10 |
                                    (uint)(byte)*puVar53) * iVar29 >> 8 & 0xff00ff);
                          uVar48 = ((*puVar51 >> 8 & 0xff00ff) * iVar39 >> 8 & 0xff00ff) +
                                   (uVar48 >> 8 & 0xff00ff);
                          *puVar51 = ((0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff) << 8 |
                                     (0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff;
                          puVar51 = (uint *)((long)puVar51 + lVar36);
                          uVar31 = uVar31 - 1;
                          puVar53 = (uint *)((long)puVar53 + 3);
                        } while (1 < uVar31);
                      }
                      else {
                        do {
                          uVar31 = *puVar53;
                          puVar53 = (uint *)((long)puVar53 + 3);
                          *puVar51 = (uint3)uVar31 | 0xff000000;
                          puVar51 = (uint *)((long)puVar51 + lVar36);
                          uVar50 = uVar50 - 1;
                        } while (1 < uVar50);
                      }
                    }
                  }
                  uVar48 = (uint)local_130;
                  uVar58 = (uVar48 & 0xff) * (uint)local_138;
                }
                lVar36 = local_68;
                puVar53 = local_70;
                uVar31 = uVar30 - 1;
                puVar55 = puVar55 + 2;
              } while (2 < (int)uVar30);
              uVar31 = uVar58 + 0xff;
              if (-1 < (int)uVar58) {
                uVar31 = uVar58;
              }
              iVar39 = (int)local_78;
              puVar38 = local_120;
              if (0xff < (int)uVar58) {
                if (uVar58 < 0xff00) {
                  TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false>::
                  generate<juce::PixelRGB>
                            ((TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false> *)
                             &local_108,(long)local_140,iVar43,1);
                  lVar56 = (long)(int)local_c0[3] * (long)iVar43;
                  uVar58 = ((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8;
                  uVar48 = (local_140[0] >> 8 & 0xff | 0xff0000) * uVar58;
                  iVar43 = 0x100 - (uVar48 >> 0x18);
                  uVar31 = *(uint *)(local_98 + lVar56);
                  uVar58 = ((uVar31 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                           (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) * uVar58
                            >> 8 & 0xff00ff);
                  uVar31 = ((uVar31 >> 8 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                           (uVar48 >> 8 & 0xff00ff);
                  *(uint *)(local_98 + lVar56) =
                       ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) << 8 |
                       (0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff;
                }
                else {
                  TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false>::
                  generate<juce::PixelRGB>
                            ((TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false> *)
                             &local_108,(long)local_140,iVar43,1);
                  lVar56 = (long)(int)local_c0[3] * (long)iVar43;
                  uVar48 = (local_140[0] >> 8 & 0xff | 0xff0000) * local_b0;
                  iVar43 = 0x100 - (uVar48 >> 0x18);
                  uVar31 = *(uint *)(local_98 + lVar56);
                  uVar58 = ((uVar31 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                           (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) * local_b0
                            >> 8 & 0xff00ff);
                  uVar31 = ((uVar31 >> 8 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                           (uVar48 >> 8 & 0xff00ff);
                  *(uint *)(local_98 + lVar56) =
                       ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) << 8 |
                       (0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff;
                }
                puVar38 = local_120;
              }
            }
            puVar53 = puVar53 + lVar36;
            iVar39 = iVar39 + 1;
          } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
        }
        goto LAB_00346361;
      }
      fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
      dVar70 = (double)fVar71;
      dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                                _DAT_005d91b0 & SUB84(dVar70,0));
      if (dVar69 == DAT_005d94e0) {
        if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_0033f76c;
LAB_0033d371:
        dVar70 = _DAT_005d9000 / dVar70;
        fVar67 = (float)((double)param_5[4] * dVar70);
        fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
        fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
        fVar71 = (float)((double)*param_5 * dVar70);
        local_108 = CONCAT44(fVar62,fVar67);
        uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                     fVar62 * param_5[5]);
        local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 - param_5[5] * fVar71
                            ,fVar71);
      }
      else {
        if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033d371;
LAB_0033f76c:
        local_f8 = *(undefined8 *)(param_5 + 4);
        local_108 = *(undefined8 *)param_5;
        uStack_100 = *(undefined8 *)(param_5 + 2);
      }
      local_c8 = 0.0;
      if (param_6 != 0) {
        local_c8 = DAT_005d9044;
      }
      local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
      local_b0 = param_4 + 1;
      local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
      local_a4 = (int)param_3[4] - 1;
      local_88 = 0x800;
      local_90 = malloc(0x1800);
      if (0 < *(int *)((long)local_120 + 0x1c)) {
        puVar53 = (uint *)*local_120;
        iVar39 = 0;
        puVar38 = local_120;
        do {
          lVar36 = (long)*(int *)((long)puVar38 + 0x24);
          uVar31 = *puVar53;
          if (1 < (int)uVar31) {
            puVar55 = puVar53 + 1;
            uVar48 = puVar53[1];
            local_78 = (uint *)CONCAT44(local_78._4_4_,iVar39);
            lVar56 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
            local_a0 = (int)lVar56;
            local_98 = *(int *)((long)local_c0 + 0x14) * lVar56 + *local_c0;
            uVar58 = 0;
            local_70 = puVar53;
            local_68 = lVar36;
            do {
              uVar34 = puVar55[2];
              plVar27 = (long *)(ulong)uVar34;
              uVar30 = uVar34 + 0xff;
              if (-1 < (int)uVar34) {
                uVar30 = uVar34;
              }
              uVar45 = puVar55[1];
              iVar43 = (int)uVar30 >> 8;
              uVar30 = uVar48 + 0xff;
              if (-1 < (int)uVar48) {
                uVar30 = uVar48;
              }
              iVar39 = (int)uVar30 >> 8;
              uVar50 = iVar43 - iVar39;
              uVar30 = uVar31;
              if (uVar50 == 0) {
                uVar58 = (uVar34 - uVar48) * uVar45 + uVar58;
                uVar48 = uVar34;
              }
              else {
                iVar29 = (0x100 - (uVar48 & 0xff)) * uVar45;
                uVar34 = iVar29 + uVar58;
                uVar48 = iVar29 + uVar58 + 0xff;
                if (-1 < (int)uVar34) {
                  uVar48 = uVar34;
                }
                local_138 = CONCAT44(local_138._4_4_,uVar45);
                local_130 = plVar27;
                if (0xff < (int)uVar34) {
                  local_128 = (uint *)CONCAT44(local_128._4_4_,iVar43);
                  if (uVar34 < 0xff00) {
                    TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true>::
                    generate<juce::PixelRGB>
                              ((TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true> *)
                               &local_108,(long)local_140,iVar39,1);
                    lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                    uVar34 = ((int)uVar48 >> 8 & 0xffU) * local_b0 >> 8;
                    uVar58 = (local_140[0] >> 8 & 0xff | 0xff0000) * uVar34;
                    iVar43 = 0x100 - (uVar58 >> 0x18);
                    uVar48 = *(uint *)(local_98 + lVar36);
                    uVar34 = ((uVar48 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                             (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) * uVar34
                              >> 8 & 0xff00ff);
                    uVar48 = ((uVar48 >> 8 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                             (uVar58 >> 8 & 0xff00ff);
                    *(uint *)(local_98 + lVar36) =
                         ((0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff) << 8 |
                         (0x100 - (uVar34 >> 8 & 0x10001) | uVar34) & 0xff00ff;
                  }
                  else {
                    TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true>::
                    generate<juce::PixelRGB>
                              ((TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true> *)
                               &local_108,(long)local_140,iVar39,1);
                    lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                    uVar58 = (local_140[0] >> 8 & 0xff | 0xff0000) * local_b0;
                    iVar43 = 0x100 - (uVar58 >> 0x18);
                    uVar48 = *(uint *)(local_98 + lVar36);
                    uVar34 = ((uVar48 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                             (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) *
                              local_b0 >> 8 & 0xff00ff);
                    uVar48 = ((uVar48 >> 8 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                             (uVar58 >> 8 & 0xff00ff);
                    *(uint *)(local_98 + lVar36) =
                         ((0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff) << 8 |
                         (0x100 - (uVar34 >> 8 & 0x10001) | uVar34) & 0xff00ff;
                  }
                  uVar45 = (uint)local_138;
                  iVar43 = (int)local_128;
                }
                if (0 < (int)uVar45) {
                  iVar29 = (int)((long)iVar39 + 1);
                  uVar48 = iVar43 - iVar29;
                  if (uVar48 != 0 && iVar29 <= iVar43) {
                    local_128 = (uint *)CONCAT44(local_128._4_4_,iVar43);
                    local_118 = puVar55;
                    local_110 = (uint *)(ulong)uVar31;
                    if ((int)local_88 < (int)uVar48) {
                      local_88 = (ulong)uVar48;
                      free(local_90);
                      local_90 = malloc((ulong)uVar48 * 3);
                    }
                    puVar53 = local_90;
                    uVar31 = (uint)local_138 & 0xff;
                    TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true>::
                    generate<juce::PixelRGB>
                              ((TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true> *)
                               &local_108,(long)local_90,iVar29,uVar48);
                    lVar36 = (long)(int)local_c0[3];
                    puVar51 = (uint *)(((long)iVar39 + 1) * lVar36 + local_98);
                    iVar29 = uVar31 * local_b0;
                    uVar30 = (uint)local_110;
                    puVar55 = local_118;
                    iVar43 = (int)local_128;
                    if (iVar29 < 0xfe00) {
                      iVar29 = iVar29 >> 8;
                      uVar31 = (int)local_128 - iVar39;
                      do {
                        uVar48 = (*(byte *)((long)puVar53 + 1) | 0xff0000) * iVar29;
                        iVar39 = 0x100 - (uVar48 >> 0x18);
                        uVar58 = ((*puVar51 & 0xff00ff) * iVar39 >> 8 & 0xff00ff) +
                                 (((uint)*(byte *)((long)puVar53 + 2) << 0x10 | (uint)(byte)*puVar53
                                  ) * iVar29 >> 8 & 0xff00ff);
                        uVar48 = ((*puVar51 >> 8 & 0xff00ff) * iVar39 >> 8 & 0xff00ff) +
                                 (uVar48 >> 8 & 0xff00ff);
                        *puVar51 = ((0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff) << 8 |
                                   (0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff;
                        puVar51 = (uint *)((long)puVar51 + lVar36);
                        uVar31 = uVar31 - 1;
                        puVar53 = (uint *)((long)puVar53 + 3);
                      } while (1 < uVar31);
                    }
                    else {
                      do {
                        uVar31 = *puVar53;
                        puVar53 = (uint *)((long)puVar53 + 3);
                        *puVar51 = (uint3)uVar31 | 0xff000000;
                        puVar51 = (uint *)((long)puVar51 + lVar36);
                        uVar50 = uVar50 - 1;
                      } while (1 < uVar50);
                    }
                  }
                }
                uVar48 = (uint)local_130;
                uVar58 = (uVar48 & 0xff) * (uint)local_138;
              }
              lVar36 = local_68;
              puVar53 = local_70;
              uVar31 = uVar30 - 1;
              puVar55 = puVar55 + 2;
            } while (2 < (int)uVar30);
            uVar31 = uVar58 + 0xff;
            if (-1 < (int)uVar58) {
              uVar31 = uVar58;
            }
            iVar39 = (int)local_78;
            puVar38 = local_120;
            if (0xff < (int)uVar58) {
              if (uVar58 < 0xff00) {
                TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true>::generate<juce::PixelRGB>
                          ((TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true> *)&local_108,
                           (long)local_140,iVar43,1);
                lVar56 = (long)(int)local_c0[3] * (long)iVar43;
                uVar58 = ((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8;
                uVar48 = (local_140[0] >> 8 & 0xff | 0xff0000) * uVar58;
                iVar43 = 0x100 - (uVar48 >> 0x18);
                uVar31 = *(uint *)(local_98 + lVar56);
                uVar58 = ((uVar31 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                         (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) * uVar58 >>
                          8 & 0xff00ff);
                uVar31 = ((uVar31 >> 8 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                         (uVar48 >> 8 & 0xff00ff);
                *(uint *)(local_98 + lVar56) =
                     ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) << 8 |
                     (0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff;
              }
              else {
                TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true>::generate<juce::PixelRGB>
                          ((TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true> *)&local_108,
                           (long)local_140,iVar43,1);
                lVar56 = (long)(int)local_c0[3] * (long)iVar43;
                uVar48 = (local_140[0] >> 8 & 0xff | 0xff0000) * local_b0;
                iVar43 = 0x100 - (uVar48 >> 0x18);
                uVar31 = *(uint *)(local_98 + lVar56);
                uVar58 = ((uVar31 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                         (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) * local_b0
                          >> 8 & 0xff00ff);
                uVar31 = ((uVar31 >> 8 & 0xff00ff) * iVar43 >> 8 & 0xff00ff) +
                         (uVar48 >> 8 & 0xff00ff);
                *(uint *)(local_98 + lVar56) =
                     ((0x100 - (uVar31 >> 8 & 0x10001) | uVar31) & 0xff00ff) << 8 |
                     (0x100 - (uVar58 >> 8 & 0x10001) | uVar58) & 0xff00ff;
              }
              puVar38 = local_120;
            }
          }
          puVar53 = puVar53 + lVar36;
          iVar39 = iVar39 + 1;
        } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
      }
      goto LAB_00346361;
    }
    if ((int)param_3[2] != 1) {
      if ((int)param_3[2] == 2) {
        if (param_7 == '\0') {
          fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
          dVar70 = (double)fVar71;
          dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                                    _DAT_005d91b0 & SUB84(dVar70,0));
          if (dVar69 == DAT_005d94e0) {
            if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_003438c8;
LAB_0033dc19:
            dVar70 = _DAT_005d9000 / dVar70;
            fVar67 = (float)((double)param_5[4] * dVar70);
            fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
            fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
            fVar71 = (float)((double)*param_5 * dVar70);
            local_108 = CONCAT44(fVar62,fVar67);
            uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                         fVar62 * param_5[5]);
            local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 -
                                param_5[5] * fVar71,fVar71);
          }
          else {
            if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033dc19;
LAB_003438c8:
            local_f8 = *(undefined8 *)(param_5 + 4);
            local_108 = *(undefined8 *)param_5;
            uStack_100 = *(undefined8 *)(param_5 + 2);
          }
          local_c8 = 0.0;
          if (param_6 != 0) {
            local_c8 = DAT_005d9044;
          }
          local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
          local_b0 = param_4 + 1;
          local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
          local_a4 = (int)param_3[4] - 1;
          local_88 = 0x800;
          local_90 = malloc(0x2000);
          if (0 < *(int *)((long)local_120 + 0x1c)) {
            puVar53 = (uint *)*local_120;
            iVar39 = 0;
            puVar38 = local_120;
            do {
              puVar55 = (uint *)(long)*(int *)((long)puVar38 + 0x24);
              uVar31 = *puVar53;
              if (1 < (int)uVar31) {
                puVar51 = puVar53 + 1;
                uVar48 = puVar53[1];
                local_70 = (uint *)CONCAT44(local_70._4_4_,iVar39);
                lVar36 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
                local_a0 = (int)lVar36;
                local_98 = *(int *)((long)param_2 + 0x14) * lVar36 + *param_2;
                uVar58 = 0;
                local_118 = puVar53;
                local_78 = puVar55;
                do {
                  uVar34 = puVar51[2];
                  plVar27 = (long *)(ulong)uVar34;
                  uVar30 = uVar34 + 0xff;
                  if (-1 < (int)uVar34) {
                    uVar30 = uVar34;
                  }
                  uVar45 = puVar51[1];
                  iVar43 = (int)uVar30 >> 8;
                  uVar30 = uVar48 + 0xff;
                  if (-1 < (int)uVar48) {
                    uVar30 = uVar48;
                  }
                  iVar39 = (int)uVar30 >> 8;
                  uVar30 = iVar43 - iVar39;
                  if (uVar30 == 0) {
                    uVar58 = (uVar34 - uVar48) * uVar45 + uVar58;
                    uVar30 = uVar31;
                    uVar48 = uVar34;
                  }
                  else {
                    iVar29 = (0x100 - (uVar48 & 0xff)) * uVar45;
                    uVar34 = iVar29 + uVar58;
                    uVar48 = iVar29 + uVar58 + 0xff;
                    if (-1 < (int)uVar34) {
                      uVar48 = uVar34;
                    }
                    if (0xff < (int)uVar34) {
                      local_138 = CONCAT44(local_138._4_4_,uVar45);
                      local_130 = plVar27;
                      if (uVar34 < 0xff00) {
                        TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false>::
                        generate<juce::PixelARGB>
                                  ((TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false> *)
                                   &local_108,local_140,iVar39,1);
                        lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                        uVar48 = (local_140[0] >> 0x18) *
                                 ((((int)uVar48 >> 8 & 0xffU) * local_b0 >> 8) + 1);
                        cVar47 = (char)((0x100 - (uVar48 >> 8)) * (uint)*(byte *)(local_98 + lVar36)
                                       >> 8) + (char)(uVar48 >> 8);
                      }
                      else {
                        TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false>::
                        generate<juce::PixelARGB>
                                  ((TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false> *)
                                   &local_108,local_140,iVar39,1);
                        lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                        uVar48 = (local_140[0] >> 0x18) * (local_b0 + 1);
                        cVar47 = (char)((0x100 - (uVar48 >> 8)) * (uint)*(byte *)(local_98 + lVar36)
                                       >> 8) + (char)(uVar48 >> 8);
                      }
                      *(char *)(local_98 + lVar36) = cVar47;
                      plVar27 = local_130;
                      param_2 = local_c0;
                      uVar45 = (uint)local_138;
                    }
                    if (0 < (int)uVar45) {
                      iVar29 = (int)((long)iVar39 + 1);
                      uVar48 = iVar43 - iVar29;
                      if (uVar48 != 0 && iVar29 <= iVar43) {
                        local_128 = (uint *)CONCAT44(local_128._4_4_,iVar43);
                        local_138 = CONCAT44(local_138._4_4_,uVar45);
                        local_130 = plVar27;
                        local_110 = (uint *)(ulong)uVar31;
                        if ((int)local_88 < (int)uVar48) {
                          local_88 = (ulong)uVar48;
                          free(local_90);
                          local_90 = malloc((ulong)uVar48 << 2);
                          uVar45 = (uint)local_138;
                        }
                        puVar53 = local_90;
                        TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false>::
                        generate<juce::PixelARGB>
                                  ((TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false> *)
                                   &local_108,local_90,iVar29,uVar48);
                        lVar36 = (long)(int)local_c0[3];
                        pbVar37 = (byte *)(((long)iVar39 + 1) * lVar36 + local_98);
                        iVar43 = (uVar45 & 0xff) * local_b0;
                        if (iVar43 < 0xfe00) {
                          pbVar52 = (byte *)((long)puVar53 + 3);
                          uVar31 = (int)local_128 - iVar39;
                          do {
                            uVar48 = (uint)*pbVar52 * ((iVar43 >> 8) + 1);
                            *pbVar37 = (char)((0x100 - (uVar48 >> 8)) * (uint)*pbVar37 >> 8) +
                                       (char)(uVar48 >> 8);
                            pbVar52 = pbVar52 + 4;
                            pbVar37 = pbVar37 + lVar36;
                            uVar31 = uVar31 - 1;
                          } while (1 < uVar31);
                        }
                        else {
                          pbVar52 = (byte *)((long)puVar53 + 3);
                          do {
                            *pbVar37 = (char)((0x100 - (uint)*pbVar52) * (uint)*pbVar37 >> 8) +
                                       *pbVar52;
                            pbVar52 = pbVar52 + 4;
                            pbVar37 = pbVar37 + lVar36;
                            uVar30 = uVar30 - 1;
                          } while (1 < uVar30);
                        }
                        uVar31 = (uint)local_110;
                        plVar27 = local_130;
                        param_2 = local_c0;
                        uVar45 = (uint)local_138;
                        iVar43 = (int)local_128;
                      }
                    }
                    uVar58 = ((uint)plVar27 & 0xff) * uVar45;
                    uVar30 = uVar31;
                    uVar48 = (uint)plVar27;
                  }
                  puVar55 = local_78;
                  puVar53 = local_118;
                  uVar31 = uVar30 - 1;
                  puVar51 = puVar51 + 2;
                } while (2 < (int)uVar30);
                uVar31 = uVar58 + 0xff;
                if (-1 < (int)uVar58) {
                  uVar31 = uVar58;
                }
                iVar39 = (int)local_70;
                puVar38 = local_120;
                if (0xff < (int)uVar58) {
                  if (uVar58 < 0xff00) {
                    TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false>::
                    generate<juce::PixelARGB>
                              ((TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false> *)
                               &local_108,local_140,iVar43,1);
                    lVar36 = (long)(int)local_c0[3] * (long)iVar43;
                    uVar31 = (local_140[0] >> 0x18) *
                             ((((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8) + 1);
                    cVar47 = (char)((0x100 - (uVar31 >> 8)) * (uint)*(byte *)(local_98 + lVar36) >>
                                   8) + (char)(uVar31 >> 8);
                  }
                  else {
                    TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false>::
                    generate<juce::PixelARGB>
                              ((TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false> *)
                               &local_108,local_140,iVar43,1);
                    lVar36 = (long)(int)local_c0[3] * (long)iVar43;
                    uVar31 = (local_140[0] >> 0x18) * (local_b0 + 1);
                    cVar47 = (char)((0x100 - (uVar31 >> 8)) * (uint)*(byte *)(local_98 + lVar36) >>
                                   8) + (char)(uVar31 >> 8);
                  }
                  *(char *)(local_98 + lVar36) = cVar47;
                  puVar38 = local_120;
                  param_2 = local_c0;
                }
              }
              puVar53 = puVar53 + (long)puVar55;
              iVar39 = iVar39 + 1;
            } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
          }
          goto LAB_00346361;
        }
        fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
        dVar70 = (double)fVar71;
        dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                                  _DAT_005d91b0 & SUB84(dVar70,0));
        if (dVar69 == DAT_005d94e0) {
          if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_0033ee98;
LAB_0033d259:
          dVar70 = _DAT_005d9000 / dVar70;
          fVar67 = (float)((double)param_5[4] * dVar70);
          fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
          fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
          fVar71 = (float)((double)*param_5 * dVar70);
          local_108 = CONCAT44(fVar62,fVar67);
          uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                       fVar62 * param_5[5]);
          local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 -
                              param_5[5] * fVar71,fVar71);
        }
        else {
          if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033d259;
LAB_0033ee98:
          local_f8 = *(undefined8 *)(param_5 + 4);
          local_108 = *(undefined8 *)param_5;
          uStack_100 = *(undefined8 *)(param_5 + 2);
        }
        local_c8 = 0.0;
        if (param_6 != 0) {
          local_c8 = DAT_005d9044;
        }
        local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
        local_b0 = param_4 + 1;
        local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
        local_a4 = (int)param_3[4] - 1;
        local_88 = 0x800;
        local_90 = malloc(0x2000);
        if (0 < *(int *)((long)local_120 + 0x1c)) {
          puVar53 = (uint *)*local_120;
          iVar39 = 0;
          puVar38 = local_120;
          auVar72 = _DAT_005dd240;
          iVar43 = _DAT_005dd3c0;
          iVar29 = _UNK_005dd3c4;
          iVar35 = _UNK_005dd3c8;
          iVar44 = _UNK_005dd3cc;
          do {
            uVar31 = *puVar53;
            lVar36 = (long)*(int *)((long)puVar38 + 0x24);
            if (1 < (int)uVar31) {
              puVar55 = puVar53 + 1;
              uVar48 = puVar53[1];
              local_68 = CONCAT44(local_68._4_4_,iVar39);
              lVar36 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
              local_a0 = (int)lVar36;
              local_98 = *(int *)((long)param_2 + 0x14) * lVar36 + *param_2;
              uVar58 = 0;
              local_78 = puVar53;
              local_60 = (long)*(int *)((long)puVar38 + 0x24);
              do {
                uVar34 = puVar55[2];
                uVar42 = (ulong)uVar34;
                uVar30 = uVar34 + 0xff;
                if (-1 < (int)uVar34) {
                  uVar30 = uVar34;
                }
                uVar45 = puVar55[1];
                iVar32 = (int)uVar30 >> 8;
                uVar30 = uVar48 + 0xff;
                if (-1 < (int)uVar48) {
                  uVar30 = uVar48;
                }
                iVar39 = (int)uVar30 >> 8;
                uVar50 = iVar32 - iVar39;
                uVar30 = uVar31;
                if (uVar50 == 0) {
                  uVar58 = (uVar34 - uVar48) * uVar45 + uVar58;
                  uVar48 = uVar34;
                }
                else {
                  iVar46 = (0x100 - (uVar48 & 0xff)) * uVar45;
                  uVar34 = iVar46 + uVar58;
                  uVar48 = iVar46 + uVar58 + 0xff;
                  if (-1 < (int)uVar34) {
                    uVar48 = uVar34;
                  }
                  if (0xff < (int)uVar34) {
                    local_130 = (long *)CONCAT44(local_130._4_4_,uVar45);
                    local_138 = uVar42;
                    if (uVar34 < 0xff00) {
                      TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true>::
                      generate<juce::PixelARGB>
                                ((TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true> *)
                                 &local_108,local_140,iVar39,1);
                      lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                      uVar48 = (local_140[0] >> 0x18) *
                               ((((int)uVar48 >> 8 & 0xffU) * local_b0 >> 8) + 1);
                      cVar47 = (char)((0x100 - (uVar48 >> 8)) * (uint)*(byte *)(local_98 + lVar36)
                                     >> 8) + (char)(uVar48 >> 8);
                    }
                    else {
                      TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true>::
                      generate<juce::PixelARGB>
                                ((TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true> *)
                                 &local_108,local_140,iVar39,1);
                      lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                      uVar48 = (local_140[0] >> 0x18) * (local_b0 + 1);
                      cVar47 = (char)((0x100 - (uVar48 >> 8)) * (uint)*(byte *)(local_98 + lVar36)
                                     >> 8) + (char)(uVar48 >> 8);
                    }
                    *(char *)(local_98 + lVar36) = cVar47;
                    uVar42 = local_138;
                    param_2 = local_c0;
                    auVar72 = _DAT_005dd240;
                    uVar45 = (uint)local_130;
                    iVar43 = _DAT_005dd3c0;
                    iVar29 = _UNK_005dd3c4;
                    iVar35 = _UNK_005dd3c8;
                    iVar44 = _UNK_005dd3cc;
                  }
                  if (0 < (int)uVar45) {
                    iVar46 = (int)((long)iVar39 + 1);
                    uVar48 = iVar32 - iVar46;
                    if (uVar48 != 0 && iVar46 <= iVar32) {
                      local_118 = (uint *)CONCAT44(local_118._4_4_,iVar32);
                      local_70 = (uint *)CONCAT44(local_70._4_4_,iVar39);
                      local_138 = uVar42;
                      local_128 = (uint *)(ulong)uVar31;
                      local_110 = puVar55;
                      if ((int)local_88 < (int)uVar48) {
                        local_88 = (ulong)uVar48;
                        free(local_90);
                        local_90 = malloc((ulong)uVar48 << 2);
                        auVar72 = _DAT_005dd240;
                        iVar43 = _DAT_005dd3c0;
                        iVar29 = _UNK_005dd3c4;
                        iVar35 = _UNK_005dd3c8;
                        iVar44 = _UNK_005dd3cc;
                      }
                      fVar64 = (float)iVar46 + local_c8;
                      fVar62 = local_108._4_4_ * ((float)local_a0 + local_c8);
                      fVar71 = ((float)local_a0 + local_c8) * (float)local_f8;
                      iVar32 = (int)(((float)uStack_100 + (float)local_108 * fVar64 + fVar62) *
                                    _UNK_005dd2d4);
                      lVar36 = (long)((int)(((float)uStack_100 +
                                            (float)local_108 * ((float)(int)uVar48 + fVar64) +
                                            fVar62) * _DAT_005dd2d0) - iVar32);
                      uVar42 = lVar36 / (long)(int)uVar48;
                      uVar49 = lVar36 % (long)(int)uVar48;
                      local_e0 = (uint)uVar49;
                      uVar49 = uVar49 & 0xffffffff;
                      uStack_e8 = (uint)uVar42;
                      uVar42 = uVar42 & 0xffffffff;
                      if ((int)local_e0 < 1) {
                        local_e0 = local_e0 + uVar48;
                        uVar49 = (ulong)local_e0;
                        uStack_e8 = uStack_e8 - 1;
                        uVar42 = (ulong)uStack_e8;
                      }
                      iVar46 = (int)((local_f8._4_4_ + uStack_100._4_4_ * fVar64 + fVar71) *
                                    _UNK_005dd2d4);
                      local_cc = (int)((local_f8._4_4_ +
                                       uStack_100._4_4_ * ((float)(int)uVar48 + fVar64) + fVar71) *
                                      _DAT_005dd2d0) - iVar46;
                      local_d4 = local_cc / (int)uVar48;
                      local_cc = local_cc % (int)uVar48;
                      local_dc = iVar46 + local_c4;
                      if (local_cc < 1) {
                        local_cc = local_cc + uVar48;
                        local_d4 = local_d4 + -1;
                      }
                      local_130 = (long *)CONCAT44(local_130._4_4_,uVar45);
                      local_e4 = (int)uVar49 - uVar48;
                      local_d0 = local_cc - uVar48;
                      puVar53 = local_90;
                      uVar31 = uVar48;
                      uVar58 = local_c4 + iVar32;
                      while( true ) {
                        uVar34 = local_dc;
                        uStack_f0 = (int)uVar42 + uVar58;
                        bVar59 = SCARRY4(local_e4,(int)uVar49);
                        local_e4 = local_e4 + (int)uVar49;
                        if (local_e4 != 0 && bVar59 == local_e4 < 0) {
                          local_e4 = local_e4 - uVar48;
                          uStack_f0 = uStack_f0 + 1;
                        }
                        local_dc = local_d4 + local_dc;
                        bVar59 = SCARRY4(local_d0,local_cc);
                        local_d0 = local_d0 + local_cc;
                        if (local_d0 != 0 && bVar59 == local_d0 < 0) {
                          local_d0 = local_d0 - uVar48;
                          local_dc = local_dc + 1;
                        }
                        iVar32 = (int)(CONCAT44((int)uVar58 >> 0x1f,(int)uVar58 >> 8) %
                                      (long)(int)*(uint *)((long)local_b8 + 0x1c));
                        uVar40 = (iVar32 >> 0x1f & *(uint *)((long)local_b8 + 0x1c)) + iVar32;
                        iVar32 = (int)(CONCAT44((int)uVar34 >> 0x1f,(int)uVar34 >> 8) %
                                      (long)(int)*(uint *)(local_b8 + 4));
                        uVar30 = (iVar32 >> 0x1f & *(uint *)(local_b8 + 4)) + iVar32;
                        lVar56 = (long)*(int *)((long)local_b8 + 0x14);
                        lVar36 = (long)(int)local_b8[3];
                        puVar55 = (uint *)((int)uVar40 * lVar36 + (int)uVar30 * lVar56 + *local_b8);
                        if (((local_ac == 0) || (local_a8 <= uVar40)) || (local_a4 <= uVar30)) {
                          *puVar53 = *puVar55;
                        }
                        else {
                          uVar58 = uVar58 & 0xff;
                          uVar34 = uVar34 & 0xff;
                          uVar33 = (0x100 - uVar34) * (0x100 - uVar58);
                          uVar30 = *puVar55;
                          auVar5[0xc] = (char)(uVar30 >> 0x18);
                          auVar5._0_12_ = ZEXT712(0);
                          uVar20 = CONCAT32(auVar5._10_3_,(ushort)(byte)(uVar30 >> 0x10));
                          auVar21._5_8_ = 0;
                          auVar21._0_5_ = uVar20;
                          uVar6 = auVar5._10_3_ >> 0x10;
                          auVar22._12_3_ = uVar6;
                          auVar22._0_12_ = ZEXT312(uVar6) << 0x40;
                          uVar40 = (0x100 - uVar34) * uVar58;
                          uVar1 = *(undefined4 *)((long)puVar55 + lVar36);
                          uVar61 = (undefined1)((uint)uVar1 >> 8);
                          uVar42 = (ulong)CONCAT12(uVar61,(short)uVar1) & 0xffffffffffff00ff;
                          auVar7._8_4_ = 0;
                          auVar7._0_8_ = uVar42;
                          auVar7[0xc] = (char)((uint)uVar1 >> 0x18);
                          auVar8[8] = (char)((uint)uVar1 >> 0x10);
                          auVar8._0_8_ = uVar42;
                          auVar8[9] = 0;
                          auVar8._10_3_ = auVar7._10_3_;
                          uVar9 = auVar8._8_5_;
                          auVar23._5_8_ = 0;
                          auVar23._0_5_ = uVar9;
                          auVar10[4] = uVar61;
                          auVar10._0_4_ = (uint)uVar42;
                          auVar10[5] = 0;
                          auVar10._6_7_ = SUB137(auVar23 << 0x40,6);
                          uVar41 = uVar58 * uVar34;
                          uVar1 = *(undefined4 *)((long)puVar55 + lVar56 + lVar36);
                          uVar61 = (undefined1)((uint)uVar1 >> 8);
                          uVar49 = (ulong)CONCAT12(uVar61,(short)uVar1) & 0xffffffffffff00ff;
                          auVar11._8_4_ = 0;
                          auVar11._0_8_ = uVar49;
                          auVar11[0xc] = (char)((uint)uVar1 >> 0x18);
                          auVar12[8] = (char)((uint)uVar1 >> 0x10);
                          auVar12._0_8_ = uVar49;
                          auVar12[9] = 0;
                          auVar12._10_3_ = auVar11._10_3_;
                          uVar13 = auVar12._8_5_;
                          auVar24._5_8_ = 0;
                          auVar24._0_5_ = uVar13;
                          auVar14[4] = uVar61;
                          auVar14._0_4_ = (uint)uVar49;
                          auVar14[5] = 0;
                          auVar14._6_7_ = SUB137(auVar24 << 0x40,6);
                          uVar34 = (0x100 - uVar58) * uVar34;
                          uVar1 = *(undefined4 *)((long)puVar55 + lVar56);
                          uVar61 = (undefined1)((uint)uVar1 >> 8);
                          uVar19 = (ulong)CONCAT12(uVar61,(short)uVar1) & 0xffffffffffff00ff;
                          auVar15._8_4_ = 0;
                          auVar15._0_8_ = uVar19;
                          auVar15[0xc] = (char)((uint)uVar1 >> 0x18);
                          auVar16[8] = (char)((uint)uVar1 >> 0x10);
                          auVar16._0_8_ = uVar19;
                          auVar16[9] = 0;
                          auVar16._10_3_ = auVar15._10_3_;
                          uVar17 = auVar16._8_5_;
                          auVar25._5_8_ = 0;
                          auVar25._0_5_ = uVar17;
                          auVar18[4] = uVar61;
                          auVar18._0_4_ = (uint)uVar19;
                          auVar18[5] = 0;
                          auVar18._6_7_ = SUB137(auVar25 << 0x40,6);
                          auVar66._4_4_ = uVar34;
                          auVar66._0_4_ = uVar34;
                          auVar66._8_4_ = uVar34;
                          auVar66._12_4_ = uVar34;
                          auVar63._0_4_ =
                               uVar34 * ((uint)uVar19 & 0xffff) +
                               ((uint)uVar49 & 0xffff) * uVar41 +
                               ((uint)uVar42 & 0xffff) * uVar40 + (uVar30 & 0xff) * uVar33 + iVar43
                               >> 0x10;
                          auVar63._4_4_ =
                               auVar18._4_4_ * uVar34 +
                               auVar14._4_4_ * uVar41 +
                               auVar10._4_4_ * uVar40 +
                               (int)CONCAT72(SUB137(auVar21 << 0x40,6),(ushort)(byte)(uVar30 >> 8))
                               * uVar33 + iVar29 >> 0x10;
                          auVar63._8_4_ =
                               (uint)((int)((auVar66._8_8_ & 0xffffffff) *
                                           ((ulong)uVar17 & 0xffffffff)) +
                                      (int)(((ulong)uVar13 & 0xffffffff) * (ulong)uVar41) +
                                      (int)(((ulong)uVar9 & 0xffffffff) * (ulong)uVar40) +
                                      (int)(((ulong)uVar20 & 0xffffffff) * (ulong)uVar33) + iVar35)
                               >> 0x10;
                          auVar63._12_4_ =
                               (uint)((int)((ulong)(uVar17 >> 0x20) * (ulong)uVar34) +
                                      (int)((ulong)(uVar13 >> 0x20) * (ulong)uVar41) +
                                      (int)((ulong)(uVar9 >> 0x20) * (ulong)uVar40) +
                                      (int)(((ulong)auVar22._8_7_ & 0xffffffff) * (ulong)uVar33) +
                                     iVar44) >> 0x10;
                          auVar63 = auVar63 & auVar72;
                          sVar2 = auVar63._0_2_;
                          bVar28 = (0 < sVar2) * (sVar2 < 0x100) * auVar63[0] - (0xff < sVar2);
                          sVar2 = auVar63._4_2_;
                          bVar3 = (0 < sVar2) * (sVar2 < 0x100) * auVar63[4] - (0xff < sVar2);
                          sVar2 = auVar63._8_2_;
                          cVar47 = (0 < sVar2) * (sVar2 < 0x100) * auVar63[8] - (0xff < sVar2);
                          sVar2 = auVar63._10_2_;
                          sVar26 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar63[10] -
                                            (0xff < sVar2),cVar47);
                          sVar2 = auVar63._12_2_;
                          cVar4 = (0 < sVar2) * (sVar2 < 0x100) * auVar63[0xc] - (0xff < sVar2);
                          sVar2 = auVar63._14_2_;
                          sVar2 = (short)(CONCAT13((0 < sVar2) * (sVar2 < 0x100) * auVar63[0xe] -
                                                   (0xff < sVar2),CONCAT12(cVar4,sVar26)) >> 0x10);
                          *puVar53 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * cVar4 - (0xff < sVar2)
                                              ,CONCAT12((0 < sVar26) * (sVar26 < 0x100) * cVar47 -
                                                        (0xff < sVar26),
                                                        CONCAT11((bVar3 != 0) * (bVar3 < 0x100) *
                                                                 bVar3 - (0xff < bVar3),
                                                                 (bVar28 != 0) * (bVar28 < 0x100) *
                                                                 bVar28 - (0xff < bVar28))));
                        }
                        if ((int)uVar31 < 2) break;
                        uVar31 = uVar31 - 1;
                        puVar53 = puVar53 + 1;
                        uVar42 = (ulong)uStack_e8;
                        uVar49 = (ulong)local_e0;
                        uVar58 = uStack_f0;
                      }
                      lVar36 = (long)(int)local_c0[3];
                      pbVar37 = (byte *)(((long)iVar39 + 1) * lVar36 + local_98);
                      iVar39 = (uVar45 & 0xff) * local_b0;
                      uVar30 = (uint)local_128;
                      uVar42 = local_138;
                      puVar55 = local_110;
                      param_2 = local_c0;
                      iVar32 = (int)local_118;
                      uStack_ec = uVar48;
                      local_d8 = uVar48;
                      if (iVar39 < 0xfe00) {
                        pbVar52 = (byte *)((long)local_90 + 3);
                        uVar31 = (int)local_118 - (int)local_70;
                        do {
                          uVar48 = (uint)*pbVar52 * ((iVar39 >> 8) + 1);
                          *pbVar37 = (char)((0x100 - (uVar48 >> 8)) * (uint)*pbVar37 >> 8) +
                                     (char)(uVar48 >> 8);
                          pbVar52 = pbVar52 + 4;
                          pbVar37 = pbVar37 + lVar36;
                          uVar31 = uVar31 - 1;
                        } while (1 < uVar31);
                      }
                      else {
                        pbVar52 = (byte *)((long)local_90 + 3);
                        do {
                          *pbVar37 = (char)((0x100 - (uint)*pbVar52) * (uint)*pbVar37 >> 8) +
                                     *pbVar52;
                          pbVar52 = pbVar52 + 4;
                          pbVar37 = pbVar37 + lVar36;
                          uVar50 = uVar50 - 1;
                        } while (1 < uVar50);
                      }
                    }
                  }
                  uVar48 = (uint)uVar42;
                  uVar58 = (uVar48 & 0xff) * uVar45;
                }
                uVar31 = uVar30 - 1;
                puVar55 = puVar55 + 2;
              } while (2 < (int)uVar30);
              uVar31 = uVar58 + 0xff;
              if (-1 < (int)uVar58) {
                uVar31 = uVar58;
              }
              lVar36 = local_60;
              puVar53 = local_78;
              puVar38 = local_120;
              iVar39 = (int)local_68;
              if (0xff < (int)uVar58) {
                if (uVar58 < 0xff00) {
                  TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true>::
                  generate<juce::PixelARGB>
                            ((TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true> *)
                             &local_108,local_140,iVar32,1);
                  lVar36 = (long)(int)local_c0[3] * (long)iVar32;
                  uVar31 = (local_140[0] >> 0x18) *
                           ((((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8) + 1);
                  cVar47 = (char)((0x100 - (uVar31 >> 8)) * (uint)*(byte *)(local_98 + lVar36) >> 8)
                           + (char)(uVar31 >> 8);
                }
                else {
                  TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true>::
                  generate<juce::PixelARGB>
                            ((TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,true> *)
                             &local_108,local_140,iVar32,1);
                  lVar36 = (long)(int)local_c0[3] * (long)iVar32;
                  uVar31 = (local_140[0] >> 0x18) * (local_b0 + 1);
                  cVar47 = (char)((0x100 - (uVar31 >> 8)) * (uint)*(byte *)(local_98 + lVar36) >> 8)
                           + (char)(uVar31 >> 8);
                }
                *(char *)(local_98 + lVar36) = cVar47;
                lVar36 = local_60;
                puVar53 = local_78;
                puVar38 = local_120;
                param_2 = local_c0;
                auVar72 = _DAT_005dd240;
                iVar39 = (int)local_68;
                iVar43 = _DAT_005dd3c0;
                iVar29 = _UNK_005dd3c4;
                iVar35 = _UNK_005dd3c8;
                iVar44 = _UNK_005dd3cc;
              }
            }
            puVar53 = puVar53 + lVar36;
            iVar39 = iVar39 + 1;
          } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
        }
        goto LAB_00346361;
      }
      if (param_7 == '\0') {
        fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
        dVar70 = (double)fVar71;
        dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                                  _DAT_005d91b0 & SUB84(dVar70,0));
        if (dVar69 == DAT_005d94e0) {
          if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_00345e8a;
LAB_0033e279:
          dVar70 = _DAT_005d9000 / dVar70;
          fVar67 = (float)((double)param_5[4] * dVar70);
          fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
          fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
          fVar71 = (float)((double)*param_5 * dVar70);
          local_108 = CONCAT44(fVar62,fVar67);
          uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                       fVar62 * param_5[5]);
          local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 -
                              param_5[5] * fVar71,fVar71);
        }
        else {
          if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033e279;
LAB_00345e8a:
          local_f8 = *(undefined8 *)(param_5 + 4);
          local_108 = *(undefined8 *)param_5;
          uStack_100 = *(undefined8 *)(param_5 + 2);
        }
        local_c8 = 0.0;
        if (param_6 != 0) {
          local_c8 = DAT_005d9044;
        }
        local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
        local_b0 = param_4 + 1;
        local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
        local_a4 = (int)param_3[4] - 1;
        local_88 = 0x800;
        local_90 = malloc(0x800);
        if (0 < *(int *)((long)local_120 + 0x1c)) {
          puVar53 = (uint *)*local_120;
          iVar39 = 0;
          puVar38 = local_120;
          do {
            puVar55 = (uint *)(long)*(int *)((long)puVar38 + 0x24);
            uVar31 = *puVar53;
            if (1 < (int)uVar31) {
              puVar51 = puVar53 + 1;
              uVar48 = puVar53[1];
              local_70 = (uint *)CONCAT44(local_70._4_4_,iVar39);
              lVar36 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
              local_a0 = (int)lVar36;
              local_98 = *(int *)((long)param_2 + 0x14) * lVar36 + *param_2;
              uVar58 = 0;
              local_118 = puVar53;
              local_78 = puVar55;
              do {
                uVar34 = puVar51[2];
                plVar27 = (long *)(ulong)uVar34;
                uVar30 = uVar34 + 0xff;
                if (-1 < (int)uVar34) {
                  uVar30 = uVar34;
                }
                uVar45 = puVar51[1];
                iVar43 = (int)uVar30 >> 8;
                uVar30 = uVar48 + 0xff;
                if (-1 < (int)uVar48) {
                  uVar30 = uVar48;
                }
                iVar39 = (int)uVar30 >> 8;
                uVar30 = iVar43 - iVar39;
                if (uVar30 == 0) {
                  uVar58 = (uVar34 - uVar48) * uVar45 + uVar58;
                  uVar30 = uVar31;
                  uVar48 = uVar34;
                }
                else {
                  iVar29 = (0x100 - (uVar48 & 0xff)) * uVar45;
                  uVar34 = iVar29 + uVar58;
                  uVar48 = iVar29 + uVar58 + 0xff;
                  if (-1 < (int)uVar34) {
                    uVar48 = uVar34;
                  }
                  if (0xff < (int)uVar34) {
                    local_138 = CONCAT44(local_138._4_4_,uVar45);
                    local_130 = plVar27;
                    if (uVar34 < 0xff00) {
                      TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false>::
                      generate<juce::PixelAlpha>
                                ((TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false> *)
                                 &local_108,(undefined1 *)local_140,iVar39,1);
                      lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                      uVar48 = (local_140[0] & 0xff) *
                               ((((int)uVar48 >> 8 & 0xffU) * local_b0 >> 8) + 1);
                      cVar47 = (char)((0x100 - (uVar48 >> 8)) * (uint)*(byte *)(local_98 + lVar36)
                                     >> 8) + (char)(uVar48 >> 8);
                    }
                    else {
                      TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false>::
                      generate<juce::PixelAlpha>
                                ((TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false> *)
                                 &local_108,(undefined1 *)local_140,iVar39,1);
                      lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                      uVar48 = (local_140[0] & 0xff) * (local_b0 + 1);
                      cVar47 = (char)((0x100 - (uVar48 >> 8)) * (uint)*(byte *)(local_98 + lVar36)
                                     >> 8) + (char)(uVar48 >> 8);
                    }
                    *(char *)(local_98 + lVar36) = cVar47;
                    plVar27 = local_130;
                    param_2 = local_c0;
                    uVar45 = (uint)local_138;
                  }
                  if (0 < (int)uVar45) {
                    iVar29 = (int)((long)iVar39 + 1);
                    uVar48 = iVar43 - iVar29;
                    if (uVar48 != 0 && iVar29 <= iVar43) {
                      local_128 = (uint *)CONCAT44(local_128._4_4_,iVar43);
                      local_138 = CONCAT44(local_138._4_4_,uVar45);
                      local_130 = plVar27;
                      local_110 = (uint *)(ulong)uVar31;
                      if ((int)local_88 < (int)uVar48) {
                        local_88 = (ulong)uVar48;
                        free(local_90);
                        local_90 = malloc((ulong)uVar48);
                        uVar45 = (uint)local_138;
                      }
                      puVar53 = local_90;
                      TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false>::
                      generate<juce::PixelAlpha>
                                ((TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false> *)
                                 &local_108,(undefined1 *)local_90,iVar29,uVar48);
                      lVar36 = (long)(int)local_c0[3];
                      pbVar37 = (byte *)(((long)iVar39 + 1) * lVar36 + local_98);
                      iVar43 = (uVar45 & 0xff) * local_b0;
                      uVar31 = (uint)local_110;
                      if (iVar43 < 0xfe00) {
                        uVar48 = (int)local_128 - iVar39;
                        do {
                          uVar58 = *puVar53;
                          puVar53 = (uint *)((long)puVar53 + 1);
                          uVar58 = (uint)(byte)uVar58 * ((iVar43 >> 8) + 1);
                          *pbVar37 = (char)((0x100 - (uVar58 >> 8)) * (uint)*pbVar37 >> 8) +
                                     (char)(uVar58 >> 8);
                          pbVar37 = pbVar37 + lVar36;
                          uVar48 = uVar48 - 1;
                        } while (1 < uVar48);
                      }
                      else {
                        do {
                          uVar48 = *puVar53;
                          puVar53 = (uint *)((long)puVar53 + 1);
                          *pbVar37 = (char)((0x100 - (uint)(byte)uVar48) * (uint)*pbVar37 >> 8) +
                                     (byte)uVar48;
                          pbVar37 = pbVar37 + lVar36;
                          uVar30 = uVar30 - 1;
                        } while (1 < uVar30);
                      }
                      plVar27 = local_130;
                      param_2 = local_c0;
                      uVar45 = (uint)local_138;
                      iVar43 = (int)local_128;
                    }
                  }
                  uVar58 = ((uint)plVar27 & 0xff) * uVar45;
                  uVar30 = uVar31;
                  uVar48 = (uint)plVar27;
                }
                puVar55 = local_78;
                puVar53 = local_118;
                uVar31 = uVar30 - 1;
                puVar51 = puVar51 + 2;
              } while (2 < (int)uVar30);
              uVar31 = uVar58 + 0xff;
              if (-1 < (int)uVar58) {
                uVar31 = uVar58;
              }
              iVar39 = (int)local_70;
              puVar38 = local_120;
              if (0xff < (int)uVar58) {
                if (uVar58 < 0xff00) {
                  TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false>::
                  generate<juce::PixelAlpha>
                            ((TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false> *)
                             &local_108,(undefined1 *)local_140,iVar43,1);
                  lVar36 = (long)(int)local_c0[3] * (long)iVar43;
                  uVar31 = (local_140[0] & 0xff) *
                           ((((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8) + 1);
                  cVar47 = (char)((0x100 - (uVar31 >> 8)) * (uint)*(byte *)(local_98 + lVar36) >> 8)
                           + (char)(uVar31 >> 8);
                }
                else {
                  TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false>::
                  generate<juce::PixelAlpha>
                            ((TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false> *)
                             &local_108,(undefined1 *)local_140,iVar43,1);
                  lVar36 = (long)(int)local_c0[3] * (long)iVar43;
                  uVar31 = (local_140[0] & 0xff) * (local_b0 + 1);
                  cVar47 = (char)((0x100 - (uVar31 >> 8)) * (uint)*(byte *)(local_98 + lVar36) >> 8)
                           + (char)(uVar31 >> 8);
                }
                *(char *)(local_98 + lVar36) = cVar47;
                puVar38 = local_120;
                param_2 = local_c0;
              }
            }
            puVar53 = puVar53 + (long)puVar55;
            iVar39 = iVar39 + 1;
          } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
        }
        goto LAB_00346361;
      }
      fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
      dVar70 = (double)fVar71;
      dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                                _DAT_005d91b0 & SUB84(dVar70,0));
      if (dVar69 == DAT_005d94e0) {
        if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_003422ea;
LAB_0033d8e9:
        dVar70 = _DAT_005d9000 / dVar70;
        fVar67 = (float)((double)param_5[4] * dVar70);
        fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
        fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
        fVar71 = (float)((double)*param_5 * dVar70);
        local_108 = CONCAT44(fVar62,fVar67);
        uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                     fVar62 * param_5[5]);
        local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 - param_5[5] * fVar71
                            ,fVar71);
      }
      else {
        if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033d8e9;
LAB_003422ea:
        local_f8 = *(undefined8 *)(param_5 + 4);
        local_108 = *(undefined8 *)param_5;
        uStack_100 = *(undefined8 *)(param_5 + 2);
      }
      local_c8 = 0.0;
      if (param_6 != 0) {
        local_c8 = DAT_005d9044;
      }
      local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
      local_b0 = param_4 + 1;
      local_110 = (uint *)(ulong)local_b0;
      local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
      local_a4 = (int)param_3[4] - 1;
      local_88 = 0x800;
      local_90 = malloc(0x800);
      if (0 < *(int *)((long)local_120 + 0x1c)) {
        puVar53 = (uint *)*local_120;
        iVar39 = 0;
        puVar38 = local_120;
        fVar71 = _DAT_005dd2d0;
        fVar62 = _UNK_005dd2d4;
        fVar64 = DAT_005d9038;
        fVar67 = DAT_005de53c;
        do {
          lVar36 = (long)*(int *)((long)puVar38 + 0x24);
          uVar31 = *puVar53;
          if (1 < (int)uVar31) {
            puVar55 = puVar53 + 1;
            uVar48 = puVar53[1];
            lVar56 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
            local_a0 = (int)lVar56;
            local_98 = *(int *)((long)param_2 + 0x14) * lVar56 + *param_2;
            uVar58 = 0;
            local_60 = local_98;
            local_54 = iVar39;
            local_40 = puVar53;
            local_38 = lVar36;
            do {
              puVar51 = (uint *)(ulong)uVar31;
              uVar34 = puVar55[2];
              puVar53 = (uint *)(ulong)uVar34;
              uVar30 = uVar34 + 0xff;
              if (-1 < (int)uVar34) {
                uVar30 = uVar34;
              }
              uVar45 = puVar55[1];
              iVar43 = (int)uVar30 >> 8;
              uVar30 = uVar48 + 0xff;
              if (-1 < (int)uVar48) {
                uVar30 = uVar48;
              }
              iVar39 = (int)uVar30 >> 8;
              iVar29 = iVar43 - iVar39;
              if (iVar29 == 0) {
                uVar58 = (uVar34 - uVar48) * uVar45 + uVar58;
                uVar30 = uVar31;
                uVar48 = uVar34;
              }
              else {
                iVar35 = (0x100 - (uVar48 & 0xff)) * uVar45;
                uVar48 = iVar35 + uVar58;
                uVar31 = iVar35 + uVar58 + 0xff;
                if (-1 < (int)uVar48) {
                  uVar31 = uVar48;
                }
                if (0xff < (int)uVar48) {
                  local_50 = (uint *)CONCAT44(local_50._4_4_,uVar31);
                  local_138 = CONCAT44(local_138._4_4_,uVar45);
                  local_70 = (uint *)CONCAT44(local_70._4_4_,iVar43);
                  local_68 = CONCAT44(local_68._4_4_,iVar39);
                  fVar60 = (float)iVar39 + local_c8;
                  fVar68 = local_108._4_4_ * ((float)local_a0 + local_c8);
                  fVar65 = ((float)local_a0 + local_c8) * (float)local_f8;
                  uVar58 = (uint)(((float)local_108 * fVar60 + fVar68 + (float)uStack_100) * fVar67)
                  ;
                  iVar44 = (int)(((float)local_108 * (fVar60 + fVar64) + fVar68 + (float)uStack_100)
                                * fVar67);
                  uStack_ec = 1;
                  local_58 = uVar58 + local_c4;
                  local_e0 = 1;
                  uStack_e8 = ~uVar58 + iVar44;
                  uVar34 = (uint)((fVar60 * uStack_100._4_4_ + fVar65 + local_f8._4_4_) * fVar67);
                  iVar35 = (int)(((fVar60 + fVar64) * uStack_100._4_4_ + fVar65 + local_f8._4_4_) *
                                fVar67);
                  local_d8 = 1;
                  uVar58 = uVar34 + local_c4;
                  local_cc = 1;
                  local_d4 = ~uVar34 + iVar35;
                  local_48 = (long)*(int *)((long)local_b8 + 0x14);
                  lVar36 = (long)(int)local_b8[3];
                  uStack_f0 = iVar44 + local_c4;
                  local_dc = local_c4 + iVar35;
                  iVar35 = (int)(CONCAT44((int)local_58 >> 0x1f,(int)local_58 >> 8) %
                                (long)(int)*(uint *)((long)local_b8 + 0x1c));
                  uVar30 = (iVar35 >> 0x1f & *(uint *)((long)local_b8 + 0x1c)) + iVar35;
                  iVar35 = (int)(CONCAT44((int)uVar58 >> 0x1f,(int)uVar58 >> 8) %
                                (long)(int)*(uint *)(local_b8 + 4));
                  uVar34 = (iVar35 >> 0x1f & *(uint *)(local_b8 + 4)) + iVar35;
                  pbVar37 = (byte *)((int)uVar30 * lVar36 + (int)uVar34 * local_48 + *local_b8);
                  local_e4 = 0;
                  local_d0 = 0;
                  if (uVar48 < 0xff00) {
                    if (local_a4 <= uVar34 || (local_a8 <= uVar30 || local_ac == 0)) {
                      bVar28 = *pbVar37;
                    }
                    else {
                      iVar35 = 0x100 - (local_58 & 0xff);
                      bVar28 = (byte)(((uint)pbVar37[local_48] * iVar35 +
                                      (uint)pbVar37[local_48 + lVar36] * (local_58 & 0xff)) *
                                      (uVar58 & 0xff) +
                                      ((uint)pbVar37[lVar36] * (local_58 & 0xff) +
                                      (uint)*pbVar37 * iVar35) * (0x100 - (uVar58 & 0xff)) + 0x8000
                                     >> 0x10);
                    }
                    lVar36 = (long)iVar39 * (long)(int)param_2[3];
                    uVar31 = ((int)uVar31 >> 8 & 0xffU) * (uint)local_110 >> 8;
                  }
                  else {
                    if (local_a4 <= uVar34 || (local_a8 <= uVar30 || local_ac == 0)) {
                      bVar28 = *pbVar37;
                    }
                    else {
                      iVar35 = 0x100 - (local_58 & 0xff);
                      bVar28 = (byte)(((uint)pbVar37[local_48] * iVar35 +
                                      (uint)pbVar37[local_48 + lVar36] * (local_58 & 0xff)) *
                                      (uVar58 & 0xff) +
                                      ((uint)pbVar37[lVar36] * (local_58 & 0xff) +
                                      (uint)*pbVar37 * iVar35) * (0x100 - (uVar58 & 0xff)) + 0x8000
                                     >> 0x10);
                    }
                    lVar36 = (long)iVar39 * (long)(int)param_2[3];
                    uVar31 = (uint)local_110;
                  }
                  uVar31 = (uint)bVar28 * (uVar31 + 1);
                  *(byte *)(lVar36 + local_60) =
                       (char)((0x100 - (uVar31 >> 8)) * (uint)*(byte *)(lVar36 + local_60) >> 8) +
                       (char)(uVar31 >> 8);
                  local_130 = param_2;
                  local_128 = puVar51;
                  local_118 = puVar55;
                  local_78 = puVar53;
                }
                if (0 < (int)uVar45) {
                  iVar35 = (int)((long)iVar39 + 1);
                  uVar31 = iVar43 - iVar35;
                  if (uVar31 != 0 && iVar35 <= iVar43) {
                    local_70 = (uint *)CONCAT44(local_70._4_4_,iVar43);
                    local_138 = CONCAT44(local_138._4_4_,uVar45);
                    local_68 = CONCAT44(local_68._4_4_,iVar39);
                    if ((int)local_88 < (int)uVar31) {
                      local_128 = puVar51;
                      local_118 = puVar55;
                      local_88 = (ulong)uVar31;
                      local_78 = puVar53;
                      free(local_90);
                      local_90 = malloc((ulong)uVar31);
                      fVar71 = _DAT_005dd2d0;
                      fVar62 = _UNK_005dd2d4;
                      fVar64 = DAT_005d9038;
                      fVar67 = DAT_005de53c;
                    }
                    else {
                      local_128 = puVar51;
                      local_118 = puVar55;
                      local_78 = puVar53;
                    }
                    fVar65 = (float)iVar35 + local_c8;
                    fVar68 = local_108._4_4_ * ((float)local_a0 + local_c8);
                    fVar60 = ((float)local_a0 + local_c8) * (float)local_f8;
                    iVar43 = (int)(((float)uStack_100 + (float)local_108 * fVar65 + fVar68) * fVar62
                                  );
                    lVar36 = (long)((int)(((float)uStack_100 +
                                          (float)local_108 * ((float)(int)uVar31 + fVar65) + fVar68)
                                         * fVar71) - iVar43);
                    uVar42 = lVar36 / (long)(int)uVar31;
                    uVar49 = lVar36 % (long)(int)uVar31;
                    local_e0 = (uint)uVar49;
                    uVar49 = uVar49 & 0xffffffff;
                    uStack_e8 = (uint)uVar42;
                    uVar42 = uVar42 & 0xffffffff;
                    if ((int)local_e0 < 1) {
                      local_e0 = local_e0 + uVar31;
                      uVar49 = (ulong)local_e0;
                      uStack_e8 = uStack_e8 - 1;
                      uVar42 = (ulong)uStack_e8;
                    }
                    iVar35 = (int)((local_f8._4_4_ + uStack_100._4_4_ * fVar65 + fVar60) * fVar62);
                    local_cc = (int)((local_f8._4_4_ +
                                     uStack_100._4_4_ * ((float)(int)uVar31 + fVar65) + fVar60) *
                                    fVar71) - iVar35;
                    local_d4 = local_cc / (int)uVar31;
                    local_cc = local_cc % (int)uVar31;
                    local_dc = iVar35 + local_c4;
                    if (local_cc < 1) {
                      local_cc = local_cc + uVar31;
                      local_d4 = local_d4 + -1;
                    }
                    local_130 = (long *)CONCAT44(local_130._4_4_,(uint)(byte)local_138);
                    local_e4 = (int)uVar49 - uVar31;
                    local_d0 = local_cc - uVar31;
                    puVar53 = local_90;
                    uVar48 = uVar31;
                    uVar58 = local_c4 + iVar43;
                    while( true ) {
                      uVar34 = local_dc;
                      uStack_f0 = (int)uVar42 + uVar58;
                      bVar59 = SCARRY4(local_e4,(int)uVar49);
                      local_e4 = local_e4 + (int)uVar49;
                      if (local_e4 != 0 && bVar59 == local_e4 < 0) {
                        local_e4 = local_e4 - uVar31;
                        uStack_f0 = uStack_f0 + 1;
                      }
                      local_dc = local_d4 + local_dc;
                      bVar59 = SCARRY4(local_d0,local_cc);
                      local_d0 = local_d0 + local_cc;
                      if (local_d0 != 0 && bVar59 == local_d0 < 0) {
                        local_d0 = local_d0 - uVar31;
                        local_dc = local_dc + 1;
                      }
                      iVar43 = (int)(CONCAT44((int)uVar58 >> 0x1f,(int)uVar58 >> 8) %
                                    (long)(int)*(uint *)((long)local_b8 + 0x1c));
                      uVar30 = (iVar43 >> 0x1f & *(uint *)((long)local_b8 + 0x1c)) + iVar43;
                      iVar43 = (int)(CONCAT44((int)uVar34 >> 0x1f,(int)uVar34 >> 8) %
                                    (long)(int)*(uint *)(local_b8 + 4));
                      uVar45 = (iVar43 >> 0x1f & *(uint *)(local_b8 + 4)) + iVar43;
                      lVar36 = (long)*(int *)((long)local_b8 + 0x14);
                      lVar56 = (long)(int)local_b8[3];
                      pbVar37 = (byte *)((int)uVar30 * lVar56 + (int)uVar45 * lVar36 + *local_b8);
                      if (((local_ac == 0) || (local_a8 <= uVar30)) || (local_a4 <= uVar45)) {
                        *(byte *)puVar53 = *pbVar37;
                      }
                      else {
                        uVar58 = uVar58 & 0xff;
                        *(byte *)puVar53 =
                             (byte)((pbVar37[lVar56] * uVar58 + (uint)*pbVar37 * (0x100 - uVar58)) *
                                    (0x100 - (uVar34 & 0xff)) +
                                    ((uint)pbVar37[lVar36] * (0x100 - uVar58) +
                                    pbVar37[lVar36 + lVar56] * uVar58) * (uVar34 & 0xff) + 0x8000 >>
                                   0x10);
                      }
                      if ((int)uVar48 < 2) break;
                      uVar48 = uVar48 - 1;
                      puVar53 = (uint *)((long)puVar53 + 1);
                      uVar42 = (ulong)uStack_e8;
                      uVar49 = (ulong)local_e0;
                      uVar58 = uStack_f0;
                    }
                    lVar36 = (long)(int)local_c0[3];
                    local_60 = local_98;
                    pbVar37 = (byte *)(((long)iVar39 + 1) * lVar36 + local_98);
                    local_110 = (uint *)(ulong)local_b0;
                    iVar39 = (byte)local_138 * local_b0;
                    puVar53 = local_90;
                    if (iVar39 < 0xfe00) {
                      iVar43 = (int)local_70 - (int)local_68;
                      do {
                        uVar48 = *puVar53;
                        puVar53 = (uint *)((long)puVar53 + 1);
                        uVar48 = (uint)(byte)uVar48 * ((iVar39 >> 8) + 1);
                        *pbVar37 = (char)((0x100 - (uVar48 >> 8)) * (uint)*pbVar37 >> 8) +
                                   (char)(uVar48 >> 8);
                        pbVar37 = pbVar37 + lVar36;
                        iVar43 = iVar43 + -1;
                      } while (1 < iVar43);
                    }
                    else {
                      do {
                        uVar48 = *puVar53;
                        puVar53 = (uint *)((long)puVar53 + 1);
                        *pbVar37 = (char)((0x100 - (uint)(byte)uVar48) * (uint)*pbVar37 >> 8) +
                                   (byte)uVar48;
                        pbVar37 = pbVar37 + lVar36;
                        iVar29 = iVar29 + -1;
                      } while (1 < iVar29);
                    }
                    puVar55 = local_118;
                    puVar53 = local_78;
                    puVar51 = local_128;
                    param_2 = local_c0;
                    uVar45 = (uint)local_138;
                    iVar43 = (int)local_70;
                    uStack_ec = uVar31;
                    local_d8 = uVar31;
                  }
                }
                uVar58 = ((uint)puVar53 & 0xff) * uVar45;
                uVar30 = (uint)puVar51;
                uVar48 = (uint)puVar53;
              }
              lVar36 = local_38;
              puVar53 = local_40;
              iVar39 = local_54;
              uVar31 = uVar30 - 1;
              puVar55 = puVar55 + 2;
            } while (2 < (int)uVar30);
            uVar31 = uVar58 + 0xff;
            if (-1 < (int)uVar58) {
              uVar31 = uVar58;
            }
            puVar38 = local_120;
            if (0xff < (int)uVar58) {
              if (uVar58 < 0xff00) {
                TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,true>::
                generate<juce::PixelAlpha>((float *)&local_108,(byte *)local_140,iVar43);
                lVar56 = (long)(int)local_c0[3] * (long)iVar43;
                uVar31 = (local_140[0] & 0xff) * ((((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8) + 1);
                cVar47 = (char)((0x100 - (uVar31 >> 8)) * (uint)*(byte *)(local_98 + lVar56) >> 8) +
                         (char)(uVar31 >> 8);
              }
              else {
                TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,true>::
                generate<juce::PixelAlpha>((float *)&local_108,(byte *)local_140,iVar43);
                lVar56 = (long)(int)local_c0[3] * (long)iVar43;
                uVar31 = (local_140[0] & 0xff) * (local_b0 + 1);
                cVar47 = (char)((0x100 - (uVar31 >> 8)) * (uint)*(byte *)(local_98 + lVar56) >> 8) +
                         (char)(uVar31 >> 8);
              }
              local_110 = (uint *)(ulong)local_b0;
              *(char *)(local_98 + lVar56) = cVar47;
              puVar38 = local_120;
              param_2 = local_c0;
              fVar71 = _DAT_005dd2d0;
              fVar62 = _UNK_005dd2d4;
              fVar64 = DAT_005d9038;
              fVar67 = DAT_005de53c;
            }
          }
          puVar53 = puVar53 + lVar36;
          iVar39 = iVar39 + 1;
        } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
      }
      goto LAB_00346361;
    }
    if (param_7 == '\0') {
      fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
      dVar70 = (double)fVar71;
      dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                                _DAT_005d91b0 & SUB84(dVar70,0));
      if (dVar69 == DAT_005d94e0) {
        if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_0034599d;
LAB_0033e169:
        dVar70 = _DAT_005d9000 / dVar70;
        fVar67 = (float)((double)param_5[4] * dVar70);
        fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
        fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
        fVar71 = (float)((double)*param_5 * dVar70);
        local_108 = CONCAT44(fVar62,fVar67);
        uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                     fVar62 * param_5[5]);
        local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 - param_5[5] * fVar71
                            ,fVar71);
      }
      else {
        if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033e169;
LAB_0034599d:
        local_f8 = *(undefined8 *)(param_5 + 4);
        local_108 = *(undefined8 *)param_5;
        uStack_100 = *(undefined8 *)(param_5 + 2);
      }
      local_c8 = 0.0;
      if (param_6 != 0) {
        local_c8 = DAT_005d9044;
      }
      local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
      local_b0 = param_4 + 1;
      local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
      local_a4 = (int)param_3[4] - 1;
      local_88 = 0x800;
      local_90 = malloc(0x1800);
      if (0 < *(int *)((long)local_120 + 0x1c)) {
        puVar53 = (uint *)*local_120;
        iVar39 = 0;
        puVar38 = local_120;
        do {
          puVar55 = (uint *)(long)*(int *)((long)puVar38 + 0x24);
          uVar31 = *puVar53;
          if (1 < (int)uVar31) {
            puVar51 = puVar53 + 1;
            uVar48 = puVar53[1];
            local_70 = (uint *)CONCAT44(local_70._4_4_,iVar39);
            lVar36 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
            local_a0 = (int)lVar36;
            local_98 = *(int *)((long)param_2 + 0x14) * lVar36 + *param_2;
            uVar58 = 0;
            local_118 = puVar53;
            local_78 = puVar55;
            do {
              uVar34 = puVar51[2];
              plVar27 = (long *)(ulong)uVar34;
              uVar30 = uVar34 + 0xff;
              if (-1 < (int)uVar34) {
                uVar30 = uVar34;
              }
              uVar45 = puVar51[1];
              iVar43 = (int)uVar30 >> 8;
              uVar30 = uVar48 + 0xff;
              if (-1 < (int)uVar48) {
                uVar30 = uVar48;
              }
              iVar39 = (int)uVar30 >> 8;
              uVar30 = iVar43 - iVar39;
              if (uVar30 == 0) {
                uVar58 = (uVar34 - uVar48) * uVar45 + uVar58;
                uVar30 = uVar31;
                uVar48 = uVar34;
              }
              else {
                iVar29 = (0x100 - (uVar48 & 0xff)) * uVar45;
                uVar34 = iVar29 + uVar58;
                uVar48 = iVar29 + uVar58 + 0xff;
                if (-1 < (int)uVar34) {
                  uVar48 = uVar34;
                }
                if (0xff < (int)uVar34) {
                  local_138 = CONCAT44(local_138._4_4_,uVar45);
                  local_130 = plVar27;
                  if (uVar34 < 0xff00) {
                    TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false>::
                    generate<juce::PixelRGB>
                              ((TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false> *)
                               &local_108,(long)local_140,iVar39,1);
                    lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                    uVar48 = (((int)uVar48 >> 8 & 0xffU) * local_b0 >> 8) * 0xff + 0xff;
                    cVar47 = (char)((0x100 - (uVar48 >> 8)) * (uint)*(byte *)(local_98 + lVar36) >>
                                   8) + (char)(uVar48 >> 8);
                  }
                  else {
                    TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false>::
                    generate<juce::PixelRGB>
                              ((TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false> *)
                               &local_108,(long)local_140,iVar39,1);
                    lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                    uVar48 = local_b0 * 0xff + 0xff;
                    cVar47 = (char)((0x100 - (uVar48 >> 8)) * (uint)*(byte *)(local_98 + lVar36) >>
                                   8) + (char)(uVar48 >> 8);
                  }
                  *(char *)(local_98 + lVar36) = cVar47;
                  plVar27 = local_130;
                  param_2 = local_c0;
                  uVar45 = (uint)local_138;
                }
                if (0 < (int)uVar45) {
                  iVar29 = (int)((long)iVar39 + 1);
                  uVar48 = iVar43 - iVar29;
                  if (uVar48 != 0 && iVar29 <= iVar43) {
                    local_110 = (uint *)CONCAT44(local_110._4_4_,iVar43);
                    local_138 = CONCAT44(local_138._4_4_,uVar45);
                    local_130 = plVar27;
                    local_128 = (uint *)(ulong)uVar31;
                    if ((int)local_88 < (int)uVar48) {
                      local_88 = (ulong)uVar48;
                      free(local_90);
                      local_90 = malloc((ulong)uVar48 * 3);
                      uVar45 = (uint)local_138;
                    }
                    TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false>::
                    generate<juce::PixelRGB>
                              ((TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false> *)
                               &local_108,(long)local_90,iVar29,uVar48);
                    lVar36 = (long)(int)local_c0[3];
                    pbVar37 = (byte *)(((long)iVar39 + 1) * lVar36 + local_98);
                    uVar48 = (uVar45 & 0xff) * local_b0;
                    uVar31 = (uint)local_128;
                    if ((int)uVar48 < 0xfe00) {
                      uVar58 = ((uVar48 & 0xffffff00) - ((int)uVar48 >> 8)) + 0xff;
                      uVar48 = (uint)local_110 - iVar39;
                      do {
                        *pbVar37 = (char)((uint)*pbVar37 * (0x100 - (uVar58 >> 8)) >> 8) +
                                   (char)(uVar58 >> 8);
                        pbVar37 = pbVar37 + lVar36;
                        uVar48 = uVar48 - 1;
                      } while (1 < uVar48);
                    }
                    else {
                      do {
                        *pbVar37 = 0xff;
                        pbVar37 = pbVar37 + lVar36;
                        uVar30 = uVar30 - 1;
                      } while (1 < uVar30);
                    }
                    plVar27 = local_130;
                    param_2 = local_c0;
                    uVar45 = (uint)local_138;
                    iVar43 = (uint)local_110;
                  }
                }
                uVar58 = ((uint)plVar27 & 0xff) * uVar45;
                uVar30 = uVar31;
                uVar48 = (uint)plVar27;
              }
              puVar55 = local_78;
              puVar53 = local_118;
              uVar31 = uVar30 - 1;
              puVar51 = puVar51 + 2;
            } while (2 < (int)uVar30);
            uVar31 = uVar58 + 0xff;
            if (-1 < (int)uVar58) {
              uVar31 = uVar58;
            }
            iVar39 = (int)local_70;
            puVar38 = local_120;
            if (0xff < (int)uVar58) {
              if (uVar58 < 0xff00) {
                TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false>::
                generate<juce::PixelRGB>
                          ((TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false> *)&local_108
                           ,(long)local_140,iVar43,1);
                lVar36 = (long)(int)local_c0[3] * (long)iVar43;
                uVar31 = (((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8) * 0xff + 0xff;
                cVar47 = (char)((0x100 - (uVar31 >> 8)) * (uint)*(byte *)(local_98 + lVar36) >> 8) +
                         (char)(uVar31 >> 8);
              }
              else {
                TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false>::
                generate<juce::PixelRGB>
                          ((TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false> *)&local_108
                           ,(long)local_140,iVar43,1);
                lVar36 = (long)(int)local_c0[3] * (long)iVar43;
                uVar31 = local_b0 * 0xff + 0xff;
                cVar47 = (char)((0x100 - (uVar31 >> 8)) * (uint)*(byte *)(local_98 + lVar36) >> 8) +
                         (char)(uVar31 >> 8);
              }
              *(char *)(local_98 + lVar36) = cVar47;
              puVar38 = local_120;
              param_2 = local_c0;
            }
          }
          puVar53 = puVar53 + (long)puVar55;
          iVar39 = iVar39 + 1;
        } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
      }
      goto LAB_00346361;
    }
    fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
    dVar70 = (double)fVar71;
    dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                              _DAT_005d91b0 & SUB84(dVar70,0));
    if (dVar69 == DAT_005d94e0) {
      if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_00341e04;
LAB_0033d7d1:
      dVar70 = _DAT_005d9000 / dVar70;
      fVar67 = (float)((double)param_5[4] * dVar70);
      fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
      fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
      fVar71 = (float)((double)*param_5 * dVar70);
      local_108 = CONCAT44(fVar62,fVar67);
      uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                   fVar62 * param_5[5]);
      local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 - param_5[5] * fVar71,
                          fVar71);
    }
    else {
      if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033d7d1;
LAB_00341e04:
      local_f8 = *(undefined8 *)(param_5 + 4);
      local_108 = *(undefined8 *)param_5;
      uStack_100 = *(undefined8 *)(param_5 + 2);
    }
    local_c8 = 0.0;
    if (param_6 != 0) {
      local_c8 = DAT_005d9044;
    }
    local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
    local_b0 = param_4 + 1;
    local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
    local_a4 = (int)param_3[4] - 1;
    local_88 = 0x800;
    local_90 = malloc(0x1800);
    if (0 < *(int *)((long)local_120 + 0x1c)) {
      puVar53 = (uint *)*local_120;
      iVar39 = 0;
      puVar38 = local_120;
      do {
        puVar55 = (uint *)(long)*(int *)((long)puVar38 + 0x24);
        uVar31 = *puVar53;
        if (1 < (int)uVar31) {
          puVar51 = puVar53 + 1;
          uVar48 = puVar53[1];
          local_70 = (uint *)CONCAT44(local_70._4_4_,iVar39);
          lVar36 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
          local_a0 = (int)lVar36;
          local_98 = *(int *)((long)param_2 + 0x14) * lVar36 + *param_2;
          uVar58 = 0;
          local_118 = puVar53;
          local_78 = puVar55;
          do {
            uVar34 = puVar51[2];
            plVar27 = (long *)(ulong)uVar34;
            uVar30 = uVar34 + 0xff;
            if (-1 < (int)uVar34) {
              uVar30 = uVar34;
            }
            uVar45 = puVar51[1];
            iVar43 = (int)uVar30 >> 8;
            uVar30 = uVar48 + 0xff;
            if (-1 < (int)uVar48) {
              uVar30 = uVar48;
            }
            iVar39 = (int)uVar30 >> 8;
            uVar30 = iVar43 - iVar39;
            if (uVar30 == 0) {
              uVar58 = (uVar34 - uVar48) * uVar45 + uVar58;
              uVar30 = uVar31;
              uVar48 = uVar34;
            }
            else {
              iVar29 = (0x100 - (uVar48 & 0xff)) * uVar45;
              uVar34 = iVar29 + uVar58;
              uVar48 = iVar29 + uVar58 + 0xff;
              if (-1 < (int)uVar34) {
                uVar48 = uVar34;
              }
              if (0xff < (int)uVar34) {
                local_138 = CONCAT44(local_138._4_4_,uVar45);
                local_130 = plVar27;
                if (uVar34 < 0xff00) {
                  TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true>::
                  generate<juce::PixelRGB>
                            ((TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true> *)
                             &local_108,(long)local_140,iVar39,1);
                  lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                  uVar48 = (((int)uVar48 >> 8 & 0xffU) * local_b0 >> 8) * 0xff + 0xff;
                  cVar47 = (char)((0x100 - (uVar48 >> 8)) * (uint)*(byte *)(local_98 + lVar36) >> 8)
                           + (char)(uVar48 >> 8);
                }
                else {
                  TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true>::
                  generate<juce::PixelRGB>
                            ((TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true> *)
                             &local_108,(long)local_140,iVar39,1);
                  lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                  uVar48 = local_b0 * 0xff + 0xff;
                  cVar47 = (char)((0x100 - (uVar48 >> 8)) * (uint)*(byte *)(local_98 + lVar36) >> 8)
                           + (char)(uVar48 >> 8);
                }
                *(char *)(local_98 + lVar36) = cVar47;
                plVar27 = local_130;
                param_2 = local_c0;
                uVar45 = (uint)local_138;
              }
              if (0 < (int)uVar45) {
                iVar29 = (int)((long)iVar39 + 1);
                uVar48 = iVar43 - iVar29;
                if (uVar48 != 0 && iVar29 <= iVar43) {
                  local_110 = (uint *)CONCAT44(local_110._4_4_,iVar43);
                  local_138 = CONCAT44(local_138._4_4_,uVar45);
                  local_130 = plVar27;
                  local_128 = (uint *)(ulong)uVar31;
                  if ((int)local_88 < (int)uVar48) {
                    local_88 = (ulong)uVar48;
                    free(local_90);
                    local_90 = malloc((ulong)uVar48 * 3);
                    uVar45 = (uint)local_138;
                  }
                  TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true>::
                  generate<juce::PixelRGB>
                            ((TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true> *)
                             &local_108,(long)local_90,iVar29,uVar48);
                  lVar36 = (long)(int)local_c0[3];
                  pbVar37 = (byte *)(((long)iVar39 + 1) * lVar36 + local_98);
                  uVar48 = (uVar45 & 0xff) * local_b0;
                  uVar31 = (uint)local_128;
                  if ((int)uVar48 < 0xfe00) {
                    uVar58 = ((uVar48 & 0xffffff00) - ((int)uVar48 >> 8)) + 0xff;
                    uVar48 = (uint)local_110 - iVar39;
                    do {
                      *pbVar37 = (char)((uint)*pbVar37 * (0x100 - (uVar58 >> 8)) >> 8) +
                                 (char)(uVar58 >> 8);
                      pbVar37 = pbVar37 + lVar36;
                      uVar48 = uVar48 - 1;
                    } while (1 < uVar48);
                  }
                  else {
                    do {
                      *pbVar37 = 0xff;
                      pbVar37 = pbVar37 + lVar36;
                      uVar30 = uVar30 - 1;
                    } while (1 < uVar30);
                  }
                  plVar27 = local_130;
                  param_2 = local_c0;
                  uVar45 = (uint)local_138;
                  iVar43 = (uint)local_110;
                }
              }
              uVar58 = ((uint)plVar27 & 0xff) * uVar45;
              uVar30 = uVar31;
              uVar48 = (uint)plVar27;
            }
            puVar55 = local_78;
            puVar53 = local_118;
            uVar31 = uVar30 - 1;
            puVar51 = puVar51 + 2;
          } while (2 < (int)uVar30);
          uVar31 = uVar58 + 0xff;
          if (-1 < (int)uVar58) {
            uVar31 = uVar58;
          }
          iVar39 = (int)local_70;
          puVar38 = local_120;
          if (0xff < (int)uVar58) {
            if (uVar58 < 0xff00) {
              TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true>::generate<juce::PixelRGB>
                        ((TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true> *)&local_108,
                         (long)local_140,iVar43,1);
              lVar36 = (long)(int)local_c0[3] * (long)iVar43;
              uVar31 = (((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8) * 0xff + 0xff;
              cVar47 = (char)((0x100 - (uVar31 >> 8)) * (uint)*(byte *)(local_98 + lVar36) >> 8) +
                       (char)(uVar31 >> 8);
            }
            else {
              TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true>::generate<juce::PixelRGB>
                        ((TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true> *)&local_108,
                         (long)local_140,iVar43,1);
              lVar36 = (long)(int)local_c0[3] * (long)iVar43;
              uVar31 = local_b0 * 0xff + 0xff;
              cVar47 = (char)((0x100 - (uVar31 >> 8)) * (uint)*(byte *)(local_98 + lVar36) >> 8) +
                       (char)(uVar31 >> 8);
            }
            *(char *)(local_98 + lVar36) = cVar47;
            puVar38 = local_120;
            param_2 = local_c0;
          }
        }
        puVar53 = puVar53 + (long)puVar55;
        iVar39 = iVar39 + 1;
      } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
    }
    goto LAB_00346361;
  }
  if ((int)param_3[2] != 1) {
    if ((int)param_3[2] != 2) {
      if (param_7 == '\0') {
        fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
        dVar70 = (double)fVar71;
        dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                                  _DAT_005d91b0 & SUB84(dVar70,0));
        if (dVar69 == DAT_005d94e0) {
          if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_00345365;
LAB_0033e059:
          dVar70 = _DAT_005d9000 / dVar70;
          fVar67 = (float)((double)param_5[4] * dVar70);
          fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
          fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
          fVar71 = (float)((double)*param_5 * dVar70);
          local_108 = CONCAT44(fVar62,fVar67);
          uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                       fVar62 * param_5[5]);
          local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 -
                              param_5[5] * fVar71,fVar71);
        }
        else {
          if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033e059;
LAB_00345365:
          local_f8 = *(undefined8 *)(param_5 + 4);
          local_108 = *(undefined8 *)param_5;
          uStack_100 = *(undefined8 *)(param_5 + 2);
        }
        local_c8 = 0.0;
        if (param_6 != 0) {
          local_c8 = DAT_005d9044;
        }
        local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
        local_b0 = param_4 + 1;
        local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
        local_a4 = (int)param_3[4] - 1;
        local_88 = 0x800;
        local_90 = malloc(0x800);
        if (0 < *(int *)((long)local_120 + 0x1c)) {
          puVar53 = (uint *)*local_120;
          iVar39 = 0;
          puVar38 = local_120;
          do {
            lVar36 = (long)*(int *)((long)puVar38 + 0x24);
            uVar31 = *puVar53;
            if (1 < (int)uVar31) {
              puVar55 = puVar53 + 1;
              uVar48 = puVar53[1];
              local_78 = (uint *)CONCAT44(local_78._4_4_,iVar39);
              lVar56 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
              local_a0 = (int)lVar56;
              local_98 = *(int *)((long)param_2 + 0x14) * lVar56 + *param_2;
              uVar58 = 0;
              local_70 = puVar53;
              local_68 = lVar36;
              do {
                uVar34 = puVar55[2];
                uVar42 = (ulong)uVar34;
                uVar30 = uVar34 + 0xff;
                if (-1 < (int)uVar34) {
                  uVar30 = uVar34;
                }
                uVar45 = puVar55[1];
                iVar43 = (int)uVar30 >> 8;
                uVar30 = uVar48 + 0xff;
                if (-1 < (int)uVar48) {
                  uVar30 = uVar48;
                }
                iVar39 = (int)uVar30 >> 8;
                uVar30 = iVar43 - iVar39;
                if (uVar30 == 0) {
                  uVar58 = (uVar34 - uVar48) * uVar45 + uVar58;
                  uVar30 = uVar31;
                  uVar48 = uVar34;
                }
                else {
                  iVar29 = (0x100 - (uVar48 & 0xff)) * uVar45;
                  uVar34 = iVar29 + uVar58;
                  uVar48 = iVar29 + uVar58 + 0xff;
                  if (-1 < (int)uVar34) {
                    uVar48 = uVar34;
                  }
                  if (0xff < (int)uVar34) {
                    local_130 = (long *)CONCAT44(local_130._4_4_,uVar45);
                    local_138 = uVar42;
                    if (uVar34 < 0xff00) {
                      TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false>::
                      generate<juce::PixelAlpha>
                                ((TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false> *)
                                 &local_108,(undefined1 *)local_140,iVar39,1);
                      lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                      uVar48 = ((local_140[0] & 0xff) << 0x10 | local_140[0] & 0xff) *
                               (((int)uVar48 >> 8 & 0xffU) * local_b0 >> 8);
                    }
                    else {
                      TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false>::
                      generate<juce::PixelAlpha>
                                ((TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false> *)
                                 &local_108,(undefined1 *)local_140,iVar39,1);
                      lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                      uVar48 = ((local_140[0] & 0xff) << 0x10 | local_140[0] & 0xff) * local_b0;
                    }
                    uVar58 = uVar48 >> 8 & 0xff00ff;
                    iVar35 = 0x100 - (uVar48 >> 0x18);
                    iVar29 = ((uint)*(byte *)(local_98 + 1 + lVar36) * iVar35 >> 8) + uVar58;
                    uVar58 = (((uint)*(byte *)(local_98 + 2 + lVar36) << 0x10 |
                              (uint)*(byte *)(local_98 + lVar36)) * iVar35 >> 8 & 0xff00ff) + uVar58
                    ;
                    uVar58 = 0x100 - (uVar58 >> 8 & 0x10001) | uVar58;
                    *(byte *)(local_98 + 1 + lVar36) = -(char)((uint)iVar29 >> 8) | (byte)iVar29;
                    *(char *)(local_98 + 2 + lVar36) = (char)(uVar58 >> 0x10);
                    *(char *)(local_98 + lVar36) = (char)uVar58;
                    uVar42 = local_138;
                    param_2 = local_c0;
                    uVar45 = (uint)local_130;
                  }
                  if (0 < (int)uVar45) {
                    iVar29 = (int)((long)iVar39 + 1);
                    uVar48 = iVar43 - iVar29;
                    if (uVar48 != 0 && iVar29 <= iVar43) {
                      local_128 = (uint *)CONCAT44(local_128._4_4_,iVar43);
                      local_138 = uVar42;
                      local_118 = puVar55;
                      local_110 = (uint *)(ulong)uVar31;
                      if ((int)local_88 < (int)uVar48) {
                        local_88 = (ulong)uVar48;
                        free(local_90);
                        local_90 = malloc((ulong)uVar48);
                      }
                      puVar53 = local_90;
                      local_130 = (long *)CONCAT44(local_130._4_4_,uVar45);
                      TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false>::
                      generate<juce::PixelAlpha>
                                ((TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false> *)
                                 &local_108,(undefined1 *)local_90,iVar29,uVar48);
                      lVar36 = (long)(int)local_c0[3];
                      lVar56 = ((long)iVar39 + 1) * lVar36;
                      iVar43 = (uVar45 & 0xff) * local_b0;
                      uVar31 = (uint)local_110;
                      if (iVar43 < 0xfe00) {
                        pbVar37 = (byte *)(local_98 + lVar56 + 2);
                        uVar48 = (int)local_128 - iVar39;
                        do {
                          uVar58 = *puVar53;
                          puVar53 = (uint *)((long)puVar53 + 1);
                          uVar34 = ((uint)(byte)uVar58 << 0x10 | (uint)(byte)uVar58) * (iVar43 >> 8)
                          ;
                          uVar58 = uVar34 >> 8 & 0xff00ff;
                          iVar39 = 0x100 - (uVar34 >> 0x18);
                          iVar29 = ((uint)pbVar37[-1] * iVar39 >> 8) + uVar58;
                          uVar58 = (((uint)*pbVar37 << 0x10 | (uint)pbVar37[-2]) * iVar39 >> 8 &
                                   0xff00ff) + uVar58;
                          uVar58 = 0x100 - (uVar58 >> 8 & 0x10001) | uVar58;
                          pbVar37[-1] = -(char)((uint)iVar29 >> 8) | (byte)iVar29;
                          *pbVar37 = (byte)(uVar58 >> 0x10);
                          pbVar37[-2] = (byte)uVar58;
                          pbVar37 = pbVar37 + lVar36;
                          uVar48 = uVar48 - 1;
                        } while (1 < uVar48);
                      }
                      else {
                        pbVar37 = (byte *)(local_98 + lVar56 + 2);
                        do {
                          bVar28 = (byte)*puVar53;
                          puVar53 = (uint *)((long)puVar53 + 1);
                          uVar48 = (uint)bVar28 << 0x10 | (uint)bVar28;
                          uVar58 = (((uint)*pbVar37 << 0x10 | (uint)pbVar37[-2]) *
                                    (0x100 - (uint)bVar28) >> 8 & 0xff00ff) + uVar48;
                          uVar58 = 0x100 - (uVar58 >> 8 & 0x10001) | uVar58;
                          iVar39 = ((uint)pbVar37[-1] * (0x100 - (uint)bVar28) >> 8) + uVar48;
                          pbVar37[-1] = -(char)((uint)iVar39 >> 8) | (byte)iVar39;
                          *pbVar37 = (byte)(uVar58 >> 0x10);
                          pbVar37[-2] = (byte)uVar58;
                          pbVar37 = pbVar37 + lVar36;
                          uVar30 = uVar30 - 1;
                        } while (1 < uVar30);
                      }
                      puVar55 = local_118;
                      uVar42 = local_138;
                      param_2 = local_c0;
                      uVar45 = (uint)local_130;
                      iVar43 = (int)local_128;
                    }
                  }
                  uVar58 = ((uint)uVar42 & 0xff) * uVar45;
                  uVar30 = uVar31;
                  uVar48 = (uint)uVar42;
                }
                lVar36 = local_68;
                puVar53 = local_70;
                uVar31 = uVar30 - 1;
                puVar55 = puVar55 + 2;
              } while (2 < (int)uVar30);
              uVar31 = uVar58 + 0xff;
              if (-1 < (int)uVar58) {
                uVar31 = uVar58;
              }
              iVar39 = (int)local_78;
              puVar38 = local_120;
              if (0xff < (int)uVar58) {
                if (uVar58 < 0xff00) {
                  TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false>::
                  generate<juce::PixelAlpha>
                            ((TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false> *)
                             &local_108,(undefined1 *)local_140,iVar43,1);
                  iVar29 = (int)local_c0[3];
                  uVar31 = ((local_140[0] & 0xff) << 0x10 | local_140[0] & 0xff) *
                           (((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8);
                }
                else {
                  TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false>::
                  generate<juce::PixelAlpha>
                            ((TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false> *)
                             &local_108,(undefined1 *)local_140,iVar43,1);
                  iVar29 = (int)local_c0[3];
                  uVar31 = ((local_140[0] & 0xff) << 0x10 | local_140[0] & 0xff) * local_b0;
                }
                lVar56 = (long)iVar29 * (long)iVar43;
                uVar48 = uVar31 >> 8 & 0xff00ff;
                iVar29 = 0x100 - (uVar31 >> 0x18);
                iVar43 = ((uint)*(byte *)(local_98 + 1 + lVar56) * iVar29 >> 8) + uVar48;
                uVar48 = (((uint)*(byte *)(local_98 + 2 + lVar56) << 0x10 |
                          (uint)*(byte *)(local_98 + lVar56)) * iVar29 >> 8 & 0xff00ff) + uVar48;
                uVar48 = 0x100 - (uVar48 >> 8 & 0x10001) | uVar48;
                *(byte *)(local_98 + 1 + lVar56) = -(char)((uint)iVar43 >> 8) | (byte)iVar43;
                *(char *)(local_98 + 2 + lVar56) = (char)(uVar48 >> 0x10);
                *(char *)(local_98 + lVar56) = (char)uVar48;
                puVar38 = local_120;
                param_2 = local_c0;
              }
            }
            puVar53 = puVar53 + lVar36;
            iVar39 = iVar39 + 1;
          } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
        }
        goto LAB_00346361;
      }
      fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
      dVar70 = (double)fVar71;
      dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                                _DAT_005d91b0 & SUB84(dVar70,0));
      if (dVar69 == DAT_005d94e0) {
        if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_00341255;
LAB_0033d6b9:
        dVar70 = _DAT_005d9000 / dVar70;
        fVar67 = (float)((double)param_5[4] * dVar70);
        fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
        fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
        fVar71 = (float)((double)*param_5 * dVar70);
        local_108 = CONCAT44(fVar62,fVar67);
        uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                     fVar62 * param_5[5]);
        local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 - param_5[5] * fVar71
                            ,fVar71);
      }
      else {
        if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033d6b9;
LAB_00341255:
        local_f8 = *(undefined8 *)(param_5 + 4);
        local_108 = *(undefined8 *)param_5;
        uStack_100 = *(undefined8 *)(param_5 + 2);
      }
      local_c8 = 0.0;
      if (param_6 != 0) {
        local_c8 = DAT_005d9044;
      }
      local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
      local_b0 = param_4 + 1;
      local_110 = (uint *)(ulong)local_b0;
      local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
      local_a4 = (int)param_3[4] - 1;
      local_88 = 0x800;
      local_90 = malloc(0x800);
      if (0 < *(int *)((long)local_120 + 0x1c)) {
        puVar53 = (uint *)*local_120;
        iVar39 = 0;
        puVar38 = local_120;
        fVar71 = _DAT_005dd2d0;
        fVar62 = _UNK_005dd2d4;
        fVar64 = DAT_005d9038;
        fVar67 = DAT_005de53c;
        do {
          local_48 = (long)*(int *)((long)puVar38 + 0x24);
          uVar31 = *puVar53;
          if (1 < (int)uVar31) {
            puVar55 = puVar53 + 1;
            uVar48 = puVar53[1];
            lVar36 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
            local_a0 = (int)lVar36;
            lVar36 = *(int *)((long)param_2 + 0x14) * lVar36 + *param_2;
            uVar58 = 0;
            local_98 = lVar36;
            local_54 = iVar39;
            local_40 = puVar53;
            do {
              puVar51 = (uint *)(ulong)uVar31;
              uVar34 = puVar55[2];
              puVar53 = (uint *)(ulong)uVar34;
              uVar30 = uVar34 + 0xff;
              if (-1 < (int)uVar34) {
                uVar30 = uVar34;
              }
              uVar45 = puVar55[1];
              iVar43 = (int)uVar30 >> 8;
              uVar30 = uVar48 + 0xff;
              if (-1 < (int)uVar48) {
                uVar30 = uVar48;
              }
              iVar39 = (int)uVar30 >> 8;
              iVar29 = iVar43 - iVar39;
              if (iVar29 == 0) {
                uVar58 = (uVar34 - uVar48) * uVar45 + uVar58;
                uVar48 = uVar34;
                uVar34 = uVar31;
              }
              else {
                iVar35 = (0x100 - (uVar48 & 0xff)) * uVar45;
                uVar48 = iVar35 + uVar58;
                uVar31 = iVar35 + uVar58 + 0xff;
                if (-1 < (int)uVar48) {
                  uVar31 = uVar48;
                }
                if (0xff < (int)uVar48) {
                  local_68 = CONCAT44(local_68._4_4_,uVar45);
                  local_128 = (uint *)CONCAT44(local_128._4_4_,iVar43);
                  local_138 = CONCAT44(local_138._4_4_,iVar39);
                  fVar60 = (float)iVar39 + local_c8;
                  fVar68 = local_108._4_4_ * ((float)local_a0 + local_c8);
                  fVar65 = ((float)local_a0 + local_c8) * (float)local_f8;
                  uVar34 = (uint)(((float)local_108 * fVar60 + fVar68 + (float)uStack_100) * fVar67)
                  ;
                  iVar44 = (int)(((float)local_108 * (fVar60 + fVar64) + fVar68 + (float)uStack_100)
                                * fVar67);
                  uStack_ec = 1;
                  uVar58 = uVar34 + local_c4;
                  local_e0 = 1;
                  uStack_e8 = ~uVar34 + iVar44;
                  uVar34 = (uint)((fVar60 * uStack_100._4_4_ + fVar65 + local_f8._4_4_) * fVar67);
                  iVar35 = (int)(((fVar60 + fVar64) * uStack_100._4_4_ + fVar65 + local_f8._4_4_) *
                                fVar67);
                  local_d8 = 1;
                  local_58 = uVar34 + local_c4;
                  local_cc = 1;
                  local_d4 = ~uVar34 + iVar35;
                  lVar56 = (long)*(int *)((long)local_b8 + 0x14);
                  lVar54 = (long)(int)local_b8[3];
                  uStack_f0 = iVar44 + local_c4;
                  local_dc = local_c4 + iVar35;
                  local_50 = (uint *)CONCAT44(local_50._4_4_,uVar58);
                  iVar35 = (int)(CONCAT44((int)uVar58 >> 0x1f,(int)uVar58 >> 8) %
                                (long)(int)*(uint *)((long)local_b8 + 0x1c));
                  uVar30 = (iVar35 >> 0x1f & *(uint *)((long)local_b8 + 0x1c)) + iVar35;
                  iVar35 = (int)(CONCAT44((int)local_58 >> 0x1f,(int)local_58 >> 8) %
                                (long)(int)*(uint *)(local_b8 + 4));
                  uVar34 = (iVar35 >> 0x1f & *(uint *)(local_b8 + 4)) + iVar35;
                  pbVar37 = (byte *)((int)uVar30 * lVar54 + (int)uVar34 * lVar56 + *local_b8);
                  local_e4 = 0;
                  local_d0 = 0;
                  if (uVar48 < 0xff00) {
                    if (local_a4 <= uVar34 || (local_a8 <= uVar30 || local_ac == 0)) {
                      bVar28 = *pbVar37;
                    }
                    else {
                      iVar35 = 0x100 - (uVar58 & 0xff);
                      bVar28 = (byte)(((uint)pbVar37[lVar54] * (uVar58 & 0xff) +
                                      (uint)*pbVar37 * iVar35) * (0x100 - (local_58 & 0xff)) +
                                      ((uint)pbVar37[lVar56] * iVar35 +
                                      (uint)pbVar37[lVar56 + lVar54] * (uVar58 & 0xff)) *
                                      (local_58 & 0xff) + 0x8000 >> 0x10);
                    }
                    lVar56 = (long)iVar39 * (long)(int)param_2[3];
                    uVar31 = ((int)uVar31 >> 8 & 0xffU) * (uint)local_110 >> 8;
                  }
                  else {
                    if (local_a4 <= uVar34 || (local_a8 <= uVar30 || local_ac == 0)) {
                      bVar28 = *pbVar37;
                    }
                    else {
                      iVar35 = 0x100 - (uVar58 & 0xff);
                      bVar28 = (byte)(((uint)pbVar37[lVar54] * (uVar58 & 0xff) +
                                      (uint)*pbVar37 * iVar35) * (0x100 - (local_58 & 0xff)) +
                                      ((uint)pbVar37[lVar56] * iVar35 +
                                      (uint)pbVar37[lVar56 + lVar54] * (uVar58 & 0xff)) *
                                      (local_58 & 0xff) + 0x8000 >> 0x10);
                    }
                    lVar56 = (long)iVar39 * (long)(int)param_2[3];
                    uVar31 = (uint)local_110;
                  }
                  pbVar37 = (byte *)(lVar56 + lVar36);
                  uVar31 = ((uint)bVar28 << 0x10 | (uint)bVar28) * uVar31;
                  uVar48 = uVar31 >> 8 & 0xff00ff;
                  iVar35 = 0x100 - (uVar31 >> 0x18);
                  iVar44 = ((uint)pbVar37[1] * iVar35 >> 8) + uVar48;
                  uVar48 = (((uint)pbVar37[2] << 0x10 | (uint)*pbVar37) * iVar35 >> 8 & 0xff00ff) +
                           uVar48;
                  uVar48 = 0x100 - (uVar48 >> 8 & 0x10001) | uVar48;
                  pbVar37[1] = -(char)((uint)iVar44 >> 8) | (byte)iVar44;
                  pbVar37[2] = (byte)(uVar48 >> 0x10);
                  *pbVar37 = (byte)uVar48;
                  local_130 = param_2;
                  local_118 = puVar51;
                  local_78 = puVar53;
                  local_70 = puVar55;
                  local_60 = lVar36;
                }
                if (0 < (int)uVar45) {
                  plVar27 = (long *)((long)iVar39 + 1);
                  iVar35 = (int)plVar27;
                  uVar31 = iVar43 - iVar35;
                  if (uVar31 != 0 && iVar35 <= iVar43) {
                    local_128 = (uint *)CONCAT44(local_128._4_4_,iVar43);
                    local_138 = CONCAT44(local_138._4_4_,iVar39);
                    if ((int)local_88 < (int)uVar31) {
                      local_118 = puVar51;
                      local_88 = (ulong)uVar31;
                      local_78 = puVar53;
                      local_70 = puVar55;
                      free(local_90);
                      local_90 = malloc((ulong)uVar31);
                      fVar71 = _DAT_005dd2d0;
                      fVar62 = _UNK_005dd2d4;
                      fVar64 = DAT_005d9038;
                      fVar67 = DAT_005de53c;
                    }
                    else {
                      local_118 = puVar51;
                      local_78 = puVar53;
                      local_70 = puVar55;
                    }
                    fVar65 = (float)iVar35 + local_c8;
                    fVar68 = local_108._4_4_ * ((float)local_a0 + local_c8);
                    fVar60 = ((float)local_a0 + local_c8) * (float)local_f8;
                    iVar39 = (int)(((float)uStack_100 + (float)local_108 * fVar65 + fVar68) * fVar62
                                  );
                    lVar36 = (long)((int)(((float)uStack_100 +
                                          (float)local_108 * ((float)(int)uVar31 + fVar65) + fVar68)
                                         * fVar71) - iVar39);
                    uVar42 = lVar36 / (long)(int)uVar31;
                    uVar49 = lVar36 % (long)(int)uVar31;
                    local_e0 = (uint)uVar49;
                    uVar49 = uVar49 & 0xffffffff;
                    uStack_e8 = (uint)uVar42;
                    uVar42 = uVar42 & 0xffffffff;
                    if ((int)local_e0 < 1) {
                      local_e0 = local_e0 + uVar31;
                      uVar49 = (ulong)local_e0;
                      uStack_e8 = uStack_e8 - 1;
                      uVar42 = (ulong)uStack_e8;
                    }
                    iVar43 = (int)((local_f8._4_4_ + uStack_100._4_4_ * fVar65 + fVar60) * fVar62);
                    local_cc = (int)((local_f8._4_4_ +
                                     uStack_100._4_4_ * ((float)(int)uVar31 + fVar65) + fVar60) *
                                    fVar71) - iVar43;
                    local_d4 = local_cc / (int)uVar31;
                    local_cc = local_cc % (int)uVar31;
                    local_dc = iVar43 + local_c4;
                    if (local_cc < 1) {
                      local_cc = local_cc + uVar31;
                      local_d4 = local_d4 + -1;
                    }
                    local_68 = CONCAT44(local_68._4_4_,uVar45);
                    local_e4 = (int)uVar49 - uVar31;
                    local_d0 = local_cc - uVar31;
                    puVar53 = local_90;
                    uVar48 = uVar31;
                    uVar58 = local_c4 + iVar39;
                    while( true ) {
                      uVar34 = local_dc;
                      uStack_f0 = (int)uVar42 + uVar58;
                      bVar59 = SCARRY4(local_e4,(int)uVar49);
                      local_e4 = local_e4 + (int)uVar49;
                      if (local_e4 != 0 && bVar59 == local_e4 < 0) {
                        local_e4 = local_e4 - uVar31;
                        uStack_f0 = uStack_f0 + 1;
                      }
                      local_dc = local_d4 + local_dc;
                      bVar59 = SCARRY4(local_d0,local_cc);
                      local_d0 = local_d0 + local_cc;
                      if (local_d0 != 0 && bVar59 == local_d0 < 0) {
                        local_d0 = local_d0 - uVar31;
                        local_dc = local_dc + 1;
                      }
                      iVar39 = (int)(CONCAT44((int)uVar58 >> 0x1f,(int)uVar58 >> 8) %
                                    (long)(int)*(uint *)((long)local_b8 + 0x1c));
                      uVar50 = (iVar39 >> 0x1f & *(uint *)((long)local_b8 + 0x1c)) + iVar39;
                      iVar39 = (int)(CONCAT44((int)uVar34 >> 0x1f,(int)uVar34 >> 8) %
                                    (long)(int)*(uint *)(local_b8 + 4));
                      uVar30 = (iVar39 >> 0x1f & *(uint *)(local_b8 + 4)) + iVar39;
                      lVar56 = (long)*(int *)((long)local_b8 + 0x14);
                      lVar36 = (long)(int)local_b8[3];
                      pbVar37 = (byte *)((int)uVar50 * lVar36 + (int)uVar30 * lVar56 + *local_b8);
                      if (((local_ac == 0) || (local_a8 <= uVar50)) || (local_a4 <= uVar30)) {
                        *(byte *)puVar53 = *pbVar37;
                      }
                      else {
                        uVar58 = uVar58 & 0xff;
                        *(byte *)puVar53 =
                             (byte)((pbVar37[lVar36] * uVar58 + (uint)*pbVar37 * (0x100 - uVar58)) *
                                    (0x100 - (uVar34 & 0xff)) +
                                    ((uint)pbVar37[lVar56] * (0x100 - uVar58) +
                                    pbVar37[lVar56 + lVar36] * uVar58) * (uVar34 & 0xff) + 0x8000 >>
                                   0x10);
                      }
                      if ((int)uVar48 < 2) break;
                      uVar48 = uVar48 - 1;
                      puVar53 = (uint *)((long)puVar53 + 1);
                      uVar42 = (ulong)uStack_e8;
                      uVar49 = (ulong)local_e0;
                      uVar58 = uStack_f0;
                    }
                    lVar36 = (long)(int)local_c0[3];
                    local_110 = (uint *)(ulong)local_b0;
                    iVar39 = (uVar45 & 0xff) * local_b0;
                    if (iVar39 < 0xfe00) {
                      pbVar37 = (byte *)((long)plVar27 * lVar36 + local_98 + 2);
                      iVar43 = (int)local_128 - (uint)local_138;
                      puVar53 = local_90;
                      do {
                        uVar48 = *puVar53;
                        puVar53 = (uint *)((long)puVar53 + 1);
                        uVar58 = ((uint)(byte)uVar48 << 0x10 | (uint)(byte)uVar48) * (iVar39 >> 8);
                        uVar48 = uVar58 >> 8 & 0xff00ff;
                        iVar29 = 0x100 - (uVar58 >> 0x18);
                        iVar35 = ((uint)pbVar37[-1] * iVar29 >> 8) + uVar48;
                        uVar48 = (((uint)*pbVar37 << 0x10 | (uint)pbVar37[-2]) * iVar29 >> 8 &
                                 0xff00ff) + uVar48;
                        uVar48 = 0x100 - (uVar48 >> 8 & 0x10001) | uVar48;
                        pbVar37[-1] = -(char)((uint)iVar35 >> 8) | (byte)iVar35;
                        *pbVar37 = (byte)(uVar48 >> 0x10);
                        pbVar37[-2] = (byte)uVar48;
                        pbVar37 = pbVar37 + lVar36;
                        iVar43 = iVar43 + -1;
                      } while (1 < iVar43);
                    }
                    else {
                      pbVar37 = (byte *)((long)plVar27 * lVar36 + local_98 + 2);
                      puVar53 = local_90;
                      do {
                        bVar28 = (byte)*puVar53;
                        puVar53 = (uint *)((long)puVar53 + 1);
                        uVar48 = (uint)bVar28 << 0x10 | (uint)bVar28;
                        uVar58 = (((uint)*pbVar37 << 0x10 | (uint)pbVar37[-2]) *
                                  (0x100 - (uint)bVar28) >> 8 & 0xff00ff) + uVar48;
                        uVar58 = 0x100 - (uVar58 >> 8 & 0x10001) | uVar58;
                        iVar39 = ((uint)pbVar37[-1] * (0x100 - (uint)bVar28) >> 8) + uVar48;
                        pbVar37[-1] = -(char)((uint)iVar39 >> 8) | (byte)iVar39;
                        *pbVar37 = (byte)(uVar58 >> 0x10);
                        pbVar37[-2] = (byte)uVar58;
                        pbVar37 = pbVar37 + lVar36;
                        iVar29 = iVar29 + -1;
                      } while (1 < iVar29);
                    }
                    puVar53 = local_78;
                    puVar51 = local_118;
                    param_2 = local_c0;
                    lVar36 = local_98;
                    puVar55 = local_70;
                    iVar43 = (int)local_128;
                    local_130 = plVar27;
                    uStack_ec = uVar31;
                    local_d8 = uVar31;
                  }
                }
                uVar58 = ((uint)puVar53 & 0xff) * uVar45;
                uVar48 = (uint)puVar53;
                uVar34 = (uint)puVar51;
              }
              puVar53 = local_40;
              iVar39 = local_54;
              uVar31 = uVar34 - 1;
              puVar55 = puVar55 + 2;
            } while (2 < (int)uVar34);
            uVar31 = uVar58 + 0xff;
            if (-1 < (int)uVar58) {
              uVar31 = uVar58;
            }
            puVar38 = local_120;
            if (0xff < (int)uVar58) {
              if (uVar58 < 0xff00) {
                TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,true>::
                generate<juce::PixelAlpha>((float *)&local_108,(byte *)local_140,iVar43);
                iVar29 = (int)local_c0[3];
                uVar31 = ((local_140[0] & 0xff) << 0x10 | local_140[0] & 0xff) *
                         (((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8);
              }
              else {
                TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,true>::
                generate<juce::PixelAlpha>((float *)&local_108,(byte *)local_140,iVar43);
                iVar29 = (int)local_c0[3];
                uVar31 = ((local_140[0] & 0xff) << 0x10 | local_140[0] & 0xff) * local_b0;
              }
              local_110 = (uint *)(ulong)local_b0;
              lVar36 = (long)iVar29 * (long)iVar43;
              uVar48 = uVar31 >> 8 & 0xff00ff;
              iVar29 = 0x100 - (uVar31 >> 0x18);
              iVar43 = ((uint)*(byte *)(local_98 + 1 + lVar36) * iVar29 >> 8) + uVar48;
              uVar48 = (((uint)*(byte *)(local_98 + 2 + lVar36) << 0x10 |
                        (uint)*(byte *)(local_98 + lVar36)) * iVar29 >> 8 & 0xff00ff) + uVar48;
              uVar48 = 0x100 - (uVar48 >> 8 & 0x10001) | uVar48;
              *(byte *)(local_98 + 1 + lVar36) = -(char)((uint)iVar43 >> 8) | (byte)iVar43;
              *(char *)(local_98 + 2 + lVar36) = (char)(uVar48 >> 0x10);
              *(char *)(local_98 + lVar36) = (char)uVar48;
              puVar38 = local_120;
              param_2 = local_c0;
              fVar71 = _DAT_005dd2d0;
              fVar62 = _UNK_005dd2d4;
              fVar64 = DAT_005d9038;
              fVar67 = DAT_005de53c;
            }
          }
          puVar53 = puVar53 + local_48;
          iVar39 = iVar39 + 1;
        } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
      }
      goto LAB_00346361;
    }
    if (param_7 == '\0') {
      fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
      dVar70 = (double)fVar71;
      dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                                _DAT_005d91b0 & SUB84(dVar70,0));
      if (dVar69 == DAT_005d94e0) {
        if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_0034333a;
LAB_0033db09:
        dVar70 = _DAT_005d9000 / dVar70;
        fVar67 = (float)((double)param_5[4] * dVar70);
        fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
        fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
        fVar71 = (float)((double)*param_5 * dVar70);
        local_108 = CONCAT44(fVar62,fVar67);
        uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                     fVar62 * param_5[5]);
        local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 - param_5[5] * fVar71
                            ,fVar71);
      }
      else {
        if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033db09;
LAB_0034333a:
        local_f8 = *(undefined8 *)(param_5 + 4);
        local_108 = *(undefined8 *)param_5;
        uStack_100 = *(undefined8 *)(param_5 + 2);
      }
      local_c8 = 0.0;
      if (param_6 != 0) {
        local_c8 = DAT_005d9044;
      }
      local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
      local_b0 = param_4 + 1;
      local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
      local_a4 = (int)param_3[4] - 1;
      local_88 = 0x800;
      local_90 = malloc(0x2000);
      if (0 < *(int *)((long)local_120 + 0x1c)) {
        puVar53 = (uint *)*local_120;
        iVar39 = 0;
        puVar38 = local_120;
        do {
          puVar55 = (uint *)(long)*(int *)((long)puVar38 + 0x24);
          if (1 < (int)*puVar53) {
            local_118 = (uint *)CONCAT44(local_118._4_4_,iVar39);
            lVar36 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
            local_a0 = (int)lVar36;
            local_98 = *(int *)((long)local_c0 + 0x14) * lVar36 + *local_c0;
            uVar58 = *puVar53 + 1;
            puVar55 = puVar53 + 3;
            uVar48 = 0;
            uVar31 = puVar53[1];
            local_128 = (uint *)(long)*(int *)((long)puVar38 + 0x24);
            local_110 = puVar53;
            do {
              uVar34 = *puVar55;
              uVar30 = uVar34 + 0xff;
              if (-1 < (int)uVar34) {
                uVar30 = uVar34;
              }
              uVar45 = puVar55[-1];
              iVar43 = (int)uVar30 >> 8;
              uVar30 = uVar31 + 0xff;
              if (-1 < (int)uVar31) {
                uVar30 = uVar31;
              }
              iVar39 = (int)uVar30 >> 8;
              if (iVar43 == iVar39) {
                uVar48 = (uVar34 - uVar31) * uVar45 + uVar48;
              }
              else {
                iVar29 = (0x100 - (uVar31 & 0xff)) * uVar45;
                uVar30 = iVar29 + uVar48;
                uVar31 = iVar29 + uVar48 + 0xff;
                if (-1 < (int)uVar30) {
                  uVar31 = uVar30;
                }
                if (0xff < (int)uVar30) {
                  local_138 = (ulong)iVar39;
                  if (uVar30 < 0xff00) {
                    local_130 = (long *)CONCAT44(local_130._4_4_,uVar45);
                    TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false>::
                    generate<juce::PixelARGB>
                              ((TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false> *)
                               &local_108,local_140,iVar39,1);
                    lVar36 = (long)(int)local_c0[3] * local_138;
                    uVar48 = ((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8;
                    uVar31 = (local_140[0] >> 8 & 0xff00ff) * uVar48;
                    iVar29 = 0x100 - (uVar31 >> 0x18);
                    iVar35 = ((uint)*(byte *)(local_98 + 1 + lVar36) * iVar29 >> 8) +
                             (uVar31 >> 8 & 0xff00ff);
                    uVar31 = (((uint)*(byte *)(local_98 + 2 + lVar36) << 0x10 |
                              (uint)*(byte *)(local_98 + lVar36)) * iVar29 >> 8 & 0xff00ff) +
                             ((local_140[0] & 0xff00ff) * uVar48 >> 8 & 0xff00ff);
                    uVar31 = 0x100 - (uVar31 >> 8 & 0x10001) | uVar31;
                    *(byte *)(local_98 + 1 + lVar36) = -(char)((uint)iVar35 >> 8) | (byte)iVar35;
                    *(char *)(local_98 + 2 + lVar36) = (char)(uVar31 >> 0x10);
                    *(char *)(local_98 + lVar36) = (char)uVar31;
                    uVar45 = (uint)local_130;
                  }
                  else {
                    TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false>::
                    generate<juce::PixelARGB>
                              ((TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false> *)
                               &local_108,local_140,iVar39,1);
                    lVar36 = (long)(int)local_c0[3] * local_138;
                    uVar31 = (local_140[0] >> 8 & 0xff00ff) * local_b0;
                    iVar29 = 0x100 - (uVar31 >> 0x18);
                    iVar35 = ((uint)*(byte *)(local_98 + 1 + lVar36) * iVar29 >> 8) +
                             (uVar31 >> 8 & 0xff00ff);
                    uVar31 = (((uint)*(byte *)(local_98 + 2 + lVar36) << 0x10 |
                              (uint)*(byte *)(local_98 + lVar36)) * iVar29 >> 8 & 0xff00ff) +
                             ((local_140[0] & 0xff00ff) * local_b0 >> 8 & 0xff00ff);
                    uVar31 = 0x100 - (uVar31 >> 8 & 0x10001) | uVar31;
                    *(byte *)(local_98 + 1 + lVar36) = -(char)((uint)iVar35 >> 8) | (byte)iVar35;
                    *(char *)(local_98 + 2 + lVar36) = (char)(uVar31 >> 0x10);
                    *(char *)(local_98 + lVar36) = (char)uVar31;
                  }
                }
                if (0 < (int)uVar45) {
                  iVar39 = iVar39 + 1;
                  if (iVar43 - iVar39 != 0 && iVar39 <= iVar43) {
                    TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false>::handleEdgeTableLine
                              ((TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false> *)
                               &local_108,iVar39,iVar43 - iVar39,uVar45 & 0xff);
                  }
                }
                uVar48 = (uVar34 & 0xff) * uVar45;
              }
              puVar53 = local_110;
              uVar58 = uVar58 - 1;
              puVar55 = puVar55 + 2;
              uVar31 = uVar34;
            } while (2 < uVar58);
            uVar31 = uVar48 + 0xff;
            if (-1 < (int)uVar48) {
              uVar31 = uVar48;
            }
            iVar39 = (int)local_118;
            puVar38 = local_120;
            puVar55 = local_128;
            if (0xff < (int)uVar48) {
              if (uVar48 < 0xff00) {
                TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false>::
                generate<juce::PixelARGB>
                          ((TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false> *)&local_108,
                           local_140,iVar43,1);
                lVar36 = (long)(int)local_c0[3] * (long)iVar43;
                uVar31 = ((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8;
                uVar48 = (local_140[0] >> 8 & 0xff00ff) * uVar31;
                iVar43 = 0x100 - (uVar48 >> 0x18);
                iVar29 = ((uint)*(byte *)(local_98 + 1 + lVar36) * iVar43 >> 8) +
                         (uVar48 >> 8 & 0xff00ff);
                uVar31 = (((uint)*(byte *)(local_98 + 2 + lVar36) << 0x10 |
                          (uint)*(byte *)(local_98 + lVar36)) * iVar43 >> 8 & 0xff00ff) +
                         ((local_140[0] & 0xff00ff) * uVar31 >> 8 & 0xff00ff);
                uVar31 = 0x100 - (uVar31 >> 8 & 0x10001) | uVar31;
                *(byte *)(local_98 + 1 + lVar36) = -(char)((uint)iVar29 >> 8) | (byte)iVar29;
              }
              else {
                TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false>::
                generate<juce::PixelARGB>
                          ((TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false> *)&local_108,
                           local_140,iVar43,1);
                lVar36 = (long)(int)local_c0[3] * (long)iVar43;
                uVar31 = (local_140[0] >> 8 & 0xff00ff) * local_b0;
                iVar43 = 0x100 - (uVar31 >> 0x18);
                iVar29 = ((uint)*(byte *)(local_98 + 1 + lVar36) * iVar43 >> 8) +
                         (uVar31 >> 8 & 0xff00ff);
                uVar31 = (((uint)*(byte *)(local_98 + 2 + lVar36) << 0x10 |
                          (uint)*(byte *)(local_98 + lVar36)) * iVar43 >> 8 & 0xff00ff) +
                         ((local_140[0] & 0xff00ff) * local_b0 >> 8 & 0xff00ff);
                uVar31 = 0x100 - (uVar31 >> 8 & 0x10001) | uVar31;
                *(byte *)(local_98 + 1 + lVar36) = -(char)((uint)iVar29 >> 8) | (byte)iVar29;
              }
              *(char *)(local_98 + 2 + lVar36) = (char)(uVar31 >> 0x10);
              *(char *)(local_98 + lVar36) = (char)uVar31;
              puVar38 = local_120;
              puVar55 = local_128;
            }
          }
          puVar53 = puVar53 + (long)puVar55;
          iVar39 = iVar39 + 1;
        } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
      }
      goto LAB_00346361;
    }
    fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
    dVar70 = (double)fVar71;
    dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                              _DAT_005d91b0 & SUB84(dVar70,0));
    if (dVar69 == DAT_005d94e0) {
      if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_0033e90a;
LAB_0033d12c:
      dVar70 = _DAT_005d9000 / dVar70;
      fVar67 = (float)((double)param_5[4] * dVar70);
      fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
      fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
      fVar71 = (float)((double)*param_5 * dVar70);
      local_108 = CONCAT44(fVar62,fVar67);
      uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                   fVar62 * param_5[5]);
      local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 - param_5[5] * fVar71,
                          fVar71);
    }
    else {
      if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033d12c;
LAB_0033e90a:
      local_f8 = *(undefined8 *)(param_5 + 4);
      local_108 = *(undefined8 *)param_5;
      uStack_100 = *(undefined8 *)(param_5 + 2);
    }
    local_c8 = 0.0;
    if (param_6 != 0) {
      local_c8 = DAT_005d9044;
    }
    local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
    local_b0 = param_4 + 1;
    local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
    local_a4 = (int)param_3[4] - 1;
    local_88 = 0x800;
    local_90 = malloc(0x2000);
    if (0 < *(int *)((long)local_120 + 0x1c)) {
      puVar53 = (uint *)*local_120;
      iVar39 = 0;
      puVar38 = local_120;
      do {
        puVar55 = (uint *)(long)*(int *)((long)puVar38 + 0x24);
        if (1 < (int)*puVar53) {
          local_118 = (uint *)CONCAT44(local_118._4_4_,iVar39);
          lVar36 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
          local_a0 = (int)lVar36;
          local_98 = *(int *)((long)local_c0 + 0x14) * lVar36 + *local_c0;
          uVar58 = *puVar53 + 1;
          puVar55 = puVar53 + 3;
          uVar48 = 0;
          uVar31 = puVar53[1];
          local_128 = (uint *)(long)*(int *)((long)puVar38 + 0x24);
          local_110 = puVar53;
          do {
            uVar34 = *puVar55;
            uVar30 = uVar34 + 0xff;
            if (-1 < (int)uVar34) {
              uVar30 = uVar34;
            }
            uVar45 = puVar55[-1];
            iVar43 = (int)uVar30 >> 8;
            uVar30 = uVar31 + 0xff;
            if (-1 < (int)uVar31) {
              uVar30 = uVar31;
            }
            iVar39 = (int)uVar30 >> 8;
            if (iVar43 == iVar39) {
              uVar48 = (uVar34 - uVar31) * uVar45 + uVar48;
            }
            else {
              iVar29 = (0x100 - (uVar31 & 0xff)) * uVar45;
              uVar30 = iVar29 + uVar48;
              uVar31 = iVar29 + uVar48 + 0xff;
              if (-1 < (int)uVar30) {
                uVar31 = uVar30;
              }
              if (0xff < (int)uVar30) {
                local_138 = (ulong)iVar39;
                if (uVar30 < 0xff00) {
                  local_130 = (long *)CONCAT44(local_130._4_4_,uVar45);
                  TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true>::
                  generate<juce::PixelARGB>
                            ((TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true> *)&local_108
                             ,local_140,iVar39,1);
                  lVar36 = (long)(int)local_c0[3] * local_138;
                  uVar48 = ((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8;
                  uVar31 = (local_140[0] >> 8 & 0xff00ff) * uVar48;
                  iVar29 = 0x100 - (uVar31 >> 0x18);
                  iVar35 = ((uint)*(byte *)(local_98 + 1 + lVar36) * iVar29 >> 8) +
                           (uVar31 >> 8 & 0xff00ff);
                  uVar31 = (((uint)*(byte *)(local_98 + 2 + lVar36) << 0x10 |
                            (uint)*(byte *)(local_98 + lVar36)) * iVar29 >> 8 & 0xff00ff) +
                           ((local_140[0] & 0xff00ff) * uVar48 >> 8 & 0xff00ff);
                  uVar31 = 0x100 - (uVar31 >> 8 & 0x10001) | uVar31;
                  *(byte *)(local_98 + 1 + lVar36) = -(char)((uint)iVar35 >> 8) | (byte)iVar35;
                  *(char *)(local_98 + 2 + lVar36) = (char)(uVar31 >> 0x10);
                  *(char *)(local_98 + lVar36) = (char)uVar31;
                  uVar45 = (uint)local_130;
                }
                else {
                  TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true>::
                  generate<juce::PixelARGB>
                            ((TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true> *)&local_108
                             ,local_140,iVar39,1);
                  lVar36 = (long)(int)local_c0[3] * local_138;
                  uVar31 = (local_140[0] >> 8 & 0xff00ff) * local_b0;
                  iVar29 = 0x100 - (uVar31 >> 0x18);
                  iVar35 = ((uint)*(byte *)(local_98 + 1 + lVar36) * iVar29 >> 8) +
                           (uVar31 >> 8 & 0xff00ff);
                  uVar31 = (((uint)*(byte *)(local_98 + 2 + lVar36) << 0x10 |
                            (uint)*(byte *)(local_98 + lVar36)) * iVar29 >> 8 & 0xff00ff) +
                           ((local_140[0] & 0xff00ff) * local_b0 >> 8 & 0xff00ff);
                  uVar31 = 0x100 - (uVar31 >> 8 & 0x10001) | uVar31;
                  *(byte *)(local_98 + 1 + lVar36) = -(char)((uint)iVar35 >> 8) | (byte)iVar35;
                  *(char *)(local_98 + 2 + lVar36) = (char)(uVar31 >> 0x10);
                  *(char *)(local_98 + lVar36) = (char)uVar31;
                }
              }
              if (0 < (int)uVar45) {
                iVar39 = iVar39 + 1;
                if (iVar43 - iVar39 != 0 && iVar39 <= iVar43) {
                  TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true>::handleEdgeTableLine
                            ((TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true> *)&local_108
                             ,iVar39,iVar43 - iVar39,uVar45 & 0xff);
                }
              }
              uVar48 = (uVar34 & 0xff) * uVar45;
            }
            puVar53 = local_110;
            uVar58 = uVar58 - 1;
            puVar55 = puVar55 + 2;
            uVar31 = uVar34;
          } while (2 < uVar58);
          uVar31 = uVar48 + 0xff;
          if (-1 < (int)uVar48) {
            uVar31 = uVar48;
          }
          iVar39 = (int)local_118;
          puVar38 = local_120;
          puVar55 = local_128;
          if (0xff < (int)uVar48) {
            if (uVar48 < 0xff00) {
              TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true>::generate<juce::PixelARGB>
                        ((TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true> *)&local_108,
                         local_140,iVar43,1);
              lVar36 = (long)(int)local_c0[3] * (long)iVar43;
              uVar31 = ((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8;
              uVar48 = (local_140[0] >> 8 & 0xff00ff) * uVar31;
              iVar43 = 0x100 - (uVar48 >> 0x18);
              iVar29 = ((uint)*(byte *)(local_98 + 1 + lVar36) * iVar43 >> 8) +
                       (uVar48 >> 8 & 0xff00ff);
              uVar31 = (((uint)*(byte *)(local_98 + 2 + lVar36) << 0x10 |
                        (uint)*(byte *)(local_98 + lVar36)) * iVar43 >> 8 & 0xff00ff) +
                       ((local_140[0] & 0xff00ff) * uVar31 >> 8 & 0xff00ff);
              uVar31 = 0x100 - (uVar31 >> 8 & 0x10001) | uVar31;
              *(byte *)(local_98 + 1 + lVar36) = -(char)((uint)iVar29 >> 8) | (byte)iVar29;
            }
            else {
              TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true>::generate<juce::PixelARGB>
                        ((TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true> *)&local_108,
                         local_140,iVar43,1);
              lVar36 = (long)(int)local_c0[3] * (long)iVar43;
              uVar31 = (local_140[0] >> 8 & 0xff00ff) * local_b0;
              iVar43 = 0x100 - (uVar31 >> 0x18);
              iVar29 = ((uint)*(byte *)(local_98 + 1 + lVar36) * iVar43 >> 8) +
                       (uVar31 >> 8 & 0xff00ff);
              uVar31 = (((uint)*(byte *)(local_98 + 2 + lVar36) << 0x10 |
                        (uint)*(byte *)(local_98 + lVar36)) * iVar43 >> 8 & 0xff00ff) +
                       ((local_140[0] & 0xff00ff) * local_b0 >> 8 & 0xff00ff);
              uVar31 = 0x100 - (uVar31 >> 8 & 0x10001) | uVar31;
              *(byte *)(local_98 + 1 + lVar36) = -(char)((uint)iVar29 >> 8) | (byte)iVar29;
            }
            *(char *)(local_98 + 2 + lVar36) = (char)(uVar31 >> 0x10);
            *(char *)(local_98 + lVar36) = (char)uVar31;
            puVar38 = local_120;
            puVar55 = local_128;
          }
        }
        puVar53 = puVar53 + (long)puVar55;
        iVar39 = iVar39 + 1;
      } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
    }
    goto LAB_00346361;
  }
  if (param_7 == '\0') {
    fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
    dVar70 = (double)fVar71;
    dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                              _DAT_005d91b0 & SUB84(dVar70,0));
    if (dVar69 == DAT_005d94e0) {
      if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_00344bea;
LAB_0033df49:
      dVar70 = _DAT_005d9000 / dVar70;
      fVar67 = (float)((double)param_5[4] * dVar70);
      fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
      fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
      fVar71 = (float)((double)*param_5 * dVar70);
      local_108 = CONCAT44(fVar62,fVar67);
      uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                   fVar62 * param_5[5]);
      local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 - param_5[5] * fVar71,
                          fVar71);
    }
    else {
      if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033df49;
LAB_00344bea:
      local_f8 = *(undefined8 *)(param_5 + 4);
      local_108 = *(undefined8 *)param_5;
      uStack_100 = *(undefined8 *)(param_5 + 2);
    }
    local_c8 = 0.0;
    if (param_6 != 0) {
      local_c8 = DAT_005d9044;
    }
    local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
    local_b0 = param_4 + 1;
    local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
    local_a4 = (int)param_3[4] - 1;
    local_88 = 0x800;
    local_90 = malloc(0x1800);
    if (0 < *(int *)((long)local_120 + 0x1c)) {
      puVar53 = (uint *)*local_120;
      iVar39 = 0;
      puVar38 = local_120;
      do {
        lVar36 = (long)*(int *)((long)puVar38 + 0x24);
        uVar31 = *puVar53;
        if (1 < (int)uVar31) {
          puVar55 = puVar53 + 1;
          uVar48 = puVar53[1];
          local_68 = CONCAT44(local_68._4_4_,iVar39);
          lVar56 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
          local_a0 = (int)lVar56;
          local_98 = *(int *)((long)param_2 + 0x14) * lVar56 + *param_2;
          uVar58 = 0;
          local_78 = puVar53;
          local_60 = lVar36;
          do {
            uVar34 = puVar55[2];
            uVar42 = (ulong)uVar34;
            uVar30 = uVar34 + 0xff;
            if (-1 < (int)uVar34) {
              uVar30 = uVar34;
            }
            uVar45 = puVar55[1];
            iVar43 = (int)uVar30 >> 8;
            uVar30 = uVar48 + 0xff;
            if (-1 < (int)uVar48) {
              uVar30 = uVar48;
            }
            iVar39 = (int)uVar30 >> 8;
            uVar30 = iVar43 - iVar39;
            if (uVar30 == 0) {
              uVar58 = (uVar34 - uVar48) * uVar45 + uVar58;
              uVar30 = uVar31;
              uVar48 = uVar34;
            }
            else {
              iVar29 = (0x100 - (uVar48 & 0xff)) * uVar45;
              uVar34 = iVar29 + uVar58;
              uVar48 = iVar29 + uVar58 + 0xff;
              if (-1 < (int)uVar34) {
                uVar48 = uVar34;
              }
              if (0xff < (int)uVar34) {
                local_130 = (long *)CONCAT44(local_130._4_4_,uVar45);
                local_138 = uVar42;
                if (uVar34 < 0xff00) {
                  TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false>::
                  generate<juce::PixelRGB>
                            ((TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false> *)&local_108
                             ,(long)local_140,iVar39,1);
                  lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                  uVar48 = ((int)uVar48 >> 8 & 0xffU) * local_b0 >> 8;
                  uVar58 = (local_140[0] >> 8 & 0xff | 0xff0000) * uVar48;
                  iVar29 = 0x100 - (uVar58 >> 0x18);
                  iVar35 = ((uint)*(byte *)(local_98 + 1 + lVar36) * iVar29 >> 8) +
                           (uVar58 >> 8 & 0xff00ff);
                  uVar48 = (((uint)*(byte *)(local_98 + 2 + lVar36) << 0x10 |
                            (uint)*(byte *)(local_98 + lVar36)) * iVar29 >> 8 & 0xff00ff) +
                           (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) * uVar48
                            >> 8 & 0xff00ff);
                  uVar48 = 0x100 - (uVar48 >> 8 & 0x10001) | uVar48;
                  *(byte *)(local_98 + 1 + lVar36) = -(char)((uint)iVar35 >> 8) | (byte)iVar35;
                  *(char *)(local_98 + 2 + lVar36) = (char)(uVar48 >> 0x10);
                  *(char *)(local_98 + lVar36) = (char)uVar48;
                }
                else {
                  TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false>::
                  generate<juce::PixelRGB>
                            ((TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false> *)&local_108
                             ,(long)local_140,iVar39,1);
                  lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                  uVar48 = (local_140[0] >> 8 & 0xff | 0xff0000) * local_b0;
                  iVar29 = 0x100 - (uVar48 >> 0x18);
                  iVar35 = ((uint)*(byte *)(local_98 + 1 + lVar36) * iVar29 >> 8) +
                           (uVar48 >> 8 & 0xff00ff);
                  uVar48 = (((uint)*(byte *)(local_98 + 2 + lVar36) << 0x10 |
                            (uint)*(byte *)(local_98 + lVar36)) * iVar29 >> 8 & 0xff00ff) +
                           (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) * local_b0
                            >> 8 & 0xff00ff);
                  uVar48 = 0x100 - (uVar48 >> 8 & 0x10001) | uVar48;
                  *(byte *)(local_98 + 1 + lVar36) = -(char)((uint)iVar35 >> 8) | (byte)iVar35;
                  *(char *)(local_98 + 2 + lVar36) = (char)(uVar48 >> 0x10);
                  *(char *)(local_98 + lVar36) = (char)uVar48;
                }
                uVar42 = local_138;
                param_2 = local_c0;
                uVar45 = (uint)local_130;
              }
              if (0 < (int)uVar45) {
                iVar29 = (int)((long)iVar39 + 1);
                uVar48 = iVar43 - iVar29;
                if (uVar48 != 0 && iVar29 <= iVar43) {
                  local_118 = (uint *)CONCAT44(local_118._4_4_,iVar43);
                  local_70 = (uint *)CONCAT44(local_70._4_4_,iVar39);
                  local_138 = uVar42;
                  local_128 = (uint *)(ulong)uVar31;
                  local_110 = puVar55;
                  if ((int)local_88 < (int)uVar48) {
                    local_88 = (ulong)uVar48;
                    free(local_90);
                    local_90 = malloc((ulong)uVar48 * 3);
                  }
                  puVar53 = local_90;
                  local_130 = (long *)CONCAT44(local_130._4_4_,uVar45);
                  TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false>::
                  generate<juce::PixelRGB>
                            ((TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false> *)&local_108
                             ,(long)local_90,iVar29,uVar48);
                  lVar36 = (long)(int)local_c0[3];
                  lVar56 = ((long)iVar39 + 1) * lVar36;
                  iVar39 = (uVar45 & 0xff) * local_b0;
                  uVar31 = (uint)local_128;
                  if (iVar39 < 0xfe00) {
                    iVar39 = iVar39 >> 8;
                    pbVar37 = (byte *)(local_98 + lVar56 + 2);
                    pbVar52 = (byte *)((long)puVar53 + 2);
                    uVar48 = (int)local_118 - (int)local_70;
                    do {
                      uVar58 = (pbVar52[-1] | 0xff0000) * iVar39;
                      iVar43 = 0x100 - (uVar58 >> 0x18);
                      iVar29 = ((uint)pbVar37[-1] * iVar43 >> 8) + (uVar58 >> 8 & 0xff00ff);
                      uVar58 = (((uint)*pbVar37 << 0x10 | (uint)pbVar37[-2]) * iVar43 >> 8 &
                               0xff00ff) +
                               (((uint)*pbVar52 << 0x10 | (uint)pbVar52[-2]) * iVar39 >> 8 &
                               0xff00ff);
                      uVar58 = 0x100 - (uVar58 >> 8 & 0x10001) | uVar58;
                      pbVar37[-1] = -(char)((uint)iVar29 >> 8) | (byte)iVar29;
                      *pbVar37 = (byte)(uVar58 >> 0x10);
                      pbVar37[-2] = (byte)uVar58;
                      pbVar37 = pbVar37 + lVar36;
                      pbVar52 = pbVar52 + 3;
                      uVar48 = uVar48 - 1;
                    } while (1 < uVar48);
                  }
                  else {
                    pbVar37 = (byte *)(local_98 + lVar56 + 2);
                    do {
                      bVar28 = *(byte *)((long)puVar53 + 2);
                      uVar48 = *puVar53;
                      puVar53 = (uint *)((long)puVar53 + 3);
                      pbVar37[-2] = (byte)uVar48;
                      pbVar37[-1] = (byte)(uVar48 >> 8);
                      *pbVar37 = bVar28;
                      pbVar37 = pbVar37 + lVar36;
                      uVar30 = uVar30 - 1;
                    } while (1 < uVar30);
                  }
                  uVar42 = local_138;
                  puVar55 = local_110;
                  param_2 = local_c0;
                  uVar45 = (uint)local_130;
                  iVar43 = (int)local_118;
                }
              }
              uVar58 = ((uint)uVar42 & 0xff) * uVar45;
              uVar30 = uVar31;
              uVar48 = (uint)uVar42;
            }
            lVar36 = local_60;
            puVar53 = local_78;
            uVar31 = uVar30 - 1;
            puVar55 = puVar55 + 2;
          } while (2 < (int)uVar30);
          uVar31 = uVar58 + 0xff;
          if (-1 < (int)uVar58) {
            uVar31 = uVar58;
          }
          iVar39 = (int)local_68;
          puVar38 = local_120;
          if (0xff < (int)uVar58) {
            if (uVar58 < 0xff00) {
              TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false>::generate<juce::PixelRGB>
                        ((TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false> *)&local_108,
                         (long)local_140,iVar43,1);
              lVar56 = (long)(int)local_c0[3] * (long)iVar43;
              uVar31 = ((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8;
              uVar48 = (local_140[0] >> 8 & 0xff | 0xff0000) * uVar31;
              iVar43 = 0x100 - (uVar48 >> 0x18);
              iVar29 = ((uint)*(byte *)(local_98 + 1 + lVar56) * iVar43 >> 8) +
                       (uVar48 >> 8 & 0xff00ff);
              uVar31 = (((uint)*(byte *)(local_98 + 2 + lVar56) << 0x10 |
                        (uint)*(byte *)(local_98 + lVar56)) * iVar43 >> 8 & 0xff00ff) +
                       (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) * uVar31 >> 8
                       & 0xff00ff);
              uVar31 = 0x100 - (uVar31 >> 8 & 0x10001) | uVar31;
              *(byte *)(local_98 + 1 + lVar56) = -(char)((uint)iVar29 >> 8) | (byte)iVar29;
              *(char *)(local_98 + 2 + lVar56) = (char)(uVar31 >> 0x10);
              *(char *)(local_98 + lVar56) = (char)uVar31;
            }
            else {
              TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false>::generate<juce::PixelRGB>
                        ((TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false> *)&local_108,
                         (long)local_140,iVar43,1);
              lVar56 = (long)(int)local_c0[3] * (long)iVar43;
              uVar31 = (local_140[0] >> 8 & 0xff | 0xff0000) * local_b0;
              iVar43 = 0x100 - (uVar31 >> 0x18);
              iVar29 = ((uint)*(byte *)(local_98 + 1 + lVar56) * iVar43 >> 8) +
                       (uVar31 >> 8 & 0xff00ff);
              uVar31 = (((uint)*(byte *)(local_98 + 2 + lVar56) << 0x10 |
                        (uint)*(byte *)(local_98 + lVar56)) * iVar43 >> 8 & 0xff00ff) +
                       (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) * local_b0 >>
                        8 & 0xff00ff);
              uVar31 = 0x100 - (uVar31 >> 8 & 0x10001) | uVar31;
              *(byte *)(local_98 + 1 + lVar56) = -(char)((uint)iVar29 >> 8) | (byte)iVar29;
              *(char *)(local_98 + 2 + lVar56) = (char)(uVar31 >> 0x10);
              *(char *)(local_98 + lVar56) = (char)uVar31;
            }
            puVar38 = local_120;
            param_2 = local_c0;
          }
        }
        puVar53 = puVar53 + lVar36;
        iVar39 = iVar39 + 1;
      } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
    }
    goto LAB_00346361;
  }
  fVar71 = *param_5 * param_5[4] - param_5[3] * param_5[1];
  dVar70 = (double)fVar71;
  dVar69 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar70 >> 0x20),
                            _DAT_005d91b0 & SUB84(dVar70,0));
  if (dVar69 == DAT_005d94e0) {
    if ((fVar71 == 0.0) && (!NAN(fVar71))) goto LAB_00340ad6;
LAB_0033d5a1:
    dVar70 = _DAT_005d9000 / dVar70;
    fVar67 = (float)((double)param_5[4] * dVar70);
    fVar64 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar70);
    fVar62 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar70);
    fVar71 = (float)((double)*param_5 * dVar70);
    local_108 = CONCAT44(fVar62,fVar67);
    uStack_100 = CONCAT44(fVar64,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar67 -
                                 fVar62 * param_5[5]);
    local_f8 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar64 - param_5[5] * fVar71,
                        fVar71);
  }
  else {
    if ((DAT_005db368 < dVar69) && (DAT_005db370 * dVar69 < dVar69)) goto LAB_0033d5a1;
LAB_00340ad6:
    local_f8 = *(undefined8 *)(param_5 + 4);
    local_108 = *(undefined8 *)param_5;
    uStack_100 = *(undefined8 *)(param_5 + 2);
  }
  local_c8 = 0.0;
  if (param_6 != 0) {
    local_c8 = DAT_005d9044;
  }
  local_c4 = (uint)(param_6 == 0) * 0x80 + -0x80;
  local_b0 = param_4 + 1;
  local_a8 = *(int *)((long)param_3 + 0x1c) - 1;
  local_a4 = (int)param_3[4] - 1;
  local_88 = 0x800;
  local_90 = malloc(0x1800);
  if (0 < *(int *)((long)local_120 + 0x1c)) {
    puVar53 = (uint *)*local_120;
    iVar39 = 0;
    puVar38 = local_120;
    do {
      lVar36 = (long)*(int *)((long)puVar38 + 0x24);
      uVar31 = *puVar53;
      if (1 < (int)uVar31) {
        puVar55 = puVar53 + 1;
        uVar48 = puVar53[1];
        local_68 = CONCAT44(local_68._4_4_,iVar39);
        lVar56 = (long)iVar39 + (long)*(int *)((long)puVar38 + 0x14);
        local_a0 = (int)lVar56;
        local_98 = *(int *)((long)param_2 + 0x14) * lVar56 + *param_2;
        uVar58 = 0;
        local_78 = puVar53;
        local_60 = lVar36;
        do {
          uVar34 = puVar55[2];
          uVar42 = (ulong)uVar34;
          uVar30 = uVar34 + 0xff;
          if (-1 < (int)uVar34) {
            uVar30 = uVar34;
          }
          uVar45 = puVar55[1];
          iVar43 = (int)uVar30 >> 8;
          uVar30 = uVar48 + 0xff;
          if (-1 < (int)uVar48) {
            uVar30 = uVar48;
          }
          iVar39 = (int)uVar30 >> 8;
          uVar30 = iVar43 - iVar39;
          if (uVar30 == 0) {
            uVar58 = (uVar34 - uVar48) * uVar45 + uVar58;
            uVar30 = uVar31;
            uVar48 = uVar34;
          }
          else {
            iVar29 = (0x100 - (uVar48 & 0xff)) * uVar45;
            uVar34 = iVar29 + uVar58;
            uVar48 = iVar29 + uVar58 + 0xff;
            if (-1 < (int)uVar34) {
              uVar48 = uVar34;
            }
            if (0xff < (int)uVar34) {
              local_130 = (long *)CONCAT44(local_130._4_4_,uVar45);
              local_138 = uVar42;
              if (uVar34 < 0xff00) {
                TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true>::generate<juce::PixelRGB>
                          ((TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true> *)&local_108,
                           (long)local_140,iVar39,1);
                lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                uVar48 = ((int)uVar48 >> 8 & 0xffU) * local_b0 >> 8;
                uVar58 = (local_140[0] >> 8 & 0xff | 0xff0000) * uVar48;
                iVar29 = 0x100 - (uVar58 >> 0x18);
                iVar35 = ((uint)*(byte *)(local_98 + 1 + lVar36) * iVar29 >> 8) +
                         (uVar58 >> 8 & 0xff00ff);
                uVar48 = (((uint)*(byte *)(local_98 + 2 + lVar36) << 0x10 |
                          (uint)*(byte *)(local_98 + lVar36)) * iVar29 >> 8 & 0xff00ff) +
                         (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) * uVar48 >>
                          8 & 0xff00ff);
                uVar48 = 0x100 - (uVar48 >> 8 & 0x10001) | uVar48;
                *(byte *)(local_98 + 1 + lVar36) = -(char)((uint)iVar35 >> 8) | (byte)iVar35;
                *(char *)(local_98 + 2 + lVar36) = (char)(uVar48 >> 0x10);
                *(char *)(local_98 + lVar36) = (char)uVar48;
              }
              else {
                TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true>::generate<juce::PixelRGB>
                          ((TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true> *)&local_108,
                           (long)local_140,iVar39,1);
                lVar36 = (long)iVar39 * (long)(int)local_c0[3];
                uVar48 = (local_140[0] >> 8 & 0xff | 0xff0000) * local_b0;
                iVar29 = 0x100 - (uVar48 >> 0x18);
                iVar35 = ((uint)*(byte *)(local_98 + 1 + lVar36) * iVar29 >> 8) +
                         (uVar48 >> 8 & 0xff00ff);
                uVar48 = (((uint)*(byte *)(local_98 + 2 + lVar36) << 0x10 |
                          (uint)*(byte *)(local_98 + lVar36)) * iVar29 >> 8 & 0xff00ff) +
                         (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) * local_b0
                          >> 8 & 0xff00ff);
                uVar48 = 0x100 - (uVar48 >> 8 & 0x10001) | uVar48;
                *(byte *)(local_98 + 1 + lVar36) = -(char)((uint)iVar35 >> 8) | (byte)iVar35;
                *(char *)(local_98 + 2 + lVar36) = (char)(uVar48 >> 0x10);
                *(char *)(local_98 + lVar36) = (char)uVar48;
              }
              uVar42 = local_138;
              param_2 = local_c0;
              uVar45 = (uint)local_130;
            }
            if (0 < (int)uVar45) {
              iVar29 = (int)((long)iVar39 + 1);
              uVar48 = iVar43 - iVar29;
              if (uVar48 != 0 && iVar29 <= iVar43) {
                local_118 = (uint *)CONCAT44(local_118._4_4_,iVar43);
                local_70 = (uint *)CONCAT44(local_70._4_4_,iVar39);
                local_138 = uVar42;
                local_128 = (uint *)(ulong)uVar31;
                local_110 = puVar55;
                if ((int)local_88 < (int)uVar48) {
                  local_88 = (ulong)uVar48;
                  free(local_90);
                  local_90 = malloc((ulong)uVar48 * 3);
                }
                puVar53 = local_90;
                local_130 = (long *)CONCAT44(local_130._4_4_,uVar45);
                TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true>::generate<juce::PixelRGB>
                          ((TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true> *)&local_108,
                           (long)local_90,iVar29,uVar48);
                lVar36 = (long)(int)local_c0[3];
                lVar56 = ((long)iVar39 + 1) * lVar36;
                iVar39 = (uVar45 & 0xff) * local_b0;
                uVar31 = (uint)local_128;
                if (iVar39 < 0xfe00) {
                  iVar39 = iVar39 >> 8;
                  pbVar37 = (byte *)(local_98 + lVar56 + 2);
                  pbVar52 = (byte *)((long)puVar53 + 2);
                  uVar48 = (int)local_118 - (int)local_70;
                  do {
                    uVar58 = (pbVar52[-1] | 0xff0000) * iVar39;
                    iVar43 = 0x100 - (uVar58 >> 0x18);
                    iVar29 = ((uint)pbVar37[-1] * iVar43 >> 8) + (uVar58 >> 8 & 0xff00ff);
                    uVar58 = (((uint)*pbVar37 << 0x10 | (uint)pbVar37[-2]) * iVar43 >> 8 & 0xff00ff)
                             + (((uint)*pbVar52 << 0x10 | (uint)pbVar52[-2]) * iVar39 >> 8 &
                               0xff00ff);
                    uVar58 = 0x100 - (uVar58 >> 8 & 0x10001) | uVar58;
                    pbVar37[-1] = -(char)((uint)iVar29 >> 8) | (byte)iVar29;
                    *pbVar37 = (byte)(uVar58 >> 0x10);
                    pbVar37[-2] = (byte)uVar58;
                    pbVar37 = pbVar37 + lVar36;
                    pbVar52 = pbVar52 + 3;
                    uVar48 = uVar48 - 1;
                  } while (1 < uVar48);
                }
                else {
                  pbVar37 = (byte *)(local_98 + lVar56 + 2);
                  do {
                    bVar28 = *(byte *)((long)puVar53 + 2);
                    uVar48 = *puVar53;
                    puVar53 = (uint *)((long)puVar53 + 3);
                    pbVar37[-2] = (byte)uVar48;
                    pbVar37[-1] = (byte)(uVar48 >> 8);
                    *pbVar37 = bVar28;
                    pbVar37 = pbVar37 + lVar36;
                    uVar30 = uVar30 - 1;
                  } while (1 < uVar30);
                }
                uVar42 = local_138;
                puVar55 = local_110;
                param_2 = local_c0;
                uVar45 = (uint)local_130;
                iVar43 = (int)local_118;
              }
            }
            uVar58 = ((uint)uVar42 & 0xff) * uVar45;
            uVar30 = uVar31;
            uVar48 = (uint)uVar42;
          }
          lVar36 = local_60;
          puVar53 = local_78;
          uVar31 = uVar30 - 1;
          puVar55 = puVar55 + 2;
        } while (2 < (int)uVar30);
        uVar31 = uVar58 + 0xff;
        if (-1 < (int)uVar58) {
          uVar31 = uVar58;
        }
        iVar39 = (int)local_68;
        puVar38 = local_120;
        if (0xff < (int)uVar58) {
          if (uVar58 < 0xff00) {
            TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true>::generate<juce::PixelRGB>
                      ((TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true> *)&local_108,
                       (long)local_140,iVar43,1);
            lVar56 = (long)(int)local_c0[3] * (long)iVar43;
            uVar31 = ((int)uVar31 >> 8 & 0xffU) * local_b0 >> 8;
            uVar48 = (local_140[0] >> 8 & 0xff | 0xff0000) * uVar31;
            iVar43 = 0x100 - (uVar48 >> 0x18);
            iVar29 = ((uint)*(byte *)(local_98 + 1 + lVar56) * iVar43 >> 8) +
                     (uVar48 >> 8 & 0xff00ff);
            uVar31 = (((uint)*(byte *)(local_98 + 2 + lVar56) << 0x10 |
                      (uint)*(byte *)(local_98 + lVar56)) * iVar43 >> 8 & 0xff00ff) +
                     (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) * uVar31 >> 8 &
                     0xff00ff);
            uVar31 = 0x100 - (uVar31 >> 8 & 0x10001) | uVar31;
            *(byte *)(local_98 + 1 + lVar56) = -(char)((uint)iVar29 >> 8) | (byte)iVar29;
            *(char *)(local_98 + 2 + lVar56) = (char)(uVar31 >> 0x10);
            *(char *)(local_98 + lVar56) = (char)uVar31;
          }
          else {
            TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true>::generate<juce::PixelRGB>
                      ((TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true> *)&local_108,
                       (long)local_140,iVar43,1);
            lVar56 = (long)(int)local_c0[3] * (long)iVar43;
            uVar31 = (local_140[0] >> 8 & 0xff | 0xff0000) * local_b0;
            iVar43 = 0x100 - (uVar31 >> 0x18);
            iVar29 = ((uint)*(byte *)(local_98 + 1 + lVar56) * iVar43 >> 8) +
                     (uVar31 >> 8 & 0xff00ff);
            uVar31 = (((uint)*(byte *)(local_98 + 2 + lVar56) << 0x10 |
                      (uint)*(byte *)(local_98 + lVar56)) * iVar43 >> 8 & 0xff00ff) +
                     (((local_140[0] >> 0x10 & 0xff) << 0x10 | local_140[0] & 0xff) * local_b0 >> 8
                     & 0xff00ff);
            uVar31 = 0x100 - (uVar31 >> 8 & 0x10001) | uVar31;
            *(byte *)(local_98 + 1 + lVar56) = -(char)((uint)iVar29 >> 8) | (byte)iVar29;
            *(char *)(local_98 + 2 + lVar56) = (char)(uVar31 >> 0x10);
            *(char *)(local_98 + lVar56) = (char)uVar31;
          }
          puVar38 = local_120;
          param_2 = local_c0;
        }
      }
      puVar53 = puVar53 + lVar36;
      iVar39 = iVar39 + 1;
    } while (iVar39 < *(int *)((long)puVar38 + 0x1c));
  }
LAB_00346361:
  free(local_90);
  return;
}


