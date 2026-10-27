// Function : operator()
// Namespace: juce:ListenerList_juce__SliderListener_juce__Slider__juce__Array_juce__SliderListener_juce__Sli~a5e2b800:callCheckedExcluding_juce__Slider__Pimpl__handleAsyncUpdate_____lambda_juce__SliderListene~a511f6d1:_lambda___1_
// Entry    : 002e10f0
// Prototype: undefined operator()({lambda()#1} * this)
// Body     : 002e10f0 - 002e1403


/* juce::ListenerList<juce::SliderListener<juce::Slider>,
   juce::Array<juce::SliderListener<juce::Slider>*, juce::DummyCriticalSection, 0>
   >::callCheckedExcluding<juce::Slider::Pimpl::handleAsyncUpdate()::{lambda(juce::SliderListener<juce::Slider>&)#1},
   juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,
   juce::Component::BailOutChecker const&,
   juce::Slider::Pimpl::handleAsyncUpdate()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void __thiscall
juce::
ListenerList<juce::SliderListener<juce::Slider>,juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>>
::
callCheckedExcluding<juce::Slider::Pimpl::handleAsyncUpdate()::{lambda(juce::SliderListener<juce::Slider>&)#1},juce::Component::BailOutChecker>(juce::SliderListener<juce::Slider>*,juce::Component::BailOutChecker_const&,juce::Slider::Pimpl::handleAsyncUpdate()::{lambda(juce::SliderListener<juce::Slider>&)#1}&&)
::{lambda()#1}::operator()(_lambda___1_ *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  
  plVar3 = *(long **)this;
  lVar20 = *(long *)(this + 0x10);
  plVar11 = (long *)*plVar3;
  plVar13 = (long *)plVar3[1];
  uVar18 = (long)plVar13 - (long)plVar11;
  uVar10 = uVar18;
  plVar9 = plVar11;
  if (0x1f < (long)uVar18) {
    lVar12 = (uVar18 >> 5) + 1;
    plVar19 = plVar11 + 2;
    do {
      plVar9 = plVar19;
      if (plVar9[-2] == lVar20) {
        plVar9 = plVar9 + -2;
        goto joined_r0x002e11f3;
      }
      if (plVar9[-1] == lVar20) {
        plVar9 = plVar9 + -1;
        goto joined_r0x002e11f3;
      }
      if (*plVar9 == lVar20) goto joined_r0x002e11f3;
      if (plVar9[1] == lVar20) {
        plVar9 = plVar9 + 1;
        goto joined_r0x002e11f3;
      }
      lVar12 = lVar12 + -1;
      uVar10 = uVar10 - 0x20;
      plVar19 = plVar9 + 4;
    } while (1 < lVar12);
    plVar9 = plVar9 + 2;
  }
  lVar12 = (long)uVar10 >> 3;
  plVar19 = plVar13;
  if (lVar12 == 1) {
LAB_002e1195:
    if (*plVar9 == lVar20) goto joined_r0x002e11f3;
  }
  else {
    if (lVar12 == 2) {
LAB_002e118c:
      if (*plVar9 != lVar20) {
        plVar9 = plVar9 + 1;
        goto LAB_002e1195;
      }
    }
    else {
      if (lVar12 != 3) goto LAB_002e120e;
      if (*plVar9 != lVar20) {
        plVar9 = plVar9 + 1;
        goto LAB_002e118c;
      }
    }
joined_r0x002e11f3:
    plVar19 = plVar9;
    if ((plVar19 != plVar13) && (plVar9 = plVar19 + 1, plVar9 != plVar13)) {
      plVar11 = plVar19;
      if (*plVar9 != lVar20) {
        *plVar19 = *plVar9;
        plVar11 = plVar9;
      }
      plVar9 = plVar19 + 2;
      plVar19 = plVar11;
      for (; plVar9 != plVar13; plVar9 = plVar9 + 1) {
        if (*plVar9 != lVar20) {
          *plVar19 = *plVar9;
          plVar19 = plVar19 + 1;
        }
      }
      plVar11 = (long *)*plVar3;
      uVar18 = *(long *)(*(long *)this + 8) - (long)plVar11;
    }
  }
LAB_002e120e:
  lVar12 = (long)plVar19 - (long)plVar11 >> 3;
  lVar20 = (long)uVar18 >> 3;
  if (lVar12 == lVar20) {
    return;
  }
  plVar9 = (long *)(((long)plVar19 - (long)plVar11 & 0xfffffffffffffff8U) + (long)plVar11);
  plVar19 = (long *)((uVar18 & 0xfffffffffffffff8) + (long)plVar11);
  plVar13 = (long *)plVar3[1];
  uVar10 = (long)plVar13 - (long)plVar19;
  if (uVar10 == 0) {
    if (plVar19 == plVar9) {
      return;
    }
    goto LAB_002e12d8;
  }
  if ((long)uVar10 < 1) {
    plVar9 = (long *)((long)plVar9 + ((long)plVar13 - (long)plVar19));
    if (plVar13 == plVar9) {
      return;
    }
    goto LAB_002e12d8;
  }
  uVar18 = uVar10 >> 3;
  uVar16 = uVar18 + (uVar10 < 8);
  if ((uVar16 < 4) ||
     ((plVar9 < plVar11 + ((uVar18 + lVar20) - (ulong)(7 < uVar10)) + 1 &&
      (plVar19 < plVar11 + ((lVar12 + uVar18) - (ulong)(7 < uVar10)) + 1)))) {
    plVar11 = plVar9;
    plVar13 = plVar19;
LAB_002e12a7:
    uVar18 = uVar18 + 1;
    lVar20 = 0;
    do {
      *(undefined8 *)((long)plVar11 + lVar20) = *(undefined8 *)((long)plVar13 + lVar20);
      uVar18 = uVar18 - 1;
      lVar20 = lVar20 + 8;
    } while (1 < uVar18);
  }
  else {
    uVar17 = uVar16 & 0xfffffffffffffffc;
    uVar10 = (uVar17 - 4 >> 2) + 1;
    uVar21 = (ulong)((uint)uVar10 & 3);
    if (uVar17 - 4 < 0xc) {
      lVar14 = 0;
    }
    else {
      uVar10 = uVar10 & 0xfffffffffffffffc;
      lVar14 = 0;
      do {
        lVar15 = (plVar11 + lVar20 + lVar14)[1];
        lVar4 = plVar11[lVar20 + lVar14 + 2];
        lVar5 = (plVar11 + lVar20 + lVar14 + 2)[1];
        plVar11[lVar12 + lVar14] = plVar11[lVar20 + lVar14];
        (plVar11 + lVar12 + lVar14)[1] = lVar15;
        plVar11[lVar12 + lVar14 + 2] = lVar4;
        (plVar11 + lVar12 + lVar14 + 2)[1] = lVar5;
        lVar15 = (plVar11 + lVar20 + lVar14 + 4)[1];
        lVar4 = plVar11[lVar20 + lVar14 + 6];
        lVar5 = (plVar11 + lVar20 + lVar14 + 6)[1];
        plVar11[lVar12 + lVar14 + 4] = plVar11[lVar20 + lVar14 + 4];
        (plVar11 + lVar12 + lVar14 + 4)[1] = lVar15;
        plVar11[lVar12 + lVar14 + 6] = lVar4;
        (plVar11 + lVar12 + lVar14 + 6)[1] = lVar5;
        lVar15 = (plVar11 + lVar20 + lVar14 + 8)[1];
        lVar4 = plVar11[lVar20 + lVar14 + 10];
        lVar5 = (plVar11 + lVar20 + lVar14 + 10)[1];
        plVar11[lVar12 + lVar14 + 8] = plVar11[lVar20 + lVar14 + 8];
        (plVar11 + lVar12 + lVar14 + 8)[1] = lVar15;
        plVar11[lVar12 + lVar14 + 10] = lVar4;
        (plVar11 + lVar12 + lVar14 + 10)[1] = lVar5;
        lVar15 = (plVar11 + lVar20 + lVar14 + 0xc)[1];
        lVar4 = plVar11[lVar20 + lVar14 + 0xe];
        lVar5 = (plVar11 + lVar20 + lVar14 + 0xe)[1];
        plVar11[lVar12 + lVar14 + 0xc] = plVar11[lVar20 + lVar14 + 0xc];
        (plVar11 + lVar12 + lVar14 + 0xc)[1] = lVar15;
        plVar11[lVar12 + lVar14 + 0xe] = lVar4;
        (plVar11 + lVar12 + lVar14 + 0xe)[1] = lVar5;
        lVar14 = lVar14 + 0x10;
        uVar10 = uVar10 - 4;
      } while (uVar10 != 0);
    }
    if (uVar21 != 0) {
      lVar15 = 0;
      do {
        puVar2 = (undefined8 *)((long)plVar11 + lVar15 + (lVar20 + lVar14) * 8);
        uVar6 = puVar2[1];
        puVar1 = (undefined8 *)((long)plVar11 + lVar15 + (lVar20 + lVar14) * 8 + 0x10);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        puVar1 = (undefined8 *)((long)plVar11 + lVar15 + (lVar12 + lVar14) * 8);
        *puVar1 = *puVar2;
        puVar1[1] = uVar6;
        puVar1 = (undefined8 *)((long)plVar11 + lVar15 + (lVar12 + lVar14) * 8 + 0x10);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        lVar15 = lVar15 + 0x20;
      } while (uVar21 * 0x20 != lVar15);
    }
    if (uVar16 != uVar17) {
      uVar18 = uVar18 - uVar17;
      plVar11 = plVar9 + uVar17;
      plVar13 = plVar19 + uVar17;
      goto LAB_002e12a7;
    }
  }
  plVar9 = (long *)((long)plVar9 + (plVar3[1] - (long)plVar19));
  if ((long *)plVar3[1] == plVar9) {
    return;
  }
LAB_002e12d8:
  plVar3[1] = (long)plVar9;
  return;
}


