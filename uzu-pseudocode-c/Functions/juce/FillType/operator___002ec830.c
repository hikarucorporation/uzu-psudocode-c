// Function : operator!=
// Namespace: juce:FillType
// Entry    : 002ec830
// Prototype: byte operator!=(FillType * this, int * param_1)
// Body     : 002ec830 - 002ec978


/* juce::FillType::TEMPNAMEPLACEHOLDERVALUE(juce::FillType const&) const */

byte __thiscall juce::FillType::operator!=(FillType *this,int *param_1)

{
  long lVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  undefined4 uVar8;
  long lVar9;
  
  if (*(int *)this != *param_1) {
    return 1;
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 4)) {
    return 1;
  }
  if (*(float *)(this + 0x18) != (float)param_1[6]) {
    return 1;
  }
  if (NAN(*(float *)(this + 0x18)) || NAN((float)param_1[6])) {
    return 1;
  }
  if (*(float *)(this + 0x1c) != (float)param_1[7]) {
    return 1;
  }
  if (NAN(*(float *)(this + 0x1c)) || NAN((float)param_1[7])) {
    return 1;
  }
  if (*(float *)(this + 0x20) != (float)param_1[8]) {
    return 1;
  }
  if (NAN(*(float *)(this + 0x20)) || NAN((float)param_1[8])) {
    return 1;
  }
  if (*(float *)(this + 0x24) != (float)param_1[9]) {
    return 1;
  }
  if (NAN(*(float *)(this + 0x24)) || NAN((float)param_1[9])) {
    return 1;
  }
  if (*(float *)(this + 0x28) != (float)param_1[10]) {
    return 1;
  }
  if (NAN(*(float *)(this + 0x28)) || NAN((float)param_1[10])) {
    return 1;
  }
  if (*(float *)(this + 0x2c) != (float)param_1[0xb]) {
    return 1;
  }
  if (NAN(*(float *)(this + 0x2c)) || NAN((float)param_1[0xb])) {
    return 1;
  }
  pfVar3 = *(float **)(this + 8);
  pfVar4 = *(float **)(param_1 + 2);
  if (pfVar3 != pfVar4) {
    if (pfVar3 == (float *)0x0) {
      return 1;
    }
    if (pfVar4 == (float *)0x0) {
      return 1;
    }
    if (*pfVar3 != *pfVar4) {
      return 1;
    }
    if (NAN(*pfVar3) || NAN(*pfVar4)) {
      return 1;
    }
    if (pfVar3[1] != pfVar4[1]) {
      return 1;
    }
    if (NAN(pfVar3[1]) || NAN(pfVar4[1])) {
      return 1;
    }
    if (pfVar3[2] != pfVar4[2]) {
      return 1;
    }
    if (NAN(pfVar3[2]) || NAN(pfVar4[2])) {
      return 1;
    }
    if (pfVar3[3] != pfVar4[3]) {
      return 1;
    }
    if (NAN(pfVar3[3]) || NAN(pfVar4[3])) {
      return 1;
    }
    if (*(char *)(pfVar3 + 4) != *(char *)(pfVar4 + 4)) {
      return 1;
    }
    fVar2 = pfVar3[9];
    if (fVar2 != pfVar4[9]) {
      return 1;
    }
    if (fVar2 != 0.0) {
      lVar5 = *(long *)(pfVar4 + 6);
      lVar6 = *(long *)(pfVar3 + 6);
      lVar9 = 0;
      do {
        uVar8 = ColourGradient::ColourPoint::operator==
                          (*(double *)(lVar6 + lVar9),*(double *)(lVar5 + lVar9),
                           *(uint *)(lVar6 + 8 + lVar9),*(uint *)(lVar5 + 8 + lVar9));
        bVar7 = (byte)uVar8 ^ 1;
        if (bVar7 != 0) {
          return bVar7;
        }
        lVar1 = lVar5 + lVar9;
        lVar9 = lVar9 + 0x10;
      } while (lVar1 + 0x10 != (long)(int)fVar2 * 0x10 + lVar5);
      return 0;
    }
  }
  return 0;
}


