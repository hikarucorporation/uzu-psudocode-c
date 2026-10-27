// Function : drawRotarySlider
// Namespace: juce:LookAndFeel_V2
// Entry    : 00219cf0
// Prototype: undefined drawRotarySlider(float param_1, float param_2, float param_3, undefined8 param_4_00, Graphics * param_5, int param_6, int param_7, int param_8, int param_9, Component * param_10)
// Body     : 00219cf0 - 00219cf4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to juce::LookAndFeel_V2::drawRotarySlider(juce::Graphics&, int, int, int, int,
   float, float, float, juce::Slider&) */

void __thiscall
juce::LookAndFeel_V2::drawRotarySlider
          (float param_1,float param_2,float param_3,undefined8 param_4_00,Graphics *param_5,
          int param_6,int param_7,int param_8,int param_9,Component *param_10)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  Desktop *this;
  long lVar4;
  ulong uVar5;
  Component *pCVar6;
  float *pfVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float *pfStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [12];
  float fStack_ac;
  undefined8 uStack_a8;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_78;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined1 auStack_58 [16];
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (Desktop::instance == (Desktop *)0x0) {
    fStack_c0 = param_2;
    fStack_bc = param_3;
    this = operator_new(0x1d0);
    Desktop::Desktop(this);
    param_3 = fStack_bc;
    param_2 = fStack_c0;
    Desktop::instance = this;
  }
  fStack_90 = (float)param_8 * DAT_005d9044;
  fStack_8c = (float)param_9 * DAT_005d9044;
  fStack_78 = fStack_8c;
  if (fStack_90 <= fStack_8c) {
    fStack_78 = fStack_90;
  }
  fStack_78 = fStack_78 + DAT_005d98cc;
  lVar4 = (long)*(int *)(*(long *)(Desktop::instance + 0x40) + 0x44);
  if (lVar4 != 0) {
    lVar8 = 0;
    do {
      lVar1 = *(long *)(*(long *)(*(long *)(Desktop::instance + 0x40) + 0x38) + lVar8);
      if (((*(long *)(lVar1 + 0x48) != 0) &&
          (*(Component **)(*(long *)(lVar1 + 0x48) + 0x10) == param_10)) &&
         (((*(ushort *)(lVar1 + 0x3c) & 0x1f0) != 0 || (*(int *)(lVar1 + 0x14) != 1)))) {
        pCVar6 = param_10;
        goto LAB_00213070;
      }
      lVar8 = lVar8 + 8;
    } while (lVar4 * 8 != lVar8);
  }
  bVar12 = false;
  goto LAB_00213091;
  while (pCVar6 = *(Component **)(pCVar6 + 0x30), pCVar6 != (Component *)0x0) {
LAB_00213070:
    bVar12 = (*(ushort *)(pCVar6 + 0xe8) & 0x8000) == 0;
    if (!bVar12) break;
  }
LAB_00213091:
  fStack_90 = fStack_90 + (float)param_6;
  fStack_8c = fStack_8c + (float)param_7;
  fStack_88 = fStack_78 + fStack_78;
  fVar13 = param_1 * (param_3 - param_2) + param_2;
  if (fStack_78 <= DAT_005d9074) {
    pCVar6 = param_10;
    do {
      if ((*(ushort *)(pCVar6 + 0xe8) & 0x8000) != 0) {
        uVar3 = 0x80808080;
        goto LAB_002134d7;
      }
      pCVar6 = *(Component **)(pCVar6 + 0x30);
    } while (pCVar6 != (Component *)0x0);
    uVar5 = Component::findColour(param_10,0x1001311,'\0');
    fVar14 = DAT_005d9038;
    if (!bVar12) {
      fVar14 = (float)s_333_power__f_00652630._0_4_;
    }
    uVar3 = 0xff000000;
    if (fVar14 < DAT_005d9038) {
      uVar3 = SUB84((double)(fVar14 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
    }
    uVar3 = (uint)uVar5 & 0xffffff | uVar3;
LAB_002134d7:
    Graphics::setColour(param_5,uVar3);
    uStack_d8 = 0;
    uStack_d0 = 0;
    pfStack_e8 = (float *)0x0;
    uStack_e0 = 0;
    uStack_c8 = 1;
    Path::addEllipse(CONCAT44(DAT_005de470 * fStack_88,DAT_005de470 * fStack_88),
                     CONCAT44(DAT_005de3cc * fStack_88,DAT_005de3cc * fStack_88),(Path *)&pfStack_e8
                    );
    _auStack_b8 = ZEXT416((uint)DAT_005d9038);
    uStack_a8 = 0x3f800000;
    PathStrokeHelpers::createStroke
              (DAT_005d9068 * fStack_88,DAT_005d9038,0,0,(Path *)&pfStack_e8,(Path *)&pfStack_e8,
               (float *)auStack_b8);
    Path::addLineSegment
              (0,(ulong)((uint)fStack_78 ^ _DAT_006524b0) << 0x20,fStack_88 * DAT_005d9070,
               (Path *)&pfStack_e8);
    fStack_88 = cosf(fVar13);
    fStack_ac = sinf(fVar13);
    auStack_b8._4_4_ = _DAT_006524b0 ^ (uint)fStack_ac;
    auStack_b8._0_4_ = fStack_88;
    auStack_b8._8_4_ = fStack_90 + 0.0;
    uStack_a8 = CONCAT44(fStack_8c + 0.0,fStack_88);
    cVar2 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
    if (cVar2 == '\0') {
      if ((long)uStack_e0._4_4_ != 0) {
        pfVar7 = pfStack_e8;
        do {
          fVar13 = *pfVar7;
          if ((fVar13 != DAT_005de3d0) || (NAN(fVar13) || NAN(DAT_005de3d0))) {
            if ((fVar13 != DAT_005de3d4) || (NAN(fVar13) || NAN(DAT_005de3d4))) {
              if (((fVar13 != DAT_005de3d8) || (NAN(fVar13) || NAN(DAT_005de3d8))) &&
                 ((fVar13 != DAT_005de3dc || (NAN(fVar13) || NAN(DAT_005de3dc)))))
              goto LAB_00213654;
            }
            (**(code **)(**(long **)(param_5 + 8) + 200))
                      (*(long **)(param_5 + 8),&pfStack_e8,auStack_b8);
            break;
          }
          pfVar7 = pfVar7 + 2;
LAB_00213654:
          pfVar7 = pfVar7 + 1;
        } while (pfVar7 != pfStack_e8 + uStack_e0._4_4_);
      }
    }
    goto LAB_0021388c;
  }
  fStack_94 = fStack_90 - fStack_78;
  fStack_98 = fStack_8c - fStack_78;
  pCVar6 = param_10;
  do {
    fStack_c0 = param_2;
    fStack_bc = param_3;
    if ((*(ushort *)(pCVar6 + 0xe8) & 0x8000) != 0) {
      uVar3 = 0x80808080;
      goto LAB_002131fd;
    }
    pCVar6 = *(Component **)(pCVar6 + 0x30);
  } while (pCVar6 != (Component *)0x0);
  uVar5 = Component::findColour(param_10,0x1001311,'\0');
  fVar14 = DAT_005d9038;
  if (!bVar12) {
    fVar14 = (float)s_333_power__f_00652630._0_4_;
  }
  uVar3 = 0xff000000;
  if (fVar14 < DAT_005d9038) {
    uVar3 = SUB84((double)(fVar14 * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
  }
  uVar3 = (uint)uVar5 & 0xffffff | uVar3;
LAB_002131fd:
  Graphics::setColour(param_5,uVar3);
  uStack_d8 = 0;
  uStack_d0 = 0;
  pfStack_e8 = (float *)0x0;
  uStack_e0 = 0;
  uStack_c8 = 1;
  Path::addPieSegment(fStack_94,fStack_98,fStack_88,fStack_88,fStack_c0,fVar13,(Path *)&pfStack_e8);
  cVar2 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
  if (cVar2 == '\0') {
    if ((long)uStack_e0._4_4_ != 0) {
      pfVar7 = pfStack_e8;
      do {
        fVar14 = *pfVar7;
        if ((fVar14 != DAT_005de3d0) || (NAN(fVar14) || NAN(DAT_005de3d0))) {
          if ((fVar14 != DAT_005de3d4) || (NAN(fVar14) || NAN(DAT_005de3d4))) {
            if (((fVar14 != DAT_005de3d8) || (NAN(fVar14) || NAN(DAT_005de3d8))) &&
               ((fVar14 != DAT_005de3dc || (NAN(fVar14) || NAN(DAT_005de3dc))))) goto LAB_00213294;
          }
          _auStack_b8 = ZEXT416((uint)DAT_005d9038);
          uStack_a8 = 0x3f800000;
          (**(code **)(**(long **)(param_5 + 8) + 200))
                    (*(long **)(param_5 + 8),&pfStack_e8,auStack_b8);
          break;
        }
        pfVar7 = pfVar7 + 2;
LAB_00213294:
        pfVar7 = pfVar7 + 1;
      } while (pfVar7 != pfStack_e8 + uStack_e0._4_4_);
    }
  }
  uStack_e0 = uStack_e0 & 0xffffffff;
  free(pfStack_e8);
  fVar14 = DAT_005d9070 * fStack_78;
  auStack_58 = ZEXT416((uint)fVar14);
  uStack_d8 = 0;
  uStack_d0 = 0;
  pfStack_e8 = (float *)0x0;
  uStack_e0 = 0;
  uStack_c8 = 1;
  fStack_48 = (float)((uint)fVar14 ^ _DAT_006524b0);
  uStack_44 = _UNK_006524b4;
  uStack_40 = _UNK_006524b8;
  uStack_3c = _UNK_006524bc;
  Path::addTriangle(fStack_48,0.0,0.0,fStack_78 * DAT_0065262c * DAT_005de3ec,fVar14,0.0,
                    (Path *)&pfStack_e8);
  Path::addEllipse(CONCAT44(fStack_48,fStack_48),
                   CONCAT44((float)auStack_58._0_4_ + (float)auStack_58._0_4_,
                            (float)auStack_58._0_4_ + (float)auStack_58._0_4_),(Path *)&pfStack_e8);
  fStack_78 = cosf(fVar13);
  fStack_ac = sinf(fVar13);
  auStack_b8._4_4_ = _DAT_006524b0 ^ (uint)fStack_ac;
  auStack_b8._0_4_ = fStack_78;
  auStack_b8._8_4_ = fStack_90 + 0.0;
  uStack_a8 = CONCAT44(fStack_8c + 0.0,fStack_78);
  cVar2 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
  if (cVar2 == '\0') {
    if ((long)uStack_e0._4_4_ != 0) {
      pfVar7 = pfStack_e8;
      do {
        fVar13 = *pfVar7;
        if ((fVar13 != DAT_005de3d0) || (NAN(fVar13) || NAN(DAT_005de3d0))) {
          if ((fVar13 != DAT_005de3d4) || (NAN(fVar13) || NAN(DAT_005de3d4))) {
            if (((fVar13 != DAT_005de3d8) || (NAN(fVar13) || NAN(DAT_005de3d8))) &&
               ((fVar13 != DAT_005de3dc || (NAN(fVar13) || NAN(DAT_005de3dc))))) goto LAB_00213444;
          }
          (**(code **)(**(long **)(param_5 + 8) + 200))
                    (*(long **)(param_5 + 8),&pfStack_e8,auStack_b8);
          break;
        }
        pfVar7 = pfVar7 + 2;
LAB_00213444:
        pfVar7 = pfVar7 + 1;
      } while (pfVar7 != pfStack_e8 + uStack_e0._4_4_);
    }
  }
  uStack_e0 = uStack_e0 & 0xffffffff;
  free(pfStack_e8);
  pCVar6 = param_10;
  do {
    if ((*(ushort *)(pCVar6 + 0xe8) & 0x8000) != 0) {
      uVar11 = 0x80808080;
      goto LAB_002136a2;
    }
    pCVar6 = *(Component **)(pCVar6 + 0x30);
  } while (pCVar6 != (Component *)0x0);
  uVar5 = Component::findColour(param_10,0x1001312,'\0');
  uVar11 = (undefined4)uVar5;
LAB_002136a2:
  Graphics::setColour(param_5,uVar11);
  uStack_d8 = 0;
  uStack_d0 = 0;
  pfStack_e8 = (float *)0x0;
  uStack_e0 = 0;
  uStack_c8 = 1;
  Path::addPieSegment(fStack_94,fStack_98,fStack_88,fStack_88,fStack_c0,fStack_bc,
                      (Path *)&pfStack_e8);
  if (uStack_e0._4_4_ == 0) {
    iVar10 = 0;
  }
  else {
    if (0 < uStack_e0._4_4_) {
      if ((pfStack_e8[uStack_e0._4_4_ - 1] == DAT_005de41c) &&
         (iVar10 = uStack_e0._4_4_, !NAN(pfStack_e8[uStack_e0._4_4_ - 1]) && !NAN(DAT_005de41c)))
      goto LAB_00213780;
    }
    if ((int)(uint)uStack_e0 <= uStack_e0._4_4_) {
      uVar3 = uStack_e0._4_4_ + ((uStack_e0._4_4_ - (uStack_e0._4_4_ + 1 >> 0x1f)) + 1 >> 1) + 9;
      uVar9 = uVar3 & 0xfffffff8;
      if ((uint)uStack_e0 != uVar9) {
        if ((int)uVar9 < 1) {
          free(pfStack_e8);
          pfStack_e8 = (float *)0x0;
        }
        else {
          pfStack_e8 = realloc(pfStack_e8,(ulong)uVar9 << 2);
        }
      }
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar3) & 0xfffffffffffffff8;
    }
    lVar4 = (long)uStack_e0._4_4_;
    iVar10 = uStack_e0._4_4_ + 1;
    uStack_e0 = CONCAT44(iVar10,(uint)uStack_e0);
    pfStack_e8[lVar4] = 100005.0;
  }
LAB_00213780:
  do {
    pCVar6 = param_10 + 0xe8;
    if ((*(uint3 *)pCVar6 & 0x8000) != 0) break;
    param_10 = *(Component **)(param_10 + 0x30);
  } while (param_10 != (Component *)0x0);
  uStack_68 = DAT_005d9078;
  if (!bVar12) {
    uStack_68 = DAT_005de45c;
  }
  if ((*(uint3 *)pCVar6 & 0x8000) != 0) {
    uStack_68 = DAT_005d9088;
  }
  uStack_64 = 0;
  _auStack_b8 = ZEXT416((uint)DAT_005d9038);
  uStack_a8 = 0x3f800000;
  cVar2 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
  if ((cVar2 == '\0') && (iVar10 != 0)) {
    pfVar7 = pfStack_e8;
    do {
      fVar13 = *pfVar7;
      if ((fVar13 != DAT_005de3d0) || (NAN(fVar13) || NAN(DAT_005de3d0))) {
        if ((fVar13 != DAT_005de3d4) || (NAN(fVar13) || NAN(DAT_005de3d4))) {
          if (((fVar13 != DAT_005de3d8) || (NAN(fVar13) || NAN(DAT_005de3d8))) &&
             ((fVar13 != DAT_005de3dc || (NAN(fVar13) || NAN(DAT_005de3dc))))) goto LAB_00213844;
        }
        (**(code **)(**(long **)(param_5 + 8) + 0xd8))
                  (*(long **)(param_5 + 8),&pfStack_e8,&uStack_68,auStack_b8);
        break;
      }
      pfVar7 = pfVar7 + 2;
LAB_00213844:
      pfVar7 = pfVar7 + 1;
    } while (pfVar7 != pfStack_e8 + iVar10);
  }
LAB_0021388c:
  uStack_e0 = uStack_e0 & 0xffffffff;
  free(pfStack_e8);
  return;
}


