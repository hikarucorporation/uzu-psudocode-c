// Function : paint
// Namespace: juce:DrawableShape
// Entry    : 002862b0
// Prototype: undefined paint(DrawableShape * this, long param_1)
// Body     : 002862b0 - 002865ce


/* juce::DrawableShape::paint(juce::Graphics&) */

void __thiscall juce::DrawableShape::paint(DrawableShape *this,long param_1)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [12];
  char cVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  bool bVar9;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_38 [16];
  undefined8 local_28;
  
  uVar2 = *(undefined8 *)(this + 0xf0);
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),uVar2);
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 0x1a0))(local_68);
    auVar4 = (undefined1  [12])local_68._0_12_;
    pfVar8 = (float *)local_68._0_8_;
    if ((long)(int)local_68._12_4_ != 0) {
      pfVar6 = (float *)local_68._0_8_;
      do {
        fVar1 = *pfVar6;
        if ((fVar1 != DAT_005de3d0) || (NAN(fVar1) || NAN(DAT_005de3d0))) {
          if ((fVar1 != DAT_005de3d4) || (NAN(fVar1) || NAN(DAT_005de3d4))) {
            if (((fVar1 != DAT_005de3d8) || (NAN(fVar1) || NAN(DAT_005de3d8))) &&
               ((fVar1 != DAT_005de3dc || (NAN(fVar1) || NAN(DAT_005de3dc))))) goto LAB_00286344;
          }
          local_38 = ZEXT416(DAT_005d9038);
          local_28 = 0x3f800000;
                    /* try { // try from 0028638a to 00286394 has its CatchHandler @ 002865cf */
          (**(code **)(**(long **)(param_1 + 8) + 0x48))(*(long **)(param_1 + 8),local_68,local_38);
          auVar4 = (undefined1  [12])local_68._0_12_;
          pfVar8 = (float *)local_68._0_8_;
          break;
        }
        pfVar6 = pfVar6 + 2;
LAB_00286344:
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != (float *)(local_68._0_8_ + (long)(int)local_68._12_4_ * 4));
    }
    local_68._0_12_ = auVar4;
    local_68._12_4_ = 0;
    free(pfVar8);
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x90))(*(long **)(param_1 + 8),this + 0x1d0);
  cVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  if ((cVar5 == '\0') && ((long)*(int *)(this + 0x18c) != 0)) {
    pfVar6 = *(float **)(this + 0x180);
    pfVar8 = pfVar6 + *(int *)(this + 0x18c);
    do {
      fVar1 = *pfVar6;
      if ((fVar1 != DAT_005de3d0) || (NAN(fVar1) || NAN(DAT_005de3d0))) {
        if ((fVar1 != DAT_005de3d4) || (NAN(fVar1) || NAN(DAT_005de3d4))) {
          if (((fVar1 != DAT_005de3d8) || (NAN(fVar1) || NAN(DAT_005de3d8))) &&
             ((fVar1 != DAT_005de3dc || (NAN(fVar1) || NAN(DAT_005de3dc))))) goto LAB_00286434;
        }
        local_68 = ZEXT416(DAT_005d9038);
        local_58 = 0x3f800000;
        (**(code **)(**(long **)(param_1 + 8) + 200))(*(long **)(param_1 + 8),this + 0x180,local_68)
        ;
        break;
      }
      pfVar6 = pfVar6 + 2;
LAB_00286434:
      pfVar6 = pfVar6 + 1;
    } while (pfVar6 != pfVar8);
  }
  if (*(float *)(this + 0x160) <= 0.0) {
    return;
  }
  if (this[0x203] == (DrawableShape)0x0) {
    return;
  }
  lVar3 = *(long *)(this + 0x208);
  if (lVar3 != 0) {
    if ((long)*(int *)(lVar3 + 0x24) == 0) {
      return;
    }
    lVar7 = 0;
    do {
      cVar5 = *(char *)(*(long *)(lVar3 + 0x18) + 0xb + lVar7);
      if (cVar5 != '\0') break;
      bVar9 = (long)*(int *)(lVar3 + 0x24) * 0x10 + -0x10 != lVar7;
      lVar7 = lVar7 + 0x10;
    } while (bVar9);
    if (cVar5 == '\0') {
      return;
    }
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x90))(*(long **)(param_1 + 8),this + 0x200);
  cVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  if ((cVar5 == '\0') && ((long)*(int *)(this + 0x1b4) != 0)) {
    pfVar6 = *(float **)(this + 0x1a8);
    pfVar8 = pfVar6 + *(int *)(this + 0x1b4);
    do {
      fVar1 = *pfVar6;
      if ((fVar1 != DAT_005de3d0) || (NAN(fVar1) || NAN(DAT_005de3d0))) {
        if ((fVar1 == DAT_005de3d4) && (!NAN(fVar1) && !NAN(DAT_005de3d4))) {
LAB_0028659d:
          local_68 = ZEXT416(DAT_005d9038);
          local_58 = 0x3f800000;
          (**(code **)(**(long **)(param_1 + 8) + 200))
                    (*(long **)(param_1 + 8),this + 0x1a8,local_68);
          return;
        }
        if (((fVar1 == DAT_005de3d8) && (!NAN(fVar1) && !NAN(DAT_005de3d8))) ||
           ((fVar1 == DAT_005de3dc && (!NAN(fVar1) && !NAN(DAT_005de3dc))))) goto LAB_0028659d;
      }
      else {
        pfVar6 = pfVar6 + 2;
      }
      pfVar6 = pfVar6 + 1;
    } while (pfVar6 != pfVar8);
  }
  return;
}


