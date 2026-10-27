// Function : renderImageTransformed<juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>const>
// Namespace: juce:RenderingHelpers:EdgeTableFillers
// Entry    : 003bb710
// Prototype: void renderImageTransformed<juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>const>(EdgeTableFillers * this, int param_2_00, long * param_2, long * param_3, int param_4, float * param_5, int param_6, char param_7)
// Body     : 003bb710 - 003c05ef


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   juce::RenderingHelpers::EdgeTableFillers::renderImageTransformed<juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>
   const>(juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>
   const&, juce::Image::BitmapData const&, juce::Image::BitmapData const&, int,
   juce::AffineTransform const&, juce::Graphics::ResamplingQuality, bool) */

void __thiscall
juce::RenderingHelpers::EdgeTableFillers::
renderImageTransformed<juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>const>
          (EdgeTableFillers *this,int param_2_00,long *param_2,long *param_3,int param_4,
          float *param_5,int param_6,char param_7)

{
  undefined4 uVar1;
  short sVar2;
  char cVar5;
  char cVar4;
  byte bVar3;
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  uint5 uVar12;
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  uint5 uVar16;
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  uint5 uVar20;
  undefined1 auVar21 [13];
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 auVar26 [13];
  undefined1 auVar27 [13];
  undefined1 auVar28 [13];
  undefined1 auVar29 [13];
  short sVar30;
  uint3 uVar31;
  EdgeTableFillers EVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  byte *pbVar37;
  EdgeTableFillers *pEVar38;
  EdgeTableFillers *pEVar39;
  uint *puVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  undefined4 *puVar46;
  uint uVar47;
  uint uVar48;
  long lVar49;
  EdgeTableFillers *pEVar50;
  byte *pbVar51;
  uint3 *puVar52;
  int iVar53;
  long lVar54;
  long *plVar55;
  long lVar56;
  int iVar57;
  size_t sVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  size_t sVar63;
  undefined1 uVar65;
  byte bVar66;
  float fVar64;
  int extraout_XMM0_Db;
  int iVar67;
  float fVar68;
  float fVar69;
  int iVar71;
  float fVar72;
  undefined1 auVar70 [16];
  float fVar73;
  double dVar74;
  undefined1 auVar75 [16];
  float fVar76;
  float fVar77;
  double dVar78;
  undefined1 auVar79 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  float local_1d8;
  int local_1d4;
  long *local_1d0;
  long *local_1c8;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  long local_1a8;
  uint3 *local_1a0;
  size_t local_198;
  EdgeTableFillers *local_188;
  int local_180;
  uint local_17c;
  uint local_178;
  int local_174;
  long *local_170;
  int local_164;
  uint local_160;
  int local_15c;
  int local_158;
  int local_154;
  size_t local_150;
  size_t local_148;
  long local_140;
  EdgeTableFillers *local_138;
  EdgeTableFillers *local_130;
  EdgeTableFillers *local_128;
  EdgeTableFillers *local_120;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  size_t local_b0;
  ulong local_a8;
  ulong local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  ulong uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  float fStack_60;
  int iStack_5c;
  undefined8 local_58;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  float fStack_40;
  float fStack_3c;
  EdgeTableFillers *local_38;
  
  local_1d0 = param_2;
  local_1c8 = param_3;
  local_170 = param_2;
  if ((int)param_2[2] != 1) {
    if ((int)param_2[2] == 2) {
      if ((int)param_3[2] != 1) {
        if ((int)param_3[2] != 2) {
          if (param_7 == '\0') {
            fVar80 = *param_5 * param_5[4] - param_5[3] * param_5[1];
            dVar78 = (double)fVar80;
            dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                                      _DAT_005d91b0 & SUB84(dVar78,0));
            if (dVar74 == DAT_005d94e0) {
              if ((fVar80 == 0.0) && (!NAN(fVar80))) goto LAB_003bf85b;
LAB_003bc57b:
              dVar78 = _DAT_005d9000 / dVar78;
              fVar76 = (float)((double)param_5[4] * dVar78);
              fVar73 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar78);
              fVar68 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar78);
              fVar80 = (float)((double)*param_5 * dVar78);
              local_218 = CONCAT44(fVar68,fVar76);
              uStack_210 = CONCAT44(fVar73,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar76 -
                                           fVar68 * param_5[5]);
              local_208 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar73 -
                                   param_5[5] * fVar80,fVar80);
            }
            else {
              if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bc57b;
LAB_003bf85b:
              local_208 = *(undefined8 *)(param_5 + 4);
              local_218 = *(undefined8 *)param_5;
              uStack_210 = *(undefined8 *)(param_5 + 2);
            }
            local_1d8 = 0.0;
            if (param_6 != 0) {
              local_1d8 = DAT_005d9044;
            }
            local_1d4 = (uint)(param_6 == 0) * 0x80 + -0x80;
            local_1c0 = param_4 + 1;
            local_1bc = param_6;
            local_1b8 = *(int *)((long)param_3 + 0x1c) + -1;
            local_1b4 = (int)param_3[4] + -1;
            local_198 = 0x800;
            local_1a0 = malloc(0x800);
            if (param_2_00 != 0) {
              pEVar38 = this + (long)param_2_00 * 0x10;
              do {
                iVar53 = *(int *)(this + 0xc);
                if (0 < iVar53) {
                  iVar36 = *(int *)this;
                  iVar43 = *(int *)(this + 8);
                  iVar71 = *(int *)(this + 4);
                  lVar49 = (long)iVar71;
                  do {
                    local_1b0 = (undefined4)lVar49;
                    local_1a8 = *(int *)((long)local_1d0 + 0x14) * lVar49 + *local_1d0;
                    if ((int)local_198 < iVar43) {
                      local_198 = (long)iVar43;
                      free(local_1a0);
                      if (iVar43 == 0) {
                        local_1a0 = (uint3 *)0x0;
                      }
                      else {
                        local_1a0 = malloc((long)iVar43);
                      }
                    }
                    puVar52 = local_1a0;
                    TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false>::
                    generate<juce::PixelAlpha>
                              ((TransformedImageFill<juce::PixelARGB,juce::PixelAlpha,false> *)
                               &local_218,(undefined1 *)local_1a0,iVar36,iVar43);
                    lVar56 = (long)(int)local_1d0[3];
                    puVar40 = (uint *)(lVar56 * iVar36 + local_1a8);
                    if (local_1c0 * 0xff < 0xfe00) {
                      iVar44 = iVar43 + 1;
                      do {
                        uVar31 = *puVar52;
                        puVar52 = (uint3 *)((long)puVar52 + 1);
                        uVar48 = ((uint)(byte)uVar31 << 0x10 | (uint)(byte)uVar31) *
                                 (local_1c0 * 0xff >> 8);
                        uVar62 = uVar48 >> 8 & 0xff00ff;
                        iVar57 = 0x100 - (uVar48 >> 0x18);
                        uVar48 = ((*puVar40 & 0xff00ff) * iVar57 >> 8 & 0xff00ff) + uVar62;
                        uVar62 = ((*puVar40 >> 8 & 0xff00ff) * iVar57 >> 8 & 0xff00ff) + uVar62;
                        *puVar40 = ((0x100 - (uVar62 >> 8 & 0x10001) | uVar62) & 0xff00ff) << 8 |
                                   (0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff;
                        puVar40 = (uint *)((long)puVar40 + lVar56);
                        iVar44 = iVar44 + -1;
                      } while (1 < iVar44);
                    }
                    else {
                      iVar44 = iVar43 + 1;
                      do {
                        bVar66 = (byte)*puVar52;
                        puVar52 = (uint3 *)((long)puVar52 + 1);
                        uVar62 = (uint)bVar66 << 0x10 | (uint)bVar66;
                        uVar48 = ((*puVar40 & 0xff00ff) * (0x100 - (uint)bVar66) >> 8 & 0xff00ff) +
                                 uVar62;
                        uVar62 = ((*puVar40 >> 8 & 0xff00ff) * (0x100 - (uint)bVar66) >> 8 &
                                 0xff00ff) + uVar62;
                        *puVar40 = ((0x100 - (uVar62 >> 8 & 0x10001) | uVar62) & 0xff00ff) << 8 |
                                   (0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff;
                        puVar40 = (uint *)((long)puVar40 + lVar56);
                        iVar44 = iVar44 + -1;
                      } while (1 < iVar44);
                    }
                    lVar49 = lVar49 + 1;
                  } while (lVar49 < iVar53 + iVar71);
                }
                this = this + 0x10;
              } while (this != pEVar38);
            }
            goto LAB_003c05d6;
          }
          fVar80 = *param_5;
          local_f8 = param_5[1];
          fVar68 = param_5[4];
          fVar73 = 0.0;
          local_118._0_4_ = param_5[3];
          local_118._4_4_ = 0.0;
          fVar76 = fVar80 * fVar68 - (float)local_118._0_4_ * local_f8;
          dVar78 = (double)fVar76;
          dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                                    _DAT_005d91b0 & SUB84(dVar78,0));
          if (dVar74 == DAT_005d94e0) {
            if ((fVar76 == 0.0) && (!NAN(fVar76))) goto LAB_003bd70b;
LAB_003bbc55:
            dVar78 = _DAT_005d9000 / dVar78;
            dVar74 = (double)fVar68;
            local_118._0_4_ = (BADTYPE)((double)(float)(local_118._0_4_ ^ _DAT_006524b0) * dVar78);
            local_f8 = (float)((double)(float)((uint)local_f8 ^ _DAT_006524b0) * dVar78);
            fVar68 = (float)((double)fVar80 * dVar78);
            fVar80 = param_5[5];
            fVar73 = (float)((uint)param_5[2] ^ _DAT_006524b0);
            local_108 = fVar73 * (float)(dVar74 * dVar78) - fVar80 * local_f8;
            fStack_104 = fVar73 * (float)local_118._0_4_ - fVar80 * fVar68;
            fVar76 = fVar73 * 0.0 - fVar80 * 0.0;
            fVar72 = fVar73 * 0.0 - fVar80 * 0.0;
            fVar80 = (float)(dVar74 * dVar78);
            local_118._4_4_ = local_118._0_4_;
            fVar73 = fVar68;
          }
          else {
            if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bbc55;
LAB_003bd70b:
            local_108 = param_5[2];
            fVar76 = param_5[4];
            fVar72 = param_5[5];
            fStack_104 = param_5[5];
          }
          uStack_100 = CONCAT44(fVar72,fVar76);
          fStack_110 = (float)local_118._4_4_;
          fStack_10c = (float)local_118._4_4_;
          local_d8 = CONCAT44(fVar73,fVar68);
          uStack_d0 = CONCAT44(fVar73,fVar73);
          local_c8 = CONCAT44(local_118._4_4_,fVar80);
          uStack_c0 = 0;
          fStack_f0 = 0.0;
          fStack_ec = 0.0;
          local_98 = 0.0;
          if (param_6 != 0) {
            local_98 = DAT_005d9044;
          }
          iVar53 = *(int *)((long)param_3 + 0x1c);
          lVar49 = param_3[4];
          local_148 = 0x800;
          fStack_f4 = fVar73;
          pEVar38 = malloc(0x800);
          if (param_2_00 != 0) {
            local_180 = (uint)(param_6 == 0) * 0x80 + -0x80;
            local_178 = iVar53 - 1;
            local_17c = (int)lVar49 - 1;
            local_58 = this + (long)param_2_00 * 0x10;
            local_164 = param_4 * 0xff + 0xff;
            local_48 = CONCAT44(local_48._4_4_,local_164 >> 8);
            local_c8 = CONCAT44((float)local_c8,(float)local_c8);
            uStack_c0 = CONCAT44((float)local_c8,(float)local_c8);
            local_118._4_4_ = local_118._0_4_;
            fStack_110 = (float)local_118._0_4_;
            fStack_10c = (float)local_118._0_4_;
            uStack_100 = CONCAT44(fStack_104,fStack_104);
            local_78 = local_108;
            fStack_74 = local_108;
            fStack_70 = local_108;
            fStack_6c = local_108;
            plVar55 = local_170;
            fVar80 = _DAT_005dd2d0;
            fVar68 = _UNK_005dd2d4;
            fVar76 = (float)local_118._0_4_;
            fVar72 = (float)local_118._0_4_;
            fVar81 = local_f8;
            fVar82 = (float)local_d8;
            fVar83 = local_98;
            fVar84 = (float)local_c8;
            fVar85 = (float)local_c8;
            fVar86 = fStack_104;
            fVar87 = fStack_104;
            fVar88 = local_108;
            fVar89 = local_108;
            local_108 = fStack_104;
            do {
              if (0 < *(int *)(this + 0xc)) {
                local_150 = (size_t)*(int *)this;
                local_15c = *(int *)(this + 8);
                local_68 = (size_t)local_15c;
                local_b8 = (long)(*(int *)(this + 0xc) + *(int *)(this + 4));
                fVar64 = (float)*(int *)this + fVar83;
                fVar77 = (float)local_15c + fVar64;
                local_e0 = CONCAT44(local_e0._4_4_,local_15c + 1);
                local_88 = CONCAT44(fVar64,fVar77);
                uStack_80 = (ulong)(uint)fVar73;
                lVar49 = (long)*(int *)(this + 4);
                do {
                  lVar56 = lVar49;
                  iVar53 = local_15c;
                  local_128 = (EdgeTableFillers *)
                              (*(int *)((long)plVar55 + 0x14) * lVar56 + *plVar55);
                  if ((int)local_148 < local_15c) {
                    free(pEVar38);
                    sVar58 = local_68;
                    if (iVar53 == 0) {
                      pEVar38 = (EdgeTableFillers *)0x0;
                    }
                    else {
                      pEVar38 = malloc(local_68);
                    }
                    local_148 = sVar58;
                    fVar80 = _DAT_005dd2d0;
                    fVar68 = _UNK_005dd2d4;
                    fVar76 = (float)local_118._0_4_;
                    fVar72 = (float)local_118._4_4_;
                    fVar81 = local_f8;
                    fVar82 = (float)local_d8;
                    fVar83 = local_98;
                    fVar84 = (float)local_c8;
                    fVar85 = local_c8._4_4_;
                    fVar77 = (float)local_88;
                    fVar64 = local_88._4_4_;
                    fVar86 = local_108;
                    fVar87 = fStack_104;
                    fVar88 = local_78;
                    fVar89 = fStack_74;
                  }
                  fVar73 = (float)(int)lVar56 + fVar83;
                  fVar69 = fVar73 * fVar81;
                  iVar71 = (int)((fVar85 * fVar64 + fVar69 + fVar89) * fVar68);
                  iVar36 = (int)((fVar84 * fVar77 + fVar69 + fVar88) * fVar80) - iVar71;
                  iVar43 = iVar36 % iVar53;
                  fVar73 = fVar73 * fVar82;
                  uVar48 = iVar71 + local_180;
                  local_158 = 0;
                  if (iVar43 < 1) {
                    local_158 = iVar53;
                  }
                  iVar67 = (int)((fVar72 * fVar64 + fVar73 + fVar87) * fVar68);
                  iVar71 = (int)((fVar76 * fVar77 + fVar73 + fVar86) * fVar80) - iVar67;
                  iVar44 = iVar71 % iVar53;
                  iVar57 = iVar36 / iVar53 - (uint)(iVar43 < 1);
                  local_b0 = CONCAT44(local_b0._4_4_,iVar57);
                  local_158 = local_158 + iVar43;
                  iVar43 = local_158 - iVar53;
                  uVar62 = iVar67 + local_180;
                  iVar36 = 0;
                  if (iVar44 < 1) {
                    iVar36 = iVar53;
                  }
                  local_160 = iVar71 / iVar53 - (uint)(iVar44 < 1);
                  iVar36 = iVar36 + iVar44;
                  local_a8 = CONCAT44(local_a8._4_4_,iVar36);
                  iVar71 = iVar36 - iVar53;
                  local_174 = iVar53;
                  local_120 = pEVar38;
                  while( true ) {
                    iVar43 = iVar43 + local_158;
                    local_130 = (EdgeTableFillers *)CONCAT44(local_130._4_4_,iVar43);
                    iVar44 = 0;
                    if (0 < iVar43) {
                      iVar44 = iVar53;
                    }
                    local_a0 = CONCAT71(local_a0._1_7_,0 < iVar43);
                    iVar71 = iVar71 + iVar36;
                    local_154 = CONCAT31(local_154._1_3_,0 < iVar71);
                    iVar67 = 0;
                    if (0 < iVar71) {
                      iVar67 = iVar53;
                    }
                    local_188 = (EdgeTableFillers *)CONCAT44(local_188._4_4_,uVar48);
                    iVar53 = (int)(CONCAT44((int)uVar48 >> 0x1f,(int)uVar48 >> 8) %
                                  (long)(int)*(uint *)((long)param_3 + 0x1c));
                    uVar60 = (iVar53 >> 0x1f & *(uint *)((long)param_3 + 0x1c)) + iVar53;
                    iVar53 = (int)(CONCAT44((int)uVar62 >> 0x1f,(int)uVar62 >> 8) %
                                  (long)(int)*(uint *)(param_3 + 4));
                    uVar45 = (iVar53 >> 0x1f & *(uint *)(param_3 + 4)) + iVar53;
                    lVar49 = (long)*(int *)((long)param_3 + 0x14);
                    lVar54 = (long)(int)param_3[3];
                    pEVar50 = (EdgeTableFillers *)
                              ((int)uVar60 * lVar54 + (int)uVar45 * lVar49 + *param_3);
                    if (((param_6 == 0) || (local_178 <= uVar60)) || (local_17c <= uVar45)) {
                      EVar32 = *pEVar50;
                    }
                    else {
                      iVar53 = 0x100 - (uVar48 & 0xff);
                      EVar32 = SUB41(((uint)(byte)pEVar50[lVar54] * (uVar48 & 0xff) +
                                     (uint)(byte)*pEVar50 * iVar53) * (0x100 - (uVar62 & 0xff)) +
                                     ((uint)(byte)pEVar50[lVar49] * iVar53 +
                                     (uint)(byte)pEVar50[lVar49 + lVar54] * (uVar48 & 0xff)) *
                                     (uVar62 & 0xff) + 0x8000 >> 0x10,0);
                    }
                    *local_120 = EVar32;
                    if (local_174 < 2) break;
                    uVar48 = uVar48 + iVar57 + (uint)(0 < iVar43);
                    iVar43 = iVar43 - iVar44;
                    uVar62 = uVar62 + local_160 + (uint)(0 < iVar71);
                    iVar71 = iVar71 - iVar67;
                    local_174 = local_174 + -1;
                    local_120 = local_120 + 1;
                    iVar53 = local_15c;
                  }
                  lVar49 = (long)(int)local_170[3];
                  pEVar50 = local_128 + lVar49 * local_150;
                  if (local_164 < 0xfe00) {
                    pEVar39 = pEVar38;
                    iVar53 = (int)local_e0;
                    do {
                      EVar32 = *pEVar39;
                      pEVar39 = pEVar39 + 1;
                      uVar62 = ((uint)(byte)EVar32 << 0x10 | (uint)(byte)EVar32) *
                               (int)(float)local_48;
                      uVar48 = uVar62 >> 8 & 0xff00ff;
                      iVar36 = 0x100 - (uVar62 >> 0x18);
                      uVar62 = ((*(uint *)pEVar50 & 0xff00ff) * iVar36 >> 8 & 0xff00ff) + uVar48;
                      uVar48 = ((*(uint *)pEVar50 >> 8 & 0xff00ff) * iVar36 >> 8 & 0xff00ff) +
                               uVar48;
                      *(uint *)pEVar50 =
                           ((0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff) << 8 |
                           (0x100 - (uVar62 >> 8 & 0x10001) | uVar62) & 0xff00ff;
                      pEVar50 = pEVar50 + lVar49;
                      iVar53 = iVar53 + -1;
                    } while (1 < iVar53);
                  }
                  else {
                    pEVar39 = pEVar38;
                    iVar53 = (int)local_e0;
                    do {
                      EVar32 = *pEVar39;
                      pEVar39 = pEVar39 + 1;
                      uVar48 = (uint)(byte)EVar32 << 0x10 | (uint)(byte)EVar32;
                      uVar62 = ((*(uint *)pEVar50 & 0xff00ff) * (0x100 - (uint)(byte)EVar32) >> 8 &
                               0xff00ff) + uVar48;
                      uVar48 = ((*(uint *)pEVar50 >> 8 & 0xff00ff) * (0x100 - (uint)(byte)EVar32) >>
                                8 & 0xff00ff) + uVar48;
                      *(uint *)pEVar50 =
                           ((0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff) << 8 |
                           (0x100 - (uVar62 >> 8 & 0x10001) | uVar62) & 0xff00ff;
                      pEVar50 = pEVar50 + lVar49;
                      iVar53 = iVar53 + -1;
                    } while (1 < iVar53);
                  }
                  plVar55 = local_170;
                  lVar49 = lVar56 + 1;
                  fVar73 = fVar64;
                  local_140 = lVar56;
                  local_138 = pEVar38;
                } while (lVar56 + 1 < local_b8);
              }
              this = this + 0x10;
            } while (this != local_58);
          }
          goto LAB_003bf09d;
        }
        if (param_7 == '\0') {
          fVar80 = *param_5 * param_5[4] - param_5[3] * param_5[1];
          dVar78 = (double)fVar80;
          dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                                    _DAT_005d91b0 & SUB84(dVar78,0));
          if (dVar74 == DAT_005d94e0) {
            if ((fVar80 == 0.0) && (!NAN(fVar80))) goto LAB_003bf0c5;
LAB_003bc13b:
            dVar78 = _DAT_005d9000 / dVar78;
            fVar76 = (float)((double)param_5[4] * dVar78);
            fVar73 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar78);
            fVar68 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar78);
            fVar80 = (float)((double)*param_5 * dVar78);
            local_218 = CONCAT44(fVar68,fVar76);
            uStack_210 = CONCAT44(fVar73,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar76 -
                                         fVar68 * param_5[5]);
            local_208 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar73 -
                                 param_5[5] * fVar80,fVar80);
          }
          else {
            if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bc13b;
LAB_003bf0c5:
            local_208 = *(undefined8 *)(param_5 + 4);
            local_218 = *(undefined8 *)param_5;
            uStack_210 = *(undefined8 *)(param_5 + 2);
          }
          local_1d8 = 0.0;
          if (param_6 != 0) {
            local_1d8 = DAT_005d9044;
          }
          local_1d4 = (uint)(param_6 == 0) * 0x80 + -0x80;
          local_1c0 = param_4 + 1;
          local_1bc = param_6;
          local_1b8 = *(int *)((long)param_3 + 0x1c) + -1;
          local_1b4 = (int)param_3[4] + -1;
          local_198 = 0x800;
          local_1a0 = malloc(0x2000);
          if (param_2_00 != 0) {
            pEVar38 = this + (long)param_2_00 * 0x10;
            do {
              iVar53 = *(int *)(this + 0xc);
              if (0 < iVar53) {
                iVar36 = *(int *)this;
                iVar43 = *(int *)(this + 8);
                iVar71 = *(int *)(this + 4);
                lVar49 = (long)iVar71;
                do {
                  local_1b0 = (undefined4)lVar49;
                  local_1a8 = *(int *)((long)local_1d0 + 0x14) * lVar49 + *local_1d0;
                  TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false>::handleEdgeTableLine
                            ((TransformedImageFill<juce::PixelARGB,juce::PixelARGB,false> *)
                             &local_218,iVar36,iVar43,0xff);
                  lVar49 = lVar49 + 1;
                } while (lVar49 < iVar53 + iVar71);
              }
              this = this + 0x10;
            } while (this != pEVar38);
          }
          goto LAB_003c05d6;
        }
        fVar80 = *param_5 * param_5[4] - param_5[3] * param_5[1];
        dVar78 = (double)fVar80;
        dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                                  _DAT_005d91b0 & SUB84(dVar78,0));
        if (dVar74 == DAT_005d94e0) {
          if ((fVar80 == 0.0) && (!NAN(fVar80))) goto LAB_003bca6d;
LAB_003bb7f0:
          dVar78 = _DAT_005d9000 / dVar78;
          fVar76 = (float)((double)param_5[4] * dVar78);
          fVar73 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar78);
          fVar68 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar78);
          fVar80 = (float)((double)*param_5 * dVar78);
          local_218 = CONCAT44(fVar68,fVar76);
          uStack_210 = CONCAT44(fVar73,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar76 -
                                       fVar68 * param_5[5]);
          local_208 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar73 -
                               param_5[5] * fVar80,fVar80);
        }
        else {
          if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bb7f0;
LAB_003bca6d:
          local_208 = *(undefined8 *)(param_5 + 4);
          local_218 = *(undefined8 *)param_5;
          uStack_210 = *(undefined8 *)(param_5 + 2);
        }
        local_1d8 = 0.0;
        if (param_6 != 0) {
          local_1d8 = DAT_005d9044;
        }
        local_1d4 = (uint)(param_6 == 0) * 0x80 + -0x80;
        local_1c0 = param_4 + 1;
        local_1bc = param_6;
        local_1b8 = *(int *)((long)param_3 + 0x1c) + -1;
        local_1b4 = (int)param_3[4] + -1;
        local_198 = 0x800;
        local_1a0 = malloc(0x2000);
        if (param_2_00 != 0) {
          pEVar38 = this + (long)param_2_00 * 0x10;
          do {
            iVar53 = *(int *)(this + 0xc);
            if (0 < iVar53) {
              iVar36 = *(int *)this;
              iVar43 = *(int *)(this + 8);
              iVar71 = *(int *)(this + 4);
              lVar49 = (long)iVar71;
              do {
                local_1b0 = (undefined4)lVar49;
                local_1a8 = *(int *)((long)local_1d0 + 0x14) * lVar49 + *local_1d0;
                TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true>::handleEdgeTableLine
                          ((TransformedImageFill<juce::PixelARGB,juce::PixelARGB,true> *)&local_218,
                           iVar36,iVar43,0xff);
                lVar49 = lVar49 + 1;
              } while (lVar49 < iVar53 + iVar71);
            }
            this = this + 0x10;
          } while (this != pEVar38);
        }
        goto LAB_003c05d6;
      }
      if (param_7 == '\0') {
        fVar80 = *param_5 * param_5[4] - param_5[3] * param_5[1];
        dVar78 = (double)fVar80;
        dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                                  _DAT_005d91b0 & SUB84(dVar78,0));
        if (dVar74 == DAT_005d94e0) {
          if ((fVar80 == 0.0) && (!NAN(fVar80))) goto LAB_003bf580;
LAB_003bc46b:
          dVar78 = _DAT_005d9000 / dVar78;
          fVar76 = (float)((double)param_5[4] * dVar78);
          fVar73 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar78);
          fVar68 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar78);
          fVar80 = (float)((double)*param_5 * dVar78);
          local_218 = CONCAT44(fVar68,fVar76);
          uStack_210 = CONCAT44(fVar73,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar76 -
                                       fVar68 * param_5[5]);
          local_208 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar73 -
                               param_5[5] * fVar80,fVar80);
        }
        else {
          if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bc46b;
LAB_003bf580:
          local_208 = *(undefined8 *)(param_5 + 4);
          local_218 = *(undefined8 *)param_5;
          uStack_210 = *(undefined8 *)(param_5 + 2);
        }
        local_1d8 = 0.0;
        if (param_6 != 0) {
          local_1d8 = DAT_005d9044;
        }
        local_1d4 = (uint)(param_6 == 0) * 0x80 + -0x80;
        local_1c0 = param_4 + 1;
        local_1bc = param_6;
        local_1b8 = *(int *)((long)param_3 + 0x1c) + -1;
        local_1b4 = (int)param_3[4] + -1;
        local_198 = 0x800;
        local_1a0 = malloc(0x1800);
        if (param_2_00 != 0) {
          local_188 = this + (long)param_2_00 * 0x10;
          do {
            iVar53 = *(int *)(this + 0xc);
            if (0 < iVar53) {
              iVar36 = *(int *)this;
              iVar43 = *(int *)(this + 8);
              iVar71 = *(int *)(this + 4);
              lVar49 = (long)iVar71;
              do {
                local_1b0 = (undefined4)lVar49;
                local_1a8 = *(int *)((long)local_1d0 + 0x14) * lVar49 + *local_1d0;
                if ((int)local_198 < iVar43) {
                  local_198 = (long)iVar43;
                  free(local_1a0);
                  if (iVar43 == 0) {
                    local_1a0 = (uint3 *)0x0;
                  }
                  else {
                    local_1a0 = malloc((long)iVar43 * 3);
                  }
                }
                puVar52 = local_1a0;
                TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false>::generate<juce::PixelRGB>
                          ((TransformedImageFill<juce::PixelARGB,juce::PixelRGB,false> *)&local_218,
                           (long)local_1a0,iVar36,iVar43);
                lVar56 = (long)(int)local_1d0[3];
                puVar40 = (uint *)(lVar56 * iVar36 + local_1a8);
                if (local_1c0 * 0xff < 0xfe00) {
                  iVar57 = local_1c0 * 0xff >> 8;
                  iVar44 = iVar43 + 1;
                  do {
                    uVar62 = (*(byte *)((long)puVar52 + 1) | 0xff0000) * iVar57;
                    iVar67 = 0x100 - (uVar62 >> 0x18);
                    uVar48 = ((*puVar40 & 0xff00ff) * iVar67 >> 8 & 0xff00ff) +
                             (((uint)*(byte *)((long)puVar52 + 2) << 0x10 | (uint)(byte)*puVar52) *
                              iVar57 >> 8 & 0xff00ff);
                    uVar62 = ((*puVar40 >> 8 & 0xff00ff) * iVar67 >> 8 & 0xff00ff) +
                             (uVar62 >> 8 & 0xff00ff);
                    *puVar40 = ((0x100 - (uVar62 >> 8 & 0x10001) | uVar62) & 0xff00ff) << 8 |
                               (0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff;
                    puVar40 = (uint *)((long)puVar40 + lVar56);
                    iVar44 = iVar44 + -1;
                    puVar52 = (uint3 *)((long)puVar52 + 3);
                  } while (1 < iVar44);
                }
                else {
                  iVar44 = iVar43 + 1;
                  do {
                    uVar31 = *puVar52;
                    puVar52 = (uint3 *)((long)puVar52 + 3);
                    *puVar40 = uVar31 | 0xff000000;
                    puVar40 = (uint *)((long)puVar40 + lVar56);
                    iVar44 = iVar44 + -1;
                  } while (1 < iVar44);
                }
                lVar49 = lVar49 + 1;
              } while (lVar49 < iVar53 + iVar71);
            }
            this = this + 0x10;
          } while (this != local_188);
        }
        goto LAB_003c05d6;
      }
      fVar80 = *param_5 * param_5[4] - param_5[3] * param_5[1];
      dVar78 = (double)fVar80;
      dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                                _DAT_005d91b0 & SUB84(dVar78,0));
      if (dVar74 == DAT_005d94e0) {
        if ((fVar80 == 0.0) && (!NAN(fVar80))) goto LAB_003bd42f;
LAB_003bbb3d:
        dVar78 = _DAT_005d9000 / dVar78;
        fVar76 = (float)((double)param_5[4] * dVar78);
        fVar73 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar78);
        fVar68 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar78);
        fVar80 = (float)((double)*param_5 * dVar78);
        local_218 = CONCAT44(fVar68,fVar76);
        uStack_210 = CONCAT44(fVar73,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar76 -
                                     fVar68 * param_5[5]);
        local_208 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar73 -
                             param_5[5] * fVar80,fVar80);
      }
      else {
        if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bbb3d;
LAB_003bd42f:
        local_208 = *(undefined8 *)(param_5 + 4);
        local_218 = *(undefined8 *)param_5;
        uStack_210 = *(undefined8 *)(param_5 + 2);
      }
      local_1d8 = 0.0;
      if (param_6 != 0) {
        local_1d8 = DAT_005d9044;
      }
      local_1d4 = (uint)(param_6 == 0) * 0x80 + -0x80;
      local_1c0 = param_4 + 1;
      local_1bc = param_6;
      local_1b8 = *(int *)((long)param_3 + 0x1c) + -1;
      local_1b4 = (int)param_3[4] + -1;
      local_198 = 0x800;
      local_1a0 = malloc(0x1800);
      if (param_2_00 != 0) {
        local_188 = this + (long)param_2_00 * 0x10;
        do {
          iVar53 = *(int *)(this + 0xc);
          if (0 < iVar53) {
            iVar36 = *(int *)this;
            iVar43 = *(int *)(this + 8);
            iVar71 = *(int *)(this + 4);
            lVar49 = (long)iVar71;
            do {
              local_1b0 = (undefined4)lVar49;
              local_1a8 = *(int *)((long)local_1d0 + 0x14) * lVar49 + *local_1d0;
              if ((int)local_198 < iVar43) {
                local_198 = (long)iVar43;
                free(local_1a0);
                if (iVar43 == 0) {
                  local_1a0 = (uint3 *)0x0;
                }
                else {
                  local_1a0 = malloc((long)iVar43 * 3);
                }
              }
              puVar52 = local_1a0;
              TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true>::generate<juce::PixelRGB>
                        ((TransformedImageFill<juce::PixelARGB,juce::PixelRGB,true> *)&local_218,
                         (long)local_1a0,iVar36,iVar43);
              lVar56 = (long)(int)local_1d0[3];
              puVar40 = (uint *)(lVar56 * iVar36 + local_1a8);
              if (local_1c0 * 0xff < 0xfe00) {
                iVar57 = local_1c0 * 0xff >> 8;
                iVar44 = iVar43 + 1;
                do {
                  uVar62 = (*(byte *)((long)puVar52 + 1) | 0xff0000) * iVar57;
                  iVar67 = 0x100 - (uVar62 >> 0x18);
                  uVar48 = ((*puVar40 & 0xff00ff) * iVar67 >> 8 & 0xff00ff) +
                           (((uint)*(byte *)((long)puVar52 + 2) << 0x10 | (uint)(byte)*puVar52) *
                            iVar57 >> 8 & 0xff00ff);
                  uVar62 = ((*puVar40 >> 8 & 0xff00ff) * iVar67 >> 8 & 0xff00ff) +
                           (uVar62 >> 8 & 0xff00ff);
                  *puVar40 = ((0x100 - (uVar62 >> 8 & 0x10001) | uVar62) & 0xff00ff) << 8 |
                             (0x100 - (uVar48 >> 8 & 0x10001) | uVar48) & 0xff00ff;
                  puVar40 = (uint *)((long)puVar40 + lVar56);
                  iVar44 = iVar44 + -1;
                  puVar52 = (uint3 *)((long)puVar52 + 3);
                } while (1 < iVar44);
              }
              else {
                iVar44 = iVar43 + 1;
                do {
                  uVar31 = *puVar52;
                  puVar52 = (uint3 *)((long)puVar52 + 3);
                  *puVar40 = uVar31 | 0xff000000;
                  puVar40 = (uint *)((long)puVar40 + lVar56);
                  iVar44 = iVar44 + -1;
                } while (1 < iVar44);
              }
              lVar49 = lVar49 + 1;
            } while (lVar49 < iVar53 + iVar71);
          }
          this = this + 0x10;
        } while (this != local_188);
      }
      goto LAB_003c05d6;
    }
    if ((int)param_3[2] != 1) {
      if ((int)param_3[2] == 2) {
        if (param_7 != '\0') {
          fVar80 = *param_5;
          fVar72 = 0.0;
          local_f8 = param_5[1];
          local_108 = param_5[4];
          fVar73 = 0.0;
          fVar68 = param_5[3];
          fVar76 = fVar80 * local_108 - fVar68 * local_f8;
          dVar78 = (double)fVar76;
          dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                                    _DAT_005d91b0 & SUB84(dVar78,0));
          if (dVar74 == DAT_005d94e0) {
            if ((fVar76 == 0.0) && (!NAN(fVar76))) goto LAB_003bcccf;
LAB_003bba54:
            dVar78 = _DAT_005d9000 / dVar78;
            fVar68 = (float)((double)(float)((uint)fVar68 ^ _DAT_006524b0) * dVar78);
            fVar72 = (float)((double)local_108 * dVar78);
            local_108 = (float)((double)fVar80 * dVar78);
            local_f8 = (float)((double)(float)((uint)local_f8 ^ _DAT_006524b0) * dVar78);
            fVar80 = param_5[5];
            fVar73 = (float)((uint)param_5[2] ^ _DAT_006524b0);
            local_118._0_4_ = fVar73 * fVar68 - fVar80 * local_108;
            local_118._4_4_ = fVar73 * fVar72 - fVar80 * local_f8;
            fStack_110 = fVar73 * 0.0 - fVar80 * 0.0;
            fStack_10c = fVar73 * 0.0 - fVar80 * 0.0;
            fVar80 = fVar72;
            fVar73 = local_f8;
          }
          else {
            if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bba54;
LAB_003bcccf:
            local_118._4_4_ = param_5[2];
            local_118._0_4_ = param_5[5];
            _fStack_110 = 0;
          }
          local_c8 = CONCAT44(fVar72,fVar80);
          uStack_c0 = CONCAT44(fVar72,fVar72);
          uStack_100 = 0;
          local_88 = CONCAT44(fVar72,fVar68);
          uStack_80 = 0;
          fVar80 = 0.0;
          if (param_6 != 0) {
            fVar80 = DAT_005d9044;
          }
          local_d8 = CONCAT44(local_d8._4_4_,fVar80);
          iVar53 = *(int *)((long)param_3 + 0x1c);
          lVar49 = param_3[4];
          fStack_f4 = fVar73;
          fStack_f0 = fVar73;
          fStack_ec = fVar73;
          fStack_104 = fVar73;
          pEVar38 = malloc(0x2000);
          if (param_2_00 != 0) {
            local_180 = (uint)(param_6 == 0) * 0x80 + -0x80;
            local_178 = iVar53 - 1;
            local_160 = (int)lVar49 - 1;
            local_58 = this + (long)param_2_00 * 0x10;
            fVar80 = (float)local_118._4_4_;
            local_164 = param_4 * 0xff + 0xff;
            local_78 = (float)((local_164 >> 8) + 1);
            sVar58 = 0x800;
            local_88 = CONCAT44((float)local_88,(float)local_88);
            uStack_80 = CONCAT44((float)local_88,(float)local_88);
            local_c8 = CONCAT44((float)local_c8,(float)local_c8);
            uStack_c0 = CONCAT44((float)local_c8,(float)local_c8);
            local_118._4_4_ = local_118._0_4_;
            fStack_110 = (float)local_118._0_4_;
            fStack_10c = (float)local_118._0_4_;
            local_98 = fVar80;
            fStack_94 = fVar80;
            fStack_90 = fVar80;
            fStack_8c = fVar80;
            plVar55 = local_170;
            auVar79 = _DAT_005dd240;
            fVar68 = local_108;
            fVar76 = local_f8;
            fVar72 = (float)local_d8;
            fVar81 = (float)local_c8;
            fVar82 = (float)local_c8;
            fVar83 = (float)local_118._0_4_;
            fVar84 = (float)local_118._0_4_;
            fVar85 = (float)local_88;
            fVar86 = (float)local_88;
            fVar87 = fVar80;
            fVar88 = _DAT_005dd2d0;
            fVar89 = _UNK_005dd2d4;
            iVar53 = extraout_XMM0_Db;
            iVar36 = _DAT_005dd3c0;
            iVar43 = _UNK_005dd3c4;
            iVar71 = _UNK_005dd3c8;
            iVar44 = _UNK_005dd3cc;
            do {
              if (0 < *(int *)(this + 0xc)) {
                local_b8 = (long)*(int *)this;
                iVar57 = *(int *)(this + 8);
                local_b0 = (size_t)iVar57;
                local_48 = local_b0 * 4;
                local_e0 = (long)(*(int *)(this + 0xc) + *(int *)(this + 4));
                fVar64 = (float)*(int *)this + fVar72;
                fVar77 = (float)iVar57 + fVar64;
                local_17c = iVar57 + 1;
                local_68 = CONCAT44(fVar64,fVar77);
                pEVar50 = (EdgeTableFillers *)(long)*(int *)(this + 4);
                uVar48 = local_178;
                fStack_60 = fVar73;
                iStack_5c = iVar53;
                do {
                  fVar73 = fVar64;
                  pEVar39 = pEVar50;
                  sVar63 = local_b0;
                  local_140 = *plVar55;
                  local_148 = (size_t)*(int *)((long)plVar55 + 0x14);
                  iVar57 = (int)local_b0;
                  if ((int)sVar58 < iVar57) {
                    free(pEVar38);
                    if (iVar57 == 0) {
                      pEVar38 = (EdgeTableFillers *)0x0;
                    }
                    else {
                      pEVar38 = malloc(local_48);
                    }
                    auVar79 = _DAT_005dd240;
                    fVar77 = (float)local_68;
                    fVar73 = local_68._4_4_;
                    fVar68 = local_108;
                    fVar76 = local_f8;
                    fVar72 = (float)local_d8;
                    fVar81 = (float)local_c8;
                    fVar82 = local_c8._4_4_;
                    fVar83 = (float)local_118._0_4_;
                    fVar84 = (float)local_118._4_4_;
                    fVar85 = (float)local_88;
                    fVar86 = local_88._4_4_;
                    fVar80 = local_98;
                    fVar87 = fStack_94;
                    fVar88 = _DAT_005dd2d0;
                    fVar89 = _UNK_005dd2d4;
                    iVar36 = _DAT_005dd3c0;
                    iVar43 = _UNK_005dd3c4;
                    iVar71 = _UNK_005dd3c8;
                    iVar44 = _UNK_005dd3cc;
                    local_150 = sVar63;
                  }
                  else {
                    local_150 = sVar58;
                  }
                  fVar64 = (float)(int)pEVar39 + fVar72;
                  fVar69 = fVar64 * fVar76;
                  iVar53 = (int)((fVar82 * fVar73 + fVar69 + fVar87) * fVar89);
                  iVar67 = (int)((fVar81 * fVar77 + fVar69 + fVar80) * fVar88) - iVar53;
                  iVar41 = iVar67 % iVar57;
                  fVar64 = fVar64 * fVar68;
                  uVar62 = iVar53 + local_180;
                  local_158 = 0;
                  if (iVar41 < 1) {
                    local_158 = iVar57;
                  }
                  iVar53 = (int)((fVar86 * fVar73 + fVar64 + fVar84) * fVar89);
                  iVar33 = (int)((fVar85 * fVar77 + fVar64 + fVar83) * fVar88) - iVar53;
                  iVar42 = iVar33 % iVar57;
                  local_158 = local_158 + iVar41;
                  uVar45 = iVar67 / iVar57 - (uint)(iVar41 < 1);
                  local_a0 = (ulong)uVar45;
                  iVar67 = local_158 - iVar57;
                  uVar60 = iVar53 + local_180;
                  local_15c = 0;
                  if (iVar42 < 1) {
                    local_15c = iVar57;
                  }
                  local_15c = local_15c + iVar42;
                  uVar34 = iVar33 / iVar57 - (uint)(iVar42 < 1);
                  local_a8 = (ulong)uVar34;
                  iVar57 = local_15c - iVar57;
                  pEVar50 = pEVar38;
                  uVar59 = local_17c;
                  do {
                    iVar33 = iVar67 + local_158;
                    iVar41 = uVar45 + uVar62;
                    local_188 = (EdgeTableFillers *)CONCAT44(local_188._4_4_,iVar41);
                    local_130 = (EdgeTableFillers *)CONCAT71(local_130._1_7_,0 < iVar33);
                    iVar67 = 0;
                    if (0 < iVar33) {
                      iVar67 = (int)sVar63;
                    }
                    local_120 = (EdgeTableFillers *)CONCAT44(local_120._4_4_,iVar67);
                    iVar42 = iVar57 + local_15c;
                    local_174 = CONCAT31(local_174._1_3_,0 < iVar42);
                    local_154 = 0;
                    if (0 < iVar42) {
                      local_154 = (int)sVar63;
                    }
                    iVar57 = (int)(CONCAT44((int)uVar62 >> 0x1f,(int)uVar62 >> 8) %
                                  (long)(int)*(uint *)((long)param_3 + 0x1c));
                    uVar47 = (iVar57 >> 0x1f & *(uint *)((long)param_3 + 0x1c)) + iVar57;
                    iVar57 = (int)(CONCAT44((int)uVar60 >> 0x1f,(int)uVar60 >> 8) %
                                  (long)(int)*(uint *)(param_3 + 4));
                    uVar35 = (iVar57 >> 0x1f & *(uint *)(param_3 + 4)) + iVar57;
                    lVar49 = (long)*(int *)((long)param_3 + 0x14);
                    lVar56 = (long)(int)param_3[3];
                    puVar46 = (undefined4 *)((int)uVar47 * lVar56 + (int)uVar35 * lVar49 + *param_3)
                    ;
                    if (((param_6 == 0) || (uVar48 <= uVar47)) || (local_160 <= uVar35)) {
                      *(undefined4 *)pEVar50 = *puVar46;
                    }
                    else {
                      uVar62 = uVar62 & 0xff;
                      uVar47 = uVar60 & 0xff;
                      uVar35 = (0x100 - uVar47) * (0x100 - uVar62);
                      uVar1 = *puVar46;
                      bVar66 = (byte)((uint)uVar1 >> 0x18);
                      uVar65 = (undefined1)((uint)uVar1 >> 8);
                      uVar22 = (ulong)CONCAT12(uVar65,(short)uVar1) & 0xffffffffffff00ff;
                      auVar6._8_4_ = 0;
                      auVar6._0_8_ = uVar22;
                      auVar6[0xc] = bVar66;
                      auVar7[8] = (char)((uint)uVar1 >> 0x10);
                      auVar7._0_8_ = uVar22;
                      auVar7[9] = 0;
                      auVar7._10_3_ = auVar6._10_3_;
                      auVar26._5_8_ = 0;
                      auVar26._0_5_ = auVar7._8_5_;
                      auVar8[4] = uVar65;
                      auVar8._0_4_ = (uint)uVar22;
                      auVar8[5] = 0;
                      auVar8._6_7_ = SUB137(auVar26 << 0x40,6);
                      auVar9[0xc] = bVar66;
                      auVar9._0_12_ = ZEXT112(bVar66) << 0x40;
                      uVar48 = (0x100 - uVar47) * uVar62;
                      uVar1 = *(undefined4 *)((long)puVar46 + lVar56);
                      uVar65 = (undefined1)((uint)uVar1 >> 8);
                      uVar23 = (ulong)CONCAT12(uVar65,(short)uVar1) & 0xffffffffffff00ff;
                      auVar10._8_4_ = 0;
                      auVar10._0_8_ = uVar23;
                      auVar10[0xc] = (char)((uint)uVar1 >> 0x18);
                      auVar11[8] = (char)((uint)uVar1 >> 0x10);
                      auVar11._0_8_ = uVar23;
                      auVar11[9] = 0;
                      auVar11._10_3_ = auVar10._10_3_;
                      uVar12 = auVar11._8_5_;
                      auVar27._5_8_ = 0;
                      auVar27._0_5_ = uVar12;
                      auVar13[4] = uVar65;
                      auVar13._0_4_ = (uint)uVar23;
                      auVar13[5] = 0;
                      auVar13._6_7_ = SUB137(auVar27 << 0x40,6);
                      uVar61 = uVar62 * uVar47;
                      uVar1 = *(undefined4 *)((long)puVar46 + lVar49 + lVar56);
                      uVar65 = (undefined1)((uint)uVar1 >> 8);
                      uVar24 = (ulong)CONCAT12(uVar65,(short)uVar1) & 0xffffffffffff00ff;
                      auVar14._8_4_ = 0;
                      auVar14._0_8_ = uVar24;
                      auVar14[0xc] = (char)((uint)uVar1 >> 0x18);
                      auVar15[8] = (char)((uint)uVar1 >> 0x10);
                      auVar15._0_8_ = uVar24;
                      auVar15[9] = 0;
                      auVar15._10_3_ = auVar14._10_3_;
                      uVar16 = auVar15._8_5_;
                      auVar28._5_8_ = 0;
                      auVar28._0_5_ = uVar16;
                      auVar17[4] = uVar65;
                      auVar17._0_4_ = (uint)uVar24;
                      auVar17[5] = 0;
                      auVar17._6_7_ = SUB137(auVar28 << 0x40,6);
                      iVar53 = auVar17._4_4_ * uVar61 +
                               auVar13._4_4_ * uVar48 + auVar8._4_4_ * uVar35;
                      uVar47 = (0x100 - uVar62) * uVar47;
                      uVar1 = *(undefined4 *)((long)puVar46 + lVar49);
                      uVar65 = (undefined1)((uint)uVar1 >> 8);
                      uVar25 = (ulong)CONCAT12(uVar65,(short)uVar1) & 0xffffffffffff00ff;
                      auVar18._8_4_ = 0;
                      auVar18._0_8_ = uVar25;
                      auVar18[0xc] = (char)((uint)uVar1 >> 0x18);
                      auVar19[8] = (char)((uint)uVar1 >> 0x10);
                      auVar19._0_8_ = uVar25;
                      auVar19[9] = 0;
                      auVar19._10_3_ = auVar18._10_3_;
                      uVar20 = auVar19._8_5_;
                      auVar29._5_8_ = 0;
                      auVar29._0_5_ = uVar20;
                      auVar21[4] = uVar65;
                      auVar21._0_4_ = (uint)uVar25;
                      auVar21[5] = 0;
                      auVar21._6_7_ = SUB137(auVar29 << 0x40,6);
                      auVar75._4_4_ = uVar47;
                      auVar75._0_4_ = uVar47;
                      auVar75._8_4_ = uVar47;
                      auVar75._12_4_ = uVar47;
                      auVar70._0_4_ =
                           uVar47 * ((uint)uVar25 & 0xffff) +
                           ((uint)uVar24 & 0xffff) * uVar61 +
                           ((uint)uVar23 & 0xffff) * uVar48 + ((uint)uVar22 & 0xffff) * uVar35 +
                           iVar36 >> 0x10;
                      auVar70._4_4_ = auVar21._4_4_ * uVar47 + iVar53 + iVar43 >> 0x10;
                      auVar70._8_4_ =
                           (uint)((int)((auVar75._8_8_ & 0xffffffff) * ((ulong)uVar20 & 0xffffffff))
                                  + (int)(((ulong)uVar16 & 0xffffffff) * (ulong)uVar61) +
                                    (int)(((ulong)uVar12 & 0xffffffff) * (ulong)uVar48) +
                                    (int)(((ulong)auVar7._8_5_ & 0xffffffff) * (ulong)uVar35) +
                                 iVar71) >> 0x10;
                      auVar70._12_4_ =
                           (uint)((int)((ulong)(uVar20 >> 0x20) * (ulong)uVar47) +
                                  (int)((ulong)(uVar16 >> 0x20) * (ulong)uVar61) +
                                  (int)((ulong)(uVar12 >> 0x20) * (ulong)uVar48) +
                                  (int)(((ulong)auVar9._8_5_ & 0xffffffff) * (ulong)uVar35) + iVar44
                                 ) >> 0x10;
                      auVar70 = auVar70 & auVar79;
                      sVar2 = auVar70._0_2_;
                      bVar66 = (0 < sVar2) * (sVar2 < 0x100) * auVar70[0] - (0xff < sVar2);
                      sVar2 = auVar70._4_2_;
                      bVar3 = (0 < sVar2) * (sVar2 < 0x100) * auVar70[4] - (0xff < sVar2);
                      sVar2 = auVar70._8_2_;
                      cVar4 = (0 < sVar2) * (sVar2 < 0x100) * auVar70[8] - (0xff < sVar2);
                      sVar2 = auVar70._10_2_;
                      sVar30 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar70[10] - (0xff < sVar2)
                                        ,cVar4);
                      sVar2 = auVar70._12_2_;
                      cVar5 = (0 < sVar2) * (sVar2 < 0x100) * auVar70[0xc] - (0xff < sVar2);
                      sVar2 = auVar70._14_2_;
                      sVar2 = (short)(CONCAT13((0 < sVar2) * (sVar2 < 0x100) * auVar70[0xe] -
                                               (0xff < sVar2),CONCAT12(cVar5,sVar30)) >> 0x10);
                      *(uint *)pEVar50 =
                           CONCAT13((0 < sVar2) * (sVar2 < 0x100) * cVar5 - (0xff < sVar2),
                                    CONCAT12((0 < sVar30) * (sVar30 < 0x100) * cVar4 -
                                             (0xff < sVar30),
                                             CONCAT11((bVar3 != 0) * (bVar3 < 0x100) * bVar3 -
                                                      (0xff < bVar3),
                                                      (bVar66 != 0) * (bVar66 < 0x100) * bVar66 -
                                                      (0xff < bVar66))));
                      uVar48 = local_178;
                    }
                    iVar67 = iVar33 - iVar67;
                    uVar62 = iVar41 + (uint)(0 < iVar33);
                    iVar57 = iVar42 - local_154;
                    uVar60 = uVar34 + uVar60 + (uint)(0 < iVar42);
                    pEVar50 = pEVar50 + 4;
                    uVar59 = uVar59 - 1;
                    sVar63 = local_b0;
                  } while (1 < (int)uVar59);
                  lVar49 = (long)(int)local_170[3];
                  if (local_164 < 0xfe00) {
                    pEVar50 = pEVar38 + 3;
                    pbVar37 = (byte *)(local_140 + local_148 * (long)pEVar39 + lVar49 * local_b8);
                    uVar62 = local_17c;
                    do {
                      *pbVar37 = (char)((0x100 - ((uint)(byte)*pEVar50 * (int)local_78 >> 8)) *
                                        (uint)*pbVar37 >> 8) +
                                 (char)((uint)(byte)*pEVar50 * (int)local_78 >> 8);
                      pEVar50 = pEVar50 + 4;
                      pbVar37 = pbVar37 + lVar49;
                      uVar62 = uVar62 - 1;
                    } while (1 < (int)uVar62);
                  }
                  else {
                    pEVar50 = pEVar38 + 3;
                    pbVar37 = (byte *)(local_140 + local_148 * (long)pEVar39 + lVar49 * local_b8);
                    uVar62 = local_17c;
                    do {
                      *pbVar37 = (char)((0x100 - (uint)(byte)*pEVar50) * (uint)*pbVar37 >> 8) +
                                 (char)*pEVar50;
                      pEVar50 = pEVar50 + 4;
                      pbVar37 = pbVar37 + lVar49;
                      uVar62 = uVar62 - 1;
                    } while (1 < (int)uVar62);
                  }
                  plVar55 = local_170;
                  sVar58 = local_150;
                  pEVar50 = pEVar39 + 1;
                  fVar64 = fVar73;
                  local_138 = pEVar39;
                  local_128 = pEVar38;
                } while ((long)(pEVar39 + 1) < local_e0);
              }
              this = this + 0x10;
            } while (this != local_58);
          }
          goto LAB_003bf09d;
        }
        fVar80 = *param_5 * param_5[4] - param_5[3] * param_5[1];
        dVar78 = (double)fVar80;
        dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                                  _DAT_005d91b0 & SUB84(dVar78,0));
        if (dVar74 == DAT_005d94e0) {
          if ((fVar80 == 0.0) && (!NAN(fVar80))) goto LAB_003bf32f;
LAB_003bc35b:
          dVar78 = _DAT_005d9000 / dVar78;
          fVar76 = (float)((double)param_5[4] * dVar78);
          fVar73 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar78);
          fVar68 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar78);
          fVar80 = (float)((double)*param_5 * dVar78);
          local_218 = CONCAT44(fVar68,fVar76);
          uStack_210 = CONCAT44(fVar73,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar76 -
                                       fVar68 * param_5[5]);
          local_208 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar73 -
                               param_5[5] * fVar80,fVar80);
        }
        else {
          if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bc35b;
LAB_003bf32f:
          local_208 = *(undefined8 *)(param_5 + 4);
          local_218 = *(undefined8 *)param_5;
          uStack_210 = *(undefined8 *)(param_5 + 2);
        }
        local_1d8 = 0.0;
        if (param_6 != 0) {
          local_1d8 = DAT_005d9044;
        }
        local_1d4 = (uint)(param_6 == 0) * 0x80 + -0x80;
        local_1c0 = param_4 + 1;
        local_1bc = param_6;
        local_1b8 = *(int *)((long)param_3 + 0x1c) + -1;
        local_1b4 = (int)param_3[4] + -1;
        local_198 = 0x800;
        local_1a0 = malloc(0x2000);
        if (param_2_00 != 0) {
          local_188 = this + (long)param_2_00 * 0x10;
          plVar55 = local_170;
          do {
            iVar53 = *(int *)(this + 0xc);
            if (0 < iVar53) {
              iVar36 = *(int *)this;
              iVar43 = *(int *)(this + 8);
              iVar71 = *(int *)(this + 4);
              lVar49 = (long)iVar71;
              do {
                local_1b0 = (undefined4)lVar49;
                local_1a8 = *(int *)((long)plVar55 + 0x14) * lVar49 + *plVar55;
                if ((int)local_198 < iVar43) {
                  local_198 = (long)iVar43;
                  free(local_1a0);
                  if (iVar43 == 0) {
                    local_1a0 = (uint3 *)0x0;
                  }
                  else {
                    local_1a0 = malloc((long)iVar43 * 4);
                  }
                }
                puVar52 = local_1a0;
                TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false>::
                generate<juce::PixelARGB>
                          ((TransformedImageFill<juce::PixelAlpha,juce::PixelARGB,false> *)
                           &local_218,(undefined4 *)local_1a0,iVar36,iVar43);
                lVar56 = (long)(int)local_1d0[3];
                pbVar37 = (byte *)(lVar56 * iVar36 + local_1a8);
                if (local_1c0 * 0xff < 0xfe00) {
                  pbVar51 = (byte *)((long)puVar52 + 3);
                  iVar44 = iVar43 + 1;
                  do {
                    uVar48 = (uint)*pbVar51 * ((local_1c0 * 0xff >> 8) + 1);
                    *pbVar37 = (char)((0x100 - (uVar48 >> 8)) * (uint)*pbVar37 >> 8) +
                               (char)(uVar48 >> 8);
                    pbVar51 = pbVar51 + 4;
                    pbVar37 = pbVar37 + lVar56;
                    iVar44 = iVar44 + -1;
                  } while (1 < iVar44);
                }
                else {
                  pbVar51 = (byte *)((long)puVar52 + 3);
                  iVar44 = iVar43 + 1;
                  do {
                    *pbVar37 = (char)((0x100 - (uint)*pbVar51) * (uint)*pbVar37 >> 8) + *pbVar51;
                    pbVar51 = pbVar51 + 4;
                    pbVar37 = pbVar37 + lVar56;
                    iVar44 = iVar44 + -1;
                  } while (1 < iVar44);
                }
                lVar49 = lVar49 + 1;
                plVar55 = local_1d0;
              } while (lVar49 < iVar53 + iVar71);
            }
            this = this + 0x10;
          } while (this != local_188);
        }
        goto LAB_003c05d6;
      }
      if (param_7 != '\0') {
        local_108 = *param_5;
        fVar68 = 0.0;
        local_98 = param_5[1];
        fStack_94 = 0.0;
        fVar80 = param_5[4];
        local_d8 = (ulong)(uint)fVar80;
        local_118._0_4_ = param_5[3];
        fVar73 = local_108 * fVar80 - (float)local_118._0_4_ * local_98;
        dVar78 = (double)fVar73;
        dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                                  _DAT_005d91b0 & SUB84(dVar78,0));
        if (dVar74 == DAT_005d94e0) {
          if ((fVar73 == 0.0) && (!NAN(fVar73))) goto LAB_003bea45;
LAB_003bc05a:
          dVar78 = _DAT_005d9000 / dVar78;
          local_118._0_4_ = (BADTYPE)((double)(float)(local_118._0_4_ ^ _DAT_006524b0) * dVar78);
          fVar68 = (float)((double)fVar80 * dVar78);
          local_98 = (float)((double)(float)((uint)local_98 ^ _DAT_006524b0) * dVar78);
          local_d8 = CONCAT44(local_98,(float)((double)local_108 * dVar78));
          fVar80 = param_5[5];
          fVar73 = (float)((uint)param_5[2] ^ _DAT_006524b0);
          local_f8 = fVar73 * (float)local_118._0_4_ - fVar80 * (float)((double)local_108 * dVar78);
          fStack_f4 = fVar73 * fVar68 - fVar80 * local_98;
          fStack_f0 = fVar73 * 0.0 - fVar80 * 0.0;
          fStack_ec = fVar73 * 0.0 - fVar80 * 0.0;
          fStack_94 = local_98;
          local_108 = fVar68;
        }
        else {
          if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bc05a;
LAB_003bea45:
          fStack_f4 = param_5[2];
          local_f8 = param_5[5];
          fStack_f0 = 0.0;
          fStack_ec = 0.0;
        }
        uStack_100 = CONCAT44(fVar68,fVar68);
        uStack_d0 = 0;
        local_118._4_4_ = fVar68;
        _fStack_110 = 0;
        local_78 = 0.0;
        if (param_6 != 0) {
          local_78 = DAT_005d9044;
        }
        iVar53 = *(int *)((long)param_3 + 0x1c);
        lVar49 = param_3[4];
        local_150 = 0x800;
        fStack_90 = fStack_94;
        fStack_8c = fStack_94;
        fStack_104 = fVar68;
        pEVar38 = malloc(0x800);
        fVar80 = fStack_f4;
        if (param_2_00 != 0) {
          local_164 = (uint)(param_6 == 0) * 0x80 + -0x80;
          local_178 = iVar53 - 1;
          local_17c = (int)lVar49 - 1;
          local_38 = this + (long)param_2_00 * 0x10;
          iVar53 = param_4 * 0xff + 0xff;
          local_68 = CONCAT44(local_68._4_4_,iVar53);
          local_48 = CONCAT44(local_48._4_4_,(iVar53 >> 8) + 1);
          local_118._4_4_ = local_118._0_4_;
          fStack_110 = (float)local_118._0_4_;
          fStack_10c = (float)local_118._0_4_;
          fStack_104 = local_108;
          uStack_100 = CONCAT44(local_108,local_108);
          fStack_f4 = local_f8;
          fStack_f0 = local_f8;
          fStack_ec = local_f8;
          local_58 = (EdgeTableFillers *)CONCAT44(fVar80,fVar80);
          fStack_50 = fVar80;
          fStack_4c = fVar80;
          plVar55 = local_170;
          fVar73 = (float)local_118._0_4_;
          fVar76 = (float)local_118._0_4_;
          fVar72 = local_f8;
          fVar81 = local_f8;
          fVar82 = (float)local_d8;
          fVar83 = local_98;
          fVar84 = local_78;
          fVar85 = local_108;
          fVar86 = local_108;
          fVar87 = _DAT_005dd2d0;
          fVar88 = _UNK_005dd2d4;
          fVar89 = fVar80;
          do {
            if (0 < *(int *)(this + 0xc)) {
              local_b8 = (long)*(int *)this;
              local_15c = *(int *)(this + 8);
              local_88 = (size_t)local_15c;
              local_e0 = (long)(*(int *)(this + 0xc) + *(int *)(this + 4));
              fVar64 = (float)*(int *)this + fVar84;
              fVar77 = (float)local_15c + fVar64;
              local_180 = local_15c + 1;
              local_c8 = CONCAT44(fVar64,fVar77);
              uStack_c0 = (ulong)(uint)fVar68;
              pEVar50 = (EdgeTableFillers *)(long)*(int *)(this + 4);
              do {
                pEVar39 = pEVar50;
                iVar53 = local_15c;
                local_140 = *plVar55;
                local_148 = (size_t)*(int *)((long)plVar55 + 0x14);
                if ((int)local_150 < local_15c) {
                  free(pEVar38);
                  sVar58 = local_88;
                  if (iVar53 == 0) {
                    pEVar38 = (EdgeTableFillers *)0x0;
                  }
                  else {
                    pEVar38 = malloc(local_88);
                  }
                  local_150 = sVar58;
                  fVar73 = (float)local_118._0_4_;
                  fVar76 = (float)local_118._4_4_;
                  fVar72 = local_f8;
                  fVar81 = fStack_f4;
                  fVar82 = (float)local_d8;
                  fVar83 = local_98;
                  fVar84 = local_78;
                  fVar85 = local_108;
                  fVar86 = fStack_104;
                  fVar87 = _DAT_005dd2d0;
                  fVar88 = _UNK_005dd2d4;
                  fVar77 = (float)local_c8;
                  fVar64 = local_c8._4_4_;
                  fVar80 = (float)local_58;
                  fVar89 = local_58._4_4_;
                }
                fVar68 = (float)(int)pEVar39 + fVar84;
                fVar69 = fVar68 * fVar83;
                iVar71 = (int)((fVar86 * fVar64 + fVar69 + fVar89) * fVar88);
                iVar36 = (int)((fVar85 * fVar77 + fVar69 + fVar80) * fVar87) - iVar71;
                iVar43 = iVar36 % iVar53;
                fVar68 = fVar68 * fVar82;
                uVar48 = iVar71 + local_164;
                local_158 = 0;
                if (iVar43 < 1) {
                  local_158 = iVar53;
                }
                iVar67 = (int)((fVar76 * fVar64 + fVar68 + fVar81) * fVar88);
                iVar71 = (int)((fVar73 * fVar77 + fVar68 + fVar72) * fVar87) - iVar67;
                iVar44 = iVar71 % iVar53;
                local_158 = local_158 + iVar43;
                iVar57 = iVar36 / iVar53 - (uint)(iVar43 < 1);
                local_b0 = CONCAT44(local_b0._4_4_,iVar57);
                iVar43 = local_158 - iVar53;
                uVar62 = iVar67 + local_164;
                iVar36 = 0;
                if (iVar44 < 1) {
                  iVar36 = iVar53;
                }
                iVar36 = iVar36 + iVar44;
                local_160 = iVar71 / iVar53 - (uint)(iVar44 < 1);
                local_a8 = CONCAT44(local_a8._4_4_,iVar36);
                iVar71 = iVar36 - iVar53;
                local_120 = (EdgeTableFillers *)CONCAT44(local_120._4_4_,iVar53);
                local_130 = pEVar38;
                while( true ) {
                  local_174 = iVar43 + local_158;
                  iVar43 = 0;
                  if (0 < local_174) {
                    iVar43 = iVar53;
                  }
                  local_a0 = CONCAT71(local_a0._1_7_,0 < local_174);
                  iVar44 = iVar71 + iVar36;
                  local_154 = CONCAT31(local_154._1_3_,0 < iVar44);
                  iVar71 = 0;
                  if (0 < iVar44) {
                    iVar71 = iVar53;
                  }
                  local_188 = (EdgeTableFillers *)CONCAT44(local_188._4_4_,uVar48);
                  iVar53 = (int)(CONCAT44((int)uVar48 >> 0x1f,(int)uVar48 >> 8) %
                                (long)(int)*(uint *)((long)param_3 + 0x1c));
                  uVar60 = (iVar53 >> 0x1f & *(uint *)((long)param_3 + 0x1c)) + iVar53;
                  iVar53 = (int)(CONCAT44((int)uVar62 >> 0x1f,(int)uVar62 >> 8) %
                                (long)(int)*(uint *)(param_3 + 4));
                  uVar45 = (iVar53 >> 0x1f & *(uint *)(param_3 + 4)) + iVar53;
                  lVar49 = (long)*(int *)((long)param_3 + 0x14);
                  lVar56 = (long)(int)param_3[3];
                  pEVar50 = (EdgeTableFillers *)
                            ((int)uVar60 * lVar56 + (int)uVar45 * lVar49 + *param_3);
                  if (((param_6 == 0) || (local_178 <= uVar60)) || (local_17c <= uVar45)) {
                    EVar32 = *pEVar50;
                  }
                  else {
                    iVar53 = 0x100 - (uVar48 & 0xff);
                    EVar32 = SUB41(((uint)(byte)pEVar50[lVar56] * (uVar48 & 0xff) +
                                   (uint)(byte)*pEVar50 * iVar53) * (0x100 - (uVar62 & 0xff)) +
                                   ((uint)(byte)pEVar50[lVar49] * iVar53 +
                                   (uint)(byte)pEVar50[lVar49 + lVar56] * (uVar48 & 0xff)) *
                                   (uVar62 & 0xff) + 0x8000 >> 0x10,0);
                  }
                  *local_130 = EVar32;
                  if ((int)local_120 < 2) break;
                  iVar43 = local_174 - iVar43;
                  uVar48 = uVar48 + iVar57 + (uint)(0 < local_174);
                  iVar71 = iVar44 - iVar71;
                  uVar62 = uVar62 + local_160 + (uint)(0 < iVar44);
                  local_120 = (EdgeTableFillers *)CONCAT44(local_120._4_4_,(int)local_120 + -1);
                  local_130 = local_130 + 1;
                  iVar53 = local_15c;
                }
                lVar49 = (long)(int)local_170[3];
                if ((int)(float)local_68 < 0xfe00) {
                  pbVar37 = (byte *)(local_140 + local_148 * (long)pEVar39 + lVar49 * local_b8);
                  pEVar50 = pEVar38;
                  iVar53 = local_180;
                  do {
                    EVar32 = *pEVar50;
                    pEVar50 = pEVar50 + 1;
                    *pbVar37 = (char)((0x100 - ((uint)(byte)EVar32 * (int)(float)local_48 >> 8)) *
                                      (uint)*pbVar37 >> 8) +
                               (char)((uint)(byte)EVar32 * (int)(float)local_48 >> 8);
                    pbVar37 = pbVar37 + lVar49;
                    iVar53 = iVar53 + -1;
                  } while (1 < iVar53);
                }
                else {
                  pbVar37 = (byte *)(local_140 + local_148 * (long)pEVar39 + lVar49 * local_b8);
                  pEVar50 = pEVar38;
                  iVar53 = local_180;
                  do {
                    EVar32 = *pEVar50;
                    pEVar50 = pEVar50 + 1;
                    *pbVar37 = (char)((0x100 - (uint)(byte)EVar32) * (uint)*pbVar37 >> 8) +
                               (char)EVar32;
                    pbVar37 = pbVar37 + lVar49;
                    iVar53 = iVar53 + -1;
                  } while (1 < iVar53);
                }
                plVar55 = local_170;
                pEVar50 = pEVar39 + 1;
                fVar68 = fVar64;
                local_138 = pEVar39;
                local_128 = pEVar38;
              } while ((long)(pEVar39 + 1) < local_e0);
            }
            this = this + 0x10;
          } while (this != local_38);
        }
        goto LAB_003bf09d;
      }
      fVar80 = *param_5 * param_5[4] - param_5[3] * param_5[1];
      dVar78 = (double)fVar80;
      dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                                _DAT_005d91b0 & SUB84(dVar78,0));
      if (dVar74 == DAT_005d94e0) {
        if ((fVar80 == 0.0) && (!NAN(fVar80))) goto LAB_003c0395;
LAB_003bc9bb:
        dVar78 = _DAT_005d9000 / dVar78;
        fVar76 = (float)((double)param_5[4] * dVar78);
        fVar73 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar78);
        fVar68 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar78);
        fVar80 = (float)((double)*param_5 * dVar78);
        local_218 = CONCAT44(fVar68,fVar76);
        uStack_210 = CONCAT44(fVar73,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar76 -
                                     fVar68 * param_5[5]);
        local_208 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar73 -
                             param_5[5] * fVar80,fVar80);
      }
      else {
        if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bc9bb;
LAB_003c0395:
        local_208 = *(undefined8 *)(param_5 + 4);
        local_218 = *(undefined8 *)param_5;
        uStack_210 = *(undefined8 *)(param_5 + 2);
      }
      local_1d8 = 0.0;
      if (param_6 != 0) {
        local_1d8 = DAT_005d9044;
      }
      local_1d4 = (uint)(param_6 == 0) * 0x80 + -0x80;
      local_1c0 = param_4 + 1;
      local_1bc = param_6;
      local_1b8 = *(int *)((long)param_3 + 0x1c) + -1;
      local_1b4 = (int)param_3[4] + -1;
      local_198 = 0x800;
      local_1a0 = malloc(0x800);
      if (param_2_00 != 0) {
        pEVar38 = this + (long)param_2_00 * 0x10;
        plVar55 = local_170;
        do {
          iVar53 = *(int *)(this + 0xc);
          if (0 < iVar53) {
            iVar36 = *(int *)this;
            iVar43 = *(int *)(this + 8);
            iVar71 = *(int *)(this + 4);
            lVar49 = (long)iVar71;
            do {
              local_1b0 = (undefined4)lVar49;
              local_1a8 = *(int *)((long)plVar55 + 0x14) * lVar49 + *plVar55;
              if ((int)local_198 < iVar43) {
                local_198 = (long)iVar43;
                free(local_1a0);
                if (iVar43 == 0) {
                  local_1a0 = (uint3 *)0x0;
                }
                else {
                  local_1a0 = malloc((long)iVar43);
                }
              }
              puVar52 = local_1a0;
              TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false>::
              generate<juce::PixelAlpha>
                        ((TransformedImageFill<juce::PixelAlpha,juce::PixelAlpha,false> *)&local_218
                         ,(undefined1 *)local_1a0,iVar36,iVar43);
              lVar56 = (long)(int)local_1d0[3];
              pbVar37 = (byte *)(lVar56 * iVar36 + local_1a8);
              if (local_1c0 * 0xff < 0xfe00) {
                iVar44 = iVar43 + 1;
                do {
                  uVar31 = *puVar52;
                  puVar52 = (uint3 *)((long)puVar52 + 1);
                  uVar48 = (uint)(byte)uVar31 * ((local_1c0 * 0xff >> 8) + 1);
                  *pbVar37 = (char)((0x100 - (uVar48 >> 8)) * (uint)*pbVar37 >> 8) +
                             (char)(uVar48 >> 8);
                  pbVar37 = pbVar37 + lVar56;
                  iVar44 = iVar44 + -1;
                } while (1 < iVar44);
              }
              else {
                iVar44 = iVar43 + 1;
                do {
                  uVar31 = *puVar52;
                  puVar52 = (uint3 *)((long)puVar52 + 1);
                  *pbVar37 = (char)((0x100 - (uint)(byte)uVar31) * (uint)*pbVar37 >> 8) +
                             (byte)uVar31;
                  pbVar37 = pbVar37 + lVar56;
                  iVar44 = iVar44 + -1;
                } while (1 < iVar44);
              }
              lVar49 = lVar49 + 1;
              plVar55 = local_1d0;
            } while (lVar49 < iVar53 + iVar71);
          }
          this = this + 0x10;
        } while (this != pEVar38);
      }
      goto LAB_003c05d6;
    }
    if (param_7 == '\0') {
      fVar80 = *param_5 * param_5[4] - param_5[3] * param_5[1];
      dVar78 = (double)fVar80;
      dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                                _DAT_005d91b0 & SUB84(dVar78,0));
      if (dVar74 == DAT_005d94e0) {
        if ((fVar80 == 0.0) && (!NAN(fVar80))) goto LAB_003c016a;
LAB_003bc8ab:
        dVar78 = _DAT_005d9000 / dVar78;
        fVar76 = (float)((double)param_5[4] * dVar78);
        fVar73 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar78);
        fVar68 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar78);
        fVar80 = (float)((double)*param_5 * dVar78);
        local_218 = CONCAT44(fVar68,fVar76);
        uStack_210 = CONCAT44(fVar73,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar76 -
                                     fVar68 * param_5[5]);
        local_208 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar73 -
                             param_5[5] * fVar80,fVar80);
      }
      else {
        if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bc8ab;
LAB_003c016a:
        local_208 = *(undefined8 *)(param_5 + 4);
        local_218 = *(undefined8 *)param_5;
        uStack_210 = *(undefined8 *)(param_5 + 2);
      }
      local_1d8 = 0.0;
      if (param_6 != 0) {
        local_1d8 = DAT_005d9044;
      }
      local_1d4 = (uint)(param_6 == 0) * 0x80 + -0x80;
      local_1c0 = param_4 + 1;
      local_1bc = param_6;
      local_1b8 = *(int *)((long)param_3 + 0x1c) + -1;
      local_1b4 = (int)param_3[4] + -1;
      local_198 = 0x800;
      local_1a0 = malloc(0x1800);
      if (param_2_00 != 0) {
        pEVar38 = this + (long)param_2_00 * 0x10;
        plVar55 = local_170;
        do {
          iVar53 = *(int *)(this + 0xc);
          if (0 < iVar53) {
            iVar36 = *(int *)this;
            iVar43 = *(int *)(this + 8);
            iVar71 = *(int *)(this + 4);
            lVar49 = (long)iVar71;
            do {
              local_1b0 = (undefined4)lVar49;
              local_1a8 = *(int *)((long)plVar55 + 0x14) * lVar49 + *plVar55;
              if ((int)local_198 < iVar43) {
                local_198 = (long)iVar43;
                free(local_1a0);
                if (iVar43 == 0) {
                  local_1a0 = (uint3 *)0x0;
                }
                else {
                  local_1a0 = malloc((long)iVar43 * 3);
                }
              }
              TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false>::generate<juce::PixelRGB>
                        ((TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,false> *)&local_218,
                         (long)local_1a0,iVar36,iVar43);
              lVar56 = (long)(int)local_1d0[3];
              pbVar37 = (byte *)(lVar56 * iVar36 + local_1a8);
              uVar48 = local_1c0 * 0xff;
              if ((int)uVar48 < 0xfe00) {
                uVar48 = ((uVar48 & 0xffffff00) - ((int)uVar48 >> 8)) + 0xff;
                iVar44 = iVar43 + 1;
                do {
                  *pbVar37 = (char)((uint)*pbVar37 * (0x100 - (uVar48 >> 8)) >> 8) +
                             (char)(uVar48 >> 8);
                  pbVar37 = pbVar37 + lVar56;
                  iVar44 = iVar44 + -1;
                } while (1 < iVar44);
              }
              else {
                iVar44 = iVar43 + 1;
                do {
                  *pbVar37 = 0xff;
                  pbVar37 = pbVar37 + lVar56;
                  iVar44 = iVar44 + -1;
                } while (1 < iVar44);
              }
              lVar49 = lVar49 + 1;
              plVar55 = local_1d0;
            } while (lVar49 < iVar53 + iVar71);
          }
          this = this + 0x10;
        } while (this != pEVar38);
      }
      goto LAB_003c05d6;
    }
    fVar80 = *param_5 * param_5[4] - param_5[3] * param_5[1];
    dVar78 = (double)fVar80;
    dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                              _DAT_005d91b0 & SUB84(dVar78,0));
    if (dVar74 == DAT_005d94e0) {
      if ((fVar80 == 0.0) && (!NAN(fVar80))) goto LAB_003be81a;
LAB_003bbf42:
      dVar78 = _DAT_005d9000 / dVar78;
      fVar76 = (float)((double)param_5[4] * dVar78);
      fVar73 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar78);
      fVar68 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar78);
      fVar80 = (float)((double)*param_5 * dVar78);
      local_218 = CONCAT44(fVar68,fVar76);
      uStack_210 = CONCAT44(fVar73,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar76 -
                                   fVar68 * param_5[5]);
      local_208 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar73 - param_5[5] * fVar80,
                           fVar80);
    }
    else {
      if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bbf42;
LAB_003be81a:
      local_208 = *(undefined8 *)(param_5 + 4);
      local_218 = *(undefined8 *)param_5;
      uStack_210 = *(undefined8 *)(param_5 + 2);
    }
    local_1d8 = 0.0;
    if (param_6 != 0) {
      local_1d8 = DAT_005d9044;
    }
    local_1d4 = (uint)(param_6 == 0) * 0x80 + -0x80;
    local_1c0 = param_4 + 1;
    local_1bc = param_6;
    local_1b8 = *(int *)((long)param_3 + 0x1c) + -1;
    local_1b4 = (int)param_3[4] + -1;
    local_198 = 0x800;
    local_1a0 = malloc(0x1800);
    if (param_2_00 != 0) {
      pEVar38 = this + (long)param_2_00 * 0x10;
      plVar55 = local_170;
      do {
        iVar53 = *(int *)(this + 0xc);
        if (0 < iVar53) {
          iVar36 = *(int *)this;
          iVar43 = *(int *)(this + 8);
          iVar71 = *(int *)(this + 4);
          lVar49 = (long)iVar71;
          do {
            local_1b0 = (undefined4)lVar49;
            local_1a8 = *(int *)((long)plVar55 + 0x14) * lVar49 + *plVar55;
            if ((int)local_198 < iVar43) {
              local_198 = (long)iVar43;
              free(local_1a0);
              if (iVar43 == 0) {
                local_1a0 = (uint3 *)0x0;
              }
              else {
                local_1a0 = malloc((long)iVar43 * 3);
              }
            }
            TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true>::generate<juce::PixelRGB>
                      ((TransformedImageFill<juce::PixelAlpha,juce::PixelRGB,true> *)&local_218,
                       (long)local_1a0,iVar36,iVar43);
            lVar56 = (long)(int)local_1d0[3];
            pbVar37 = (byte *)(lVar56 * iVar36 + local_1a8);
            uVar48 = local_1c0 * 0xff;
            if ((int)uVar48 < 0xfe00) {
              uVar48 = ((uVar48 & 0xffffff00) - ((int)uVar48 >> 8)) + 0xff;
              iVar44 = iVar43 + 1;
              do {
                *pbVar37 = (char)((uint)*pbVar37 * (0x100 - (uVar48 >> 8)) >> 8) +
                           (char)(uVar48 >> 8);
                pbVar37 = pbVar37 + lVar56;
                iVar44 = iVar44 + -1;
              } while (1 < iVar44);
            }
            else {
              iVar44 = iVar43 + 1;
              do {
                *pbVar37 = 0xff;
                pbVar37 = pbVar37 + lVar56;
                iVar44 = iVar44 + -1;
              } while (1 < iVar44);
            }
            lVar49 = lVar49 + 1;
            plVar55 = local_1d0;
          } while (lVar49 < iVar53 + iVar71);
        }
        this = this + 0x10;
      } while (this != pEVar38);
    }
    goto LAB_003c05d6;
  }
  if ((int)param_3[2] != 1) {
    if ((int)param_3[2] != 2) {
      if (param_7 == '\0') {
        fVar80 = *param_5 * param_5[4] - param_5[3] * param_5[1];
        dVar78 = (double)fVar80;
        dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                                  _DAT_005d91b0 & SUB84(dVar78,0));
        if (dVar74 == DAT_005d94e0) {
          if ((fVar80 == 0.0) && (!NAN(fVar80))) goto LAB_003bfe66;
LAB_003bc79b:
          dVar78 = _DAT_005d9000 / dVar78;
          fVar76 = (float)((double)param_5[4] * dVar78);
          fVar73 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar78);
          fVar68 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar78);
          fVar80 = (float)((double)*param_5 * dVar78);
          local_218 = CONCAT44(fVar68,fVar76);
          uStack_210 = CONCAT44(fVar73,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar76 -
                                       fVar68 * param_5[5]);
          local_208 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar73 -
                               param_5[5] * fVar80,fVar80);
        }
        else {
          if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bc79b;
LAB_003bfe66:
          local_208 = *(undefined8 *)(param_5 + 4);
          local_218 = *(undefined8 *)param_5;
          uStack_210 = *(undefined8 *)(param_5 + 2);
        }
        local_1d8 = 0.0;
        if (param_6 != 0) {
          local_1d8 = DAT_005d9044;
        }
        local_1d4 = (uint)(param_6 == 0) * 0x80 + -0x80;
        local_1c0 = param_4 + 1;
        local_1bc = param_6;
        local_1b8 = *(int *)((long)param_3 + 0x1c) + -1;
        local_1b4 = (int)param_3[4] + -1;
        local_198 = 0x800;
        local_1a0 = malloc(0x800);
        if (param_2_00 != 0) {
          local_188 = this + (long)param_2_00 * 0x10;
          plVar55 = local_170;
          do {
            iVar53 = *(int *)(this + 0xc);
            if (0 < iVar53) {
              iVar36 = *(int *)this;
              iVar43 = *(int *)(this + 8);
              iVar71 = *(int *)(this + 4);
              lVar49 = (long)iVar71;
              do {
                local_1b0 = (undefined4)lVar49;
                local_1a8 = *(int *)((long)plVar55 + 0x14) * lVar49 + *plVar55;
                if ((int)local_198 < iVar43) {
                  local_198 = (long)iVar43;
                  free(local_1a0);
                  if (iVar43 == 0) {
                    local_1a0 = (uint3 *)0x0;
                  }
                  else {
                    local_1a0 = malloc((long)iVar43);
                  }
                }
                puVar52 = local_1a0;
                TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false>::
                generate<juce::PixelAlpha>
                          ((TransformedImageFill<juce::PixelRGB,juce::PixelAlpha,false> *)&local_218
                           ,(undefined1 *)local_1a0,iVar36,iVar43);
                lVar54 = (long)(int)local_1d0[3];
                lVar56 = lVar54 * iVar36;
                if (local_1c0 * 0xff < 0xfe00) {
                  pbVar37 = (byte *)(local_1a8 + lVar56 + 2);
                  iVar44 = iVar43 + 1;
                  do {
                    uVar31 = *puVar52;
                    puVar52 = (uint3 *)((long)puVar52 + 1);
                    uVar62 = ((uint)(byte)uVar31 << 0x10 | (uint)(byte)uVar31) *
                             (local_1c0 * 0xff >> 8);
                    uVar48 = uVar62 >> 8 & 0xff00ff;
                    iVar57 = 0x100 - (uVar62 >> 0x18);
                    iVar67 = ((uint)pbVar37[-1] * iVar57 >> 8) + uVar48;
                    uVar48 = (((uint)*pbVar37 << 0x10 | (uint)pbVar37[-2]) * iVar57 >> 8 & 0xff00ff)
                             + uVar48;
                    uVar48 = 0x100 - (uVar48 >> 8 & 0x10001) | uVar48;
                    pbVar37[-1] = -(char)((uint)iVar67 >> 8) | (byte)iVar67;
                    *pbVar37 = (byte)(uVar48 >> 0x10);
                    pbVar37[-2] = (byte)uVar48;
                    pbVar37 = pbVar37 + lVar54;
                    iVar44 = iVar44 + -1;
                  } while (1 < iVar44);
                }
                else {
                  pbVar37 = (byte *)(local_1a8 + lVar56 + 2);
                  iVar44 = iVar43 + 1;
                  do {
                    bVar66 = (byte)*puVar52;
                    puVar52 = (uint3 *)((long)puVar52 + 1);
                    uVar62 = (uint)bVar66 << 0x10 | (uint)bVar66;
                    uVar48 = (((uint)*pbVar37 << 0x10 | (uint)pbVar37[-2]) * (0x100 - (uint)bVar66)
                              >> 8 & 0xff00ff) + uVar62;
                    uVar48 = 0x100 - (uVar48 >> 8 & 0x10001) | uVar48;
                    iVar57 = ((uint)pbVar37[-1] * (0x100 - (uint)bVar66) >> 8) + uVar62;
                    pbVar37[-1] = -(char)((uint)iVar57 >> 8) | (byte)iVar57;
                    *pbVar37 = (byte)(uVar48 >> 0x10);
                    pbVar37[-2] = (byte)uVar48;
                    pbVar37 = pbVar37 + lVar54;
                    iVar44 = iVar44 + -1;
                  } while (1 < iVar44);
                }
                lVar49 = lVar49 + 1;
                plVar55 = local_1d0;
              } while (lVar49 < iVar53 + iVar71);
            }
            this = this + 0x10;
          } while (this != local_188);
        }
        goto LAB_003c05d6;
      }
      local_108 = *param_5;
      fVar68 = 0.0;
      local_98 = param_5[1];
      fStack_94 = 0.0;
      fVar80 = param_5[4];
      local_d8 = (ulong)(uint)fVar80;
      local_118._0_4_ = param_5[3];
      fVar73 = local_108 * fVar80 - (float)local_118._0_4_ * local_98;
      dVar78 = (double)fVar73;
      dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                                _DAT_005d91b0 & SUB84(dVar78,0));
      if (dVar74 == DAT_005d94e0) {
        if ((fVar73 == 0.0) && (!NAN(fVar73))) goto LAB_003be107;
LAB_003bbe59:
        dVar78 = _DAT_005d9000 / dVar78;
        local_118._0_4_ = (BADTYPE)((double)(float)(local_118._0_4_ ^ _DAT_006524b0) * dVar78);
        fVar68 = (float)((double)fVar80 * dVar78);
        local_98 = (float)((double)(float)((uint)local_98 ^ _DAT_006524b0) * dVar78);
        local_d8 = CONCAT44(local_98,(float)((double)local_108 * dVar78));
        fVar80 = param_5[5];
        fVar73 = (float)((uint)param_5[2] ^ _DAT_006524b0);
        local_f8 = fVar73 * (float)local_118._0_4_ - fVar80 * (float)((double)local_108 * dVar78);
        fStack_f4 = fVar73 * fVar68 - fVar80 * local_98;
        fStack_f0 = fVar73 * 0.0 - fVar80 * 0.0;
        fStack_ec = fVar73 * 0.0 - fVar80 * 0.0;
        fStack_94 = local_98;
        local_108 = fVar68;
      }
      else {
        if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bbe59;
LAB_003be107:
        fStack_f4 = param_5[2];
        local_f8 = param_5[5];
        fStack_f0 = 0.0;
        fStack_ec = 0.0;
      }
      uStack_100 = CONCAT44(fVar68,fVar68);
      uStack_d0 = 0;
      local_118._4_4_ = fVar68;
      _fStack_110 = 0;
      local_78 = 0.0;
      if (param_6 != 0) {
        local_78 = DAT_005d9044;
      }
      iVar53 = *(int *)((long)param_3 + 0x1c);
      lVar49 = param_3[4];
      local_150 = 0x800;
      fStack_90 = fStack_94;
      fStack_8c = fStack_94;
      fStack_104 = fVar68;
      pEVar38 = malloc(0x800);
      fVar80 = fStack_f4;
      if (param_2_00 != 0) {
        local_164 = (uint)(param_6 == 0) * 0x80 + -0x80;
        local_178 = iVar53 - 1;
        local_17c = (int)lVar49 - 1;
        local_38 = this + (long)param_2_00 * 0x10;
        iVar53 = param_4 * 0xff + 0xff;
        local_68 = CONCAT44(local_68._4_4_,iVar53);
        local_58 = (EdgeTableFillers *)CONCAT44(local_58._4_4_,iVar53 >> 8);
        local_118._4_4_ = local_118._0_4_;
        fStack_110 = (float)local_118._0_4_;
        fStack_10c = (float)local_118._0_4_;
        fStack_104 = local_108;
        uStack_100 = CONCAT44(local_108,local_108);
        fStack_f4 = local_f8;
        fStack_f0 = local_f8;
        fStack_ec = local_f8;
        local_48 = CONCAT44(fVar80,fVar80);
        fStack_40 = fVar80;
        fStack_3c = fVar80;
        plVar55 = local_170;
        fVar73 = (float)local_118._0_4_;
        fVar76 = (float)local_118._0_4_;
        fVar72 = local_f8;
        fVar81 = local_f8;
        fVar82 = (float)local_d8;
        fVar83 = local_98;
        fVar84 = local_78;
        fVar85 = local_108;
        fVar86 = local_108;
        fVar87 = _DAT_005dd2d0;
        fVar88 = _UNK_005dd2d4;
        fVar89 = fVar80;
        do {
          if (0 < *(int *)(this + 0xc)) {
            local_b8 = (long)*(int *)this;
            local_15c = *(int *)(this + 8);
            local_88 = (size_t)local_15c;
            local_e0 = (long)(*(int *)(this + 0xc) + *(int *)(this + 4));
            fVar64 = (float)*(int *)this + fVar84;
            fVar77 = (float)local_15c + fVar64;
            local_180 = local_15c + 1;
            local_c8 = CONCAT44(fVar64,fVar77);
            uStack_c0 = (ulong)(uint)fVar68;
            pEVar50 = (EdgeTableFillers *)(long)*(int *)(this + 4);
            do {
              pEVar39 = pEVar50;
              iVar53 = local_15c;
              local_140 = *plVar55;
              local_148 = (size_t)*(int *)((long)plVar55 + 0x14);
              if ((int)local_150 < local_15c) {
                free(pEVar38);
                sVar58 = local_88;
                if (iVar53 == 0) {
                  pEVar38 = (EdgeTableFillers *)0x0;
                }
                else {
                  pEVar38 = malloc(local_88);
                }
                local_150 = sVar58;
                fVar73 = (float)local_118._0_4_;
                fVar76 = (float)local_118._4_4_;
                fVar72 = local_f8;
                fVar81 = fStack_f4;
                fVar82 = (float)local_d8;
                fVar83 = local_98;
                fVar84 = local_78;
                fVar85 = local_108;
                fVar86 = fStack_104;
                fVar87 = _DAT_005dd2d0;
                fVar88 = _UNK_005dd2d4;
                fVar77 = (float)local_c8;
                fVar64 = local_c8._4_4_;
                fVar80 = (float)local_48;
                fVar89 = local_48._4_4_;
              }
              fVar68 = (float)(int)pEVar39 + fVar84;
              fVar69 = fVar68 * fVar83;
              iVar71 = (int)((fVar86 * fVar64 + fVar69 + fVar89) * fVar88);
              iVar36 = (int)((fVar85 * fVar77 + fVar69 + fVar80) * fVar87) - iVar71;
              iVar43 = iVar36 % iVar53;
              fVar68 = fVar68 * fVar82;
              uVar48 = iVar71 + local_164;
              local_158 = 0;
              if (iVar43 < 1) {
                local_158 = iVar53;
              }
              iVar67 = (int)((fVar76 * fVar64 + fVar68 + fVar81) * fVar88);
              iVar71 = (int)((fVar73 * fVar77 + fVar68 + fVar72) * fVar87) - iVar67;
              iVar44 = iVar71 % iVar53;
              iVar57 = iVar36 / iVar53 - (uint)(iVar43 < 1);
              local_b0 = CONCAT44(local_b0._4_4_,iVar57);
              local_158 = local_158 + iVar43;
              local_174 = local_158 - iVar53;
              uVar62 = iVar67 + local_164;
              iVar36 = 0;
              if (iVar44 < 1) {
                iVar36 = iVar53;
              }
              local_160 = iVar71 / iVar53 - (uint)(iVar44 < 1);
              iVar36 = iVar36 + iVar44;
              local_a8 = CONCAT44(local_a8._4_4_,iVar36);
              iVar43 = iVar36 - iVar53;
              local_120 = (EdgeTableFillers *)CONCAT44(local_120._4_4_,iVar53);
              local_130 = pEVar38;
              while( true ) {
                local_174 = local_174 + local_158;
                iVar71 = 0;
                if (0 < local_174) {
                  iVar71 = iVar53;
                }
                local_a0 = CONCAT71(local_a0._1_7_,0 < local_174);
                iVar43 = iVar43 + iVar36;
                local_154 = CONCAT31(local_154._1_3_,0 < iVar43);
                iVar44 = 0;
                if (0 < iVar43) {
                  iVar44 = iVar53;
                }
                local_188 = (EdgeTableFillers *)CONCAT44(local_188._4_4_,uVar48);
                iVar53 = (int)(CONCAT44((int)uVar48 >> 0x1f,(int)uVar48 >> 8) %
                              (long)(int)*(uint *)((long)param_3 + 0x1c));
                uVar60 = (iVar53 >> 0x1f & *(uint *)((long)param_3 + 0x1c)) + iVar53;
                iVar53 = (int)(CONCAT44((int)uVar62 >> 0x1f,(int)uVar62 >> 8) %
                              (long)(int)*(uint *)(param_3 + 4));
                uVar45 = (iVar53 >> 0x1f & *(uint *)(param_3 + 4)) + iVar53;
                lVar49 = (long)*(int *)((long)param_3 + 0x14);
                lVar56 = (long)(int)param_3[3];
                pEVar50 = (EdgeTableFillers *)
                          ((int)uVar60 * lVar56 + (int)uVar45 * lVar49 + *param_3);
                if (((param_6 == 0) || (local_178 <= uVar60)) || (local_17c <= uVar45)) {
                  EVar32 = *pEVar50;
                }
                else {
                  iVar53 = 0x100 - (uVar48 & 0xff);
                  EVar32 = SUB41(((uint)(byte)pEVar50[lVar56] * (uVar48 & 0xff) +
                                 (uint)(byte)*pEVar50 * iVar53) * (0x100 - (uVar62 & 0xff)) +
                                 ((uint)(byte)pEVar50[lVar49] * iVar53 +
                                 (uint)(byte)pEVar50[lVar49 + lVar56] * (uVar48 & 0xff)) *
                                 (uVar62 & 0xff) + 0x8000 >> 0x10,0);
                }
                *local_130 = EVar32;
                if ((int)local_120 < 2) break;
                uVar48 = uVar48 + iVar57 + (uint)(0 < local_174);
                local_174 = local_174 - iVar71;
                uVar62 = uVar62 + local_160 + (uint)(0 < iVar43);
                iVar43 = iVar43 - iVar44;
                local_120 = (EdgeTableFillers *)CONCAT44(local_120._4_4_,(int)local_120 + -1);
                local_130 = local_130 + 1;
                iVar53 = local_15c;
              }
              lVar49 = (long)(int)local_170[3];
              if ((int)(float)local_68 < 0xfe00) {
                pbVar37 = (byte *)(local_140 + local_148 * (long)pEVar39 + lVar49 * local_b8 + 2);
                pEVar50 = pEVar38;
                iVar53 = local_180;
                do {
                  EVar32 = *pEVar50;
                  pEVar50 = pEVar50 + 1;
                  uVar48 = ((uint)(byte)EVar32 << 0x10 | (uint)(byte)EVar32) * (int)(float)local_58;
                  uVar62 = uVar48 >> 8 & 0xff00ff;
                  iVar43 = 0x100 - (uVar48 >> 0x18);
                  iVar36 = ((uint)pbVar37[-1] * iVar43 >> 8) + uVar62;
                  uVar62 = (((uint)*pbVar37 << 0x10 | (uint)pbVar37[-2]) * iVar43 >> 8 & 0xff00ff) +
                           uVar62;
                  uVar62 = 0x100 - (uVar62 >> 8 & 0x10001) | uVar62;
                  pbVar37[-1] = -(char)((uint)iVar36 >> 8) | (byte)iVar36;
                  *pbVar37 = (byte)(uVar62 >> 0x10);
                  pbVar37[-2] = (byte)uVar62;
                  pbVar37 = pbVar37 + lVar49;
                  iVar53 = iVar53 + -1;
                } while (1 < iVar53);
              }
              else {
                pbVar37 = (byte *)(local_140 + local_148 * (long)pEVar39 + lVar49 * local_b8 + 2);
                pEVar50 = pEVar38;
                iVar53 = local_180;
                do {
                  EVar32 = *pEVar50;
                  pEVar50 = pEVar50 + 1;
                  uVar62 = (uint)(byte)EVar32 << 0x10 | (uint)(byte)EVar32;
                  uVar48 = (((uint)*pbVar37 << 0x10 | (uint)pbVar37[-2]) *
                            (0x100 - (uint)(byte)EVar32) >> 8 & 0xff00ff) + uVar62;
                  uVar48 = 0x100 - (uVar48 >> 8 & 0x10001) | uVar48;
                  iVar36 = ((uint)pbVar37[-1] * (0x100 - (uint)(byte)EVar32) >> 8) + uVar62;
                  pbVar37[-1] = -(char)((uint)iVar36 >> 8) | (byte)iVar36;
                  *pbVar37 = (byte)(uVar48 >> 0x10);
                  pbVar37[-2] = (byte)uVar48;
                  pbVar37 = pbVar37 + lVar49;
                  iVar53 = iVar53 + -1;
                } while (1 < iVar53);
              }
              plVar55 = local_170;
              pEVar50 = pEVar39 + 1;
              fVar68 = fVar64;
              local_138 = pEVar39;
              local_128 = pEVar38;
            } while ((long)(pEVar39 + 1) < local_e0);
          }
          this = this + 0x10;
        } while (this != local_38);
      }
LAB_003bf09d:
      free(pEVar38);
      return;
    }
    if (param_7 == '\0') {
      fVar80 = *param_5 * param_5[4] - param_5[3] * param_5[1];
      dVar78 = (double)fVar80;
      dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                                _DAT_005d91b0 & SUB84(dVar78,0));
      if (dVar74 == DAT_005d94e0) {
        if ((fVar80 == 0.0) && (!NAN(fVar80))) goto LAB_003bf1ff;
LAB_003bc24b:
        dVar78 = _DAT_005d9000 / dVar78;
        fVar76 = (float)((double)param_5[4] * dVar78);
        fVar73 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar78);
        fVar68 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar78);
        fVar80 = (float)((double)*param_5 * dVar78);
        local_218 = CONCAT44(fVar68,fVar76);
        uStack_210 = CONCAT44(fVar73,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar76 -
                                     fVar68 * param_5[5]);
        local_208 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar73 -
                             param_5[5] * fVar80,fVar80);
      }
      else {
        if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bc24b;
LAB_003bf1ff:
        local_208 = *(undefined8 *)(param_5 + 4);
        local_218 = *(undefined8 *)param_5;
        uStack_210 = *(undefined8 *)(param_5 + 2);
      }
      local_1d8 = 0.0;
      if (param_6 != 0) {
        local_1d8 = DAT_005d9044;
      }
      local_1d4 = (uint)(param_6 == 0) * 0x80 + -0x80;
      local_1c0 = param_4 + 1;
      local_1bc = param_6;
      local_1b8 = *(int *)((long)param_3 + 0x1c) + -1;
      local_1b4 = (int)param_3[4] + -1;
      local_198 = 0x800;
      local_1a0 = malloc(0x2000);
      if (param_2_00 != 0) {
        pEVar38 = this + (long)param_2_00 * 0x10;
        do {
          iVar53 = *(int *)(this + 0xc);
          if (0 < iVar53) {
            iVar36 = *(int *)this;
            iVar43 = *(int *)(this + 8);
            iVar71 = *(int *)(this + 4);
            lVar49 = (long)iVar71;
            do {
              local_1b0 = (undefined4)lVar49;
              local_1a8 = *(int *)((long)local_1d0 + 0x14) * lVar49 + *local_1d0;
              TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false>::handleEdgeTableLine
                        ((TransformedImageFill<juce::PixelRGB,juce::PixelARGB,false> *)&local_218,
                         iVar36,iVar43,0xff);
              lVar49 = lVar49 + 1;
            } while (lVar49 < iVar53 + iVar71);
          }
          this = this + 0x10;
        } while (this != pEVar38);
      }
      goto LAB_003c05d6;
    }
    fVar80 = *param_5 * param_5[4] - param_5[3] * param_5[1];
    dVar78 = (double)fVar80;
    dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                              _DAT_005d91b0 & SUB84(dVar78,0));
    if (dVar74 == DAT_005d94e0) {
      if ((fVar80 == 0.0) && (!NAN(fVar80))) goto LAB_003bcb9f;
LAB_003bb922:
      dVar78 = _DAT_005d9000 / dVar78;
      fVar76 = (float)((double)param_5[4] * dVar78);
      fVar73 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar78);
      fVar68 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar78);
      fVar80 = (float)((double)*param_5 * dVar78);
      local_218 = CONCAT44(fVar68,fVar76);
      uStack_210 = CONCAT44(fVar73,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar76 -
                                   fVar68 * param_5[5]);
      local_208 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar73 - param_5[5] * fVar80,
                           fVar80);
    }
    else {
      if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bb922;
LAB_003bcb9f:
      local_208 = *(undefined8 *)(param_5 + 4);
      local_218 = *(undefined8 *)param_5;
      uStack_210 = *(undefined8 *)(param_5 + 2);
    }
    local_1d8 = 0.0;
    if (param_6 != 0) {
      local_1d8 = DAT_005d9044;
    }
    local_1d4 = (uint)(param_6 == 0) * 0x80 + -0x80;
    local_1c0 = param_4 + 1;
    local_1bc = param_6;
    local_1b8 = *(int *)((long)param_3 + 0x1c) + -1;
    local_1b4 = (int)param_3[4] + -1;
    local_198 = 0x800;
    local_1a0 = malloc(0x2000);
    if (param_2_00 != 0) {
      pEVar38 = this + (long)param_2_00 * 0x10;
      do {
        iVar53 = *(int *)(this + 0xc);
        if (0 < iVar53) {
          iVar36 = *(int *)this;
          iVar43 = *(int *)(this + 8);
          iVar71 = *(int *)(this + 4);
          lVar49 = (long)iVar71;
          do {
            local_1b0 = (undefined4)lVar49;
            local_1a8 = *(int *)((long)local_1d0 + 0x14) * lVar49 + *local_1d0;
            TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true>::handleEdgeTableLine
                      ((TransformedImageFill<juce::PixelRGB,juce::PixelARGB,true> *)&local_218,
                       iVar36,iVar43,0xff);
            lVar49 = lVar49 + 1;
          } while (lVar49 < iVar53 + iVar71);
        }
        this = this + 0x10;
      } while (this != pEVar38);
    }
    goto LAB_003c05d6;
  }
  if (param_7 == '\0') {
    fVar80 = *param_5 * param_5[4] - param_5[3] * param_5[1];
    dVar78 = (double)fVar80;
    dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                              _DAT_005d91b0 & SUB84(dVar78,0));
    if (dVar74 == DAT_005d94e0) {
      if ((fVar80 == 0.0) && (!NAN(fVar80))) goto LAB_003bfb83;
LAB_003bc68b:
      dVar78 = _DAT_005d9000 / dVar78;
      fVar76 = (float)((double)param_5[4] * dVar78);
      fVar73 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar78);
      fVar68 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar78);
      fVar80 = (float)((double)*param_5 * dVar78);
      local_218 = CONCAT44(fVar68,fVar76);
      uStack_210 = CONCAT44(fVar73,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar76 -
                                   fVar68 * param_5[5]);
      local_208 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar73 - param_5[5] * fVar80,
                           fVar80);
    }
    else {
      if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bc68b;
LAB_003bfb83:
      local_208 = *(undefined8 *)(param_5 + 4);
      local_218 = *(undefined8 *)param_5;
      uStack_210 = *(undefined8 *)(param_5 + 2);
    }
    local_1d8 = 0.0;
    if (param_6 != 0) {
      local_1d8 = DAT_005d9044;
    }
    local_1d4 = (uint)(param_6 == 0) * 0x80 + -0x80;
    local_1c0 = param_4 + 1;
    local_1bc = param_6;
    local_1b8 = *(int *)((long)param_3 + 0x1c) + -1;
    local_1b4 = (int)param_3[4] + -1;
    local_198 = 0x800;
    local_1a0 = malloc(0x1800);
    if (param_2_00 != 0) {
      local_188 = this + (long)param_2_00 * 0x10;
      plVar55 = local_170;
      do {
        iVar53 = *(int *)(this + 0xc);
        if (0 < iVar53) {
          iVar36 = *(int *)this;
          iVar43 = *(int *)(this + 8);
          iVar71 = *(int *)(this + 4);
          lVar49 = (long)iVar71;
          do {
            local_1b0 = (undefined4)lVar49;
            local_1a8 = *(int *)((long)plVar55 + 0x14) * lVar49 + *plVar55;
            if ((int)local_198 < iVar43) {
              local_198 = (long)iVar43;
              free(local_1a0);
              if (iVar43 == 0) {
                local_1a0 = (uint3 *)0x0;
              }
              else {
                local_1a0 = malloc((long)iVar43 * 3);
              }
            }
            puVar52 = local_1a0;
            TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false>::generate<juce::PixelRGB>
                      ((TransformedImageFill<juce::PixelRGB,juce::PixelRGB,false> *)&local_218,
                       (long)local_1a0,iVar36,iVar43);
            lVar54 = (long)(int)local_1d0[3];
            lVar56 = lVar54 * iVar36;
            if (local_1c0 * 0xff < 0xfe00) {
              iVar57 = local_1c0 * 0xff >> 8;
              pbVar37 = (byte *)(local_1a8 + lVar56 + 2);
              pbVar51 = (byte *)((long)puVar52 + 2);
              iVar44 = iVar43 + 1;
              do {
                uVar48 = (pbVar51[-1] | 0xff0000) * iVar57;
                iVar67 = 0x100 - (uVar48 >> 0x18);
                iVar41 = ((uint)pbVar37[-1] * iVar67 >> 8) + (uVar48 >> 8 & 0xff00ff);
                uVar48 = (((uint)*pbVar37 << 0x10 | (uint)pbVar37[-2]) * iVar67 >> 8 & 0xff00ff) +
                         (((uint)*pbVar51 << 0x10 | (uint)pbVar51[-2]) * iVar57 >> 8 & 0xff00ff);
                uVar48 = 0x100 - (uVar48 >> 8 & 0x10001) | uVar48;
                pbVar37[-1] = -(char)((uint)iVar41 >> 8) | (byte)iVar41;
                *pbVar37 = (byte)(uVar48 >> 0x10);
                pbVar37[-2] = (byte)uVar48;
                pbVar37 = pbVar37 + lVar54;
                pbVar51 = pbVar51 + 3;
                iVar44 = iVar44 + -1;
              } while (1 < iVar44);
            }
            else {
              pbVar37 = (byte *)(local_1a8 + lVar56 + 2);
              iVar44 = iVar43 + 1;
              do {
                bVar66 = *(byte *)((long)puVar52 + 2);
                uVar31 = *puVar52;
                puVar52 = (uint3 *)((long)puVar52 + 3);
                pbVar37[-2] = (byte)uVar31;
                pbVar37[-1] = (byte)(uVar31 >> 8);
                *pbVar37 = bVar66;
                pbVar37 = pbVar37 + lVar54;
                iVar44 = iVar44 + -1;
              } while (1 < iVar44);
            }
            lVar49 = lVar49 + 1;
            plVar55 = local_1d0;
          } while (lVar49 < iVar53 + iVar71);
        }
        this = this + 0x10;
      } while (this != local_188);
    }
    goto LAB_003c05d6;
  }
  fVar80 = *param_5 * param_5[4] - param_5[3] * param_5[1];
  dVar78 = (double)fVar80;
  dVar74 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar78 >> 0x20),
                            _DAT_005d91b0 & SUB84(dVar78,0));
  if (dVar74 == DAT_005d94e0) {
    if ((fVar80 == 0.0) && (!NAN(fVar80))) goto LAB_003bde35;
LAB_003bbd41:
    dVar78 = _DAT_005d9000 / dVar78;
    fVar76 = (float)((double)param_5[4] * dVar78);
    fVar73 = (float)((double)(float)((uint)param_5[3] ^ _DAT_006524b0) * dVar78);
    fVar68 = (float)((double)(float)((uint)param_5[1] ^ _DAT_006524b0) * dVar78);
    fVar80 = (float)((double)*param_5 * dVar78);
    local_218 = CONCAT44(fVar68,fVar76);
    uStack_210 = CONCAT44(fVar73,(float)((uint)param_5[2] ^ _DAT_006524b0) * fVar76 -
                                 fVar68 * param_5[5]);
    local_208 = CONCAT44((float)((uint)param_5[2] ^ _DAT_006524b0) * fVar73 - param_5[5] * fVar80,
                         fVar80);
  }
  else {
    if ((DAT_005db368 < dVar74) && (DAT_005db370 * dVar74 < dVar74)) goto LAB_003bbd41;
LAB_003bde35:
    local_208 = *(undefined8 *)(param_5 + 4);
    local_218 = *(undefined8 *)param_5;
    uStack_210 = *(undefined8 *)(param_5 + 2);
  }
  local_1d8 = 0.0;
  if (param_6 != 0) {
    local_1d8 = DAT_005d9044;
  }
  local_1d4 = (uint)(param_6 == 0) * 0x80 + -0x80;
  local_1c0 = param_4 + 1;
  local_1bc = param_6;
  local_1b8 = *(int *)((long)param_3 + 0x1c) + -1;
  local_1b4 = (int)param_3[4] + -1;
  local_198 = 0x800;
  local_1a0 = malloc(0x1800);
  if (param_2_00 != 0) {
    local_130 = this + (long)param_2_00 * 0x10;
    plVar55 = local_170;
    do {
      iVar53 = *(int *)(this + 0xc);
      if (0 < iVar53) {
        iVar36 = *(int *)this;
        iVar43 = *(int *)(this + 8);
        iVar71 = *(int *)(this + 4);
        lVar49 = (long)iVar71;
        local_188 = (EdgeTableFillers *)((long)iVar43 * 3);
        do {
          local_1b0 = (undefined4)lVar49;
          local_1a8 = *(int *)((long)plVar55 + 0x14) * lVar49 + *plVar55;
          if ((int)local_198 < iVar43) {
            local_198 = (long)iVar43;
            free(local_1a0);
            if (iVar43 == 0) {
              local_1a0 = (uint3 *)0x0;
            }
            else {
              local_1a0 = malloc((size_t)local_188);
            }
          }
          puVar52 = local_1a0;
          TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true>::generate<juce::PixelRGB>
                    ((TransformedImageFill<juce::PixelRGB,juce::PixelRGB,true> *)&local_218,
                     (long)local_1a0,iVar36,iVar43);
          lVar54 = (long)(int)local_1d0[3];
          lVar56 = lVar54 * iVar36;
          if (local_1c0 * 0xff < 0xfe00) {
            iVar57 = local_1c0 * 0xff >> 8;
            pbVar37 = (byte *)(local_1a8 + lVar56 + 2);
            pbVar51 = (byte *)((long)puVar52 + 2);
            iVar44 = iVar43 + 1;
            do {
              uVar48 = (pbVar51[-1] | 0xff0000) * iVar57;
              iVar67 = 0x100 - (uVar48 >> 0x18);
              iVar41 = ((uint)pbVar37[-1] * iVar67 >> 8) + (uVar48 >> 8 & 0xff00ff);
              uVar48 = (((uint)*pbVar37 << 0x10 | (uint)pbVar37[-2]) * iVar67 >> 8 & 0xff00ff) +
                       (((uint)*pbVar51 << 0x10 | (uint)pbVar51[-2]) * iVar57 >> 8 & 0xff00ff);
              uVar48 = 0x100 - (uVar48 >> 8 & 0x10001) | uVar48;
              pbVar37[-1] = -(char)((uint)iVar41 >> 8) | (byte)iVar41;
              *pbVar37 = (byte)(uVar48 >> 0x10);
              pbVar37[-2] = (byte)uVar48;
              pbVar37 = pbVar37 + lVar54;
              pbVar51 = pbVar51 + 3;
              iVar44 = iVar44 + -1;
            } while (1 < iVar44);
          }
          else {
            pbVar37 = (byte *)(local_1a8 + lVar56 + 2);
            iVar44 = iVar43 + 1;
            do {
              bVar66 = *(byte *)((long)puVar52 + 2);
              uVar31 = *puVar52;
              puVar52 = (uint3 *)((long)puVar52 + 3);
              pbVar37[-2] = (byte)uVar31;
              pbVar37[-1] = (byte)(uVar31 >> 8);
              *pbVar37 = bVar66;
              pbVar37 = pbVar37 + lVar54;
              iVar44 = iVar44 + -1;
            } while (1 < iVar44);
          }
          lVar49 = lVar49 + 1;
          plVar55 = local_1d0;
        } while (lVar49 < iVar53 + iVar71);
      }
      this = this + 0x10;
    } while (this != local_130);
  }
LAB_003c05d6:
  free(local_1a0);
  return;
}


