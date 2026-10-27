// Function : mouseDrag
// Namespace: juce:Slider:Pimpl
// Entry    : 002e5e20
// Prototype: undefined mouseDrag(Pimpl * this, float * param_1)
// Body     : 002e5e20 - 002e6a71


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Slider::Pimpl::mouseDrag(juce::MouseEvent const&) */

void __thiscall juce::Slider::Pimpl::mouseDrag(Pimpl *this,float *param_1)

{
  int iVar1;
  long lVar2;
  Button *pBVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  timespec local_58;
  long local_48;
  undefined1 local_40 [8];
  float local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint switchD_002e60a4::switchdataD_005def34;
  
  if (this[0x239] == (Pimpl)0x0) {
    return;
  }
  if (*(double *)(this + 0x100) < *(double *)(this + 0xf8) ||
      *(double *)(this + 0x100) == *(double *)(this + 0xf8)) {
    return;
  }
  uVar4 = *(uint *)(this + 0x20);
  if (((((uVar4 & 0xfffffffe) == 2) && (*(char *)((long)param_1 + 0x59) == '\0')) &&
      (lVar2 = *(long *)(this + 600), lVar2 != 0)) &&
     (*(char *)(lVar2 + 0x210) != '\0' || *(char *)(lVar2 + 0x211) != '\0')) {
    return;
  }
  if (uVar4 == 8) {
    if (this[0x23a] == (Pimpl)0x0) {
      fVar8 = hypotf(param_1[10] - (float)*(undefined8 *)param_1,
                     param_1[0xb] - (float)((ulong)*(undefined8 *)param_1 >> 0x20));
      if (SUB84((double)fVar8 + DAT_005d9098,0) < 10) {
        return;
      }
      if (*(char *)((long)param_1 + 0x59) == '\0') {
        return;
      }
      this[0x23a] = (Pimpl)0x1;
      *(undefined8 *)(this + 0x1c8) = *(undefined8 *)param_1;
    }
  }
  else if (uVar4 == 4) {
    fVar8 = *param_1 - (float)(*(int *)(this + 0x1f8) / 2 + *(int *)(this + 0x1f0));
    fVar14 = param_1[1] - (float)(*(int *)(this + 0x1fc) / 2 + *(int *)(this + 500));
    uVar5 = 0;
    if (_DAT_005de530 < fVar8 * fVar8 + fVar14 * fVar14) {
      for (dVar9 = atan2((double)fVar8,(double)(float)((uint)fVar14 ^ _DAT_006524b0)); dVar9 < 0.0;
          dVar9 = dVar9 + DAT_00651f70) {
      }
      if ((this[0x1c4] == (Pimpl)0x0) || (*(char *)((long)param_1 + 0x59) == '\0')) {
        fVar8 = *(float *)(this + 0x1bc);
        dVar10 = (double)fVar8;
        for (; dVar9 < dVar10; dVar9 = dVar9 + DAT_00651f70) {
        }
        fVar14 = *(float *)(this + 0x1c0);
        dVar24 = (double)fVar14;
        if (dVar9 <= dVar24) {
          dVar24 = dVar9;
        }
        else {
          dVar22 = (double)((ulong)(dVar9 - dVar10) & _DAT_005d91b0);
          dVar23 = (double)((ulong)(dVar9 - dVar24) & _UNK_005d91b8);
          auVar19._0_8_ = (double)((ulong)((DAT_00651f70 + dVar9) - dVar10) & _DAT_005d91b0);
          auVar19._8_8_ = (double)((ulong)((DAT_00651f70 + dVar9) - dVar24) & _UNK_005d91b8);
          auVar20._0_8_ = (ulong)((dVar10 + _DAT_00651fb0) - dVar9) & _DAT_005d91b0;
          auVar20._8_8_ = (ulong)((dVar24 + _UNK_00651fb8) - dVar9) & _UNK_005d91b8;
          auVar13 = minpd(auVar20,auVar19);
          uVar6 = -(ulong)(auVar19._0_8_ < dVar22);
          uVar7 = -(ulong)(auVar19._8_8_ < dVar23);
          auVar21._8_8_ = dVar23;
          auVar21._0_8_ = dVar22;
          auVar21 = minpd(auVar20,auVar21);
          if ((double)(~uVar6 & auVar21._0_8_ | auVar13._0_8_ & uVar6) <=
              (double)(~uVar7 & auVar21._8_8_ | auVar13._8_8_ & uVar7)) {
            dVar24 = dVar10;
          }
        }
      }
      else {
        dVar10 = *(double *)(this + 0x198);
        if (DAT_00652e70 < (double)((ulong)(dVar9 - dVar10) & _DAT_005d91b0)) {
          if (dVar10 <= dVar9) {
            dVar9 = dVar9 + _DAT_005de6b0;
          }
          else {
            dVar9 = dVar9 + DAT_00651f70;
          }
        }
        fVar8 = *(float *)(this + 0x1bc);
        fVar14 = *(float *)(this + 0x1c0);
        if (dVar10 <= dVar9) {
          fVar16 = fVar14;
          if (fVar14 <= fVar8) {
            fVar16 = fVar8;
          }
          dVar24 = (double)fVar16;
          if (dVar9 <= (double)fVar16) {
            dVar24 = dVar9;
          }
        }
        else {
          fVar16 = fVar14;
          if (fVar8 <= fVar14) {
            fVar16 = fVar8;
          }
          dVar24 = (double)fVar16;
          if ((double)fVar16 <= dVar9) {
            dVar24 = dVar9;
          }
        }
      }
      dVar10 = (dVar24 - (double)fVar8) / (double)(fVar14 - fVar8);
      dVar9 = _DAT_005d9000;
      if (dVar10 <= _DAT_005d9000) {
        dVar9 = dVar10;
      }
      uVar11 = (**(code **)(**(long **)(this + 0x18) + 0x1c0))
                         (~-(ulong)(dVar10 < 0.0) & (ulong)dVar9);
      *(undefined8 *)(this + 0x188) = uVar11;
      *(double *)(this + 0x198) = dVar24;
    }
    goto LAB_002e67b6;
  }
  if ((this[0x232] !=
       (Pimpl)(((uint)param_1[4] & *(uint *)(this + 0x22c)) != 0 && this[0x233] != (Pimpl)0x0)) &&
     (dVar9 = (double)*(int *)(this + 0x1dc),
     *(double *)(this + 0x108) <= (*(double *)(this + 0x100) - *(double *)(this + 0xf8)) / dVar9)) {
    uVar4 = *(uint *)(this + 0x20);
    if (uVar4 < 0xc) {
      if ((0xa25U >> (uVar4 & 0x1f) & 1) == 0) {
        if (uVar4 == 7) {
          fVar8 = (*(float *)(this + 0x1d4) - param_1[1]) + (*param_1 - *(float *)(this + 0x1d0));
          goto LAB_002e660f;
        }
        if ((uVar4 != 8) ||
           ((*(int *)(this + 0x228) != 2 &&
            ((*(int *)(this + 0x228) != 1 || (this[0x234] == (Pimpl)0x0)))))) goto LAB_002e653a;
      }
      fVar8 = *param_1 - *(float *)(this + 0x1d0);
    }
    else {
LAB_002e653a:
      fVar8 = param_1[1] - *(float *)(this + 0x1d4);
    }
LAB_002e660f:
    if (dVar9 <= DAT_00651f78) {
      dVar9 = DAT_00651f78;
    }
    dVar10 = dVar9;
    if ((double)(float)(_DAT_005d91c0 & (uint)fVar8) <= dVar9) {
      dVar10 = (double)(float)(_DAT_005d91c0 & (uint)fVar8);
    }
    dVar24 = (double)(_DAT_005d91b0 & (ulong)dVar10);
    if (dVar24 == DAT_005d94e0) {
      uVar5 = 2;
      if ((dVar10 == 0.0) && (!NAN(dVar10))) goto LAB_002e67b6;
    }
    else {
      uVar5 = 2;
      if ((dVar24 <= DAT_005db368) || (dVar24 <= DAT_005db370 * dVar24)) goto LAB_002e67b6;
    }
    dVar24 = *(double *)(this + 0x1a0) * DAT_005de658;
    dVar10 = dVar10 - (double)*(int *)(this + 0x1b8);
    if (dVar10 <= 0.0) {
      dVar10 = 0.0;
    }
    dVar9 = dVar10 / dVar9 + *(double *)(this + 0x1a8);
    if (DAT_005db338 <= dVar9) {
      dVar9 = DAT_005db338;
    }
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_38 = fVar8;
    dVar9 = sin((dVar9 + DAT_006533a0) * DAT_00652e70);
    dVar24 = (dVar9 + _DAT_005d9000) * dVar24;
    uVar11 = 0;
    if (local_38 < 0.0) {
      dVar24 = (double)((ulong)dVar24 ^ _DAT_00652d10);
    }
    uVar4 = *(uint *)(this + 0x20);
    if ((uVar4 < 0xd) &&
       (((0x144aU >> (uVar4 & 0x1f) & 1) != 0 ||
        (((uVar4 == 8 && (*(int *)(this + 0x228) != 2)) &&
         ((*(int *)(this + 0x228) != 1 || (this[0x234] == (Pimpl)0x0)))))))) {
      dVar24 = (double)((ulong)dVar24 ^ _DAT_00652d10);
    }
    dVar9 = (double)(**(code **)(**(long **)(this + 0x18) + 0x1c8))(*(undefined8 *)(this + 0x188));
    dVar9 = dVar9 + dVar24;
    if (((*(uint *)(this + 0x20) & 0xfffffffc) == 4) && (this[0x1c4] == (Pimpl)0x0)) {
      dVar10 = floor(dVar9);
      dVar9 = dVar9 - dVar10;
    }
    else {
      dVar10 = _DAT_005d9000;
      if (dVar9 <= _DAT_005d9000) {
        dVar10 = dVar9;
      }
      uVar11 = 0;
      dVar9 = (double)(~-(ulong)(dVar9 < 0.0) & (ulong)dVar10);
    }
    uVar12 = (**(code **)(**(long **)(this + 0x18) + 0x1c0))(dVar9);
    *(undefined8 *)(this + 0x188) = uVar12;
    detail::MouseInputSourceImpl::enableUnboundedMouseMovement
              (uVar12,uVar11,dVar9,*(MouseInputSourceImpl **)(param_1 + 0x14),1);
    uVar5 = 2;
    goto LAB_002e67b6;
  }
  uVar4 = *(uint *)(this + 0x20);
  uVar6 = (ulong)uVar4;
  fVar8 = *param_1;
  fVar14 = param_1[1];
  if (uVar6 != 5) {
    fVar16 = fVar14;
    if ((0xa05U >> (uVar4 & 0x1f) & 1) == 0) goto LAB_002e6084;
LAB_002e6066:
    fVar15 = fVar8;
    if (uVar6 < 0xc) goto LAB_002e606c;
LAB_002e608d:
    fVar15 = fVar16;
    if (uVar6 < 9) goto LAB_002e6096;
    goto switchD_002e60a4_caseD_2e60b3;
  }
  fVar16 = fVar8;
  if ((0xa05U >> (uVar4 & 0x1f) & 1) != 0) goto LAB_002e6066;
LAB_002e6084:
  fVar15 = fVar16;
  if (0xb < uVar6) goto LAB_002e608d;
LAB_002e606c:
  fVar16 = fVar15;
  if (8 < uVar6) goto switchD_002e60a4_caseD_2e60b3;
LAB_002e6096:
  fVar15 = fVar16;
  switch((long)&switchD_002e60a4::switchdataD_005def34 +
         (long)(int)(&switchD_002e60a4::switchdataD_005def34)[uVar6]) {
  default:
    if (this[0x23c] == (Pimpl)0x0) {
      if ((uVar4 & 0xfffffffd) == 0) goto switchD_002e60a4_caseD_2e6275;
      goto switchD_002e60a4_caseD_2e6285;
    }
  case 0x2e60b3:
switchD_002e60a4_caseD_2e60b3:
    dVar9 = (double)(fVar15 - (float)*(int *)(this + 0x1d8)) / (double)*(int *)(this + 0x1dc);
    if ((uVar4 < 0xd) && ((0x140aU >> (uVar4 & 0x1f) & 1) != 0)) {
      dVar9 = _DAT_005d9000 - dVar9;
    }
    break;
  case 0x2e61fd:
    fVar16 = *(float *)(this + 0x1c8);
    fVar15 = *(float *)(this + 0x1cc);
    dVar9 = (double)(**(code **)(**(long **)(this + 0x18) + 0x1c8))(*(undefined8 *)(this + 400));
    dVar9 = (_DAT_005d9000 / (double)*(int *)(this + 0x1e4)) *
            (double)((fVar15 - fVar14) + (fVar8 - fVar16)) + dVar9;
    break;
  case 0x2e625c:
    if ((*(int *)(this + 0x228) == 2) ||
       ((*(int *)(this + 0x228) == 1 && (this[0x234] != (Pimpl)0x0))))
    goto switchD_002e60a4_caseD_2e6275;
  case 0x2e6285:
switchD_002e60a4_caseD_2e6285:
    local_38 = *(float *)(this + 0x1cc) - fVar14;
LAB_002e6297:
    dVar9 = (double)(**(code **)(**(long **)(this + 0x18) + 0x1c8))(*(undefined8 *)(this + 400));
    dVar9 = (_DAT_005d9000 / (double)*(int *)(this + 0x1e4)) * (double)local_38 + dVar9;
    if (*(int *)(this + 0x20) == 8) {
      pBVar3 = *(Button **)(this + 0x260);
      iVar1 = (uint)(0.0 <= local_38) * 2;
      if (*(int *)(pBVar3 + 0x1b8) != iVar1) {
        *(int *)(pBVar3 + 0x1b8) = iVar1;
        Component::internalRepaintUnchecked((long)pBVar3,0,*(ulong *)(pBVar3 + 0x40),'\x01');
        if (*(int *)(pBVar3 + 0x1b8) == 2) {
          uVar4 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
          if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
            clock_gettime(1,&local_58);
            auVar21 = SEXT816(local_58.tv_nsec / 1000 + local_58.tv_sec * 1000000) *
                      SEXT816(0x20c49ba5e353f7cf);
            uVar4 = (int)(auVar21._8_8_ >> 7) - (auVar21._12_4_ >> 0x1f);
            if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar4) ||
               (uVar4 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
              LOCK();
              UNLOCK();
              _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar4;
            }
          }
          *(uint *)(pBVar3 + 400) = uVar4;
          *(undefined4 *)(pBVar3 + 0x194) = 0;
        }
        Button::sendStateMessage(pBVar3);
      }
      pBVar3 = *(Button **)(this + 0x268);
      iVar1 = (uint)(local_38 <= 0.0) * 2;
      if (*(int *)(pBVar3 + 0x1b8) != iVar1) {
        *(int *)(pBVar3 + 0x1b8) = iVar1;
        Component::internalRepaintUnchecked((long)pBVar3,0,*(ulong *)(pBVar3 + 0x40),'\x01');
        if (*(int *)(pBVar3 + 0x1b8) == 2) {
          uVar4 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
          if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
            clock_gettime(1,&local_58);
            auVar21 = SEXT816(local_58.tv_nsec / 1000 + local_58.tv_sec * 1000000) *
                      SEXT816(0x20c49ba5e353f7cf);
            uVar4 = (int)(auVar21._8_8_ >> 7) - (auVar21._12_4_ >> 0x1f);
            if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar4) ||
               (uVar4 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
              LOCK();
              UNLOCK();
              _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar4;
            }
          }
          *(uint *)(pBVar3 + 400) = uVar4;
          *(undefined4 *)(pBVar3 + 0x194) = 0;
        }
        Button::sendStateMessage(pBVar3);
      }
    }
    break;
  case 0x2e6275:
switchD_002e60a4_caseD_2e6275:
    local_38 = fVar8 - *(float *)(this + 0x1c8);
    goto LAB_002e6297;
  }
  if (((*(uint *)(this + 0x20) & 0xfffffffc) == 4) && (this[0x1c4] == (Pimpl)0x0)) {
    dVar10 = floor(dVar9);
    dVar9 = dVar9 - dVar10;
  }
  else {
    dVar10 = _DAT_005d9000;
    if (dVar9 <= _DAT_005d9000) {
      dVar10 = dVar9;
    }
    dVar9 = (double)(~-(ulong)(dVar9 < 0.0) & (ulong)dVar10);
  }
  uVar11 = (**(code **)(**(long **)(this + 0x18) + 0x1c0))(dVar9);
  *(undefined8 *)(this + 0x188) = uVar11;
  uVar5 = 1;
LAB_002e67b6:
  dVar9 = *(double *)(this + 0x100);
  uVar17 = SUB84(dVar9,0);
  uVar18 = (undefined4)((ulong)dVar9 >> 0x20);
  dVar10 = *(double *)(this + 0x188);
  if (dVar10 <= dVar9) {
    uVar17 = SUB84(dVar10,0);
    uVar18 = (undefined4)((ulong)dVar10 >> 0x20);
  }
  uVar6 = -(ulong)(dVar10 < *(double *)(this + 0xf8));
  *(ulong *)(this + 0x188) =
       uVar6 & (ulong)*(double *)(this + 0xf8) | ~uVar6 & CONCAT44(uVar18,uVar17);
  iVar1 = *(int *)(this + 0x1e0);
  if (iVar1 == 2) {
    dVar9 = (double)(**(code **)(**(long **)(this + 0x18) + 0x1d0))(*(long **)(this + 0x18),uVar5);
    setMaxValue(dVar9,this,(uint)(this[0x235] == (Pimpl)0x0) * 3,'\x01');
    if (((uint)param_1[4] & 1) == 0) {
      (**(code **)(**(long **)(this + 0xb0) + 0x10))(&local_58);
                    /* try { // try from 002e6933 to 002e693d has its CatchHandler @ 002e6ada */
      dVar9 = (double)(**(code **)(local_58.tv_sec + 0x20))(&local_58.tv_nsec);
                    /* try { // try from 002e6948 to 002e694f has its CatchHandler @ 002e6a92 */
      (**(code **)(**(long **)(this + 0x80) + 0x10))(&local_48);
                    /* try { // try from 002e695a to 002e695f has its CatchHandler @ 002e6a8a */
      dVar10 = (double)(**(code **)(local_48 + 0x20))(local_40);
      *(double *)(this + 0x1b0) = dVar9 - dVar10;
                    /* try { // try from 002e6976 to 002e697b has its CatchHandler @ 002e6a82 */
      (**(code **)(local_48 + 0x58))(local_40);
                    /* try { // try from 002e6981 to 002e6986 has its CatchHandler @ 002e6a7a */
      (**(code **)(local_58.tv_sec + 0x58))(&local_58.tv_nsec);
    }
    else {
      (**(code **)(**(long **)(this + 0xb0) + 0x10))(&local_58);
                    /* try { // try from 002e69f8 to 002e6a02 has its CatchHandler @ 002e6ac2 */
      dVar9 = (double)(**(code **)(local_58.tv_sec + 0x20))(&local_58.tv_nsec);
                    /* try { // try from 002e6a08 to 002e6a0d has its CatchHandler @ 002e6a72 */
      (**(code **)(local_58.tv_sec + 0x58))(&local_58.tv_nsec);
      setMinValue(dVar9 - *(double *)(this + 0x1b0),this,0,'\x01');
    }
  }
  else if (iVar1 == 1) {
    dVar9 = (double)(**(code **)(**(long **)(this + 0x18) + 0x1d0))(*(long **)(this + 0x18),uVar5);
    setMinValue(dVar9,this,(uint)(this[0x235] == (Pimpl)0x0) * 3,'\x01');
    if (((uint)param_1[4] & 1) == 0) {
      (**(code **)(**(long **)(this + 0xb0) + 0x10))(&local_58);
                    /* try { // try from 002e6888 to 002e6892 has its CatchHandler @ 002e6b00 */
      dVar9 = (double)(**(code **)(local_58.tv_sec + 0x20))(&local_58.tv_nsec);
                    /* try { // try from 002e689d to 002e68a4 has its CatchHandler @ 002e6ae2 */
      (**(code **)(**(long **)(this + 0x80) + 0x10))(&local_48);
                    /* try { // try from 002e68af to 002e68b4 has its CatchHandler @ 002e6aba */
      dVar10 = (double)(**(code **)(local_48 + 0x20))(local_40);
      *(double *)(this + 0x1b0) = dVar9 - dVar10;
                    /* try { // try from 002e68cb to 002e68d0 has its CatchHandler @ 002e6ab2 */
      (**(code **)(local_48 + 0x58))(local_40);
                    /* try { // try from 002e68d6 to 002e68db has its CatchHandler @ 002e6aaa */
      (**(code **)(local_58.tv_sec + 0x58))(&local_58.tv_nsec);
    }
    else {
      (**(code **)(**(long **)(this + 0x80) + 0x10))(&local_58);
                    /* try { // try from 002e69a8 to 002e69b2 has its CatchHandler @ 002e6ad2 */
      dVar9 = (double)(**(code **)(local_58.tv_sec + 0x20))(&local_58.tv_nsec);
                    /* try { // try from 002e69b8 to 002e69bd has its CatchHandler @ 002e6aca */
      (**(code **)(local_58.tv_sec + 0x58))(&local_58.tv_nsec);
      setMaxValue(dVar9 + *(double *)(this + 0x1b0),this,0,'\x01');
    }
  }
  else if (iVar1 == 0) {
    dVar9 = (double)(**(code **)(**(long **)(this + 0x18) + 0x1d0))(*(long **)(this + 0x18),uVar5);
    setValue(dVar9,this,(uint)(this[0x235] == (Pimpl)0x0) * 2);
  }
  *(undefined8 *)(this + 0x1d0) = *(undefined8 *)param_1;
  return;
}


