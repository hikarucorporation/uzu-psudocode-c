// Function : fillRectWithColour
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b2eb0
// Prototype: undefined fillRectWithColour(undefined8 param_1_00, undefined8 param_2, long param_3, long param_4, uint param_5)
// Body     : 003b2eb0 - 003b5b4c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRectWithColour(juce::RenderingHelpers::SoftwareRendererSavedState&,
   juce::Rectangle<float>, juce::PixelARGB) const */

void __cdecl
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillRectWithColour
          (undefined8 param_1_00,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  float fVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint *puVar28;
  ulong uVar29;
  byte bVar30;
  float fVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  float fVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  uint *puVar40;
  uint *puVar41;
  int iVar42;
  uint uVar43;
  long *plVar44;
  byte bVar45;
  float fVar46;
  bool bVar47;
  float local_1d0;
  float local_1a4;
  long *local_1a0;
  long local_198;
  undefined4 local_190;
  char local_18c;
  ulong local_188;
  undefined8 local_180;
  ulong local_178;
  ulong local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  uint local_148;
  int local_144;
  uint local_140;
  uint local_13c;
  long *local_138;
  ulong local_130;
  ulong local_128;
  uint local_11c;
  undefined8 local_118;
  long local_100 [2];
  int local_f0;
  int local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  long *local_d8;
  ulong local_d0;
  uint local_c4;
  long local_c0;
  long local_b8;
  size_t local_b0;
  int local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  float local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  long local_40;
  ulong local_38;
  
  plVar44 = *(long **)(param_4 + 0x68);
  if (plVar44 == (long *)0x0) {
    local_e4 = 0;
    local_e0 = 0;
  }
  else {
    local_e4 = (undefined4)plVar44[2];
    local_e0 = *(undefined4 *)((long)plVar44 + 0x14);
  }
  local_d8 = (long *)0x0;
                    /* try { // try from 003b2f0e to 003b2f25 has its CatchHandler @ 003b5b4d */
  local_118 = param_1_00;
  local_168 = param_2;
  (**(code **)(*plVar44 + 0x38))(plVar44,local_100,0,0,2);
  if (local_f0 != 1) {
    if (local_f0 == 2) {
      local_18c = '\0';
      dVar4 = (double)((float)local_118 * DAT_005de53c) + DAT_005d9098;
      dVar5 = (double)((local_168._4_4_ + local_118._4_4_) * _DAT_005dd2d0) + _DAT_005d9a90;
      uVar12 = SUB84(dVar5,0);
      dVar6 = (double)(local_118._4_4_ * _UNK_005dd2d4) + _UNK_005d9a98;
      uVar32 = SUB84(dVar6,0);
      dVar3 = (double)(((float)local_168 + (float)local_118) * DAT_005de53c) + DAT_005d9098;
      uVar17 = (int)uVar32 >> 8;
      if (((uVar12 ^ uVar32) & 0xffffff00) == 0) {
        uVar11 = uVar12 - uVar32;
        fVar31 = (float)(uVar17 + 1);
        uVar18 = 0;
        local_1a4 = fVar31;
        local_168._0_4_ = fVar31;
      }
      else {
        bVar47 = ((ulong)dVar6 & 0xff) != 0;
        uVar11 = uVar32 & 0xff ^ 0xff;
        if (!bVar47) {
          uVar11 = uVar32 & 0xff;
        }
        uVar18 = (ulong)(uVar12 & 0xff);
        fVar31 = (float)((uint)(((ulong)dVar5 & 0xff) != 0) + ((int)uVar12 >> 8));
        local_1a4 = (float)(bVar47 + uVar17);
        local_168._0_4_ = (float)((int)uVar12 >> 8);
      }
      uVar29 = (ulong)uVar17;
      uVar12 = SUB84(dVar3,0);
      uVar32 = SUB84(dVar4,0);
      uVar27 = (int)uVar32 >> 8;
      if (((uVar12 ^ uVar32) & 0xffffff00) == 0) {
        uVar16 = uVar12 - uVar32;
        uVar32 = uVar27 + 1;
        local_150 = (uint *)((ulong)local_150._4_4_ << 0x20);
        iVar23 = *(int *)(param_3 + 0x1c);
        uVar25 = uVar32;
        local_118._0_4_ = (float)uVar32;
      }
      else {
        bVar47 = ((ulong)dVar4 & 0xff) != 0;
        uVar16 = uVar32 & 0xff ^ 0xff;
        if (!bVar47) {
          uVar16 = uVar32 & 0xff;
        }
        uVar32 = bVar47 + uVar27;
        uVar25 = (int)uVar12 >> 8;
        local_150 = (uint *)(CONCAT44(local_150._4_4_,uVar12) & 0xffffffff000000ff);
        local_118._0_4_ = (float)((((ulong)dVar3 & 0xff) != 0) + uVar25);
        iVar23 = *(int *)(param_3 + 0x1c);
      }
      local_1a0 = local_100;
      local_190 = param_5;
      if ((long)iVar23 != 0) {
        uVar35 = (ulong)uVar27;
        puVar40 = *(uint **)(param_3 + 0x10);
        puVar41 = puVar40 + (long)iVar23 * 4;
        local_130 = CONCAT71(local_130._1_7_,-(int)local_150 == uVar16 && uVar25 - uVar32 == 1);
        local_138 = (long *)(long)(int)uVar17;
        local_144 = (int)(uVar16 * uVar11) >> 8;
        local_b8 = CONCAT44(local_b8._4_4_,uVar11 + 1);
        local_13c = (int)((int)local_150 * uVar11) >> 8;
        local_128 = (ulong)(int)(float)local_168;
        iVar23 = (int)uVar18;
        local_148 = (int)(uVar16 * iVar23) >> 8;
        local_c0 = CONCAT44(local_c0._4_4_,iVar23 + 1);
        local_d0 = CONCAT44(local_d0._4_4_,(uint)((int)local_150 * iVar23) >> 8);
        local_180 = uVar29;
        local_178 = uVar35;
        local_158 = uVar18;
        do {
          fVar46 = (float)puVar40[1];
          if ((int)fVar46 < (int)fVar31) {
            fVar19 = (float)(puVar40[3] + (int)fVar46);
            iVar23 = (int)uVar29;
            if ((iVar23 < (int)fVar19) && (uVar17 = *puVar40, (int)uVar17 < (int)(float)local_118))
            {
              uVar12 = puVar40[2] + uVar17;
              iVar22 = (int)uVar35;
              if (iVar22 < (int)uVar12) {
                if ((char)local_130 == '\0') {
                  local_170 = CONCAT44(local_170._4_4_,fVar19);
                  bVar47 = uVar16 != 0;
                  uVar27 = uVar32;
                  if ((int)uVar32 < (int)uVar17) {
                    uVar27 = uVar17;
                  }
                  uVar24 = uVar25;
                  if ((int)uVar12 < (int)uVar25) {
                    uVar24 = uVar12;
                  }
                  iVar42 = uVar24 - uVar27;
                  bVar2 = (int)uVar17 <= iVar22;
                  bVar7 = (int)uVar25 < (int)uVar12 && (int)local_150 != 0;
                  local_188 = CONCAT71(local_188._1_7_,bVar7);
                  if ((uVar11 != 0) && ((int)fVar46 <= iVar23)) {
                    local_198 = (long)*(int *)((long)local_1a0 + 0x14) * (long)local_138 +
                                *local_1a0;
                    if (bVar2 && bVar47) {
                      lVar37 = (long)iVar22 * (long)(int)local_1a0[3];
                      uVar12 = (local_190 >> 8 & 0xff00ff) * local_144;
                      iVar23 = 0x100 - (uVar12 >> 0x18);
                      uVar17 = *(uint *)(local_198 + lVar37);
                      uVar24 = ((uVar17 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                               ((local_190 & 0xff00ff) * local_144 >> 8 & 0xff00ff);
                      uVar17 = ((uVar17 >> 8 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                               (uVar12 >> 8 & 0xff00ff);
                      *(uint *)(local_198 + lVar37) =
                           ((0x100 - (uVar17 >> 8 & 0x10001) | uVar17) & 0xff00ff) << 8 |
                           (0x100 - (uVar24 >> 8 & 0x10001) | uVar24) & 0xff00ff;
                    }
                    if (0 < iVar42) {
                      uVar17 = (local_190 >> 8 & 0xff00ff) * (int)local_b8;
                      uVar12 = (local_190 & 0xff00ff) * (int)local_b8 >> 8 & 0xff00ff;
                      lVar37 = (long)(int)local_1a0[3];
                      puVar28 = (uint *)((int)uVar27 * lVar37 + local_198);
                      if (uVar17 < 0xff000000) {
                        iVar23 = 0x100 - (uVar17 >> 0x18);
                        uVar24 = iVar42 + 1;
                        do {
                          uVar34 = ((*puVar28 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) + uVar12;
                          uVar33 = ((*puVar28 >> 8 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                                   (uVar17 >> 8 & 0xff00ff);
                          *puVar28 = ((0x100 - (uVar33 >> 8 & 0x10001) | uVar33) & 0xff00ff) << 8 |
                                     (0x100 - (uVar34 >> 8 & 0x10001) | uVar34) & 0xff00ff;
                          puVar28 = (uint *)((long)puVar28 + lVar37);
                          uVar24 = uVar24 - 1;
                        } while (1 < uVar24);
                      }
                      else {
                        uVar24 = iVar42 + 1;
                        do {
                          *puVar28 = uVar17 & 0xff000000 | uVar17 & 0xff00 | uVar12;
                          puVar28 = (uint *)((long)puVar28 + lVar37);
                          uVar24 = uVar24 - 1;
                        } while (1 < uVar24);
                      }
                    }
                    uVar35 = local_178;
                    uVar29 = local_180;
                    if (bVar7) {
                      lVar37 = (long)(int)uVar25 * (long)(int)local_1a0[3];
                      uVar12 = (local_190 >> 8 & 0xff00ff) * local_13c;
                      iVar23 = 0x100 - (uVar12 >> 0x18);
                      uVar17 = *(uint *)(local_198 + lVar37);
                      uVar24 = ((uVar17 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                               ((local_190 & 0xff00ff) * local_13c >> 8 & 0xff00ff);
                      uVar17 = ((uVar17 >> 8 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                               (uVar12 >> 8 & 0xff00ff);
                      *(uint *)(local_198 + lVar37) =
                           ((0x100 - (uVar17 >> 8 & 0x10001) | uVar17) & 0xff00ff) << 8 |
                           (0x100 - (uVar24 >> 8 & 0x10001) | uVar24) & 0xff00ff;
                    }
                  }
                  if ((int)fVar46 < (int)local_1a4) {
                    fVar46 = local_1a4;
                  }
                  fVar36 = (float)local_168;
                  if ((int)fVar19 < (int)(float)local_168) {
                    fVar36 = fVar19;
                  }
                  iVar23 = (int)fVar36 - (int)fVar46;
                  if (iVar23 != 0 && (int)fVar46 <= (int)fVar36) {
                    if (iVar23 == 1) {
                      local_198 = (long)*(int *)((long)local_1a0 + 0x14) * (long)(int)fVar46 +
                                  *local_1a0;
                      if (bVar2 && bVar47) {
                        lVar37 = (long)(int)uVar35 * (long)(int)local_1a0[3];
                        uVar12 = (local_190 >> 8 & 0xff00ff) * uVar16;
                        iVar23 = 0x100 - (uVar12 >> 0x18);
                        uVar17 = *(uint *)(local_198 + lVar37);
                        uVar24 = ((uVar17 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                                 ((local_190 & 0xff00ff) * uVar16 >> 8 & 0xff00ff);
                        uVar17 = ((uVar17 >> 8 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                                 (uVar12 >> 8 & 0xff00ff);
                        *(uint *)(local_198 + lVar37) =
                             ((0x100 - (uVar17 >> 8 & 0x10001) | uVar17) & 0xff00ff) << 8 |
                             (0x100 - (uVar24 >> 8 & 0x10001) | uVar24) & 0xff00ff;
                      }
                      if (0 < iVar42) {
                        lVar37 = (long)(int)local_1a0[3];
                        puVar28 = (uint *)((int)uVar27 * lVar37 + local_198);
                        if (local_190._3_1_ == -1) {
                          uVar17 = iVar42 + 1;
                          do {
                            *puVar28 = local_190;
                            puVar28 = (uint *)((long)puVar28 + lVar37);
                            uVar17 = uVar17 - 1;
                          } while (1 < uVar17);
                        }
                        else {
                          iVar23 = 0x100 - (local_190 >> 0x18);
                          uVar17 = iVar42 + 1;
                          do {
                            uVar24 = ((*puVar28 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                                     (local_190 & 0xff00ff);
                            uVar12 = ((*puVar28 >> 8 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                                     (local_190 >> 8 & 0xff00ff);
                            *puVar28 = ((0x100 - (uVar12 >> 8 & 0x10001) | uVar12) & 0xff00ff) << 8
                                       | (0x100 - (uVar24 >> 8 & 0x10001) | uVar24) & 0xff00ff;
                            puVar28 = (uint *)((long)puVar28 + lVar37);
                            uVar17 = uVar17 - 1;
                          } while (1 < uVar17);
                        }
                      }
                      uVar35 = local_178;
                      uVar29 = local_180;
                      if (bVar7) {
                        lVar37 = (long)(int)uVar25 * (long)(int)local_1a0[3];
                        uVar12 = (local_190 >> 8 & 0xff00ff) * (int)local_150;
                        iVar23 = 0x100 - (uVar12 >> 0x18);
                        uVar17 = *(uint *)(local_198 + lVar37);
                        uVar24 = ((uVar17 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                                 ((local_190 & 0xff00ff) * (int)local_150 >> 8 & 0xff00ff);
                        uVar17 = ((uVar17 >> 8 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                                 (uVar12 >> 8 & 0xff00ff);
                        *(uint *)(local_198 + lVar37) =
                             ((0x100 - (uVar17 >> 8 & 0x10001) | uVar17) & 0xff00ff) << 8 |
                             (0x100 - (uVar24 >> 8 & 0x10001) | uVar24) & 0xff00ff;
                      }
                    }
                    else {
                      if (bVar2 && bVar47) {
                        EdgeTableFillers::SolidColour<juce::PixelARGB,false>::
                        handleEdgeTableRectangle
                                  ((SolidColour<juce::PixelARGB,false> *)&local_1a0,(int)uVar35,
                                   (int)fVar46,1,iVar23,uVar16);
                        uVar35 = local_178;
                        uVar29 = local_180;
                      }
                      if (0 < iVar42) {
                        EdgeTableFillers::SolidColour<juce::PixelARGB,false>::
                        handleEdgeTableRectangle
                                  ((SolidColour<juce::PixelARGB,false> *)&local_1a0,uVar27,
                                   (int)fVar46,iVar42,iVar23,0xff);
                        uVar35 = local_178;
                        uVar29 = local_180;
                      }
                      if ((char)local_188 != '\0') {
                        EdgeTableFillers::SolidColour<juce::PixelARGB,false>::
                        handleEdgeTableRectangle
                                  ((SolidColour<juce::PixelARGB,false> *)&local_1a0,uVar25,
                                   (int)fVar46,1,iVar23,(int)local_150);
                        uVar35 = local_178;
                        uVar29 = local_180;
                      }
                    }
                  }
                  uVar18 = local_158;
                  if (((int)local_158 != 0) && ((int)(float)local_168 < (int)(uint)local_170)) {
                    local_198 = (long)*(int *)((long)local_1a0 + 0x14) * local_128 + *local_1a0;
                    if (bVar2 && bVar47) {
                      lVar37 = (long)(int)uVar35 * (long)(int)local_1a0[3];
                      uVar12 = (local_190 >> 8 & 0xff00ff) * local_148;
                      iVar23 = 0x100 - (uVar12 >> 0x18);
                      uVar17 = *(uint *)(local_198 + lVar37);
                      uVar24 = ((uVar17 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                               ((local_190 & 0xff00ff) * local_148 >> 8 & 0xff00ff);
                      uVar17 = ((uVar17 >> 8 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                               (uVar12 >> 8 & 0xff00ff);
                      *(uint *)(local_198 + lVar37) =
                           ((0x100 - (uVar17 >> 8 & 0x10001) | uVar17) & 0xff00ff) << 8 |
                           (0x100 - (uVar24 >> 8 & 0x10001) | uVar24) & 0xff00ff;
                    }
                    if (0 < iVar42) {
                      uVar17 = (local_190 >> 8 & 0xff00ff) * (int)local_c0;
                      uVar12 = (local_190 & 0xff00ff) * (int)local_c0 >> 8 & 0xff00ff;
                      lVar37 = (long)(int)local_1a0[3];
                      puVar28 = (uint *)((int)uVar27 * lVar37 + local_198);
                      if (uVar17 < 0xff000000) {
                        iVar23 = 0x100 - (uVar17 >> 0x18);
                        uVar27 = iVar42 + 1;
                        do {
                          uVar24 = ((*puVar28 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) + uVar12;
                          uVar34 = ((*puVar28 >> 8 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                                   (uVar17 >> 8 & 0xff00ff);
                          *puVar28 = ((0x100 - (uVar34 >> 8 & 0x10001) | uVar34) & 0xff00ff) << 8 |
                                     (0x100 - (uVar24 >> 8 & 0x10001) | uVar24) & 0xff00ff;
                          puVar28 = (uint *)((long)puVar28 + lVar37);
                          uVar27 = uVar27 - 1;
                        } while (1 < uVar27);
                      }
                      else {
                        uVar27 = iVar42 + 1;
                        do {
                          *puVar28 = uVar17 & 0xff000000 | uVar17 & 0xff00 | uVar12;
                          puVar28 = (uint *)((long)puVar28 + lVar37);
                          uVar27 = uVar27 - 1;
                        } while (1 < uVar27);
                      }
                    }
                    uVar35 = local_178;
                    uVar29 = local_180;
                    uVar17 = uVar25;
                    iVar23 = (int)local_d0;
                    if ((char)local_188 != '\0') goto LAB_003b4160;
                  }
                }
                else {
                  if ((uVar11 != 0) && ((int)fVar46 <= iVar23)) {
                    local_198 = (long)*(int *)((long)local_1a0 + 0x14) * (long)local_138 +
                                *local_1a0;
                    lVar37 = (long)(int)uVar32 * (long)(int)local_1a0[3];
                    uVar12 = (local_190 >> 8 & 0xff00ff) * uVar11;
                    iVar23 = 0x100 - (uVar12 >> 0x18);
                    uVar17 = *(uint *)(lVar37 + local_198);
                    uVar27 = ((uVar17 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                             ((local_190 & 0xff00ff) * uVar11 >> 8 & 0xff00ff);
                    uVar17 = ((uVar17 >> 8 & 0xff00ff) * iVar23 >> 8 & 0xff00ff) +
                             (uVar12 >> 8 & 0xff00ff);
                    *(uint *)(lVar37 + local_198) =
                         ((0x100 - (uVar17 >> 8 & 0x10001) | uVar17) & 0xff00ff) << 8 |
                         (0x100 - (uVar27 >> 8 & 0x10001) | uVar27) & 0xff00ff;
                  }
                  if ((int)fVar46 < (int)local_1a4) {
                    fVar46 = local_1a4;
                  }
                  fVar36 = (float)local_168;
                  if ((int)fVar19 < (int)(float)local_168) {
                    fVar36 = fVar19;
                  }
                  if ((int)fVar36 - (int)fVar46 != 0 && (int)fVar46 <= (int)fVar36) {
                    EdgeTableFillers::SolidColour<juce::PixelARGB,false>::handleEdgeTableRectangle
                              ((SolidColour<juce::PixelARGB,false> *)&local_1a0,uVar32,(int)fVar46,1
                               ,(int)fVar36 - (int)fVar46,0xff);
                    uVar35 = local_178;
                    uVar29 = local_180;
                  }
                  if (((int)uVar18 != 0) && ((int)(float)local_168 < (int)fVar19)) {
                    local_198 = (long)*(int *)((long)local_1a0 + 0x14) * local_128 + *local_1a0;
                    uVar17 = uVar32;
                    iVar23 = (int)uVar18;
LAB_003b4160:
                    lVar37 = (long)(int)uVar17 * (long)(int)local_1a0[3];
                    uVar12 = (local_190 >> 8 & 0xff00ff) * iVar23;
                    iVar22 = 0x100 - (uVar12 >> 0x18);
                    uVar17 = *(uint *)(local_198 + lVar37);
                    uVar27 = ((uVar17 & 0xff00ff) * iVar22 >> 8 & 0xff00ff) +
                             ((local_190 & 0xff00ff) * iVar23 >> 8 & 0xff00ff);
                    uVar17 = ((uVar17 >> 8 & 0xff00ff) * iVar22 >> 8 & 0xff00ff) +
                             (uVar12 >> 8 & 0xff00ff);
                    *(uint *)(local_198 + lVar37) =
                         ((0x100 - (uVar17 >> 8 & 0x10001) | uVar17) & 0xff00ff) << 8 |
                         (0x100 - (uVar27 >> 8 & 0x10001) | uVar27) & 0xff00ff;
                  }
                }
              }
            }
          }
          puVar40 = puVar40 + 4;
        } while (puVar40 != puVar41);
      }
      goto LAB_003b5b28;
    }
    dVar4 = (double)((float)local_118 * DAT_005de53c) + DAT_005d9098;
    dVar5 = (double)((local_168._4_4_ + local_118._4_4_) * _DAT_005dd2d0) + _DAT_005d9a90;
    uVar27 = SUB84(dVar5,0);
    dVar6 = (double)(local_118._4_4_ * _UNK_005dd2d4) + _UNK_005d9a98;
    uVar16 = SUB84(dVar6,0);
    dVar3 = (double)(((float)local_168 + (float)local_118) * DAT_005de53c) + DAT_005d9098;
    uVar11 = SUB84(dVar3,0);
    uVar12 = SUB84(dVar4,0);
    uVar17 = (int)uVar16 >> 8;
    uVar32 = (int)uVar12 >> 8;
    if (((uVar27 ^ uVar16) & 0xffffff00) == 0) {
      uVar18 = (ulong)(uVar27 - uVar16);
      uVar27 = uVar17 + 1;
      local_188 = 0;
      local_1a4 = (float)uVar27;
      local_118._0_4_ = (float)uVar27;
      if (((uVar11 ^ uVar12) & 0xffffff00) == 0) goto LAB_003b4cc7;
LAB_003b311c:
      bVar47 = ((ulong)dVar4 & 0xff) != 0;
      uVar25 = uVar12 & 0xff ^ 0xff;
      if (!bVar47) {
        uVar25 = uVar12 & 0xff;
      }
      uVar12 = bVar47 + uVar32;
      local_128 = (ulong)(uVar11 & 0xff);
      iVar23 = *(int *)(param_3 + 0x1c);
      uVar16 = (int)uVar11 >> 8;
      uVar11 = (uint)(((ulong)dVar3 & 0xff) != 0) + ((int)uVar11 >> 8);
    }
    else {
      bVar47 = ((ulong)dVar6 & 0xff) != 0;
      uVar25 = uVar16 & 0xff ^ 0xff;
      if (!bVar47) {
        uVar25 = uVar16 & 0xff;
      }
      local_1a4 = (float)(bVar47 + uVar17);
      local_118._0_4_ = (float)((int)uVar27 >> 8);
      local_188 = (ulong)(uVar27 & 0xff);
      uVar27 = (uint)(((ulong)dVar5 & 0xff) != 0) + (int)(float)local_118;
      uVar18 = (ulong)uVar25;
      if (((uVar11 ^ uVar12) & 0xffffff00) != 0) goto LAB_003b311c;
LAB_003b4cc7:
      uVar25 = uVar11 - uVar12;
      uVar12 = uVar32 + 1;
      local_128 = 0;
      iVar23 = *(int *)(param_3 + 0x1c);
      uVar16 = uVar12;
      uVar11 = uVar12;
    }
    local_178 = (ulong)uVar17;
    local_138 = (long *)(ulong)uVar25;
    if ((long)iVar23 != 0) {
      local_178 = (ulong)uVar17;
      uVar35 = (ulong)uVar32;
      uVar24 = param_5 >> 0x18;
      puVar41 = *(uint **)(param_3 + 0x10);
      puVar40 = puVar41 + (long)iVar23 * 4;
      iVar23 = (int)local_128;
      iVar22 = (int)uVar18;
      local_58 = (int)local_188;
      local_4c = ((uint)(iVar23 * local_58) >> 8) + 1;
      local_7c = (((int)(uVar25 * iVar22) >> 8) + 1) * uVar24 >> 8;
      local_88 = 0x100 - local_7c;
      local_64 = param_5 >> 8 & 0xff00ff;
      local_68 = local_64 * (iVar22 + 1);
      local_50 = local_68 >> 0x18;
      local_54 = 0x100 - local_50;
      local_80 = ((iVar23 * iVar22 >> 8) + 1) * uVar24 >> 8;
      local_8c = 0x100 - local_80;
      local_98 = local_64 * (uVar25 + 1);
      local_6c = local_98 >> 0x18;
      local_70 = 0x100 - local_6c;
      iVar42 = 0x100 - uVar24;
      local_a0 = local_64 * (iVar23 + 1);
      local_74 = local_a0 >> 0x18;
      local_180 = CONCAT44(local_180._4_4_,0x100 - local_74);
      local_94 = (uVar25 + 1) * uVar24 >> 8;
      local_a4 = 0x100 - local_94;
      local_9c = (iVar23 + 1) * uVar24 >> 8;
      local_a8 = 0x100 - local_9c;
      local_84 = (((int)(uVar25 * local_58) >> 8) + 1) * uVar24 >> 8;
      local_90 = 0x100 - local_84;
      local_58 = local_58 + 1;
      local_64 = local_64 * local_58;
      uVar32 = local_64 >> 0x18;
      local_5c = 0x100 - uVar32;
      local_48 = (iVar22 + 1) * uVar24 >> 8;
      local_60 = 0x100 - local_48;
      local_b8 = (long)(int)uVar17;
      local_c0 = (long)(int)(float)local_118;
      uVar29 = local_178;
      local_148 = param_5;
      local_130 = uVar18;
      local_11c = uVar32;
      local_38 = uVar35;
      do {
        uVar17 = puVar41[1];
        if ((int)uVar17 < (int)uVar27) {
          uVar34 = puVar41[3] + uVar17;
          if (((int)uVar29 < (int)uVar34) && (uVar33 = *puVar41, (int)uVar33 < (int)uVar11)) {
            uVar13 = puVar41[2] + uVar33;
            iVar22 = (int)uVar35;
            if (iVar22 < (int)uVar13) {
              bVar45 = (byte)(param_5 >> 0x18);
              if (-iVar23 == uVar25 && uVar16 - uVar12 == 1) {
                if (((int)local_130 != 0) && ((int)uVar17 <= (int)uVar29)) {
                  lVar37 = local_ec * local_b8 + local_100[0];
                  *(char *)((long)(int)uVar12 * (long)local_e8 + lVar37) =
                       (char)((uint)*(byte *)((long)(int)uVar12 * (long)local_e8 + lVar37) *
                              local_60 >> 8) + (char)local_48;
                }
                if ((int)uVar17 < (int)local_1a4) {
                  uVar17 = (uint)local_1a4;
                }
                uVar33 = (uint)(float)local_118;
                if ((int)uVar34 < (int)(float)local_118) {
                  uVar33 = uVar34;
                }
                uVar13 = uVar33 - uVar17;
                if (uVar13 != 0 && (int)uVar17 <= (int)uVar33) {
                  lVar37 = (long)local_ec;
                  pbVar9 = (byte *)((long)(int)(local_e8 * uVar12) +
                                   (int)uVar17 * lVar37 + local_100[0]);
                  if (local_148 < 0xff000000) {
                    uVar17 = (uVar33 - uVar17) + 1;
                    do {
                      *pbVar9 = (char)((uint)*pbVar9 * iVar42 >> 8) + bVar45;
                      uVar17 = uVar17 - 1;
                      pbVar9 = pbVar9 + lVar37;
                    } while (1 < uVar17);
                  }
                  else if (local_e8 == 1) {
                    *pbVar9 = bVar45;
                    for (; 1 < uVar13; uVar13 = uVar13 - 1) {
                      pbVar9 = pbVar9 + local_ec;
                      *pbVar9 = bVar45;
                    }
                  }
                  else {
                    uVar17 = (uVar33 - uVar17) + 1;
                    do {
                      *pbVar9 = bVar45;
                      uVar17 = uVar17 - 1;
                      pbVar9 = pbVar9 + lVar37;
                    } while (1 < uVar17);
                  }
                }
                if (((int)local_188 != 0) && ((int)(float)local_118 < (int)uVar34)) {
                  lVar37 = local_ec * local_c0 + local_100[0];
                  iVar22 = local_58;
                  uVar17 = uVar12;
LAB_003b4f41:
                  *(char *)(lVar37 + (long)(int)uVar17 * (long)local_e8) =
                       (char)((0x100 - (iVar22 * uVar24 >> 8)) *
                              (uint)*(byte *)(lVar37 + (long)(int)uVar17 * (long)local_e8) >> 8) +
                       (char)(iVar22 * uVar24 >> 8);
                }
              }
              else {
                local_170 = CONCAT44(local_170._4_4_,uVar17);
                bVar47 = (int)local_138 != 0;
                uVar1 = uVar12;
                if ((int)uVar12 < (int)uVar33) {
                  uVar1 = uVar33;
                }
                uVar43 = uVar16;
                if ((int)uVar13 < (int)uVar16) {
                  uVar43 = uVar13;
                }
                local_168._0_4_ = (float)(uVar43 - uVar1);
                bVar2 = (int)uVar33 <= iVar22;
                bVar7 = (int)uVar16 < (int)uVar13 && (int)local_128 != 0;
                local_150 = puVar41;
                if (((int)local_130 != 0) && ((int)uVar17 <= (int)local_178)) {
                  local_158 = CONCAT44(local_158._4_4_,uVar34);
                  lVar37 = local_ec * local_b8 + local_100[0];
                  if (bVar2 && bVar47) {
                    *(char *)(lVar37 + (long)iVar22 * (long)local_e8) =
                         (char)((uint)*(byte *)(lVar37 + (long)iVar22 * (long)local_e8) * local_88
                               >> 8) + (char)local_7c;
                  }
                  if (0 < (int)(float)local_168) {
                    lVar10 = (long)local_e8;
                    pbVar9 = (byte *)((int)uVar1 * lVar10 + lVar37);
                    if (local_68 < 0xff000000) {
                      uVar17 = (uVar43 - uVar1) + 1;
                      do {
                        *pbVar9 = (char)((uint)*pbVar9 * local_54 >> 8) + (byte)local_50;
                        uVar17 = uVar17 - 1;
                        pbVar9 = pbVar9 + lVar10;
                      } while (1 < uVar17);
                    }
                    else if (local_e8 == 1) {
                      memset(pbVar9,local_50 & 0xff,(ulong)(uint)(float)local_168);
                      uVar32 = local_11c;
                    }
                    else {
                      uVar17 = (uVar43 - uVar1) + 1;
                      do {
                        *pbVar9 = (byte)local_50;
                        uVar17 = uVar17 - 1;
                        pbVar9 = pbVar9 + lVar10;
                      } while (1 < uVar17);
                    }
                  }
                  uVar34 = (uint)local_158;
                  if (bVar7) {
                    *(char *)(lVar37 + (long)(int)uVar16 * (long)local_e8) =
                         (char)((uint)*(byte *)(lVar37 + (long)(int)uVar16 * (long)local_e8) *
                                local_8c >> 8) + (char)local_80;
                  }
                }
                puVar41 = local_150;
                uVar17 = (uint)local_170;
                if ((int)(uint)local_170 < (int)local_1a4) {
                  uVar17 = (uint)local_1a4;
                }
                uVar33 = (uint)(float)local_118;
                if ((int)uVar34 < (int)(float)local_118) {
                  uVar33 = uVar34;
                }
                uVar13 = uVar33 - uVar17;
                cVar20 = bVar2 && bVar47;
                if (uVar13 != 0 && (int)uVar17 <= (int)uVar33) {
                  local_170 = CONCAT44(local_170._4_4_,uVar17);
                  lVar37 = (long)(int)uVar17;
                  local_144 = CONCAT31(local_144._1_3_,bVar2 && bVar47);
                  if (uVar13 == 1) {
                    lVar37 = local_ec * lVar37 + local_100[0];
                    if (bVar2 && bVar47) {
                      *(char *)(lVar37 + (long)iVar22 * (long)local_e8) =
                           (char)((uint)*(byte *)(lVar37 + (long)iVar22 * (long)local_e8) * local_a4
                                 >> 8) + (char)local_94;
                    }
                    if (0 < (int)(float)local_168) {
                      lVar10 = (long)local_e8;
                      pbVar9 = (byte *)((int)uVar1 * lVar10 + lVar37);
                      if (uVar24 == 0xff) {
                        if (local_e8 == 1) {
                          local_158 = CONCAT44(local_158._4_4_,uVar34);
                          memset(pbVar9,0xff,(ulong)(uint)(float)local_168);
                          uVar32 = local_11c;
                          uVar34 = (uint)local_158;
                        }
                        else {
                          uVar17 = (uVar43 - uVar1) + 1;
                          do {
                            *pbVar9 = bVar45;
                            uVar17 = uVar17 - 1;
                            pbVar9 = pbVar9 + lVar10;
                          } while (1 < uVar17);
                        }
                      }
                      else {
                        uVar17 = (uVar43 - uVar1) + 1;
                        do {
                          *pbVar9 = (char)((uint)*pbVar9 * iVar42 >> 8) + bVar45;
                          uVar17 = uVar17 - 1;
                          pbVar9 = pbVar9 + lVar10;
                        } while (1 < uVar17);
                      }
                    }
                    cVar20 = (char)local_144;
                    if (bVar7) {
                      *(char *)(lVar37 + (long)(int)uVar16 * (long)local_e8) =
                           (char)((uint)*(byte *)(lVar37 + (long)(int)uVar16 * (long)local_e8) *
                                  local_a8 >> 8) + (char)local_9c;
                    }
                  }
                  else {
                    local_158 = CONCAT44(local_158._4_4_,uVar34);
                    if (bVar2 && bVar47) {
                      lVar10 = (long)local_ec;
                      pbVar9 = (byte *)((long)(local_e8 * iVar22) + lVar10 * lVar37 + local_100[0]);
                      bVar30 = (byte)local_6c;
                      if (local_98 < 0xff000000) {
                        uVar17 = (uVar33 - uVar17) + 1;
                        do {
                          *pbVar9 = (char)((uint)*pbVar9 * local_70 >> 8) + bVar30;
                          uVar17 = uVar17 - 1;
                          pbVar9 = pbVar9 + lVar10;
                        } while (1 < uVar17);
                      }
                      else if (local_e8 == 1) {
                        *pbVar9 = bVar30;
                        for (uVar17 = uVar13; 1 < uVar17; uVar17 = uVar17 - 1) {
                          pbVar9 = pbVar9 + local_ec;
                          *pbVar9 = bVar30;
                        }
                      }
                      else {
                        uVar17 = (uVar33 - uVar17) + 1;
                        do {
                          *pbVar9 = bVar30;
                          uVar17 = uVar17 - 1;
                          pbVar9 = pbVar9 + lVar10;
                        } while (1 < uVar17);
                      }
                    }
                    local_140 = uVar13;
                    local_13c = uVar24;
                    local_c4 = uVar33;
                    local_40 = lVar37;
                    if (0 < (int)(float)local_168) {
                      lVar38 = (long)local_ec;
                      lVar10 = (long)local_e8;
                      pbVar9 = (byte *)((int)uVar1 * lVar10 + lVar38 * lVar37 + local_100[0]);
                      if (local_148 < 0xff000000) {
                        uVar17 = (uint)(float)local_168 & 3;
                        do {
                          pbVar15 = pbVar9;
                          fVar31 = (float)local_168;
                          if (uVar17 != 0) {
                            uVar32 = uVar17;
                            do {
                              *pbVar15 = (char)((uint)*pbVar15 * iVar42 >> 8) + bVar45;
                              pbVar15 = pbVar15 + lVar10;
                              uVar32 = uVar32 - 1;
                              fVar31 = (float)((uVar43 - uVar1) - uVar17);
                            } while (uVar32 != 0);
                          }
                          if (2 < ~uVar1 + uVar43) {
                            iVar22 = (int)fVar31 + 4;
                            do {
                              *pbVar15 = (char)((uint)*pbVar15 * iVar42 >> 8) + bVar45;
                              pbVar15[lVar10] = (char)((uint)pbVar15[lVar10] * iVar42 >> 8) + bVar45
                              ;
                              pbVar15[lVar10 * 2] =
                                   (char)((uint)pbVar15[lVar10 * 2] * iVar42 >> 8) + bVar45;
                              pbVar15[lVar10 * 3] =
                                   (char)((uint)pbVar15[lVar10 * 3] * iVar42 >> 8) + bVar45;
                              iVar22 = iVar22 + -4;
                              pbVar15 = pbVar15 + lVar10 * 4;
                            } while (4 < iVar22);
                          }
                          pbVar9 = pbVar9 + lVar38;
                          bVar47 = 1 < (int)uVar13;
                          uVar13 = uVar13 - 1;
                        } while (bVar47);
                      }
                      else {
                        if (local_e8 == 1) {
                          local_b0 = (size_t)(uint)(float)local_168;
                          local_44 = ~uVar1 + uVar43;
                          local_d0 = (ulong)((uint)(float)local_168 & 7);
                          local_78 = (float)(uVar43 - (((uint)(float)local_168 & 7) + uVar1));
                          do {
                            memset(pbVar9,local_13c,local_b0);
                            while( true ) {
                              if ((int)uVar13 < 2) goto LAB_003b58e4;
                              uVar13 = uVar13 - 1;
                              pbVar9 = pbVar9 + local_ec;
                              if (local_e8 == 1) break;
                              lVar37 = (long)local_e8;
                              pbVar15 = pbVar9;
                              fVar31 = (float)local_168;
                              if ((int)local_d0 != 0) {
                                uVar18 = local_d0 & 0xffffffff;
                                do {
                                  *pbVar15 = bVar45;
                                  pbVar15 = pbVar15 + lVar37;
                                  uVar17 = (int)uVar18 - 1;
                                  uVar18 = (ulong)uVar17;
                                } while (uVar17 != 0);
                                fVar31 = local_78;
                              }
                              if (6 < local_44) {
                                iVar22 = (int)fVar31 + 8;
                                do {
                                  *pbVar15 = bVar45;
                                  pbVar15[lVar37] = bVar45;
                                  pbVar15[lVar37 * 2] = bVar45;
                                  pbVar15[lVar37 * 3] = bVar45;
                                  pbVar15[lVar37 * 4] = bVar45;
                                  pbVar15[lVar37 * 5] = bVar45;
                                  pbVar15[lVar37 * 6] = bVar45;
                                  pbVar15[lVar37 * 7] = bVar45;
                                  pbVar15 = pbVar15 + lVar37 * 8;
                                  iVar22 = iVar22 + -8;
                                } while (8 < iVar22);
                              }
                            }
                          } while( true );
                        }
                        uVar17 = (uint)(float)local_168 & 7;
                        do {
                          pbVar15 = pbVar9;
                          fVar31 = (float)local_168;
                          if (uVar17 != 0) {
                            uVar32 = uVar17;
                            do {
                              *pbVar15 = bVar45;
                              pbVar15 = pbVar15 + lVar10;
                              uVar32 = uVar32 - 1;
                              fVar31 = (float)(uVar43 - (uVar1 + uVar17));
                            } while (uVar32 != 0);
                          }
                          if (6 < ~uVar1 + uVar43) {
                            iVar22 = (int)fVar31 + 8;
                            do {
                              *pbVar15 = bVar45;
                              pbVar15[lVar10] = bVar45;
                              pbVar15[lVar10 * 2] = bVar45;
                              pbVar15[lVar10 * 3] = bVar45;
                              pbVar15[lVar10 * 4] = bVar45;
                              pbVar15[lVar10 * 5] = bVar45;
                              pbVar15[lVar10 * 6] = bVar45;
                              pbVar15[lVar10 * 7] = bVar45;
                              pbVar15 = pbVar15 + lVar10 * 8;
                              iVar22 = iVar22 + -8;
                            } while (8 < iVar22);
                          }
                          pbVar9 = pbVar9 + lVar38;
                          bVar47 = 1 < (int)uVar13;
                          uVar13 = uVar13 - 1;
                        } while (bVar47);
                      }
                    }
LAB_003b58e4:
                    uVar35 = local_38;
                    uVar32 = local_11c;
                    uVar34 = (uint)local_158;
                    cVar20 = (char)local_144;
                    if (bVar7) {
                      lVar37 = (long)local_ec;
                      pbVar9 = (byte *)((long)(int)(local_e8 * uVar16) +
                                       local_40 * lVar37 + local_100[0]);
                      bVar45 = (byte)local_74;
                      if (local_a0 < 0xff000000) {
                        iVar22 = (local_c4 - (uint)local_170) + 1;
                        do {
                          *pbVar9 = (char)(*pbVar9 * (uint)local_180 >> 8) + bVar45;
                          iVar22 = iVar22 + -1;
                          pbVar9 = pbVar9 + lVar37;
                        } while (1 < iVar22);
                      }
                      else if (local_e8 == 1) {
                        *pbVar9 = bVar45;
                        for (uVar17 = local_140; 1 < (int)uVar17; uVar17 = uVar17 - 1) {
                          pbVar9 = pbVar9 + local_ec;
                          *pbVar9 = bVar45;
                        }
                      }
                      else {
                        iVar22 = (local_c4 - (uint)local_170) + 1;
                        do {
                          *pbVar9 = bVar45;
                          iVar22 = iVar22 + -1;
                          pbVar9 = pbVar9 + lVar37;
                        } while (1 < iVar22);
                      }
                    }
                  }
                }
                uVar29 = local_178;
                if (((int)local_188 != 0) && ((int)(float)local_118 < (int)uVar34)) {
                  lVar37 = local_ec * local_c0 + local_100[0];
                  if (cVar20 != '\0') {
                    lVar10 = (long)(int)uVar35 * (long)local_e8;
                    *(char *)(lVar37 + lVar10) =
                         (char)((uint)*(byte *)(lVar37 + lVar10) * local_90 >> 8) + (char)local_84;
                  }
                  if (0 < (int)(float)local_168) {
                    lVar10 = (long)local_e8;
                    pbVar9 = (byte *)((int)uVar1 * lVar10 + lVar37);
                    if (local_64 < 0xff000000) {
                      uVar17 = (uVar43 - uVar1) + 1;
                      do {
                        *pbVar9 = (char)((uint)*pbVar9 * local_5c >> 8) + (byte)uVar32;
                        uVar17 = uVar17 - 1;
                        pbVar9 = pbVar9 + lVar10;
                      } while (1 < uVar17);
                    }
                    else if (local_e8 == 1) {
                      memset(pbVar9,uVar32 & 0xff,(ulong)(uint)(float)local_168);
                      uVar32 = local_11c;
                    }
                    else {
                      uVar17 = (uVar43 - uVar1) + 1;
                      do {
                        *pbVar9 = (byte)uVar32;
                        uVar17 = uVar17 - 1;
                        pbVar9 = pbVar9 + lVar10;
                      } while (1 < uVar17);
                    }
                  }
                  uVar29 = local_178;
                  iVar22 = local_4c;
                  uVar17 = uVar16;
                  if (bVar7) goto LAB_003b4f41;
                }
              }
            }
          }
        }
        puVar41 = puVar41 + 4;
      } while (puVar41 != puVar40);
    }
    goto LAB_003b5b28;
  }
  if (local_e8 == 3) {
    cVar20 = (char)(param_5 >> 8);
    local_18c = (char)param_5 == cVar20 && (char)(param_5 >> 0x10) == cVar20;
  }
  else {
    local_18c = false;
  }
  dVar4 = (double)((float)local_118 * DAT_005de53c) + DAT_005d9098;
  dVar5 = (double)((local_168._4_4_ + local_118._4_4_) * _DAT_005dd2d0) + _DAT_005d9a90;
  uVar32 = SUB84(dVar5,0);
  dVar6 = (double)(local_118._4_4_ * _UNK_005dd2d4) + _UNK_005d9a98;
  uVar11 = SUB84(dVar6,0);
  dVar3 = (double)(((float)local_168 + (float)local_118) * DAT_005de53c) + DAT_005d9098;
  uVar17 = SUB84(dVar3,0);
  uVar12 = SUB84(dVar4,0);
  iVar23 = (int)uVar11 >> 8;
  iVar22 = (int)uVar12 >> 8;
  if (((uVar32 ^ uVar11) & 0xffffff00) == 0) {
    uVar18 = (ulong)(uVar32 - uVar11);
    fVar31 = (float)(iVar23 + 1);
    local_170 = 0;
    local_1d0 = fVar31;
    local_168._0_4_ = fVar31;
    if (((uVar17 ^ uVar12) & 0xffffff00) == 0) goto LAB_003b337a;
LAB_003b3259:
    bVar47 = ((ulong)dVar4 & 0xff) != 0;
    uVar32 = uVar12 & 0xff ^ 0xff;
    if (!bVar47) {
      uVar32 = uVar12 & 0xff;
    }
    uVar12 = (uint)bVar47 + iVar22;
    local_158 = CONCAT44(local_158._4_4_,uVar17) & 0xffffffff000000ff;
    iVar42 = *(int *)(param_3 + 0x1c);
    local_118._0_4_ = (float)((uint)(((ulong)dVar3 & 0xff) != 0) + ((int)uVar17 >> 8));
    uVar17 = (int)uVar17 >> 8;
  }
  else {
    bVar47 = ((ulong)dVar6 & 0xff) != 0;
    uVar27 = uVar11 & 0xff ^ 0xff;
    if (!bVar47) {
      uVar27 = uVar11 & 0xff;
    }
    local_1d0 = (float)((uint)bVar47 + iVar23);
    local_168._0_4_ = (float)((int)uVar32 >> 8);
    local_170 = (ulong)(uVar32 & 0xff);
    fVar31 = (float)((uint)(((ulong)dVar5 & 0xff) != 0) + (int)(float)local_168);
    uVar18 = (ulong)uVar27;
    if (((uVar17 ^ uVar12) & 0xffffff00) != 0) goto LAB_003b3259;
LAB_003b337a:
    uVar32 = uVar17 - uVar12;
    uVar12 = iVar22 + 1;
    local_158 = (ulong)local_158._4_4_ << 0x20;
    iVar42 = *(int *)(param_3 + 0x1c);
    local_118._0_4_ = (float)uVar12;
    uVar17 = uVar12;
  }
  local_180 = CONCAT44(local_180._4_4_,uVar17);
  local_150 = (uint *)(ulong)uVar32;
  local_1a0 = local_100;
  local_190 = param_5;
  if ((long)iVar42 != 0) {
    puVar40 = *(uint **)(param_3 + 0x10);
    puVar41 = puVar40 + (long)iVar42 * 4;
    uVar11 = -(uint)local_158;
    local_128 = (ulong)iVar23;
    iVar42 = (int)uVar18;
    local_13c = (int)(uVar32 * iVar42) >> 8;
    local_c0 = CONCAT44(local_c0._4_4_,iVar42 + 1);
    local_148 = (int)((uint)local_158 * iVar42) >> 8;
    local_d0 = (ulong)(int)(float)local_168;
    iVar42 = (int)local_170;
    local_b0 = CONCAT44(local_b0._4_4_,(int)(uVar32 * iVar42) >> 8);
    local_144 = iVar42 + 1;
    local_b8 = CONCAT44(local_b8._4_4_,(uint)local_158 * iVar42 >> 8);
    local_188 = uVar18;
    do {
      fVar46 = (float)puVar40[1];
      if (((((int)fVar46 < (int)fVar31) &&
           (fVar19 = (float)(puVar40[3] + (int)fVar46), iVar23 < (int)fVar19)) &&
          (uVar27 = *puVar40, (int)uVar27 < (int)(float)local_118)) &&
         (iVar42 = puVar40[2] + uVar27, iVar22 < iVar42)) {
        iVar21 = (int)uVar18;
        if (uVar11 == uVar32 && uVar17 - uVar12 == 1) {
          if ((iVar21 != 0) && ((int)fVar46 <= iVar23)) {
            local_198 = (long)*(int *)((long)local_1a0 + 0x14) * local_128 + *local_1a0;
            lVar37 = (long)(int)uVar12 * (long)(int)local_1a0[3];
            uVar27 = (local_190 >> 8 & 0xff00ff) * iVar21;
            iVar42 = 0x100 - (uVar27 >> 0x18);
            iVar26 = ((uint)*(byte *)(lVar37 + 1 + local_198) * iVar42 >> 8) +
                     (uVar27 >> 8 & 0xff00ff);
            uVar27 = (((uint)*(byte *)(lVar37 + 2 + local_198) << 0x10 |
                      (uint)*(byte *)(lVar37 + local_198)) * iVar42 >> 8 & 0xff00ff) +
                     ((local_190 & 0xff00ff) * iVar21 >> 8 & 0xff00ff);
            uVar27 = 0x100 - (uVar27 >> 8 & 0x10001) | uVar27;
            *(byte *)(lVar37 + 1 + local_198) = -(char)((uint)iVar26 >> 8) | (byte)iVar26;
            *(char *)(lVar37 + 2 + local_198) = (char)(uVar27 >> 0x10);
            *(char *)(lVar37 + local_198) = (char)uVar27;
          }
          if ((int)fVar46 < (int)local_1d0) {
            fVar46 = local_1d0;
          }
          fVar36 = (float)local_168;
          if ((int)fVar19 < (int)(float)local_168) {
            fVar36 = fVar19;
          }
          if ((int)fVar36 - (int)fVar46 != 0 && (int)fVar46 <= (int)fVar36) {
            EdgeTableFillers::SolidColour<juce::PixelRGB,false>::handleEdgeTableRectangle
                      ((SolidColour<juce::PixelRGB,false> *)&local_1a0,uVar12,(int)fVar46,1,
                       (int)fVar36 - (int)fVar46,0xff);
            uVar18 = local_188;
          }
          if (((uint)local_170 != 0) && ((int)(float)local_168 < (int)fVar19)) {
            lVar37 = (long)*(int *)((long)local_1a0 + 0x14) * local_d0 + *local_1a0;
            plVar44 = local_1a0;
            uVar27 = uVar12;
            iVar42 = (uint)local_170;
            local_198 = lVar37;
LAB_003b3499:
            lVar10 = (long)(int)uVar27 * (long)(int)plVar44[3];
            uVar27 = (local_190 >> 8 & 0xff00ff) * iVar42;
            iVar21 = 0x100 - (uVar27 >> 0x18);
            iVar26 = ((uint)*(byte *)(lVar37 + 1 + lVar10) * iVar21 >> 8) + (uVar27 >> 8 & 0xff00ff)
            ;
            uVar27 = (((uint)*(byte *)(lVar37 + 2 + lVar10) << 0x10 |
                      (uint)*(byte *)(lVar37 + lVar10)) * iVar21 >> 8 & 0xff00ff) +
                     ((local_190 & 0xff00ff) * iVar42 >> 8 & 0xff00ff);
            uVar27 = 0x100 - (uVar27 >> 8 & 0x10001) | uVar27;
            *(byte *)(lVar37 + 1 + lVar10) = -(char)((uint)iVar26 >> 8) | (byte)iVar26;
            *(char *)(lVar37 + 2 + lVar10) = (char)(uVar27 >> 0x10);
            *(char *)(lVar37 + lVar10) = (char)uVar27;
          }
        }
        else {
          local_178 = CONCAT44(local_178._4_4_,fVar19);
          uVar16 = uVar12;
          if ((int)uVar12 < (int)uVar27) {
            uVar16 = uVar27;
          }
          iVar26 = (uint)local_180;
          if (iVar42 < (int)(uint)local_180) {
            iVar26 = iVar42;
          }
          uVar25 = iVar26 - uVar16;
          cVar20 = (int)uVar27 <= iVar22 && (int)local_150 != 0;
          bVar47 = (int)(uint)local_180 < iVar42 && (uint)local_158 != 0;
          if ((iVar21 != 0) && ((int)fVar46 <= iVar23)) {
            lVar10 = *local_1a0;
            local_138 = local_1a0;
            lVar38 = (long)*(int *)((long)local_1a0 + 0x14) * local_128;
            lVar37 = lVar10 + lVar38;
            local_130 = CONCAT71(local_130._1_7_,cVar20);
            if ((int)uVar27 <= iVar22 && (int)local_150 != 0) {
              lVar8 = (long)iVar22 * (long)(int)local_1a0[3];
              uVar27 = (local_190 >> 8 & 0xff00ff) * local_13c;
              iVar21 = 0x100 - (uVar27 >> 0x18);
              iVar42 = ((uint)*(byte *)(lVar37 + 1 + lVar8) * iVar21 >> 8) +
                       (uVar27 >> 8 & 0xff00ff);
              uVar27 = (((uint)*(byte *)(lVar37 + 2 + lVar8) << 0x10 |
                        (uint)*(byte *)(lVar37 + lVar8)) * iVar21 >> 8 & 0xff00ff) +
                       ((local_190 & 0xff00ff) * local_13c >> 8 & 0xff00ff);
              uVar27 = 0x100 - (uVar27 >> 8 & 0x10001) | uVar27;
              *(byte *)(lVar37 + 1 + lVar8) = -(char)((uint)iVar42 >> 8) | (byte)iVar42;
              *(char *)(lVar37 + 2 + lVar8) = (char)(uVar27 >> 0x10);
              *(char *)(lVar37 + lVar8) = (char)uVar27;
            }
            local_198 = lVar37;
            if (0 < (int)uVar25) {
              uVar24 = (local_190 >> 8 & 0xff00ff) * (int)local_c0;
              uVar27 = (local_190 & 0xff00ff) * (int)local_c0;
              lVar39 = (long)(int)local_1a0[3];
              lVar8 = (int)uVar16 * lVar39;
              if (uVar24 < 0xff000000) {
                iVar42 = 0x100 - (uVar24 >> 0x18);
                uVar34 = uVar25 + 1;
                pbVar9 = (byte *)(lVar10 + lVar38 + lVar8 + 2);
                do {
                  uVar33 = (((uint)*pbVar9 << 0x10 | (uint)pbVar9[-2]) * iVar42 >> 8 & 0xff00ff) +
                           (uVar27 >> 8 & 0xff00ff);
                  uVar33 = 0x100 - (uVar33 >> 8 & 0x10001) | uVar33;
                  iVar21 = ((uint)pbVar9[-1] * iVar42 >> 8) + (uVar24 >> 8 & 0xff00ff);
                  pbVar9[-1] = -(char)((uint)iVar21 >> 8) | (byte)iVar21;
                  *pbVar9 = (byte)(uVar33 >> 0x10);
                  pbVar9[-2] = (byte)uVar33;
                  uVar34 = uVar34 - 1;
                  pbVar9 = pbVar9 + lVar39;
                } while (1 < uVar34);
              }
              else if (((int)local_1a0[3] == 3) && (local_18c != '\0')) {
                memset((void *)(lVar8 + lVar37),uVar27 >> 0x18,(ulong)uVar25 * 3);
              }
              else {
                uVar34 = uVar25 + 1;
                puVar14 = (undefined1 *)(lVar10 + lVar38 + lVar8 + 2);
                do {
                  puVar14[-2] = (char)(uVar27 >> 8);
                  puVar14[-1] = (char)(uVar24 >> 8);
                  *puVar14 = (char)(uVar27 >> 0x18);
                  uVar34 = uVar34 - 1;
                  puVar14 = puVar14 + lVar39;
                } while (1 < uVar34);
              }
            }
            uVar18 = local_188;
            cVar20 = (char)local_130;
            if (bVar47) {
              lVar10 = (long)(int)(uint)local_180 * (long)(int)local_138[3];
              uVar27 = (local_190 >> 8 & 0xff00ff) * local_148;
              iVar21 = 0x100 - (uVar27 >> 0x18);
              iVar42 = ((uint)*(byte *)(lVar37 + 1 + lVar10) * iVar21 >> 8) +
                       (uVar27 >> 8 & 0xff00ff);
              uVar27 = (((uint)*(byte *)(lVar37 + 2 + lVar10) << 0x10 |
                        (uint)*(byte *)(lVar37 + lVar10)) * iVar21 >> 8 & 0xff00ff) +
                       ((local_190 & 0xff00ff) * local_148 >> 8 & 0xff00ff);
              uVar27 = 0x100 - (uVar27 >> 8 & 0x10001) | uVar27;
              *(byte *)(lVar37 + 1 + lVar10) = -(char)((uint)iVar42 >> 8) | (byte)iVar42;
              *(char *)(lVar37 + 2 + lVar10) = (char)(uVar27 >> 0x10);
              *(char *)(lVar37 + lVar10) = (char)uVar27;
            }
          }
          plVar44 = local_1a0;
          if ((int)fVar46 < (int)local_1d0) {
            fVar46 = local_1d0;
          }
          fVar19 = (float)local_168;
          if ((int)(float)local_178 < (int)(float)local_168) {
            fVar19 = (float)local_178;
          }
          iVar42 = (int)fVar19 - (int)fVar46;
          if (iVar42 != 0 && (int)fVar46 <= (int)fVar19) {
            iVar21 = (int)local_150;
            if (iVar42 == 1) {
              lVar10 = *local_1a0;
              lVar38 = (long)*(int *)((long)local_1a0 + 0x14) * (long)(int)fVar46;
              lVar37 = lVar10 + lVar38;
              local_130 = CONCAT71(local_130._1_7_,cVar20);
              if (cVar20 != '\0') {
                lVar8 = (long)iVar22 * (long)(int)local_1a0[3];
                uVar27 = (local_190 >> 8 & 0xff00ff) * iVar21;
                iVar42 = 0x100 - (uVar27 >> 0x18);
                iVar26 = ((uint)*(byte *)(lVar37 + 1 + lVar8) * iVar42 >> 8) +
                         (uVar27 >> 8 & 0xff00ff);
                uVar27 = (((uint)*(byte *)(lVar37 + 2 + lVar8) << 0x10 |
                          (uint)*(byte *)(lVar37 + lVar8)) * iVar42 >> 8 & 0xff00ff) +
                         ((local_190 & 0xff00ff) * iVar21 >> 8 & 0xff00ff);
                uVar27 = 0x100 - (uVar27 >> 8 & 0x10001) | uVar27;
                *(byte *)(lVar37 + 1 + lVar8) = -(char)((uint)iVar26 >> 8) | (byte)iVar26;
                *(char *)(lVar37 + 2 + lVar8) = (char)(uVar27 >> 0x10);
                *(char *)(lVar37 + lVar8) = (char)uVar27;
              }
              local_198 = lVar37;
              if (0 < (int)uVar25) {
                lVar39 = (long)(int)local_1a0[3];
                lVar8 = (int)uVar16 * lVar39;
                if (local_190._3_1_ == -1) {
                  if (((int)local_1a0[3] == 3) && (local_18c != '\0')) {
                    memset((void *)(lVar8 + lVar37),local_190 >> 0x10 & 0xff,(ulong)uVar25 * 3);
                  }
                  else {
                    uVar27 = uVar25 + 1;
                    puVar14 = (undefined1 *)(lVar38 + lVar8 + lVar10 + 2);
                    do {
                      puVar14[-2] = (char)local_190;
                      puVar14[-1] = (char)(local_190 >> 8);
                      *puVar14 = (char)(local_190 >> 0x10);
                      uVar27 = uVar27 - 1;
                      puVar14 = puVar14 + lVar39;
                    } while (1 < uVar27);
                  }
                }
                else {
                  iVar42 = 0x100 - (local_190 >> 0x18);
                  uVar27 = uVar25 + 1;
                  pbVar9 = (byte *)(lVar38 + lVar8 + lVar10 + 2);
                  do {
                    uVar24 = (((uint)*pbVar9 << 0x10 | (uint)pbVar9[-2]) * iVar42 >> 8 & 0xff00ff) +
                             (local_190 & 0xff00ff);
                    uVar24 = 0x100 - (uVar24 >> 8 & 0x10001) | uVar24;
                    iVar21 = ((uint)pbVar9[-1] * iVar42 >> 8) + (local_190 >> 8 & 0xff00ff);
                    pbVar9[-1] = -(char)((uint)iVar21 >> 8) | (byte)iVar21;
                    *pbVar9 = (byte)(uVar24 >> 0x10);
                    pbVar9[-2] = (byte)uVar24;
                    uVar27 = uVar27 - 1;
                    pbVar9 = pbVar9 + lVar39;
                  } while (1 < uVar27);
                }
              }
              uVar18 = local_188;
              cVar20 = (char)local_130;
              if (bVar47) {
                lVar10 = (long)(int)(uint)local_180 * (long)(int)plVar44[3];
                uVar27 = (local_190 >> 8 & 0xff00ff) * (uint)local_158;
                iVar21 = 0x100 - (uVar27 >> 0x18);
                iVar42 = ((uint)*(byte *)(lVar37 + 1 + lVar10) * iVar21 >> 8) +
                         (uVar27 >> 8 & 0xff00ff);
                uVar27 = (((uint)*(byte *)(lVar37 + 2 + lVar10) << 0x10 |
                          (uint)*(byte *)(lVar37 + lVar10)) * iVar21 >> 8 & 0xff00ff) +
                         ((local_190 & 0xff00ff) * (uint)local_158 >> 8 & 0xff00ff);
                uVar27 = 0x100 - (uVar27 >> 8 & 0x10001) | uVar27;
                *(byte *)(lVar37 + 1 + lVar10) = -(char)((uint)iVar42 >> 8) | (byte)iVar42;
                *(char *)(lVar37 + 2 + lVar10) = (char)(uVar27 >> 0x10);
                *(char *)(lVar37 + lVar10) = (char)uVar27;
              }
            }
            else {
              if (cVar20 != '\0') {
                EdgeTableFillers::SolidColour<juce::PixelRGB,false>::handleEdgeTableRectangle
                          ((SolidColour<juce::PixelRGB,false> *)&local_1a0,iVar22,(int)fVar46,1,
                           iVar42,iVar21);
                uVar18 = local_188;
              }
              if (0 < (int)uVar25) {
                EdgeTableFillers::SolidColour<juce::PixelRGB,false>::handleEdgeTableRectangle
                          ((SolidColour<juce::PixelRGB,false> *)&local_1a0,uVar16,(int)fVar46,uVar25
                           ,iVar42,0xff);
                uVar18 = local_188;
              }
              if (bVar47) {
                EdgeTableFillers::SolidColour<juce::PixelRGB,false>::handleEdgeTableRectangle
                          ((SolidColour<juce::PixelRGB,false> *)&local_1a0,(uint)local_180,
                           (int)fVar46,1,iVar42,(uint)local_158);
                uVar18 = local_188;
              }
            }
          }
          plVar44 = local_1a0;
          if (((uint)local_170 != 0) && ((int)(float)local_168 < (int)(float)local_178)) {
            lVar10 = *local_1a0;
            lVar38 = (long)*(int *)((long)local_1a0 + 0x14) * local_d0;
            lVar37 = lVar10 + lVar38;
            if (cVar20 != '\0') {
              lVar8 = (long)iVar22 * (long)(int)local_1a0[3];
              uVar27 = (local_190 >> 8 & 0xff00ff) * (int)local_b0;
              iVar42 = 0x100 - (uVar27 >> 0x18);
              iVar21 = ((uint)*(byte *)(lVar37 + 1 + lVar8) * iVar42 >> 8) +
                       (uVar27 >> 8 & 0xff00ff);
              uVar27 = (((uint)*(byte *)(lVar37 + 2 + lVar8) << 0x10 |
                        (uint)*(byte *)(lVar37 + lVar8)) * iVar42 >> 8 & 0xff00ff) +
                       ((local_190 & 0xff00ff) * (int)local_b0 >> 8 & 0xff00ff);
              uVar27 = 0x100 - (uVar27 >> 8 & 0x10001) | uVar27;
              *(byte *)(lVar37 + 1 + lVar8) = -(char)((uint)iVar21 >> 8) | (byte)iVar21;
              *(char *)(lVar37 + 2 + lVar8) = (char)(uVar27 >> 0x10);
              *(char *)(lVar37 + lVar8) = (char)uVar27;
            }
            local_198 = lVar37;
            if (0 < (int)uVar25) {
              uVar27 = (local_190 >> 8 & 0xff00ff) * local_144;
              uVar24 = (local_190 & 0xff00ff) * local_144;
              lVar39 = (long)(int)local_1a0[3];
              lVar8 = (int)uVar16 * lVar39;
              if (uVar27 < 0xff000000) {
                iVar42 = 0x100 - (uVar27 >> 0x18);
                uVar25 = uVar25 + 1;
                pbVar9 = (byte *)(lVar10 + lVar38 + lVar8 + 2);
                do {
                  uVar16 = (((uint)*pbVar9 << 0x10 | (uint)pbVar9[-2]) * iVar42 >> 8 & 0xff00ff) +
                           (uVar24 >> 8 & 0xff00ff);
                  uVar16 = 0x100 - (uVar16 >> 8 & 0x10001) | uVar16;
                  iVar21 = ((uint)pbVar9[-1] * iVar42 >> 8) + (uVar27 >> 8 & 0xff00ff);
                  pbVar9[-1] = -(char)((uint)iVar21 >> 8) | (byte)iVar21;
                  *pbVar9 = (byte)(uVar16 >> 0x10);
                  pbVar9[-2] = (byte)uVar16;
                  uVar25 = uVar25 - 1;
                  pbVar9 = pbVar9 + lVar39;
                } while (1 < uVar25);
              }
              else if (((int)local_1a0[3] == 3) && (local_18c != '\0')) {
                memset((void *)(lVar8 + lVar37),uVar24 >> 0x18,(ulong)uVar25 * 3);
              }
              else {
                uVar25 = uVar25 + 1;
                puVar14 = (undefined1 *)(lVar10 + lVar38 + lVar8 + 2);
                do {
                  puVar14[-2] = (char)(uVar24 >> 8);
                  puVar14[-1] = (char)(uVar27 >> 8);
                  *puVar14 = (char)(uVar24 >> 0x18);
                  uVar25 = uVar25 - 1;
                  puVar14 = puVar14 + lVar39;
                } while (1 < uVar25);
              }
            }
            uVar18 = local_188;
            uVar27 = (uint)local_180;
            iVar42 = (int)local_b8;
            if (bVar47) goto LAB_003b3499;
          }
        }
      }
      puVar40 = puVar40 + 4;
    } while (puVar40 != puVar41);
  }
LAB_003b5b28:
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 8))();
  }
  return;
}


